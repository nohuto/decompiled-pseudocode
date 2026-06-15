/*
 * XREFs of ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014F84
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$10 @ 0x180036835 (_CProcess--CProcess_--_1_--dtor$10.c)
 *     _CApplicationManager::OnApplicationClosed_::_1_::dtor$0 @ 0x18003703A (_CApplicationManager--OnApplicationClosed_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
    }
  }
  return result;
}
