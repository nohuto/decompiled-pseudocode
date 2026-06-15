/*
 * XREFs of ?DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NPEBG@Z @ 0x180032F1C
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

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesTargetProfileExist(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *this,
        const unsigned __int16 *a2)
{
  void *v3; // rdi
  char v4; // r14
  void *v5; // rbx
  void *v6; // rsi
  _QWORD *v7; // r15
  unsigned __int8 (__fastcall ***v8)(_QWORD, const unsigned __int16 *); // r12
  void *v10; // [rsp+20h] [rbp-40h] BYREF
  void *v11; // [rsp+28h] [rbp-38h] BYREF
  void *v12; // [rsp+30h] [rbp-30h] BYREF
  const unsigned __int16 *v13; // [rsp+38h] [rbp-28h]
  _QWORD v14[3]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-8h] BYREF

  v13 = a2;
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v12);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v11);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v10);
  v3 = v12;
  v4 = 0;
  v5 = v11;
  if ( v12 && v11 )
  {
    v6 = v10;
    if ( v10 )
    {
      v14[0] = v12;
      v7 = v14;
      v14[1] = v11;
      v14[2] = v10;
      while ( 1 )
      {
        v8 = (unsigned __int8 (__fastcall ***)(_QWORD, const unsigned __int16 *))*v7;
        if ( *((_DWORD *)this + 6) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7) )
        {
          if ( (**v8)(v8, v13) )
            break;
        }
        if ( ++v7 == &v15 )
        {
          operator delete(v6);
          operator delete(v5);
          goto LABEL_15;
        }
      }
      operator delete(v6);
      operator delete(v5);
      operator delete(v3);
      return 1;
    }
  }
  else if ( v10 )
  {
    operator delete(v10);
  }
  if ( v5 )
    operator delete(v5);
  if ( v3 )
LABEL_15:
    operator delete(v3);
  return v4;
}
