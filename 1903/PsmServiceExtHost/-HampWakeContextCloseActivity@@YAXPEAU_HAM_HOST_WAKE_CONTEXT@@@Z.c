/*
 * XREFs of ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003582C
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800248E0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180018B1C (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180035C40 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180035FC4 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 */

void __fastcall HampWakeContextCloseActivity(struct _HAM_HOST_WAKE_CONTEXT *a1)
{
  __int64 v2; // rdx

  HampWakeManagerAcquireLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a1 + 7));
  RtlRbRemoveNode(*((_QWORD *)a1 + 7) + 80LL, (char *)a1 + 64);
  *((_QWORD *)a1 + 10) = -1LL;
  HampWakeManagerReleaseLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a1 + 7), v2);
  HamSrvCloseActivity(*(struct _HAM_CLIENT_CONTEXT **)(*((_QWORD *)a1 + 7) + 8LL), *((_QWORD *)a1 + 11));
  *((_QWORD *)a1 + 11) = -1LL;
  CemRcObjectDereference(a1);
  *((_QWORD *)a1 + 18) = 0LL;
  *((_QWORD *)a1 + 19) = 0LL;
  *((_BYTE *)a1 + 160) &= ~2u;
}
