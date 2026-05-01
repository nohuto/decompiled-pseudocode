/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801CEB6C
 * Callers:
 *     ?InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180098840 (-InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@2@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@3@@Z @ 0x1801CEBE4 (--$InitializePrivilegedOperationsHelper@V-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exce.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_exception_policy>,>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  v4 = *a1 - *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1;
  if ( *a1 == *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1 )
    v4 = a1[1] - *(_QWORD *)GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data4;
  if ( v4 )
    return 2147500033LL;
  v6 = *a3;
  *a3 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  (**a2)(a2, &GUID_bf813bd9_98b6_45da_a60e_ac905433da90, a3);
  return 0LL;
}
