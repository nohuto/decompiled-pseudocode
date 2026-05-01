/*
 * XREFs of ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180004860
 * Callers:
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800043B0 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180004504 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800046FC (-HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 * Callees:
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x1800088D0 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003AFA0 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C834 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003CC18 (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 */

__int64 __fastcall HampPkgTerminate(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  struct _RM_HAM_ACTIVITY_HOST *v6; // r8
  struct _RM_HAM_ACTIVITY_HOST *v9; // rax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rdi
  int v11; // ebx
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF

  memset(v13, 0, 24);
  v6 = 0LL;
  while ( 1 )
  {
    v9 = (struct _RM_HAM_ACTIVITY_HOST *)HampHostEnumerateHostsInNode(a1, 3LL, v6);
    v10 = v9;
    if ( !v9 )
      break;
    v11 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)v13, v9);
    if ( v11 < 0 )
      goto LABEL_4;
    v6 = v10;
    a1 = *(_QWORD *)(*((_QWORD *)v10 + 94) + 88LL);
  }
  v11 = 0;
LABEL_4:
  if ( v11 >= 0 )
  {
    ((void (__fastcall *)(_BYTE *, _QWORD, _QWORD, __int64, int, _DWORD))HampHostSnapshotTerminate)(
      v13,
      a2,
      a3,
      a4,
      a5,
      0);
    v11 = 0;
  }
  HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)v13);
  return (unsigned int)v11;
}
