/*
 * XREFs of ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006CEEC
 * Callers:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x1800673EC (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x18006CE60 (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x18006CFB0 (-HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006CFE4 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 *     ?HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z @ 0x18006D7DC (-HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z.c)
 */

__int64 __fastcall HampUserLogoff(struct _HAM_USER *a1, struct _HAM_CLIENT_CONTEXT *a2, int a3)
{
  int v6; // eax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx

  HampUserAcquireLockExclusive(a1, (__int64)a2);
  v6 = *((_DWORD *)a1 + 46);
  if ( (v6 & 1) != 0 )
  {
    v7 = -1073740682;
  }
  else
  {
    v7 = 0;
    *((_DWORD *)a1 + 46) = v6 | 1;
  }
  HampUserReleaseLockExclusive(a1);
  if ( v7 >= 0 )
  {
    HampHostIdStoreInvalidateForUserSession(
      (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*((_QWORD *)a1 + 20) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 456),
      a1);
    v7 = HampUserTerminate(a1, v8, v9, a2, a3);
    if ( v7 >= 0 )
      v7 = 0;
    HampUserAcquireLockExclusive(a1, v10);
    *((_DWORD *)a1 + 46) &= ~1u;
    HampUserReleaseLockExclusive(a1);
  }
  return (unsigned int)v7;
}
