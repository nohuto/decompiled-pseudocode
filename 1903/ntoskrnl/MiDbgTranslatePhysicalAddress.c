/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x1402D115C
 * Callers:
 *     MiDbgCopyMemory @ 0x1402D08E8 (MiDbgCopyMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002BDF0 (MiMakeProtectionPfnCompatible.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeFlushSingleCurrentTb @ 0x1401670BC (KeFlushSingleCurrentTb.c)
 *     MiCheckPhysicalAddressRange @ 0x1402D0620 (MiCheckPhysicalAddressRange.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402D1508 (MiDbgUnTranslatePhysicalAddress.c)
 */

unsigned __int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r15
  __int16 v6; // bx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  int v10; // esi
  unsigned __int8 CurrentIrql; // dl
  __int64 v12; // rbp
  int ProtectionPfnCompatible; // eax
  _QWORD *v14; // rdx
  int v15; // r8d
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  unsigned __int64 v19; // r9
  char v20; // di
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int v25; // r8d
  volatile signed __int64 *v26; // rsi
  unsigned __int64 ValidPte; // rax
  _DWORD v29[14]; // [rsp+20h] [rbp-38h] BYREF

  v3 = qword_1404663C8;
  v6 = a1;
  if ( !qword_1404663C8 || !(unsigned int)MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  v8 = v7 >> 12;
  v9 = v3 << 25 >> 16;
  *(_DWORD *)a3 = 0;
  v10 = (a2 & 1) != 0 ? 4 : 1;
  if ( (a2 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  *(_BYTE *)(a3 + 4) = CurrentIrql;
  if ( v8 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
  {
    v12 = 48 * v8 - 0x58000000000LL;
    if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)a3 = 1;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        if ( (a2 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
          return 0LL;
        ++dword_1404663D0;
        *(_DWORD *)a3 = 4;
      }
    }
    else
    {
      v29[0] = 0;
      *(_DWORD *)a3 = 2;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(v29);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
    }
    *(_QWORD *)(a3 + 8) = v12;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v10, 48 * v8 - 0x58000000000LL);
    v10 = ProtectionPfnCompatible | 8;
    if ( (*(_BYTE *)(v12 + 34) & 0xC0) != 0xC0 )
      v10 = ProtectionPfnCompatible;
    goto LABEL_67;
  }
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)a3 = 8;
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&dword_140466780) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140466780);
  }
  v14 = (_QWORD *)qword_140466790;
  v15 = 3;
  while ( v14 )
  {
    v16 = v14[5];
    if ( v8 < v16 )
    {
      v14 = (_QWORD *)*v14;
    }
    else
    {
      if ( v8 < v16 + 512 )
        break;
      v14 = (_QWORD *)v14[1];
    }
  }
  if ( !v14 )
    goto LABEL_36;
  v17 = 0LL;
  v15 = *(unsigned __int16 *)(v14[6] + 2 * ((v8 & 0xFFFFFFFFFLL) - v14[5])) >> 14;
  if ( v15 != 3 )
    v17 = v14;
  if ( !v17 )
  {
LABEL_36:
    v18 = (_QWORD *)qword_140466798;
    while ( v18 )
    {
      v19 = v18[5];
      if ( v8 < v19 )
      {
        v18 = (_QWORD *)*v18;
      }
      else
      {
        if ( v8 < v19 + 512 )
        {
          v15 = *(unsigned __int16 *)(v18[6] + 2 * ((v8 & 0xFFFFFFFFFLL) - v19)) >> 14;
          break;
        }
        v18 = (_QWORD *)v18[1];
      }
    }
  }
  if ( v15 == 3 )
  {
    v15 = 0;
    if ( (a2 & 4) == 0 )
      v15 = 3;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_50;
    v20 = a2 & 0xD7;
  }
  else
  {
    v20 = a2 & 0xC7;
    if ( v15 )
    {
      if ( v15 == 2 )
        a2 = v20 | 0x20;
      else
        a2 = v20 | 8;
      goto LABEL_50;
    }
  }
  a2 = v20 | 0x10;
LABEL_50:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      v21 = __readcr4();
      if ( (v21 & 0x20080) != 0 )
      {
        __writecr4(v21 ^ 0x80);
        __writecr4(v21);
      }
      else
      {
        v22 = __readcr3();
        __writecr3(v22);
      }
      v10 |= 8u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_74:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      v23 = __readcr4();
      if ( (v23 & 0x20080) != 0 )
      {
        __writecr4(v23 ^ 0x80);
        __writecr4(v23);
      }
      else
      {
        v24 = __readcr3();
        __writecr3(v24);
      }
      v10 |= 0x18u;
    }
  }
  if ( v15 == 3 )
    ++dword_1404663D0;
LABEL_67:
  v25 = v10 | 0xA0000000;
  v26 = (volatile signed __int64 *)qword_1404663C8;
  ValidPte = MiMakeValidPte(qword_1404663C8, v8, v25);
  if ( (a2 & 0x41) != 0 )
    byte_1404663C0 = 1;
  if ( _InterlockedCompareExchange64(v26, ValidPte, 0LL) )
    goto LABEL_74;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    KeFlushSingleTb(v9, 0, 1u);
  else
    KeFlushSingleCurrentTb(v9, 0);
  return v9 + (v6 & 0xFFF);
}
