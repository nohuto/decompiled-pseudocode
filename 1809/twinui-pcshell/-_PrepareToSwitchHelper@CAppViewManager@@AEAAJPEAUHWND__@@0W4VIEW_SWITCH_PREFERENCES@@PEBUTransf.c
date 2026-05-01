/*
 * XREFs of ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1801112A8
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18010FDD0 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1801110EC (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x18004E3B0 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E4A0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004E6A4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18004E6A4.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004EB5C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18004ED10 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800FACF0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800FAE0C (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x1800FAFA4 (WPP_SF_qd.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x18010CCA8 (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     WPP_SF_qqL @ 0x180112E18 (WPP_SF_qqL.c)
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
  CAppViewManager *v11; // rsi
  __int64 v12; // r8
  struct IImmersiveApplicationInternal *v13; // rbx
  struct IImmersiveApplicationInternal *v14; // rdi
  bool v15; // al
  int GlomForWindow; // r14d
  CAppViewManager *v17; // rcx
  char IsMultiViewOperationAllowed; // al
  int v19; // ecx
  int v20; // esi
  int v21; // eax
  _QWORD *v22; // rcx
  USHORT v23; // dx
  int v24; // ebx
  int v25; // r15d
  int v26; // eax
  bool v27; // r15
  int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // r12d
  int v31; // eax
  __int64 v32; // rax
  __int64 v34; // [rsp+28h] [rbp-E0h]
  bool v35[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C8h] BYREF
  struct IImmersiveApplicationInternal *v37; // [rsp+48h] [rbp-C0h] BYREF
  struct IImmersiveApplicationInternal *v38; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE *v39; // [rsp+58h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-A8h]
  CAppViewManager *v41; // [rsp+68h] [rbp-A0h]
  _BYTE *v42; // [rsp+70h] [rbp-98h]
  __int64 *v43; // [rsp+78h] [rbp-90h]
  __int64 v44; // [rsp+80h] [rbp-88h]
  _QWORD v45[40]; // [rsp+88h] [rbp-80h] BYREF

  v44 = -2LL;
  v11 = a1;
  v41 = a1;
  v40 = a5;
  v43 = a6;
  v42 = a7;
  v39 = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v45,
    (__int64)"PrepareToSwitchHelper");
  v45[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchHelper::StartActivity((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v45);
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqL(*((_QWORD *)WPP_GLOBAL_Control + 2), 0LL, v12, a2, a3, a4);
  v36 = 0LL;
  v35[4] = 0;
  v13 = 0LL;
  v38 = 0LL;
  v14 = 0LL;
  v37 = 0LL;
  v35[0] = 0;
  v15 = 0;
  v35[1] = 0;
  v35[2] = 1;
  GlomForWindow = -2147024809;
  if ( a2 == a3 )
  {
LABEL_15:
    if ( GlomForWindow < 0 )
      goto LABEL_63;
    if ( v15 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v13 + 400LL))(v13)
        && !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 400LL))(v14) )
      {
        if ( (a4 & 2) == 0 )
        {
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids);
          goto LABEL_27;
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD *, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v11 + 15) + 104LL))(
                *((_QWORD **)v11 + 15),
                v13,
                v14,
                0LL);
        GlomForWindow = v21;
        v22 = WPP_GLOBAL_Control;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        {
LABEL_27:
          Microsoft::WRL::ComPtr<IUnknown>::operator=(&v36, (__int64 *)&v37);
          v24 = 0;
LABEL_56:
          v27 = v35[4];
LABEL_57:
          if ( GlomForWindow >= 0 )
          {
            if ( v27 )
            {
              *v42 = 1;
              if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids);
            }
            v32 = v36;
            v36 = 0LL;
            *v43 = v32;
            GlomForWindow = v24;
          }
          goto LABEL_63;
        }
        v23 = 20;
LABEL_23:
        WPP_SF_d(v22[2], v23, &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids, v21);
        goto LABEL_27;
      }
      v25 = a4 & 2;
      if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 400LL))(v14)
        || !v35[2] && v25 )
      {
        v29 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v13 + 280LL))(v13);
        v30 = v29 >> 1;
        LOBYTE(v30) = (v29 & 2) != 0;
        *(_DWORD *)&v35[4] = v30;
        if ( !v25 )
          goto LABEL_27;
        if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v13 + 400LL))(v13) )
          *v39 = 1;
        v21 = (*(__int64 (__fastcall **)(_QWORD *, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v11 + 15) + 104LL))(
                *((_QWORD **)v11 + 15),
                v13,
                v14,
                0LL);
        GlomForWindow = v21;
        v22 = WPP_GLOBAL_Control;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
          goto LABEL_27;
        v23 = 22;
        goto LABEL_23;
      }
      if ( !v25 )
      {
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids);
        v26 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v13 + 280LL))(v13) & 2;
        v27 = v26 != 0;
        if ( !v26 )
          GlomForWindow = (*(__int64 (__fastcall **)(_QWORD *, struct IImmersiveApplicationInternal *))(**((_QWORD **)v11 + 15) + 80LL))(
                            *((_QWORD **)v11 + 15),
                            v14);
        *v39 = 1;
        Microsoft::WRL::ComPtr<IUnknown>::operator=(&v36, (__int64 *)&v37);
        v24 = 0;
        goto LABEL_57;
      }
      v28 = (*(__int64 (__fastcall **)(_QWORD *, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, __int64))(**((_QWORD **)v11 + 15) + 104LL))(
              *((_QWORD **)v11 + 15),
              v14,
              v13,
              v40);
      GlomForWindow = v28;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids, v28);
    }
    else if ( (unsigned int)SHIsSameObject((struct IUnknown *)v13, (struct IUnknown *)v14) )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids);
    }
    else
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD *, HWND, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, __int64))(**((_QWORD **)v11 + 15) + 96LL))(
              *((_QWORD **)v11 + 15),
              a3,
              v14,
              v13,
              v40);
      GlomForWindow = v31;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v34) = v31;
        WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids, a2, v34);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::operator=(&v36, (__int64 *)&v38);
    v24 = 1;
    goto LABEL_56;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v11, a2, &v38, v35);
  if ( GlomForWindow < 0 )
    goto LABEL_63;
  if ( !v35[0] )
  {
    GlomForWindow = -2147024891;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids,
        -2147024891);
    goto LABEL_63;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(v11, a3, &v37, &v35[1]);
  if ( GlomForWindow >= 0 )
  {
    v14 = v37;
    IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(v17, v37);
    v19 = GlomForWindow;
    if ( !IsMultiViewOperationAllowed )
      v19 = -2147024891;
    GlomForWindow = v19;
    if ( v19 >= 0 )
    {
      v13 = v38;
      v20 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v38 + 616LL))(v38);
      v35[2] = (*(unsigned int (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 616LL))(v14) == v20;
      v15 = v35[1];
      v11 = v41;
      goto LABEL_15;
    }
  }
LABEL_63:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v45, GlomForWindow);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v38);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
  v45[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v45);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v45);
  return (unsigned int)GlomForWindow;
}
