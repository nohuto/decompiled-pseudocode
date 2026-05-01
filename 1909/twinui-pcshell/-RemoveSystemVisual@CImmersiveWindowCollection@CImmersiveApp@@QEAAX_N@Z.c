/*
 * XREFs of ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18003CEB4
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x1800395E0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x18003C3E0 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18003C528 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18003CCD0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x180162544 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x180165020 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x180166444 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18016A56C (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x18016AB58 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180034970 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800350F4 (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___lambda_ca324c265ed58b3d9541d2204f682216__&_ @ 0x18003D074 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800604C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180070FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     WPP_SF_Sd @ 0x18016B368 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rdi
  signed __int64 v3; // rax
  int v4; // r10d
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21,
      (unsigned int)&WPP_3ae9f5eed530322b8a0a3a3f404820d9_Traceguids,
      *(_QWORD *)(*((_QWORD *)this + 20) + 592LL),
      *(_DWORD *)(*((_QWORD *)this + 20) + 600LL));
  if ( *((_DWORD *)this + 52) == 2 )
    *((_DWORD *)this + 52) = 0;
  if ( *((_QWORD *)this + 22) )
    (*(void (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 72LL))(**((_QWORD **)this + 21));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), 0LL);
  CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(this);
  CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(this);
  v2 = *((_QWORD *)this + 31);
  if ( *(_BYTE *)(v2 + 128) != 1 )
  {
    *(_BYTE *)(v2 + 128) = 1;
    v3 = *(_QWORD *)(v2 + 64);
    v4 = 0x7FFFFFFF;
    while ( v3 >= 0 )
    {
      if ( (_DWORD)v3 != 0x7FFFFFFF )
      {
        v5 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 64), v3 + 1, v3);
        if ( v5 != v3 )
          continue;
      }
      goto LABEL_15;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v3 + 16));
LABEL_15:
    v13 = v2;
    v6 = *(_QWORD *)(v2 + 64);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != v4 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 64), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_21;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v6 + 16));
LABEL_21:
    CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216____(&v12, &v13);
    v10 = *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216;
    v14 = *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216;
    *CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______lambda_ca324c265ed58b3d9541d2204f682216 = 0LL;
    v11 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
        v11,
        v9);
    }
    if ( v10 )
    {
      if ( (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 120) + 232LL))(*(_QWORD *)(v2 + 120), v10) >= 0 )
        *(_BYTE *)(v2 + 129) = 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v2);
  }
}
