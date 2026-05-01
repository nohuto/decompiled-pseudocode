/*
 * XREFs of ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802FC650
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018F144 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180191B20 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802D24BC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802D2F28 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x1802E78FC (-CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@I.c)
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___ @ 0x1802FB44C (MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___.c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::_lambda_237a64fcb5f24c6cb49474a7b0122401_ @ 0x1802FB5A0 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--_lambda_237a64fcb5f24c6cb49474a7b0122401_.c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_ @ 0x1802FB904 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--__lambda_237a64fcb5f24c6cb49474a7b0122401_.c)
 *     ??1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802FB9B0 (--1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x1802FC080 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1802FCDEC (-StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x180309AC0 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall XamlSnapAssistViewHost::Show(__int64 a1, int *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // r15d
  void *v6; // rax
  void *v7; // rbx
  __int64 v8; // rdx
  __int64 *v9; // r13
  __m128i v10; // xmm6
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64); // rax
  int v14; // eax
  unsigned int v15; // ebx
  struct _RTL_CRITICAL_SECTION *v16; // rcx
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 v25; // r13
  int XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401; // eax
  __int64 v27; // rdi
  int v28; // eax
  int v29[2]; // [rsp+30h] [rbp-258h] BYREF
  __int128 v30; // [rsp+40h] [rbp-248h] BYREF
  __m128i v31; // [rsp+50h] [rbp-238h] BYREF
  int v32[2]; // [rsp+60h] [rbp-228h] BYREF
  int v33; // [rsp+68h] [rbp-220h]
  int v34; // [rsp+6Ch] [rbp-21Ch]
  void *v35; // [rsp+70h] [rbp-218h] BYREF
  LPCRITICAL_SECTION v36; // [rsp+78h] [rbp-210h]
  int v37; // [rsp+80h] [rbp-208h]
  int v38; // [rsp+88h] [rbp-200h]
  int v39; // [rsp+8Ch] [rbp-1FCh]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-1F8h]
  __int64 v41[2]; // [rsp+98h] [rbp-1F0h] BYREF
  char v42; // [rsp+A8h] [rbp-1E0h]
  __int64 v43; // [rsp+B0h] [rbp-1D8h]
  __m128i v44; // [rsp+C0h] [rbp-1C8h] BYREF
  _QWORD v45[6]; // [rsp+D0h] [rbp-1B8h] BYREF
  _QWORD v46[40]; // [rsp+100h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v43 = -2LL;
  *(_QWORD *)&v30 = a1;
  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  lpCriticalSection = v4;
  v36 = v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v37 = v5;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v46,
    (__int64)"ShowSnapAssist");
  v46[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
  MultitaskingViewTelemetry::ShowSnapAssist::StartActivity((MultitaskingViewTelemetry::ShowSnapAssist *)v46);
  v41[1] = a1;
  v42 = 1;
  try
  {
    v35 = Platform::Details::Heap::Allocate(0x78uLL, 0xC0uLL);
    v32[0] = *a2;
    v32[1] = a2[1];
    v33 = a2[2];
    v34 = a2[3];
    v6 = (void *)XamlSnapAssistViewController::XamlSnapAssistViewController(
                   (_DWORD)v35,
                   a1,
                   *(_QWORD *)(a1 + 184),
                   (unsigned int)v32,
                   *(_QWORD *)(a1 + 80),
                   *(_QWORD *)(a1 + 176));
    v7 = v6;
    v35 = v6;
    if ( v6 )
      v8 = (__int64)v6 + 16;
    else
      v8 = 0LL;
    v9 = (__int64 *)(a1 + 144);
    __abi_winrt_ptr_assign((__int64 *)(a1 + 144), v8);
    if ( v7 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    v10 = *(__m128i *)a2;
    v31 = *(__m128i *)a2;
    v38 = *a2;
    v39 = a2[1];
    *(_QWORD *)v29 = 0LL;
    v11 = *(_QWORD *)(a1 + 168);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
    v12 = v11;
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL);
  }
  catch ( ... )
  {
    v31.m128i_i32[0] = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x6C,
                         (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                         (const char *)&GUID_880b26f8_9197_43d0_8045_8702d0d72000);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(v30);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v46);
    if ( v37 >= 0 )
      LeaveCriticalSection(v36);
    return v31.m128i_u32[0];
  }
  v14 = v13(v12);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v46);
    if ( v5 < 0 )
      return v15;
    goto LABEL_10;
  }
  v18 = _mm_cvtsi128_si32(v10);
  *(float *)&v30 = (float)v18;
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
  *((float *)&v30 + 1) = (float)v19;
  *((float *)&v30 + 2) = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)) - v18);
  *((float *)&v30 + 3) = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v10, 12)) - v19);
  v20 = Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
          *(_QWORD *)(a1 + 152),
          &v30);
  *(_QWORD *)&v30 = v20;
  v21 = __abi_winrt_ptr_ctor(v20);
  v41[0] = v21;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v22 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 136));
  *(_QWORD *)&v30 = v22;
  v23 = __abi_winrt_ptr_ctor(*v9);
  v35 = (void *)v23;
  v24 = __abi_winrt_cast_to(
          0,
          (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))*v9,
          (__int64)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
  *(_QWORD *)v32 = v24;
  v25 = __abi_winrt_ptr_ctor(v24);
  *(_QWORD *)v32 = v25;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  lambda_237a64fcb5f24c6cb49474a7b0122401_::_lambda_237a64fcb5f24c6cb49474a7b0122401_(
    (__int64)v45,
    &v31,
    (__int64 *)&v30,
    (__int64 *)&v35,
    (__int64 *)v32,
    v41);
  v31.m128i_i64[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31.m128i_i64);
  XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401 = MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401_(
                                                                                     v31.m128i_i64,
                                                                                     (__int64)v45);
  v15 = XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401;
  if ( XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31.m128i_i64);
    lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(v45);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v46);
    if ( v37 < 0 )
      return v15;
LABEL_10:
    v16 = v4;
LABEL_11:
    LeaveCriticalSection(v16);
    return v15;
  }
  v44 = v10;
  v27 = *(_QWORD *)(a1 + 160);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 192));
  v28 = (*(__int64 (__fastcall **)(__int64, __int64, __m128i *, GUID *, __int64))(*(_QWORD *)v27 + 24LL))(
          v27,
          v31.m128i_i64[0],
          &v44,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          a1 + 192);
  v15 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31.m128i_i64);
    lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(v45);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v46);
    if ( v37 < 0 )
      return v15;
    v16 = lpCriticalSection;
    goto LABEL_11;
  }
  *(_BYTE *)(a1 + 112) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
    *(_QWORD *)(a1 + 88),
    *(unsigned int *)(a1 + 72));
  v42 = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v46);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31.m128i_i64);
  lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(v45);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
  MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v46);
  if ( v37 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
