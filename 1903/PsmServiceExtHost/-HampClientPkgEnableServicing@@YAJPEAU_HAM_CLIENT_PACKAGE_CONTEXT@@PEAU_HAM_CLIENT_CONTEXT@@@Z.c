/*
 * XREFs of ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007A18C
 * Callers:
 *     ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180073E34 (-HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012CCC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013024 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180079AA8 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18007B670 (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampClientPkgEnableServicing(struct _HAM_PACKAGE **a1, struct _HAM_CLIENT_CONTEXT *a2)
{
  unsigned int v4; // ebx
  struct _HAM_PACKAGE *v5; // rcx
  int v6; // eax
  struct _HAM_PACKAGE *v7; // rcx

  HampPkgAcquireLockExclusive(a1[7]);
  if ( ((_BYTE)a1[8] & 4) != 0 )
  {
    v4 = -1073741431;
  }
  else
  {
    if ( ((_BYTE)a1[8] & 1) == 0 )
    {
      v5 = a1[7];
      v6 = *((_DWORD *)v5 + 85);
      if ( (v6 & 1) == 0 )
      {
        *((_DWORD *)v5 + 85) = v6 | 1;
        v7 = a1[7];
        *((_DWORD *)a1 + 16) |= 1u;
        HampPkgReleaseLockExclusive(v7);
        v4 = HampPkgTerminate(a1[7], 1u, 1024, (__int64)a2, 0xFFFFFFFF);
        HampHostIdStoreInvalidateForPackage(
          (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*((_QWORD *)a1[7] + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                     + 440),
          a1[7]);
        return v4;
      }
    }
    v4 = -1073700861;
  }
  HampPkgReleaseLockExclusive(a1[7]);
  return v4;
}
