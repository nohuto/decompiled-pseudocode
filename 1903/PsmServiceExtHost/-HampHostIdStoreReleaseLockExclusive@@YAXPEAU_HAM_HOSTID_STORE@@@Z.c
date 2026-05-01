/*
 * XREFs of ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x18003A814
 * Callers:
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x18003A79C (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x18003F298 (-HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18007B670 (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z @ 0x18007B6E4 (-HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampHostIdStoreReleaseLockExclusive(struct _HAM_HOSTID_STORE *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 0xBu);
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
}
