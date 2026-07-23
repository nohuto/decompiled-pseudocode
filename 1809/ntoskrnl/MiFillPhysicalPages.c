/*
 * XREFs of MiFillPhysicalPages @ 0x14012B050
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140026984 (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiGetPoolPages @ 0x1400CB2A0 (MiGetPoolPages.c)
 *     MiInitializeDummyPages @ 0x1409BA6DC (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x1409BC8F8 (MxMapVa.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401C0A90 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x1409C17B0 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r14
  void *HyperPte; // r13
  void *v7; // rax
  unsigned __int8 v8; // dl
  __int64 result; // rax
  unsigned __int64 Phase0Mapping; // rax
  void *v11; // rsi
  __int64 *v12; // rbx
  int v13; // edi
  __int64 v14; // rdx
  BOOL v15; // r12d
  __int64 v16; // rdx
  int v17; // edi
  bool v18; // zf
  bool v19; // zf
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = a2;
  v5 = 0LL;
  HyperPte = KeGetCurrentPrcb()->HyperPte;
  do
  {
    if ( HyperPte )
    {
      v7 = (void *)MiMapPageInHyperSpaceWorker(BugCheckParameter2, (unsigned __int8 *)&v20, 0x80000000);
      v8 = v20;
      memset64(v7, a3, 0x200uLL);
      result = MiUnmapPageInHyperSpaceWorker((unsigned __int64)v7, v8, 0x80000000LL);
      goto LABEL_4;
    }
    Phase0Mapping = MxGetPhase0Mapping();
    v11 = (void *)Phase0Mapping;
    if ( !Phase0Mapping )
      KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
    v12 = (__int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiMakeValidPte((unsigned __int64)v12, BugCheckParameter2, -1610612732);
    v13 = 0;
    v15 = MiPteInShadowRange((unsigned __int64)v12);
    if ( v15 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_8;
        v18 = (v14 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_8;
        v18 = (v14 & 1) == 0;
      }
      if ( !v18 )
        v14 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *v12 = v14;
    if ( v13 )
      MiWritePteShadow((__int64)v12, v14);
    if ( a3 )
      memset64(v11, a3, 0x200uLL);
    else
      KeZeroPages(v11, 4096LL);
    v16 = ZeroPte;
    v17 = 0;
    if ( !v15 )
      goto LABEL_13;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v19 = (v16 & 1) == 0;
        goto LABEL_29;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v19 = (v16 & 1) == 0;
LABEL_29:
      if ( !v19 )
        v16 |= 0x8000000000000000uLL;
    }
LABEL_13:
    *v12 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v12, v16);
    result = KeFlushSingleTb((unsigned __int64)v11, 0, 1u);
LABEL_4:
    ++v5;
    ++BugCheckParameter2;
  }
  while ( !v5 );
  return result;
}
