/*
 * XREFs of ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000C174
 * Callers:
 *     ?DxgkCddIsSourceOwnedByDWM@@YAJQEAXIPEAE@Z @ 0x1C00C2FE0 (-DxgkCddIsSourceOwnedByDWM@@YAJQEAXIPEAE@Z.c)
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C00C35F0 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C806C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E9110 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00FD130 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205974 (DxgkSetIndirectDisplayRenderAdapter.c)
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0243DB0 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02840D0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(DXGADAPTERSTOPRESETLOCKSHARED *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = 0;
    ExReleasePushLockSharedEx(*((_QWORD *)this + 1) + 120LL, 0LL);
    KeLeaveCriticalRegion();
    v2 = *((_QWORD *)this + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v2 + 16), (struct DXGADAPTER *)v2);
  }
}
