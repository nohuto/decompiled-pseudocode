/*
 * XREFs of ?OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ @ 0x180173360
 * Callers:
 *     ?OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801734A0 (-OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnSetForegroundFailed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180173530 (-OnSetForegroundFailed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800EFCD4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$ExperienceManager_OnDismiss@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z @ 0x1801702B8 (--$ExperienceManager_OnDismiss@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1803AE7C4 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQuickConnectExperienceManager::OnDismiss(CQuickConnectExperienceManager *this)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // edi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 6) )
    return 0LL;
  if ( !*((_BYTE *)this + 392) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 48) + 24LL))(
           *((_QWORD *)this + 48),
           0xFFFFLL);
    wil::details::in1diag3::Log_Hr(
      retaddr,
      559LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)v2);
  }
  if ( *((_QWORD *)this + 37) )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 37))(
           *((_QWORD *)this + 37),
           &GUID_cb2ddc0d_d9ed_46c2_955a_d9eb426a8595,
           &v10) >= 0 )
    {
      LOBYTE(v3) = 1;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 56LL))(v10, v3);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23D,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        return v5;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  QuickConnectTelemetry::ExperienceManager_OnDismiss<_GUID &>((__int128 *)((char *)this + 280));
  v7 = CSingleViewShellExperience::DestroyView((CQuickConnectExperienceManager *)((char *)this + 64));
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
