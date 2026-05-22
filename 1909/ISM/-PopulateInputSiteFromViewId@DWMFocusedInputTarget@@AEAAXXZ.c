/*
 * XREFs of ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800C6230
 * Callers:
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z @ 0x1800C5B78 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KKK_KKK@Z.c)
 *     ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x1800C5EB0 (-GetInputSite@DWMFocusedInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000DE7C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DFD4 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180026C98 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x18002F070 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18002F6E0 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800583F0 (-GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180058758 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 */

void __fastcall DWMFocusedInputTarget::PopulateInputSiteFromViewId(DWMFocusedInputTarget *this)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 *v5; // rsi
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rdi
  struct IViewHierarchy *v8; // rax
  int ProcessIdFromViewId; // ebx
  struct InputSiteManager *v10; // rax
  __int64 *InputSiteFromId; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 17) )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    v3 = (__int64 *)*((_QWORD *)InputSiteManager + 7);
    v4 = (__int64 *)*((_QWORD *)InputSiteManager + 8);
    while ( v3 != v4 )
    {
      if ( *(_BYTE *)(*v3 + 384)
        && *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v3 + 32)) == *((_DWORD *)this + 17) )
      {
        v13 = *v3;
        if ( *((_QWORD *)this + 12) != v13 )
        {
          v15 = v13;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
          v14 = *((_QWORD *)this + 12);
          *((_QWORD *)this + 12) = v13;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        break;
      }
      ++v3;
    }
    v5 = (__int64 *)((char *)this + 96);
    if ( !*((_QWORD *)this + 12) )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, *((_DWORD *)this + 17));
      v8 = ISMStatics::GetViewHierarchy();
      ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v8, *((_DWORD *)this + 17));
      v10 = ISMStatics::GetInputSiteManager();
      InputSiteFromId = InputSiteManager::GetInputSiteFromId(
                          (__int64)v10,
                          &v15,
                          1,
                          WindowIdFromViewId,
                          ProcessIdFromViewId);
      Microsoft::WRL::ComPtr<InputSite>::operator=(v5, (char *)InputSiteFromId);
      v12 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
}
