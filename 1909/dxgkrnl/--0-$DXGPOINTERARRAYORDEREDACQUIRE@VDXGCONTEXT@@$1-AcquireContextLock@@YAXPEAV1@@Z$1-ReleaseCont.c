/*
 * XREFs of ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A950
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C4BD0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkPresent @ 0x1C010F1E0 (DxgkPresent.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010FE00 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x1C0120C10 (DxgkRender.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01F1E90 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202B00 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C020C6A0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C0248ACC (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C024CAF0 (DxgkSubmitPresentToHwQueue.c)
 *     OutputDuplPresent @ 0x1C0276950 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C02830D0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C02838D0 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02840D0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  __int64 v6; // rdi
  PVOID PoolWithTag; // rax
  void *v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v6 = a3;
  if ( a3 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a3 < 8 )
      goto LABEL_5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x4B677844u);
  }
  else
  {
    PoolWithTag = (PVOID)(a1 + 8);
  }
  *(_QWORD *)a1 = PoolWithTag;
  *(_DWORD *)(a1 + 40) = a3;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 8 * v6);
LABEL_5:
  v8 = *(void **)a1;
  *(_BYTE *)(a1 + 48) = 1;
  if ( v8 )
  {
    memmove(v8, a2, 8LL * *(unsigned int *)(a1 + 40));
    qsort(*(void **)a1, *(unsigned int *)(a1 + 40), 8uLL, DxgkComparePointers);
    v9 = 1LL;
    v10 = *(unsigned int *)(a1 + 40);
    while ( v9 < v10 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v9) == *(_QWORD *)(*(_QWORD *)a1 + 8 * v9 - 8) )
        return a1;
      ++v9;
    }
    v11 = 0LL;
    if ( (_DWORD)v10 )
    {
      do
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * v11++) + 456LL));
      while ( v11 < *(unsigned int *)(a1 + 40) );
    }
    *(_BYTE *)(a1 + 48) = 0;
  }
  return a1;
}
