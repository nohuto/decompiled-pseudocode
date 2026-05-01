/*
 * XREFs of ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030040
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000CE60 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000D0FC (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetDepGroupDisposition@@YA?AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800301BC (-HampHostGetDepGroupDisposition@@YA-AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIV.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180030228 (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003045C (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030510 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180078BCC (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupEnsureHostDisposition(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  struct _HAM_DEPENDENCY_GROUP *v3; // rbx
  int v7; // r14d
  int DepGroupDisposition; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v10; // rcx
  unsigned int v11; // edx
  int v12; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  struct _HAM_DEPENDENCY_GROUP *v18; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  v7 = 1;
  HampHostAcquireTwoLocksExclusive(a1, a2);
  do
  {
    DepGroupDisposition = HampHostGetDepGroupDisposition(a1, a2);
    if ( DepGroupDisposition )
    {
      v14 = DepGroupDisposition - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 )
          {
            v12 = -1073741823;
            goto LABEL_8;
          }
          v16 = HampDepGroupTryMerge(v10, v9, &v18);
        }
        else
        {
          v16 = HampDepGroupTryAddToExisting(v10, v9, &v18);
        }
      }
      else
      {
        v16 = HampDepGroupCreate(
                (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97)
                                                                                                  + 88LL)
                                                                                      + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                         + 120)
                                                             + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                - 168),
                a1,
                a2,
                &v18);
      }
      v3 = v18;
      v12 = v16;
    }
    else
    {
      v3 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 86);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v3 + 12) <= 1 )
        __fastfail(0xEu);
      v18 = v3;
      HampHostReleaseLockExclusiveEx(a1, (unsigned int)v9);
      HampHostReleaseLockExclusiveEx(a2, v11);
      v7 = 0;
      HampDepGroupWaitEnterStateChange(v3);
      v12 = 0;
    }
  }
  while ( v12 == -1073741267 );
  if ( v12 >= 0 )
  {
    *a3 = v3;
    v3 = 0LL;
  }
LABEL_8:
  if ( v7 )
  {
    HampHostReleaseLockExclusiveEx(a1, (unsigned int)v9);
    HampHostReleaseLockExclusiveEx(a2, v17);
  }
  if ( v3 )
    HampDepGroupDereference(v3);
  return (unsigned int)v12;
}
