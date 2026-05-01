/*
 * XREFs of ?OnViewRequestNavigate@CortanaStoreAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801BE588
 * Callers:
 *     ?OnViewEvent@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801BE460 (-OnViewEvent@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18003C800 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ @ 0x18003DB2C (-IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1801BBE74 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?BringToForeground@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BBFE4 (-BringToForeground@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1801BD300 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801BD9FC (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BE850 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801BEB98 (-ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaStoreAppExperienceManager::OnViewRequestNavigate(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  char v4; // al
  HSTRING Reserved1; // rdx
  HSTRING_HEADER *v6; // rax
  __int64 v7; // r8
  int v8; // eax
  int v9; // edi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v15; // rdx
  CortanaStoreAppExperienceManager *v16; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v18[2])(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER v19; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v18[1] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))-2LL;
  if ( !CortanaUndockingHelpers::IsSystemCortanaAppReplaced(this, (bool *)a2) )
    return 0LL;
  v4 = 0;
  v17[0] = 0;
  if ( a2 )
  {
    v18[0] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v18);
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &v19,
                           &CortanaStoreAppExperienceManager::s_PreLaunchActivationKey)[1].Reserved.Reserved1;
    if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v18,
           Reserved1) )
    {
      v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
             &v19,
             &CortanaStoreAppExperienceManager::s_PreLaunchActivationKey);
      v8 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
             v18,
             (__int64)v6[1].Reserved.Reserved1,
             v7,
             v17);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x32D,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
        return (unsigned int)v9;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
    v4 = v17[0];
  }
  v11 = *((_QWORD *)this + 31);
  if ( !v11 )
    return 0LL;
  if ( !v4 )
  {
    if ( *((_BYTE *)this + 274)
      || *((_BYTE *)this + 275)
      || *((_BYTE *)this + 273) && !CortanaHelpers::AllowCortanaAboveLock() )
    {
      return 0LL;
    }
    *((_BYTE *)this + 276) = *((_BYTE *)this + 273);
    v9 = CortanaStoreAppExperienceManager::PositionCortanaWindow(this);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 392LL))(*((_QWORD *)this + 31), 4LL);
      if ( v9 >= 0 )
      {
        v9 = CortanaStoreAppExperienceManager::BringToForeground(this, v15);
        if ( v9 >= 0 )
        {
          CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility((const RECT *)this, 1u);
          CortanaStoreAppExperienceManager::ReportActiveExperienceAboveLock(v16, *((_BYTE *)this + 273));
          return 0LL;
        }
        v14 = 838LL;
      }
      else
      {
        v14 = 837LL;
      }
    }
    else
    {
      v14 = 836LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 392LL))(v11, 3LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x335,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  return 0LL;
}
