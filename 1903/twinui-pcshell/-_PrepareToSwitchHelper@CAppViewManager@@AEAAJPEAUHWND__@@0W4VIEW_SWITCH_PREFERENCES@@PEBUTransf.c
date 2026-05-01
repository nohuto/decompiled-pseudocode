/*
 * XREFs of ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180138094
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x180136BA4 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180137ED8 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 * Callees:
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180010784 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800109AC (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180011458 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180011558 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180011774 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002B088 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180059BD0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180120C70 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180120D8C (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x180120F24 (WPP_SF_qd.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1801335DC (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     WPP_SF_qqL @ 0x18013A54C (WPP_SF_qqL.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_PrepareToSwitchHelper(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        _BYTE *a7,
        _BYTE *a8)
{
  __int64 v12; // rdx
  __int64 v13; // r8
  bool v14; // r14
  int GlomForWindow; // edi
  CAppViewManager *v16; // rcx
  char IsMultiViewOperationAllowed; // al
  int v18; // ecx
  int v19; // ebx
  bool v20; // bl
  int v21; // eax
  _QWORD *v22; // rcx
  USHORT v23; // dx
  int v24; // esi
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rax
  __int64 v30; // [rsp+28h] [rbp-E0h]
  bool v31[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct IUnknown *v32; // [rsp+40h] [rbp-C8h] BYREF
  struct IUnknown *v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE *v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  _BYTE *v37; // [rsp+68h] [rbp-A0h]
  __int64 *v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  _QWORD v40[40]; // [rsp+88h] [rbp-80h] BYREF

  v39 = -2LL;
  v36 = a5;
  v38 = a6;
  v37 = a7;
  v35 = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v40,
    (__int64)"PrepareToSwitchHelper");
  v40[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchHelper::StartActivity((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v40);
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqL(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v13, a2, a3, a4);
  v34 = 0LL;
  v14 = 0;
  v33 = 0LL;
  v32 = 0LL;
  v31[0] = 0;
  v31[1] = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
    goto LABEL_64;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a2, (struct IImmersiveApplicationInternal **)&v33, v31);
  if ( GlomForWindow < 0 )
    goto LABEL_64;
  if ( !v31[0] )
  {
    GlomForWindow = -2147024891;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids,
        -2147024891);
    goto LABEL_64;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a3, (struct IImmersiveApplicationInternal **)&v32, &v31[1]);
  if ( GlomForWindow >= 0 )
  {
    IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(
                                    v16,
                                    (struct IImmersiveApplicationInternal *)v32);
    v18 = GlomForWindow;
    if ( !IsMultiViewOperationAllowed )
      v18 = -2147024891;
    GlomForWindow = v18;
    if ( v18 >= 0 )
    {
      v19 = ((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[25].Release)(v33);
      v20 = ((unsigned int (__fastcall *)(struct IUnknown *))v32->lpVtbl[25].Release)(v32) == v19;
      if ( !v31[1] )
      {
        if ( (unsigned int)SHIsSameObject(v33, v32) )
        {
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
        }
        else
        {
          v27 = (*(__int64 (__fastcall **)(_QWORD *, HWND, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)a1 + 15) + 96LL))(
                  *((_QWORD **)a1 + 15),
                  a3,
                  v32,
                  v33,
                  v36);
          GlomForWindow = v27;
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            LODWORD(v30) = v27;
            WPP_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x1Au,
              &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids,
              a2,
              v30);
          }
        }
        goto LABEL_57;
      }
      if ( !((unsigned __int8 (__fastcall *)(struct IUnknown *))v33->lpVtbl[16].Release)(v33)
        && !((unsigned __int8 (__fastcall *)(struct IUnknown *))v32->lpVtbl[16].Release)(v32) )
      {
        if ( (a4 & 2) == 0 )
        {
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
          goto LABEL_49;
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                                + 104LL))(
                *((_QWORD **)a1 + 15),
                v33,
                v32,
                0LL);
        GlomForWindow = v21;
        v22 = WPP_GLOBAL_Control;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        {
LABEL_49:
          Microsoft::WRL::ComPtr<IUnknown>::operator=(&v34, (__int64 *)&v32);
          v26 = 0;
          goto LABEL_58;
        }
        v23 = 20;
LABEL_48:
        WPP_SF_d(v22[2], v23, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids, v21);
        goto LABEL_49;
      }
      if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v32->lpVtbl[16].Release)(v32) )
      {
        v24 = a4 & 2;
      }
      else
      {
        if ( v20 )
        {
          v24 = a4 & 2;
LABEL_30:
          if ( !v24 )
          {
            if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
            if ( (((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[11].Release)(v33) & 2) != 0 )
            {
              v14 = 1;
            }
            else
            {
              v14 = 0;
              GlomForWindow = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *))(**((_QWORD **)a1 + 15) + 80LL))(
                                *((_QWORD **)a1 + 15),
                                v32);
            }
            *v35 = 1;
            goto LABEL_49;
          }
          v25 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)a1 + 15) + 104LL))(
                  *((_QWORD **)a1 + 15),
                  v32,
                  v33,
                  v36);
          GlomForWindow = v25;
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids, v25);
LABEL_57:
          Microsoft::WRL::ComPtr<IUnknown>::operator=(&v34, (__int64 *)&v33);
          v26 = 1;
LABEL_58:
          if ( GlomForWindow >= 0 )
          {
            if ( v14 )
            {
              *v37 = 1;
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
            }
            v28 = v34;
            v34 = 0LL;
            *v38 = v28;
            GlomForWindow = v26;
          }
          goto LABEL_64;
        }
        v24 = a4 & 2;
        if ( !v24 )
          goto LABEL_30;
      }
      v14 = (((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[11].Release)(v33) & 2) != 0;
      if ( !v24 )
        goto LABEL_49;
      if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v33->lpVtbl[16].Release)(v33) )
        *v35 = 1;
      v21 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                              + 104LL))(
              *((_QWORD **)a1 + 15),
              v33,
              v32,
              0LL);
      GlomForWindow = v21;
      v22 = WPP_GLOBAL_Control;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        goto LABEL_49;
      v23 = 22;
      goto LABEL_48;
    }
  }
LABEL_64:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v40, GlomForWindow);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
  v40[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v40);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v40);
  return (unsigned int)GlomForWindow;
}
