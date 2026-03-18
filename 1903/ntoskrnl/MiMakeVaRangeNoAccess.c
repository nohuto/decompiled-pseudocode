/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x140131404
 * Callers:
 *     MiProtectPrivateMemory @ 0x140020F60 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockVa @ 0x14001F434 (MiUnlockVa.c)
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073C40 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRotatedToFrameBuffer @ 0x1400E0420 (MiRotatedToFrameBuffer.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiMakeVaRangeNoAccess(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 v10; // rdx
  char v11; // r15
  unsigned __int16 *v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // r10
  __int64 v15; // r10
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int v19; // r8d
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  BOOL v22; // r11d
  __int64 v23; // rsi
  unsigned __int64 v24; // r15
  __int64 v25; // r14
  unsigned __int64 LeafVa; // rax
  __int64 v27; // rdx
  int v28; // r9d
  char v29; // r8
  bool v30; // zf
  __int64 v31; // rsi
  volatile signed __int32 *v32; // rbx
  BOOL v33; // [rsp+20h] [rbp-E0h] BYREF
  __int64 TransitionPte; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-C0h]
  _QWORD v38[24]; // [rsp+50h] [rbp-B0h] BYREF

  v36 = a1;
  v35 = a6;
  memset(v38, 0, 0xB8uLL);
  v10 = *(unsigned int *)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 48) & 0x500000) != 0x500000
    || (v17 = (v10 >> 18) & 3, v18 = MiVadPageSizes[v17], v37 = v18, v18 == 1) )
  {
    v11 = 0;
    v12 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
    LODWORD(v38[0]) = 1;
    WORD2(v38[0]) = 4;
    v38[2] = 0LL;
    LODWORD(v38[1]) = 20;
    v38[3] = 0LL;
    v13 = (__int64)(a2 << 25) >> 16;
    if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
      a3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( a2 > a3 )
      return 0LL;
    while ( 1 )
    {
      TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
      if ( ((unsigned __int8)TransitionPte & v14) == 0
        || (*(_DWORD *)(v36 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(a2)
        || (*(_QWORD *)(48
                      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte) >> 12) & 0xFFFFFFFFFLL)
                      - 0x57FFFFFFFD8LL) & 0x200000000000000LL) != 0 )
      {
LABEL_12:
        if ( HIDWORD(v38[1]) )
          MiFreeWsleList((__int64)v12, (__int64)v38, 0);
        return 0LL;
      }
      if ( (MiGetWsleContents(0x200000000000000LL, v13) & 0xF) == 8 )
        break;
      MiInsertTbFlushEntry((__int64)v38, v13, v15, 0);
      LOBYTE(v15) = 1;
      if ( v11 == 1 || HIDWORD(v38[1]) == LODWORD(v38[1]) )
        goto LABEL_46;
LABEL_11:
      v13 += 4096LL;
      a2 += 8LL;
      if ( a2 > a3 )
        goto LABEL_12;
    }
    v11 = v15;
    *(_DWORD *)v35 = v15;
LABEL_46:
    if ( HIDWORD(v38[1]) )
    {
      MiFreeWsleList((__int64)v12, (__int64)v38, 0);
      LOBYTE(v15) = 1;
    }
    if ( v11 == (_BYTE)v15 )
    {
      MiUnlockVa((__int64)v12, v13);
      v11 = 0;
    }
    goto LABEL_11;
  }
  v19 = MiVadPageIndices[v17];
  v20 = 16LL;
  v33 = (v10 & 0x300000) == 3145728;
  if ( v18 != 16 )
    v20 = 1LL;
  if ( v19 > 1 )
    MiInsertTbFlushEntry(a4, (__int64)(a2 << 25) >> 16, v18, 0);
  else
    MiInsertLargeTbFlushEntry(a4, 2 - v19, a2);
  TransitionPte = MI_READ_PTE_LOCK_FREE(a2);
  v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
  v22 = v33;
  v23 = v36;
  v24 = 0LL;
  v25 = (v21 >> 12) & 0xFFFFFFFFFLL;
  v35 = 48 * v25;
  do
  {
    if ( v22 && (MI_READ_PTE_LOCK_FREE(a2) & 0x42) != 0 )
    {
      LeafVa = MiGetLeafVa(a2);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, LeafVa, v23);
    }
    TransitionPte = MiMakeTransitionPte(v25, 24);
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v28 = 1;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_33;
        v30 = (v29 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_33;
        v30 = (v29 & 1) == 0;
      }
      if ( !v30 )
        v27 |= 0x8000000000000000uLL;
    }
LABEL_33:
    *(_QWORD *)a2 = v27;
    if ( v28 )
      MiWritePteShadow(a2);
    a2 += 8LL;
    ++v25;
    ++v24;
  }
  while ( v24 < v20 );
  v31 = v37;
  if ( v37 )
  {
    v32 = (volatile signed __int32 *)(v35 - 0x57FFFFFFFE8LL);
    do
    {
      v33 = 0;
      while ( _interlockedbittestandset64(v32, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v33);
        while ( *(__int64 *)v32 < 0 );
      }
      *((_QWORD *)v32 - 1) = *((_QWORD *)v32 - 1) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
      _InterlockedAnd64((volatile signed __int64 *)v32, 0x7FFFFFFFFFFFFFFFuLL);
      v32 += 12;
      --v31;
    }
    while ( v31 );
  }
  return 1LL;
}
