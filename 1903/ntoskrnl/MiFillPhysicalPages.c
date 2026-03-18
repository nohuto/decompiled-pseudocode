/*
 * XREFs of MiFillPhysicalPages @ 0x14012B9B4
 * Callers:
 *     MiZeroPhysicalPage @ 0x14006ED90 (MiZeroPhysicalPage.c)
 *     MiGetPoolPages @ 0x14007BDAC (MiGetPoolPages.c)
 *     MiInitializeSystemPageTable @ 0x1400A35EC (MiInitializeSystemPageTable.c)
 *     MxMapVa @ 0x1409F36A4 (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x140A1AC5C (MiInitializeDummyPages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401C7A10 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x1409FC76C (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r14
  void *HyperPte; // r13
  void *v7; // rax
  __int64 v8; // rdx
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
      LOBYTE(v8) = v20;
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
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_8;
        v18 = (v14 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_8;
        v18 = (v14 & 1) == 0;
      }
      if ( !v18 )
        v14 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *v12 = v14;
    if ( v13 )
      MiWritePteShadow((__int64)v12);
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
      if ( !HIBYTE(word_140465BEC) )
      {
        v19 = (v16 & 1) == 0;
        goto LABEL_29;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v19 = (v16 & 1) == 0;
LABEL_29:
      if ( !v19 )
        v16 |= 0x8000000000000000uLL;
    }
LABEL_13:
    *v12 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v12);
    result = KeFlushSingleTb((unsigned __int64)v11, 0, 1u);
LABEL_4:
    ++v5;
    ++BugCheckParameter2;
  }
  while ( !v5 );
  return result;
}
