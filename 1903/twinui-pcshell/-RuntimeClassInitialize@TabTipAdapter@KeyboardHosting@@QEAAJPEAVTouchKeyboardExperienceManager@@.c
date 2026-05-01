/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803248B0
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x18030C2E0 (--$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18013CA4C (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x18031BD90 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18031E73C (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x1803208D0 (-InternalRelease@-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x180324FEC (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180404C68 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x180404DF0 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180404EB0 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::TabTipAdapter::RuntimeClassInitialize(
        KeyboardHosting::TabTipAdapter *this,
        struct TouchKeyboardExperienceManager *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  HSTRING v16; // rbx
  int ActivationFactory; // eax
  __int64 v18; // rdx
  __int64 v19; // rdi
  bool v20; // dl
  HSTRING v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h]
  HSTRING string; // [rsp+88h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-78h] BYREF
  wchar_t v36[256]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v33 = -2LL;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      62LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      a4);
    __debugbreak();
  }
  LODWORD(v27) = 0;
  v32 = 0LL;
  *((_QWORD *)this + 7) = a2;
  Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease((__int64 *)this + 12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::TabTipAdapterPolicy,KeyboardHosting::TabTipAdapterPolicy,>((volatile signed __int64 **)this + 12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (_QWORD *)((char *)this + 80);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
    v5 = CoreUICreate((char *)this + 80);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 71LL;
      goto LABEL_13;
    }
    v9 = (_QWORD *)((char *)this + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
    v5 = CoreUIFactoryCreate((char *)this + 64);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 72LL;
      goto LABEL_13;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*v9 + 24LL))(
           *v9,
           &GUID_8b1dca19_456d_4f77_b1e3_0e88328842f9,
           &v27);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 76LL;
      goto LABEL_13;
    }
    v5 = SharedMessagePortRefPtr::Initialize(&v32);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 78LL;
      goto LABEL_13;
    }
    memset_0(v36, 0, 0x1FEuLL);
    GetDesktopUniqueName(L"System\\RemoteTabTipAdapter", v36, 0xFFu);
    v28 = 0LL;
    v10 = *v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v28);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 85LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v11);
LABEL_49:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      goto LABEL_50;
    }
    v29 = 0LL;
    if ( (*(int (__fastcall **)(__int64, wchar_t *, __int64, __int64 *))(*(_QWORD *)v28 + 24LL))(v28, v36, 1LL, &v29) >= 0
      && v29 )
    {
      wil::details::in1diag3::Log_IfFailedMsg(
        retaddr,
        90LL,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL,
        (int)"Endpoint %S is already exists",
        (const char *)v36);
      v13 = (*(__int64 (__fastcall **)(__int64, wchar_t *, __int64))(*(_QWORD *)v28 + 48LL))(v28, v36, 1LL);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5B,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v13);
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 152LL))(*v8, v29);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5C,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v14);
      v29 = 0LL;
    }
    v15 = *v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, wchar_t *, _QWORD, char *))(*(_QWORD *)v15 + 32LL))(
            v15,
            ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
            0LL,
            (unsigned int)v27,
            v36,
            *((_QWORD *)&v32 + 1),
            (char *)this + 72);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 102LL;
      goto LABEL_25;
    }
    SharedMessagePortRefPtr::Release((SharedMessagePortRefPtr *)&v32);
    v31 = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.UI.Internal.Text.Core.CoreKeyboardManager",
           0x31u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v16 = string;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    ActivationFactory = RoGetActivationFactory(v16, &GUID_4781e102_173f_40ee_b985_685f98a866aa, &v31);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v18 = 109LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_48:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      goto LABEL_49;
    }
    v19 = v31;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 48LL))(v19, (char *)this + 24);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v18 = 110LL;
      goto LABEL_36;
    }
    ActivationFactory = KeyboardHosting::TabTipAdapter::AddEventHandlersFromCoreKeyboardManager(this);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v18 = 111LL;
      goto LABEL_36;
    }
    ActivationFactory = KeyboardHosting::TabTipAdapter::SetTrackPosition(this, v20, 0);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v18 = 114LL;
      goto LABEL_36;
    }
    v30 = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.UI.Internal.Text.Core.CoreInputViewManager",
           0x32u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v21 = string;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    v22 = RoGetActivationFactory(v21, &GUID_6fa49ca9_046b_4d5c_b942_7dbc066f6579, &v30);
    v6 = v22;
    if ( v22 >= 0 )
    {
      v24 = v30;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
      v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v24 + 48LL))(v24, (char *)this + 32);
      v6 = v22;
      if ( v22 >= 0 )
      {
        v25 = *v8;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
        v22 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), KeyboardHosting::TabTipAdapter *, char *))(*(_QWORD *)v25 + 128LL))(
                v25,
                KeyboardHosting::TabTipAdapter::TimerDeferredShowRequestCallback,
                this,
                (char *)this + 88);
        v6 = v22;
        if ( v22 >= 0 )
        {
          v6 = 0;
          goto LABEL_47;
        }
        v23 = 126LL;
      }
      else
      {
        v23 = 121LL;
      }
    }
    else
    {
      v23 = 120LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v22);
LABEL_47:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    goto LABEL_48;
  }
  v7 = 69LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
LABEL_50:
  SharedMessagePortRefPtr::Release((SharedMessagePortRefPtr *)&v32);
  return v6;
}
