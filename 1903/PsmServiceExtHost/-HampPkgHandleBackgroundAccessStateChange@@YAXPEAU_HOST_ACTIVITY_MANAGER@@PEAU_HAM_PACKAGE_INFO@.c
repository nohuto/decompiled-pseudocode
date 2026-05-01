/*
 * XREFs of ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x1800797E0
 * Callers:
 *     ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18007A410 (-BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCE.c)
 * Callees:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180011880 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012CCC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013024 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003DEC0 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18007711C (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgHandleBackgroundAccessStateChange(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        int a3)
{
  struct _HAM_PACKAGE *result; // rax
  struct _HAM_PACKAGE *v5; // rbx
  __int64 v6; // r8
  struct _HAM_RC_TREE_NODE *i; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  _BYTE v10[4]; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v11[20]; // [rsp+34h] [rbp-14h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  result = HampPkgFindInManager(a1, a2);
  v5 = result;
  if ( result )
  {
    HampPkgAcquireLockExclusive(result);
    *((_DWORD *)v5 + 87) = a3;
    HampPkgReleaseLockExclusive(v5);
    if ( (a3 & 1) != 0 )
    {
      v12 = 4;
      NtQueryWnfStateData(&SystemStateChangedWnfName, 0LL, 0LL, v11, v10, &v12);
      v6 = 0LL;
      for ( i = v5; ; i = *(struct _HAM_RC_TREE_NODE **)(*((_QWORD *)v9 + 97) + 88LL) )
      {
        v8 = HampHostEnumerateHostsInNode(i, 3, v6);
        v9 = v8;
        if ( !v8 )
          break;
        HampHostAmbientStateChanged(v8, (struct _SYSTEM_STATE_TRACKER_SYSTEM_STATE *)v10, 7);
        v6 = (__int64)v9;
      }
    }
    return (struct _HAM_PACKAGE *)CemRcObjectDereference(v5);
  }
  return result;
}
