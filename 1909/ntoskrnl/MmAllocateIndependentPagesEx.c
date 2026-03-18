/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x1400DD368
 * Callers:
 *     MmAllocateIndependentPages @ 0x1400DC990 (MmAllocateIndependentPages.c)
 *     KeAllocateInterrupt @ 0x14017C908 (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x140185A30 (HvlStartBootLogicalProcessors.c)
 *     KeAllocateProcessorProfileStructures @ 0x140185DD0 (KeAllocateProcessorProfileStructures.c)
 *     HvlpInitializeHvCrashdump @ 0x14028BE8C (HvlpInitializeHvCrashdump.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 *     InitializePool @ 0x1409EE7E8 (InitializePool.c)
 *     InitializePagedPool @ 0x1409EEC50 (InitializePagedPool.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiInitializePfn @ 0x1400DD7F0 (MiInitializePfn.c)
 *     MiObtainPoolCharges @ 0x1400DE368 (MiObtainPoolCharges.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReturnPoolCharges @ 0x14011072C (MiReturnPoolCharges.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rsi
  char ValidPte; // al
  int v10; // edx
  char v11; // bl
  __int64 v12; // r14
  __int64 v13; // r8
  signed __int32 v14; // ecx
  int v15; // r12d
  unsigned int v16; // r15d
  __int64 SlabPage; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r8d
  unsigned int v22; // edx
  _QWORD *v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+38h] [rbp-48h]
  volatile signed __int32 *v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h]
  _OWORD v28[3]; // [rsp+50h] [rbp-30h] BYREF
  BOOL v29; // [rsp+C0h] [rbp+40h]

  v26 = 0LL;
  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  v7 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v8 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)(unsigned int)v7);
  if ( !v8 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v7, 1LL) )
  {
    MiReleasePtes((__int64)&qword_1404666C0, v8, v7);
    return 0LL;
  }
  v29 = a3 && (dword_1404681C4 & 8) != 0 && (a2 == -1 || KeNumberNodes == 1);
  v25 = (__int64)(v8 << 25) >> 16;
  ValidPte = MiMakeValidPte(v8, 0LL, -1610612732);
  v10 = 0;
  v11 = ValidPte;
  if ( a2 != -1 )
    v10 = a2 + 1;
  MiInitializePageColorBase(0LL, v10, (__int64)&v26);
  v12 = 0LL;
  v13 = 0LL;
  v24 = 0LL;
  do
  {
    v14 = _InterlockedExchangeAdd(v26, 1u);
    v15 = 0;
    v16 = HIDWORD(v27) | v14 & v27;
    if ( v29 )
    {
      if ( a3 != (_QWORD *)-1LL )
      {
        v22 = 0;
        if ( !a4 )
          goto LABEL_9;
        v23 = a3;
        while ( v13 != *v23 >> 12 )
        {
          ++v22;
          ++v23;
          if ( v22 >= a4 )
            goto LABEL_9;
        }
      }
      v15 = 1;
    }
LABEL_9:
    while ( 1 )
    {
      if ( v15 )
      {
        SlabPage = MiGetSlabPage((unsigned int)&MiSystemPartition, 1, 0, -1, 0);
        if ( SlabPage != -1 )
          break;
      }
      SlabPage = MiGetPage((__int64)&MiSystemPartition, v16, 8LL);
      if ( SlabPage != -1 )
        goto LABEL_11;
      MiWaitForFreePage(&MiSystemPartition);
    }
    ++v12;
LABEL_11:
    MiInitializePfn(48 * SlabPage - 0x58000000000LL, v8, 4LL, 4LL);
    if ( MiPteInShadowRange(v8) )
    {
      if ( (unsigned int)MiPteHasShadow(v19) )
      {
        v20 = 1;
        if ( HIBYTE(word_1404658EC) )
          goto LABEL_12;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
        goto LABEL_12;
      }
      if ( (v11 & 1) != 0 )
        v18 |= 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v8 = v18;
    if ( v20 )
      MiWritePteShadow(v8, v18);
    v8 += 8LL;
    v13 = ++v24;
    --v7;
  }
  while ( v7 );
  if ( v12 )
  {
    *((_QWORD *)&v28[1] + 1) = v12;
    *(_QWORD *)&v28[0] = v12;
    *(_OWORD *)((char *)v28 + 8) = 0LL;
    v28[2] = 0LL;
    MiReturnPoolCharges(v28, 1LL);
  }
  return v25;
}
