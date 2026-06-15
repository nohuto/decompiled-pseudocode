/*
 * XREFs of _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14003735C
 * Callers:
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x140037870 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_70348e31779f8b8cef919996b578f4f9_::operator()(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1[1];
  v4 = 0LL;
  v2 = *(_QWORD *)(*a1 + 400LL);
  v4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 40LL))(v2, v1, &v4);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
