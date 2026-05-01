/*
 * XREFs of ?OnPackageUninstalling@CortanaStoreAppExperienceManager@@AEAAJPEAUIPackageCatalog@ApplicationModel@Windows@@PEAUIPackageUninstallingEventArgs@34@@Z @ 0x1801DCB10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801DB160 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaStoreAppExperienceManager::OnPackageUninstalling(
        CortanaStoreAppExperienceManager *this,
        struct Windows::ApplicationModel::IPackageCatalog *a2,
        struct Windows::ApplicationModel::IPackageUninstallingEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  _QWORD *v7; // rbx
  __int64 (__fastcall *v8)(_QWORD *, HSTRING *); // rdi
  int v9; // eax
  const WCHAR *StringRawBuffer; // rax
  CortanaStoreAppHelper *v11; // rcx
  const WCHAR *v12; // rax
  _QWORD *v13; // rcx
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HSTRING string; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v18; // [rsp+68h] [rbp+28h] BYREF

  v15[1] = -2LL;
  CortanaStoreAppExperienceManager::CheckThread(this);
  v15[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::IPackageUninstallingEventArgs *, __int64 *))(*(_QWORD *)a3 + 56LL))(
         a3,
         v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v15[0] + 48LL))(v15[0], &v18);
    v5 = v6;
    if ( v6 >= 0 )
    {
      string = 0LL;
      v7 = v18;
      v8 = *(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v18 + 104LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v9 = v8(v7, &string);
      v5 = v9;
      if ( v9 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( CompareStringOrdinal(StringRawBuffer, -1, L"Microsoft.549981C3F5F10_8wekyb3d8bbwe", -1, 1) == 2
          || (v12 = WindowsGetStringRawBuffer(string, 0LL),
              CompareStringOrdinal(v12, -1, L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m", -1, 1) == 2) )
        {
          CortanaStoreAppHelper::UpdateReplaceDecision(v11);
        }
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
      }
      WindowsDeleteString(string);
      string = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    }
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  return v5;
}
