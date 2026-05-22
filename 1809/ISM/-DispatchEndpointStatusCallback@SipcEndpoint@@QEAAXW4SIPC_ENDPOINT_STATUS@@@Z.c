/*
 * XREFs of ?DispatchEndpointStatusCallback@SipcEndpoint@@QEAAXW4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800A16DC
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800A1F30 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SipcEndpoint::DispatchEndpointStatusCallback(unsigned __int64 a1, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 136))(
           *(_QWORD *)(a1 + 152),
           (a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64),
           a2);
}
