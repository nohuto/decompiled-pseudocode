/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_0eb1abbb554f926d21a7203bcccf010e___ @ 0x1803B2760
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1803B2504 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_0eb1abbb554f926d21a7203bcccf010e___(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  void **v6; // [rsp+20h] [rbp-48h] BYREF
  void **v7; // [rsp+28h] [rbp-40h] BYREF
  void **v8; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF

  v6 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  v3 = v9;
  v7 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  v8 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::`vftable';
  v9[0] = &v6;
  v9[1] = &v7;
  v9[2] = &v8;
  while ( 1 )
  {
    v4 = *v3;
    if ( *a2 <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) )
        break;
    }
    if ( ++v3 == &v10 )
      return 0;
  }
  return 1;
}
