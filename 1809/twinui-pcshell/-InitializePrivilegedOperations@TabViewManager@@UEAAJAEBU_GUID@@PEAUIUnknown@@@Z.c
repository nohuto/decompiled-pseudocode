/*
 * XREFs of ?InitializePrivilegedOperations@TabViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801DDFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800E70F4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedWindowGroupingOperations@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@2@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@2@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedWindowGroupingOperations@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@3@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@3@@Z @ 0x1801CEC60 (--$InitializePrivilegedOperationsHelper@V-$com_ptr_t@UIPrivilegedWindowGroupingOperations@@Uerr_.c)
 */

__int64 __fastcall TabViewManager::InitializePrivilegedOperations(
        TabViewManager *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  const char *v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService(
      (__int64)this,
      (__int64)a2,
      (__int64)a3);
    v6 = (__int64 *)((char *)this + 232);
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
    if ( v7 )
    {
      v10 = InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedWindowGroupingOperations,wil::err_exception_policy>,wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>,wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_exception_policy>>(
              a2,
              a3,
              (__int64 *)this + 28,
              (__int64 *)this + 30,
              (__int64 *)this + 31);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16F,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
    }
    else
    {
      v8 = *v6;
      *v6 = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(
        a3,
        &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
        (char *)this + 232);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x178,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v9);
  }
  return result;
}
