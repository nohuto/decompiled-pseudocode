/*
 * XREFs of MxCopyPage @ 0x1409BFDC8
 * Callers:
 *     MiCreateSystemPageTable @ 0x140026730 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1400ECDF4 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x140120E70 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120ED0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1401C09D0 (KeCopyPage.c)
 *     MxGetPhase0Mapping @ 0x1409C07B0 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxCopyPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rdx
  BOOL v8; // esi
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // r8d
  bool v13; // zf
  bool v14; // zf

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (__int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMakeValidPte((unsigned __int64)v6, BugCheckParameter2, -1610612732);
  v8 = MiPteInShadowRange((unsigned __int64)v6);
  if ( v8 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_14043A1AC) )
        goto LABEL_3;
      v13 = (v7 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_3;
      v13 = (v7 & 1) == 0;
    }
    if ( !v13 )
      v7 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *v6 = v7;
  if ( v9 )
    MiWritePteShadow((__int64)v6, v7);
  KeCopyPage(v5, a2);
  v10 = ZeroPte;
  v11 = 0;
  if ( v8 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_14043A1AC) )
        goto LABEL_6;
      v14 = (v10 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_6;
      v14 = (v10 & 1) == 0;
    }
    if ( !v14 )
      v10 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *v6 = v10;
  if ( v11 )
    MiWritePteShadow((__int64)v6, v10);
  return KeFlushSingleTb(v5, 0, 1u);
}
