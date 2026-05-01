/*
 * XREFs of ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000D4F8
 * Callers:
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CC80 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_21b79cea9a56d6bbfbb4614e776bd7a3___ @ 0x18000D004 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_21b79cea9a56d6bbfbb4614e776bd7a3___.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18000FC48 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180016B4C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180032DF0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180057C60 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006E8A0 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012BE64 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     WPP_SF_Sdd @ 0x1801401A0 (WPP_SF_Sdd.c)
 *     WPP_SF_Sd @ 0x18016B368 (WPP_SF_Sd.c)
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
  __int64 (__fastcall *v10)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *); // rbx
  int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, const unsigned __int16 *, _QWORD, LPVOID *); // rdi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  char *v16; // rcx
  signed __int64 v17; // r9
  __int16 v18; // ax
  char *v19; // rax
  struct IIAMServiceProvider *v20; // rax
  LPVOID v21; // rbx
  HWND v22; // rcx
  bool v23; // r15
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v25)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v26)(struct IIAMServiceProvider *, SID *, GUID *, char *); // rdi
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  __int64 pvAttribute; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  struct IIAMServiceProvider *v31; // [rsp+50h] [rbp-B8h] BYREF
  HWND hwnd; // [rsp+58h] [rbp-B0h] BYREF
  struct IIAMServiceProvider *v33; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h]
  __int64 v36; // [rsp+80h] [rbp-88h]
  void **v37; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v38[3]; // [rsp+A0h] [rbp-68h] BYREF
  int v39; // [rsp+B8h] [rbp-50h]
  int *v40; // [rsp+C0h] [rbp-48h]
  int *v41; // [rsp+C8h] [rbp-40h]
  int v42; // [rsp+D0h] [rbp-38h] BYREF
  char v43; // [rsp+D4h] [rbp-34h]
  char v44[32]; // [rsp+D8h] [rbp-30h] BYREF
  int v45; // [rsp+F8h] [rbp-10h] BYREF
  const char *v46; // [rsp+100h] [rbp-8h]
  __int64 v47; // [rsp+108h] [rbp+0h]
  char v48; // [rsp+110h] [rbp+8h]
  __int64 v49; // [rsp+118h] [rbp+10h]
  char v50[144]; // [rsp+120h] [rbp+18h] BYREF
  _QWORD v51[3]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v52; // [rsp+1C8h] [rbp+C0h] BYREF

  v36 = -2LL;
  v38[0] = 0LL;
  v38[1] = &v37;
  v38[2] = 0LL;
  v39 = 0;
  v40 = &v45;
  v41 = &v42;
  v42 = 0;
  v43 = 0;
  v48 = 0;
  v45 = 0;
  v46 = "Initialization";
  v47 = 0LL;
  v49 = 1LL;
  v51[0] = 0LL;
  memset_0(v50, 0, sizeof(v50));
  v51[1] = 0LL;
  v51[2] = 0LL;
  v52 = 0LL;
  v37 = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)&v37, a2);
  *((_BYTE *)this + 53) = a4;
  v33 = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
  v30 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *))(*(_QWORD *)a5 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  v11 = v10(a5, &GUID_88b25c81_171b_48b0_91d6_c75846bcf035, &GUID_88b25c81_171b_48b0_91d6_c75846bcf035, &v30);
  if ( v11 >= 0 )
  {
    Context = 0LL;
    v12 = v30;
    v13 = *(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, LPVOID *))(*(_QWORD *)v30 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
    v11 = v13(v12, a2, a3, &Context);
    if ( v11 < 0 )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_94922da7bd9137d502a338501bb650ae_Traceguids,
          (_DWORD)a2,
          a3);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(LPVOID, HWND *))(*(_QWORD *)Context + 24LL))(Context, &hwnd);
      if ( v11 >= 0 )
      {
        if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr)
          && DwmGetWindowAttribute(hwnd, 0xEu, &pvAttribute, 4u) >= 0 )
        {
          *((_BYTE *)this + 52) = (pvAttribute & 2) == 0;
        }
        v11 = 0;
        if ( a2 )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( a2[v14] );
          v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
                  (char *)this + 664,
                  v14);
          if ( v11 >= 0 )
          {
            v15 = v14 + 1;
            v16 = (char *)*((_QWORD *)this + 83);
            if ( v14 > 0x7FFFFFFE )
            {
              if ( v14 != -1LL )
                *(_WORD *)v16 = 0;
            }
            else
            {
              v17 = (char *)a2 - v16;
              do
              {
                if ( v15 == 1 )
                  break;
                v18 = *(_WORD *)&v16[v17];
                if ( !v18 )
                  break;
                *(_WORD *)v16 = v18;
                v16 += 2;
                --v15;
              }
              while ( v15 );
              v19 = v16 - 2;
              if ( v15 )
                v19 = v16;
              *(_WORD *)v19 = 0;
            }
            *((_QWORD *)this + 84) = v14;
          }
        }
        else
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((char *)this + 664);
        }
        if ( v11 >= 0 )
        {
          v20 = (struct IIAMServiceProvider *)*((_QWORD *)this + 15);
          v21 = Context;
          if ( v20 != Context )
          {
            if ( Context )
            {
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 8LL))(Context);
              v20 = (struct IIAMServiceProvider *)*((_QWORD *)this + 15);
            }
            v31 = v20;
            *((_QWORD *)this + 15) = v21;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          }
          v22 = hwnd;
          *((_QWORD *)this + 16) = hwnd;
          *((_QWORD *)this + 86) = a6;
          GetWindowBand(v22, (char *)this + 216);
          v31 = a5;
          if ( a5 )
            (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
          v23 = 0;
          pvAttribute = 0LL;
          v24 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 86);
          v25 = **v24;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&pvAttribute);
          if ( v25(v24, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &pvAttribute) >= 0 )
            v23 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)pvAttribute + 328LL))(pvAttribute, 6LL) == 0;
          v34[0] = (__int64)this;
          v34[1] = (__int64)a5;
          if ( a5 )
            (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
          LOBYTE(v35) = v23;
          v11 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_21b79cea9a56d6bbfbb4614e776bd7a3___(
                  (__int64 *)this,
                  v34);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&pvAttribute);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
    if ( v11 >= 0 )
    {
      v26 = *(__int64 (__fastcall **)(struct IIAMServiceProvider *, SID *, GUID *, char *))(*(_QWORD *)a5 + 24LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 696);
      v11 = v26(
              a5,
              &SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              (char *)this + 696);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_94922da7bd9137d502a338501bb650ae_Traceguids,
      (_DWORD)a2,
      a3,
      *((_DWORD *)this + 12));
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v37, (unsigned int)v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  v37 = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v37);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v52);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v51);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((wil::details::StoredCallContextInfo *)&v45);
  if ( v42 == 1 )
  {
    v42 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&pvAttribute, &Context)
      && (_DWORD)pvAttribute )
    {
      Context = &qword_1805C1F08;
      qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
      qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v44);
  }
  v42 = 3;
  if ( v39 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v38);
  return (unsigned int)v11;
}
