/*
 * XREFs of ?RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180042E2C
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004241C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpObjectTableInitialize(struct _RM_OBJECT_TABLE *a1)
{
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 16);
}
