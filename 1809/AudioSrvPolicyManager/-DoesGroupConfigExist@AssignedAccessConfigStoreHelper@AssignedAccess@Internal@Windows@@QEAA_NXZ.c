/*
 * XREFs of ?DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180035DDC
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x180035AD4 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesGroupConfigExist(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *this)
{
  _QWORD *v2; // rbx
  char v3; // di
  __int64 v4; // rsi
  void **v6; // [rsp+20h] [rbp-48h] BYREF
  void **v7; // [rsp+28h] [rbp-40h] BYREF
  void **v8; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF

  v6 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`vftable';
  v2 = v9;
  v3 = 0;
  v7 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  v8 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::`vftable';
  v9[0] = &v6;
  v9[1] = &v7;
  v9[2] = &v8;
  while ( 1 )
  {
    v4 = *v2;
    if ( *(_DWORD *)this <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) )
        break;
    }
    if ( ++v2 == &v10 )
      return v3;
  }
  return 1;
}
