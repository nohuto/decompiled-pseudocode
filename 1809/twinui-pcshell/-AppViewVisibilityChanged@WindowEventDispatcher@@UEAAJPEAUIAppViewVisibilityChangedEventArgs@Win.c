/*
 * XREFs of ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180032D00
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x18001ADF4 (-UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Int.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18001FF28 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::AppViewVisibilityChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *a2)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  RTL_SRWLOCK *v11; // rdi
  int v12; // esi
  __int64 v13; // rbx
  _QWORD *Ptr; // r14
  _QWORD *v15; // r15
  __int64 v16; // rcx
  wil::details::in1diag3 *v17; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]
  RTL_SRWLOCK *v24; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v26; // [rsp+88h] [rbp+10h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h]

  v23 = -2LL;
  v28 = 0;
  v20 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a5447aa8_063b_4ddc_8b81_021591a43bf1,
         &v20);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3BC,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v4,
      (int)v19);
    goto LABEL_23;
  }
  v19 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)v20 + 48LL))(
         v20,
         &v19);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_23:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x3BF,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      (int)v19);
    goto LABEL_24;
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v26);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x3C2,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      (int)v19);
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x3C7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      (int)v19);
    goto LABEL_26;
  }
  if ( IsComponentAppViewAndGetKindAndModel(v19, 0LL, 0LL) )
  {
    WindowEventDispatcher::UpdateAudioState((__int64)&this[-2], (__int64)v19, (v26 != 1) + 2);
    goto LABEL_16;
  }
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))(*(_QWORD *)v19 + 48LL))(
         v19,
         &v27);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_25;
  v22 = 0LL;
  v11 = this + 56;
  AcquireSRWLockShared(this + 56);
  v24 = this + 56;
  v12 = v27;
  v13 = 0LL;
  v21 = 0LL;
  v28 = 2;
  Ptr = this[43].Ptr;
  v15 = this[44].Ptr;
  while ( Ptr != v15 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 272LL))(*Ptr) == v12 )
    {
      v16 = *Ptr;
      v13 = v16;
      v21 = *Ptr;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      break;
    }
    ++Ptr;
  }
  v22 = v13;
  v17 = retaddr;
  if ( !v13 )
  {
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x3CD,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      (int)v19);
    __debugbreak();
    JUMPOUT(0x1800BEE23LL);
  }
  if ( v11 )
    ReleaseSRWLockShared(v11);
  (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)v13 + 304LL))(v13, 1LL, v26 == 1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_16:
  if ( v19 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return 0LL;
}
