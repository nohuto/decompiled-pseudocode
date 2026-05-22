/*
 * XREFs of ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x1800C217C
 * Callers:
 *     ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x180006F30 (-GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_DWMInputRouter::DeviceDisplayMapping_______lambda_94b99de26b03220c9be9e61ba1968402___ @ 0x1800C1FE8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_DWMInputRouter--DeviceD.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800F961C (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

ContextualProcessorInitialState *__fastcall ContextualProcessorInitialState::ContextualProcessorInitialState(
        ContextualProcessorInitialState *this,
        const struct ContextualProcessorInitialState *a2)
{
  __int64 *v3; // rcx

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = (__int64 *)((char *)this + 8);
  *v3 = *((_QWORD *)a2 + 1);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v3);
  return this;
}
