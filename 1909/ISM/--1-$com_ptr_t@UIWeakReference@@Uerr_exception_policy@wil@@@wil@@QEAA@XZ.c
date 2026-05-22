/*
 * XREFs of ??1?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000A22C
 * Callers:
 *     _dynamic_atexit_destructor_for__MPCManagerClientFactory::m_spThreadReference__ @ 0x18003DCE0 (_dynamic_atexit_destructor_for__MPCManagerClientFactory--m_spThreadReference__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::~com_ptr_t<IWeakReference,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
