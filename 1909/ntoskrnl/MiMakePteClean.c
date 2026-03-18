/*
 * XREFs of MiMakePteClean @ 0x14005C0F0
 * Callers:
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400F86C0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiRewritePteWithLockBit @ 0x1402D8C90 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiMakePteClean(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  BOOL v6; // r10d
  __int64 v7; // rsi
  unsigned int v8; // ebp
  unsigned __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int64 DeepFreezeStartTime; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  v6 = MiPteInShadowRange(a1);
  if ( v6
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v5 |= 0x20uLL;
      v15 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a1 >> 3) & 0x1FF));
      if ( (v15 & 0x20) == 0 )
        v5 = v4;
      if ( (v15 & 0x42) != 0 )
        v5 |= 0x42uLL;
    }
  }
  v7 = 0LL;
  v21 = v5 & 0xFFFFFFFFFFFFFFBDuLL;
  v8 = 0;
  v9 = (__int64)(a1 << 25) >> 16;
  if ( v9 < 0xFFFFF68000000000uLL )
    goto LABEL_50;
  do
  {
    if ( v9 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v8;
    v9 = (__int64)(v9 << 25) >> 16;
  }
  while ( v9 >= 0xFFFFF68000000000uLL );
  if ( !v8 )
  {
LABEL_50:
    if ( v6
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      v17 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 8 * ((a1 >> 3) & 0x1FF));
        v19 = v4 | 0x20;
        if ( (v18 & 0x20) == 0 )
          v19 = v4;
        v4 = v19;
        if ( (v18 & 0x42) != 0 )
          v4 = v19 | 0x42;
      }
    }
    v10 = v21 ^ (v21 ^ v4) & 0xF00000000000000LL;
    v11 = v10 ^ (v10 ^ v4) & 0x7000000000000000LL;
    if ( v6 )
    {
      if ( (unsigned int)MiPteHasShadow(v10) )
      {
        if ( !HIBYTE(word_1404658EC) && (v11 & 1) != 0 )
          v11 |= 0x8000000000000000uLL;
        *(_QWORD *)a1 = v11;
        MiWritePteShadow(a1, v11);
        goto LABEL_6;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v11 & 1) != 0 )
      {
        v11 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a1 = v11;
LABEL_6:
    MiInsertTbFlushEntry(a2, v9, 1LL, 0);
    goto LABEL_7;
  }
  MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6], a1, v21, 0xFFFFF6FFFFFFFFFFuLL);
  MiInsertLargeTbFlushEntry(a2, v8, a1, v16);
LABEL_7:
  v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v21) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  result = MiCaptureDirtyBitToPfn(v12);
  if ( result )
    v7 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( result )
    return MiReleasePageFileInfo(v7, result, 1LL);
  return result;
}
