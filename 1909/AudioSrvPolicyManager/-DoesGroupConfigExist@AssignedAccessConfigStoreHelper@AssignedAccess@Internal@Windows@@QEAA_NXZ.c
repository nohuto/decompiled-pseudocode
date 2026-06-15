/*
 * XREFs of ?DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180033070
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x1800328CC (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800016DC (--3@YAXPEAX@Z.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180032CF4 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180032DA4 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180032E54 (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesGroupConfigExist(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *this)
{
  void *v2; // rdi
  char v3; // r14
  void *v4; // rbx
  void *v5; // rsi
  _QWORD *v6; // r15
  __int64 v7; // r12
  void *v9; // [rsp+20h] [rbp-40h] BYREF
  void *v10; // [rsp+28h] [rbp-38h] BYREF
  void *v11; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v11);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v10);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v9);
  v2 = v11;
  v3 = 0;
  v4 = v10;
  if ( v11 && v10 )
  {
    v5 = v9;
    if ( v9 )
    {
      v12[0] = v11;
      v6 = v12;
      v12[1] = v10;
      v12[2] = v9;
      while ( 1 )
      {
        v7 = *v6;
        if ( *((_DWORD *)this + 6) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) )
            break;
        }
        if ( ++v6 == &v13 )
        {
          operator delete(v5);
          operator delete(v4);
          goto LABEL_15;
        }
      }
      operator delete(v5);
      operator delete(v4);
      operator delete(v2);
      return 1;
    }
  }
  else if ( v9 )
  {
    operator delete(v9);
  }
  if ( v4 )
    operator delete(v4);
  if ( v2 )
LABEL_15:
    operator delete(v2);
  return v3;
}
