/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@2@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@3@@Z @ 0x1801CEBE4
 * Callers:
 *     ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedWindowGroupingOperations@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@2@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@2@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedWindowGroupingOperations@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@3@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@3@@Z @ 0x1801CEC60 (--$InitializePrivilegedOperationsHelper@V-$com_ptr_t@UIPrivilegedWindowGroupingOperations@@Uerr_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801CEB6C (--$InitializePrivilegedOperationsHelper@V-$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exc.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>,wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_exception_policy>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        __int64 *a4)
{
  __int64 v5; // rax
  __int64 v7; // rcx

  v5 = *a1 - *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1;
  if ( *a1 == *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1 )
    v5 = a1[1] - *(_QWORD *)GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data4;
  if ( v5 )
    return InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_exception_policy>,>(
             a1,
             a2,
             a4);
  v7 = *a3;
  *a3 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  (**a2)(a2, &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2, a3);
  return 0LL;
}
