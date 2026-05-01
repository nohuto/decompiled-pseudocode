/*
 * XREFs of GetAssignedAccessTypeForUser_0 @ 0x180414630
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18041460C (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x1804148FC (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180414A10 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180414F54 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180415160 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x180415364 (-GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEB.c)
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x18041545C (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser_0(
        unsigned __int16 *a1,
        char a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  _QWORD *v6; // rdi
  void *v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rcx
  int AssignedAccessTypeForUserWithoutGroup; // eax
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = operator new(0x20uLL);
  v7 = v6;
  *((_DWORD *)v6 + 7) = 0;
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[2] = 0LL;
  *((_DWORD *)v6 + 6) = 0;
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)v6) )
  {
    v7 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v6);
    operator delete(v6);
    v6 = 0LL;
  }
  if ( v6 )
  {
    v14[0] = v7;
    v14[1] = a1;
    if ( (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
                            v8,
                            v14)
      || (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___(
                            v10,
                            v7) )
    {
      Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v13);
      if ( a2 )
        AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
                                                  (Windows::Internal::AssignedAccess::AAManagerHelper *)v13,
                                                  a1,
                                                  a3);
      else
        AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithGroup(
                                                  (Windows::Internal::AssignedAccess::AAManagerHelper *)v13,
                                                  a1,
                                                  a3);
      v9 = AssignedAccessTypeForUserWithoutGroup;
      if ( AssignedAccessTypeForUserWithoutGroup >= 0 )
        v9 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34,
          (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
          (const char *)(unsigned int)AssignedAccessTypeForUserWithoutGroup);
      if ( v13[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
    }
    else
    {
      *(_DWORD *)a3 = 0;
      v9 = 0;
    }
  }
  else
  {
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
      (const char *)0x8000FFFFLL);
  }
  if ( v7 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v7);
    operator delete(v7);
  }
  return v9;
}
