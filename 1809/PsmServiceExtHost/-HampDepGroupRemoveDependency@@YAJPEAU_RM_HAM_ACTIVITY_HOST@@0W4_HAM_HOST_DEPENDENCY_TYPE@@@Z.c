/*
 * XREFs of ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18006ACA4
 * Callers:
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x18006ADD4 (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 *     ?HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x18006AFB8 (-HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000D57C (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x18000E760 (-HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPEND.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4FC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F540 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18003B830 (-HampDepLinkGetDependencyByType@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_LINK@@W4_HAM_HO.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006B404 (-HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEP.c)
 */

__int64 __fastcall HampDepGroupRemoveDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        char a3)
{
  __int64 v3; // rax
  int v5; // eax
  struct _HAM_DEPENDENCY_GROUP *v6; // rbx
  unsigned int v7; // edi
  struct _HAM_DEPENDENCY_LINK *DepLink; // rax
  __int64 DependencyByType; // rdi
  int v10; // edx
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // rax
  struct _HAM_DEPENDENCY_GROUP *v14; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  struct _HAM_DEPENDENCY_GROUP *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]

  v3 = *((_QWORD *)a1 - 4);
  v14 = 0LL;
  v15[0] = v3;
  v15[1] = *((_QWORD *)a2 - 4);
  v5 = HampDepGroupVerifyHostDispositionAndEnterWorker(a1, a2, &v14);
  v6 = v14;
  v7 = v5;
  if ( v5 >= 0 )
  {
    DepLink = HampDepGroupFindDepLink(v14, (struct _HAM_DEPENDENCY_LINK_ID *)v15);
    if ( DepLink && (DependencyByType = HampDepLinkGetDependencyByType((__int64)DepLink, a3)) != 0 )
    {
      HampDepGroupAcquireLockExclusive(v6);
      *(_DWORD *)(DependencyByType + 36) |= 1u;
      HampDepGroupReleaseLockExclusive(v6);
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
      {
        v12 = *(_QWORD *)DependencyByType;
        v19 = 0;
        v22 = 0;
        v17 = v12 + 40;
        v18 = v10;
        v20 = v6;
        v21 = v10;
        TlgWrite(v11, &unk_18008B6AF, 0LL, 0LL, 4u, &pData);
      }
      v7 = 0;
    }
    else
    {
      v7 = -1073741072;
    }
  }
  if ( v6 )
  {
    HampDepGroupRunStateChangeWorker(v6);
    HampDepGroupDereference(v6);
  }
  return v7;
}
