/*
 * XREFs of ?get@ErrorCode@IAsyncInfo@Foundation@Windows@@UE$AAA?AVHResult@34@XZ @ 0x1802977A0
 * Callers:
 *     _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator() @ 0x180294194 (_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_DWORD *__fastcall Windows::Foundation::IAsyncInfo::ErrorCode::get(__int64 a1, _DWORD *a2)
{
  int v3; // eax

  *a2 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  return a2;
}
