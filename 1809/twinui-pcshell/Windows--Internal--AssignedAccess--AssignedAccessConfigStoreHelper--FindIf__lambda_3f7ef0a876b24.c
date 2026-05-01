/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_3f7ef0a876b24866580baa856f8f6df1___ @ 0x1803B2824
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1803B2504 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_3f7ef0a876b24866580baa856f8f6df1___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned __int8 (__fastcall ***v4)(_QWORD, __int64); // rsi
  _DWORD *v5; // rbx
  __int64 v6; // rbp
  void **v8; // [rsp+20h] [rbp-58h] BYREF
  void **v9; // [rsp+28h] [rbp-50h] BYREF
  void **v10; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF

  v8 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  v3 = v11;
  v9 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  v10 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::`vftable';
  v11[0] = &v8;
  v11[1] = &v9;
  v11[2] = &v10;
  while ( 1 )
  {
    v4 = (unsigned __int8 (__fastcall ***)(_QWORD, __int64))*v3;
    v5 = *(_DWORD **)a2;
    v6 = *(_QWORD *)(a2 + 8);
    if ( *v5 <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3) )
    {
      if ( (**v4)(v4, v6) )
        break;
    }
    if ( ++v3 == &v12 )
      return 0;
  }
  return 1;
}
