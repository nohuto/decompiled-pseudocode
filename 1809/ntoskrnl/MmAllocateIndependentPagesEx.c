/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x14010903C
 * Callers:
 *     MmAllocateIndependentPages @ 0x140109020 (MmAllocateIndependentPages.c)
 *     KeAllocateInterrupt @ 0x14016DB28 (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x14017EBD0 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x14027804C (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 *     InitializePool @ 0x1409B7DF8 (InitializePool.c)
 *     InitializePagedPool @ 0x1409B8280 (InitializePagedPool.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140023984 (MiReturnPoolCharges.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiInitializePfn @ 0x1401094B0 (MiInitializePfn.c)
 *     MiObtainPoolCharges @ 0x140109864 (MiObtainPoolCharges.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // rsi
  char ValidPte; // bl
  int v9; // edx
  unsigned __int64 v10; // rbp
  int v11; // r9d
  __int64 v12; // r8
  int v13; // r15d
  unsigned int v14; // r14d
  __int64 SlabPage; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  unsigned int v20; // edx
  _QWORD *v21; // rcx
  int v22; // [rsp+20h] [rbp-88h]
  _BYTE v23[12]; // [rsp+24h] [rbp-84h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  volatile signed __int32 *v25; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int16 v26; // [rsp+40h] [rbp-68h]
  unsigned __int16 v27; // [rsp+42h] [rbp-66h]
  unsigned __int64 v28[12]; // [rsp+48h] [rbp-60h] BYREF
  BOOL v29; // [rsp+B0h] [rbp+8h]

  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v7 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)v6);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1LL) )
  {
    MiReleasePtes((__int64)&qword_14043C060, v7, v6);
    return 0LL;
  }
  v29 = a3 && (dword_14043DA04 & 8) != 0 && (a2 == -1 || KeNumberNodes == 1);
  v24 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v25);
  v9 = v26;
  v10 = 0LL;
  v11 = v27;
  v12 = 0LL;
  *(_DWORD *)&v23[8] = 0;
  v22 = v26;
  *(_QWORD *)v23 = v27;
  do
  {
    v13 = 0;
    v14 = v11 | _InterlockedExchangeAdd(v25, 1u) & v9;
    if ( v29 )
    {
      if ( a3 != (_QWORD *)-1LL )
      {
        v20 = 0;
        if ( !a4 )
          goto LABEL_7;
        v21 = a3;
        while ( v12 != *v21 >> 12 )
        {
          ++v20;
          ++v21;
          if ( v20 >= a4 )
            goto LABEL_7;
        }
      }
      v13 = 1;
    }
LABEL_7:
    while ( 1 )
    {
      if ( v13 )
      {
        SlabPage = MiGetSlabPage(&MiSystemPartition, 1LL, -1LL, 0LL);
        if ( SlabPage != -1 )
          break;
      }
      SlabPage = MiGetPage((__int64)&MiSystemPartition, v14, 8u);
      if ( SlabPage != -1 )
        goto LABEL_9;
      MiWaitForFreePage(&MiSystemPartition);
    }
    ++v10;
LABEL_9:
    MiInitializePfn(48 * SlabPage - 0x58000000000LL, v7, 4LL, 4LL);
    if ( MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow(v17, v16) )
      {
        v18 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_10;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      {
        goto LABEL_10;
      }
      if ( (ValidPte & 1) != 0 )
        v16 |= 0x8000000000000000uLL;
    }
LABEL_10:
    *(_QWORD *)v7 = v16;
    if ( v18 )
      MiWritePteShadow(v7);
    v7 += 8LL;
    v9 = v22;
    v12 = *(_QWORD *)&v23[4] + 1LL;
    v11 = *(_DWORD *)v23;
    ++*(_QWORD *)&v23[4];
    --v6;
  }
  while ( v6 );
  if ( v10 )
  {
    memset(v28, 0, 0x28uLL);
    v28[3] = v10;
    v28[0] = v10;
    MiReturnPoolCharges(v28, 1);
  }
  return v24;
}
