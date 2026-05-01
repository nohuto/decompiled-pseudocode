/*
 * XREFs of GetAssignedAccessTypeForUser_0 @ 0x1803B2504
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x1803B24E0 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_0eb1abbb554f926d21a7203bcccf010e___ @ 0x1803B2760 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_0eb1abbb554f9.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_3f7ef0a876b24866580baa856f8f6df1___ @ 0x1803B2824 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_3f7ef0a876b24.c)
 *     ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x1803B28F8 (-GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x1803B2AF0 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1803B2CF4 (-GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEB.c)
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1803B2DEC (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser_0(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *a1,
        char a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  int AssignedAccessTypeForUserWithoutGroup; // eax
  unsigned int v10; // ebx
  _QWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  unsigned int StoreVersion; // [rsp+50h] [rbp+10h] BYREF

  StoreVersion = 0;
  v12[1] = a1;
  StoreVersion = Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion(a1);
  v12[0] = &StoreVersion;
  if ( (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_3f7ef0a876b24866580baa856f8f6df1___(
                          v6,
                          v12)
    || (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_0eb1abbb554f926d21a7203bcccf010e___(
                          v7,
                          &StoreVersion) )
  {
    Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v11);
    if ( a2 )
      AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
                                                (Windows::Internal::AssignedAccess::AAManagerHelper *)v11,
                                                (const unsigned __int16 *)a1,
                                                a3);
    else
      AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithGroup(
                                                (Windows::Internal::AssignedAccess::AAManagerHelper *)v11,
                                                (const unsigned __int16 *)a1,
                                                a3);
    v10 = AssignedAccessTypeForUserWithoutGroup;
    if ( AssignedAccessTypeForUserWithoutGroup >= 0 )
      v10 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
        (const char *)(unsigned int)AssignedAccessTypeForUserWithoutGroup);
    if ( v11[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
    return v10;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    return 0LL;
  }
}
