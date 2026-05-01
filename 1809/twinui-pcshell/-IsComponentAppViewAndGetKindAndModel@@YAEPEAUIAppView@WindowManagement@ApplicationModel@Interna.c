/*
 * XREFs of ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18001FF28
 * Callers:
 *     ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180032D00 (-AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@Win.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006F7F0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180225870 (-AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowMana.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180225AF0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180225F90 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall IsComponentAppViewAndGetKindAndModel(
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a1,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **a3)
{
  __int64 (*v6)(void); // rax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v12; // rcx
  char v13; // bl
  int v15; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v16; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v19; // [rsp+58h] [rbp+28h] BYREF
  int v20; // [rsp+60h] [rbp+30h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v21; // [rsp+68h] [rbp+38h] BYREF

  v17[1] = -2LL;
  if ( a3 )
    *a3 = 0LL;
  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( a2 )
  {
    v15 = v6();
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17E,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
        (const char *)(unsigned int)v15,
        v17[0]);
      __debugbreak();
    }
    v20 = *(_DWORD *)a2;
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))v6)(
           a1,
           &v20);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x184,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
        (const char *)(unsigned int)v7,
        v17[0]);
      goto LABEL_20;
    }
  }
  v19 = 0;
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **))(*(_QWORD *)a1 + 64LL))(
         a1,
         &v21);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x18B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v8,
      v17[0]);
LABEL_21:
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)0x195,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v10,
      v17[0]);
    goto LABEL_9;
  }
  if ( v20 != 3 )
    goto LABEL_11;
  v17[0] = 0LL;
  if ( (**(int (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *, GUID *, _QWORD *))v21)(
         v21,
         &GUID_43c44496_73a7_4b25_b876_1df2708e3e45,
         v17) >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v17[0] + 232LL))(v17[0], &v19);
    v11 = retaddr;
    if ( v10 < 0 )
      goto LABEL_21;
  }
LABEL_9:
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
LABEL_11:
  if ( a3 )
  {
    v16 = v21;
    v12 = 0LL;
    v21 = 0LL;
    *a3 = v16;
  }
  else
  {
    v12 = v21;
  }
  v13 = v19;
  if ( v12 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *))(*(_QWORD *)v12 + 16LL))(v12);
  return v13;
}
