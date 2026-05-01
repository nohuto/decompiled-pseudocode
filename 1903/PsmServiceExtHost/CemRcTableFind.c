/*
 * XREFs of CemRcTableFind @ 0x180017DB0
 * Callers:
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x180010AAC (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 *     ?HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180010BCC (-HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x180010CEC (-HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180010DB0 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z5@Z @ 0x180017844 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180017988 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18007A244 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CemRcTableFind(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  _QWORD *v3; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdi

  v3 = (_QWORD *)(a1 + 16);
  RtlAcquireSRWLockShared(a1 + 16);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)a1;
  if ( (v7 & 1) != 0 && v8 )
    v8 ^= a1;
  v9 = v7 & 1;
  while ( v8 )
  {
    v10 = a3(a2, v8);
    if ( v10 >= 0 )
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v8 + 8);
      if ( v9 && v11 )
      {
LABEL_18:
        v8 ^= v11;
        continue;
      }
    }
    else
    {
      v11 = *(_QWORD *)v8;
      if ( v9 && v11 )
        goto LABEL_18;
    }
    v8 = v11;
  }
  v12 = v8;
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v12 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v3);
  return v12;
}
