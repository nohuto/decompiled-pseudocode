/*
 * XREFs of ?ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180042198
 * Callers:
 *     ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z @ 0x1800420CC (-ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     CemRcTableInitialize @ 0x180030C20 (CemRcTableInitialize.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall ArManagerInitialize(struct _ACTIVITY_RESTARTER *a1)
{
  memset_0(a1, 0, 0x58uLL);
  CemRcTableInitialize((__int64)HampHostIdStoreSessionDestroy, a1);
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 48);
  *((_DWORD *)a1 + 14) = 0;
}
