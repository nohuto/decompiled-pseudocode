/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802252E4
 * Callers:
 *     ?InitializePrivilegedOperations@TabViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1802315D0 (-InitializePrivilegedOperations@TabViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18039D2D0 (-InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_exception_policy>,>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3)
{
  __int64 v4; // rax
  void (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rax
  __int64 v7; // rcx
  void (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rsi

  v4 = *a1 - *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1;
  if ( *a1 == *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1 )
    v4 = a1[1] - *(_QWORD *)GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data4;
  if ( v4 )
    return 2147500033LL;
  v6 = *a2;
  v7 = *a3;
  *a3 = 0LL;
  v8 = *v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8(a2, &GUID_bf813bd9_98b6_45da_a60e_ac905433da90, a3);
  return 0LL;
}
