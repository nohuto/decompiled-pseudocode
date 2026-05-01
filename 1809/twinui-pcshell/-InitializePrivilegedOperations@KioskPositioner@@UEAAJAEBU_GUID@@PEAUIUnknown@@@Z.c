/*
 * XREFs of ?InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180098840
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801CEB6C (--$InitializePrivilegedOperationsHelper@V-$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exc.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall KioskPositioner::InitializePrivilegedOperations(
        KioskPositioner *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  int v3; // eax
  __int64 v5; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v8; // [rsp+40h] [rbp+8h]

  v3 = InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_exception_policy>,>(
         a2,
         a3,
         (char *)this + 72);
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    971LL,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
    (const char *)(unsigned int)v3);
  __debugbreak();
  *(_DWORD *)(v5 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(v5 + 56),
                           (void *)0x3CE,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v6);
  return v8;
}
