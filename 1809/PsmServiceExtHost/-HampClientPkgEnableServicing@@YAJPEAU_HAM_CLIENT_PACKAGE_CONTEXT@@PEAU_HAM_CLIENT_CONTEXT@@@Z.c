/*
 * XREFs of ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800043B0
 * Callers:
 *     ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000425C (-HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18000445C (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180004860 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0F8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A144 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampClientPkgEnableServicing(struct _HAM_PACKAGE **a1, struct _HAM_CLIENT_CONTEXT *a2)
{
  struct _HAM_PACKAGE *v4; // rcx
  int v5; // eax
  struct _HAM_PACKAGE *v6; // rcx
  unsigned int v7; // ebx

  HampPkgAcquireLockExclusive(a1[7]);
  if ( ((_BYTE)a1[8] & 4) != 0 )
  {
    v7 = -1073741431;
    goto LABEL_8;
  }
  if ( ((_BYTE)a1[8] & 1) != 0 || (v4 = a1[7], v5 = *((_DWORD *)v4 + 85), (v5 & 1) != 0) )
  {
    v7 = -1073700861;
LABEL_8:
    HampPkgReleaseLockExclusive(a1[7]);
    return v7;
  }
  *((_DWORD *)v4 + 85) = v5 | 1;
  v6 = a1[7];
  *((_DWORD *)a1 + 16) |= 1u;
  HampPkgReleaseLockExclusive(v6);
  v7 = HampPkgTerminate(a1[7], 1LL, 1024LL, a2, -1);
  HampHostIdStoreInvalidateForPackage(
    (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*((_QWORD *)a1[7] + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                               + 456),
    a1[7]);
  return v7;
}
