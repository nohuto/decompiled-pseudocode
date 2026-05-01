/*
 * XREFs of _lambda_2e0244ef9261dbf38e5b91bc065380ce_::operator() @ 0x180094BAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e0244ef9261dbf38e5b91bc065380ce___::Run @ 0x180094EE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2e0244ef9261dbf38e5b91bc065380ce___--Run.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180019450 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HWND __fastcall lambda_2e0244ef9261dbf38e5b91bc065380ce_::operator()(CMarshaledInterface *this)
{
  HWND result; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v5; // [rsp+48h] [rbp+10h] BYREF

  result = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( result )
  {
    result = (HWND)GetPropW(result, L"IsExplorerShuttingDown");
    if ( !result )
    {
      v5 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
      v3 = CMarshaledInterface::_Unmarshal(this, &GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa, &v5, 0);
      if ( v3 >= 0 )
        (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 0LL, 0LL);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          596LL,
          (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
      return (HWND)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
    }
  }
  return result;
}
