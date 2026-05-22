/*
 * XREFs of ?GetFallbackTarget@ContextualProcessorBuffer@@UEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@XZ @ 0x1800FA920
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall ContextualProcessorBuffer::GetFallbackTarget(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 80);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
  return a2;
}
