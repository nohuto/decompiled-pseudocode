/*
 * XREFs of ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A838
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C3E20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkPresent @ 0x1C010A090 (DxgkPresent.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C010ACB0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkRender @ 0x1C011C610 (DxgkRender.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C016EC30 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01F1820 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202490 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C020C030 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C024844C (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C024C470 (DxgkSubmitPresentToHwQueue.c)
 *     OutputDuplPresent @ 0x1C02761F0 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C0283140 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C0283940 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C0284140 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    if ( !*(_BYTE *)(a1 + 48) )
    {
      v3 = 0LL;
      if ( *(_DWORD *)(a1 + 40) )
      {
        do
        {
          v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) + 456LL;
          *(_QWORD *)(v4 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v4, 0LL);
          KeLeaveCriticalRegion();
          ++v3;
        }
        while ( v3 < *(unsigned int *)(a1 + 40) );
        v2 = *(void **)a1;
      }
    }
  }
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
}
