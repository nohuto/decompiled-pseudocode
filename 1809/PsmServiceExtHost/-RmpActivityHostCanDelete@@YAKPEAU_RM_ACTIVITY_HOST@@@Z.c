/*
 * XREFs of ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024860
 * Callers:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180018F20 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001DCA0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180049ACC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall RmpActivityHostCanDelete(struct _RM_ACTIVITY_HOST *a1)
{
  _BOOL8 result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( *((int *)a1 + 6) >= 0
    && !(*((_DWORD *)a1 + 274) + *((_DWORD *)a1 + 268))
    && !*((_QWORD *)a1 + 80)
    && (*((_BYTE *)a1 + 1416) & 1) == 0 )
  {
    if ( (*((_BYTE *)a1 + 812) & 1) == 0 )
      return 1;
    RmHamHostGetCurrentState(
      (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64),
      (union _RM_OPTIMIZATION_STATE *)&v3,
      (union _RM_OPTIMIZATION_STATE *)&v2);
    if ( !v2 && (v3 & 0x80u) != 0 && (v3 & 0x100) != 0 )
      return 1;
  }
  return result;
}
