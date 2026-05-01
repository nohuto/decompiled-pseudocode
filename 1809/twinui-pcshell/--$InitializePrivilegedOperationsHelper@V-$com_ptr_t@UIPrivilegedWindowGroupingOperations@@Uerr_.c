/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedWindowGroupingOperations@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@2@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@2@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedWindowGroupingOperations@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@3@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@3@@Z @ 0x1801CEC60
 * Callers:
 *     ?InitializePrivilegedOperations@TabViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801DDFC0 (-InitializePrivilegedOperations@TabViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@2@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@3@@Z @ 0x1801CEBE4 (--$InitializePrivilegedOperationsHelper@V-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exce.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedWindowGroupingOperations,wil::err_exception_policy>,wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>,wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_exception_policy>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v5; // rax
  __int64 v8; // rcx

  v5 = *a1 - *(_QWORD *)&GUID_b815c956_b344_4bad_a85b_b492df0f9d1c.Data1;
  if ( *a1 == *(_QWORD *)&GUID_b815c956_b344_4bad_a85b_b492df0f9d1c.Data1 )
    v5 = a1[1] - *(_QWORD *)GUID_b815c956_b344_4bad_a85b_b492df0f9d1c.Data4;
  if ( v5 )
    return InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>,wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_exception_policy>>(
             a1,
             a2,
             a4,
             a5);
  v8 = *a3;
  *a3 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  (**a2)(a2, &GUID_b815c956_b344_4bad_a85b_b492df0f9d1c, a3);
  return 0LL;
}
