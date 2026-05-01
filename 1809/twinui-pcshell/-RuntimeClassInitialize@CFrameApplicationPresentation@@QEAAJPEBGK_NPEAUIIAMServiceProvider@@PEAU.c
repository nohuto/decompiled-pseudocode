/*
 * XREFs of ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180047AE8
 * Callers:
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18004A4D8 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003B810 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x180045694 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_96f1d78dc3df8b5a1934e3378cc82626___ @ 0x18004A2DC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_96f1d78dc3df8b5a1934e3378cc82626___.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180052830 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180067710 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     WPP_SF_Sdd @ 0x1800FAD80 (WPP_SF_Sdd.c)
 *     WPP_SF_Sd @ 0x180122988 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CFrameApplicationPresentation::RuntimeClassInitialize(
        CFrameApplicationPresentation *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        char a4,
        struct IIAMServiceProvider *a5,
        struct IImmersiveApplicationInternal *a6)
{
  int v10; // ebx
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  char *v14; // rcx
  signed __int64 v15; // r9
  __int16 v16; // ax
  char *v17; // rax
  struct IIAMServiceProvider *v18; // rax
  LPVOID v19; // rbx
  bool v20; // bl
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  __int64 pvAttribute; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  struct IIAMServiceProvider *v25; // [rsp+50h] [rbp-B8h] BYREF
  HWND hwnd; // [rsp+58h] [rbp-B0h] BYREF
  struct IIAMServiceProvider *v27; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v28[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  void **v31; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v32[3]; // [rsp+A0h] [rbp-68h] BYREF
  int v33; // [rsp+B8h] [rbp-50h]
  LPVOID *v34; // [rsp+C0h] [rbp-48h]
  int *v35; // [rsp+C8h] [rbp-40h]
  int v36; // [rsp+D0h] [rbp-38h] BYREF
  char v37; // [rsp+D4h] [rbp-34h]
  char v38[32]; // [rsp+D8h] [rbp-30h] BYREF
  LPVOID v39[3]; // [rsp+F8h] [rbp-10h] BYREF
  char v40; // [rsp+110h] [rbp+8h]
  __int64 v41; // [rsp+118h] [rbp+10h]
  char v42[144]; // [rsp+120h] [rbp+18h] BYREF
  LPVOID v43[3]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v44; // [rsp+1C8h] [rbp+C0h] BYREF

  v30 = -2LL;
  v32[0] = 0LL;
  v32[1] = &v31;
  v32[2] = 0LL;
  v33 = 0;
  v34 = v39;
  v35 = &v36;
  v36 = 0;
  v37 = 0;
  v40 = 0;
  LODWORD(v39[0]) = 0;
  v39[1] = "Initialization";
  v39[2] = 0LL;
  v41 = 1LL;
  v43[0] = 0LL;
  memset_0(v42, 0, sizeof(v42));
  v43[1] = 0LL;
  v43[2] = 0LL;
  v44 = 0LL;
  v31 = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)&v31, a2);
  *((_BYTE *)this + 53) = a4;
  v27 = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  v10 = (*(__int64 (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *))(*(_QWORD *)a5 + 24LL))(
          a5,
          &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
          &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
          &v24);
  if ( v10 >= 0 )
  {
    Context = 0LL;
    v11 = v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
    v10 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, LPVOID *))(*(_QWORD *)v11 + 72LL))(
            v11,
            a2,
            a3,
            &Context);
    if ( v10 < 0 )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_853ba2fb797437ec94ff4aabc4e6fa11_Traceguids,
          (_DWORD)a2,
          a3);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(LPVOID, HWND *))(*(_QWORD *)Context + 24LL))(Context, &hwnd);
      if ( v10 >= 0 )
      {
        if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr)
          && DwmGetWindowAttribute(hwnd, 0xEu, &pvAttribute, 4u) >= 0 )
        {
          *((_BYTE *)this + 52) = (pvAttribute & 2) == 0;
        }
        v10 = 0;
        if ( a2 )
        {
          v12 = -1LL;
          do
            ++v12;
          while ( a2[v12] );
          v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
                  (__int64)this + 560,
                  v12);
          if ( v10 >= 0 )
          {
            v13 = v12 + 1;
            v14 = (char *)*((_QWORD *)this + 70);
            if ( v12 > 0x7FFFFFFE )
            {
              if ( v12 != -1LL )
                *(_WORD *)v14 = 0;
            }
            else
            {
              v15 = (char *)a2 - v14;
              do
              {
                if ( v13 == 1 )
                  break;
                v16 = *(_WORD *)&v14[v15];
                if ( !v16 )
                  break;
                *(_WORD *)v14 = v16;
                v14 += 2;
                --v13;
              }
              while ( v13 );
              v17 = v14 - 2;
              if ( v13 )
                v17 = v14;
              *(_WORD *)v17 = 0;
            }
            *((_QWORD *)this + 71) = v12;
          }
        }
        else
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 560);
        }
        if ( v10 >= 0 )
        {
          v18 = (struct IIAMServiceProvider *)*((_QWORD *)this + 15);
          v19 = Context;
          if ( v18 != Context )
          {
            if ( Context )
            {
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 8LL))(Context);
              v18 = (struct IIAMServiceProvider *)*((_QWORD *)this + 15);
            }
            v25 = v18;
            *((_QWORD *)this + 15) = v19;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
          }
          *((_QWORD *)this + 16) = hwnd;
          *((_QWORD *)this + 73) = a6;
          v25 = a5;
          if ( a5 )
            (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
          v20 = 0;
          pvAttribute = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&pvAttribute);
          if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 73))(
                 *((_QWORD *)this + 73),
                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                 &pvAttribute) >= 0 )
            v20 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)pvAttribute + 328LL))(pvAttribute, 6LL) == 0;
          v28[0] = this;
          v28[1] = a5;
          if ( a5 )
            (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
          LOBYTE(v29) = v20;
          v10 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_96f1d78dc3df8b5a1934e3378cc82626___(this, v28);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&pvAttribute);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 592);
      v10 = (*(__int64 (__fastcall **)(struct IIAMServiceProvider *, SID *, GUID *, char *))(*(_QWORD *)a5 + 24LL))(
              a5,
              &SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              (char *)this + 592);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_853ba2fb797437ec94ff4aabc4e6fa11_Traceguids,
      (_DWORD)a2,
      a3,
      *((_DWORD *)this + 12));
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v31, (unsigned int)v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v31 = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v31);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v44);
  wil::details::shared_buffer::reset(v43);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v39);
  if ( v36 == 1 )
  {
    v36 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&pvAttribute, &Context)
      && (_DWORD)pvAttribute )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v38);
  }
  v36 = 3;
  if ( v33 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v32);
  return (unsigned int)v10;
}
