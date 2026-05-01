/*
 * XREFs of ?OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1801C1410
 * Callers:
 *     ?OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801C1560 (-OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnSetForegroundFailed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C15F0 (-OnSetForegroundFailed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$ExperienceManager_OnDismiss@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z @ 0x1801BE2E8 (--$ExperienceManager_OnDismiss@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1804300B8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQuickConnectExperienceManager::OnDismiss(CQuickConnectExperienceManager *this)
{
  unsigned int v2; // eax
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 6) )
  {
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
    v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 37);
    if ( v3 )
    {
      v11 = 0LL;
      v4 = **v3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      if ( v4(v3, &GUID_cb2ddc0d_d9ed_46c2_955a_d9eb426a8595, &v11) >= 0 )
      {
        LOBYTE(v5) = 1;
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, v5);
        v7 = v6;
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x23D,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v6);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
          return v7;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    QuickConnectTelemetry::ExperienceManager_OnDismiss<_GUID &>((__int128 *)((char *)this + 280));
    v9 = CSingleViewShellExperience::DestroyView((CQuickConnectExperienceManager *)((char *)this + 64));
    v7 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x242,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    return v7;
  }
  return 0LL;
}
