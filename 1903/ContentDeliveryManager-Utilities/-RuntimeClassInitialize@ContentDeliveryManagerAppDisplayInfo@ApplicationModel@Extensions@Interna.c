/*
 * XREFs of ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x18009F7B0
 * Callers:
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x18009E9C4 (--$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180054AE4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x18009F354 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ @ 0x18009F700 (--1MRTHelperBase@ShellMRTHelper@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *this,
        const unsigned __int16 *a2,
        struct Windows::ApplicationModel::IAppDisplayInfo *a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  WCHAR *v13; // rbx
  HRESULT String; // eax
  UINT32 v15; // edx
  const WCHAR *v16; // rcx
  wil::details::in1diag3 *v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-78h] BYREF
  __int64 v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  _QWORD v24[6]; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  LPVOID pv; // [rsp+C8h] [rbp+20h] BYREF

  v5 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppDisplayInfo *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0x10000000000LL;
  memset(v24, 0, sizeof(v24));
  v6 = -1LL;
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         v24,
         (__int64)a2,
         0xFFFFFFFFFFFFFFFFuLL);
  v10 = v7;
  if ( v7 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.h",
      (const char *)(unsigned int)v7);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1EE,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.h",
      (const char *)(unsigned int)v10);
    goto LABEL_22;
  }
  pv = 0LL;
  v11 = ShellMRTHelper::MRTHelperBase::Resolve((__int64)&v19, v8, v9, &pv);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x43,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_23;
  }
  v13 = (WCHAR *)pv;
  if ( pv )
  {
    do
      ++v6;
    while ( *((_WORD *)pv + v6) );
    if ( v6 > 0xFFFFFFFF )
    {
      String = -2147024362;
      goto LABEL_17;
    }
    WindowsDeleteString(*((HSTRING *)this + 10));
    v15 = v6;
    v16 = v13;
  }
  else
  {
    WindowsDeleteString(*((HSTRING *)this + 10));
    v15 = 0;
    v16 = &Src;
  }
  *((_QWORD *)this + 10) = 0LL;
  String = WindowsCreateString(v16, v15, (HSTRING *)this + 10);
LABEL_17:
  v17 = retaddr;
  if ( String < 0 )
  {
LABEL_23:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x44,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)String);
    __debugbreak();
    JUMPOUT(0x18009F9BFLL);
  }
  if ( v13 )
    CoTaskMemFree(v13);
  ShellMRTHelper::MRTHelperBase::~MRTHelperBase((ShellMRTHelper::MRTHelperBase *)&v19);
  return 0LL;
}
