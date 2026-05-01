/*
 * XREFs of ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1800637A4
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180018180 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180019950 (-AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@Win.c)
 *     ?AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18029A870 (-AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowMana.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18029AAF0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18029B050 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall IsComponentAppViewAndGetKindAndModel(
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a1,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **a3)
{
  __int64 (*v6)(void); // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v13; // rcx
  char v14; // bl
  int v16; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v17; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v20; // [rsp+58h] [rbp+28h] BYREF
  int v21; // [rsp+60h] [rbp+30h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v22; // [rsp+68h] [rbp+38h] BYREF

  v18[1] = -2LL;
  if ( a3 )
    *a3 = 0LL;
  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( a2 )
  {
    v16 = v6();
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17E,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
        (const char *)(unsigned int)v16,
        v18[0]);
      __debugbreak();
    }
    v21 = *(_DWORD *)a2;
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))v6)(
           a1,
           &v21);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x184,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
        (const char *)(unsigned int)v7,
        v18[0]);
      goto LABEL_20;
    }
  }
  v20 = 0;
  v8 = *(_QWORD *)a1;
  v22 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **))(v8 + 64))(
         a1,
         &v22);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x18B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v9,
      v18[0]);
LABEL_21:
    wil::details::in1diag3::_Log_Hr(
      v12,
      (void *)0x195,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v11,
      v18[0]);
    goto LABEL_9;
  }
  if ( v21 != 1 )
    goto LABEL_11;
  v18[0] = 0LL;
  if ( (**(int (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *, GUID *, _QWORD *))v22)(
         v22,
         &GUID_43c44496_73a7_4b25_b876_1df2708e3e45,
         v18) >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v18[0] + 240LL))(v18[0], &v20);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_21;
  }
LABEL_9:
  if ( v18[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
LABEL_11:
  if ( a3 )
  {
    v17 = v22;
    v13 = 0LL;
    v22 = 0LL;
    *a3 = v17;
  }
  else
  {
    v13 = v22;
  }
  v14 = v20;
  if ( v13 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *))(*(_QWORD *)v13 + 16LL))(v13);
  return v14;
}
