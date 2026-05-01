/*
 * XREFs of ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069510
 * Callers:
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18006CAE8 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 * Callees:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180003704 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?HampAppCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_HAM_APPLICATION@@K@Z @ 0x18006B7E0 (-HampAppCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_HAM_APPLICATION@@K@Z.c)
 */

void __fastcall HampHostCheckQueueInterruptiveUIChangeWorker(struct _HAM_APPLICATION **a1)
{
  unsigned int HasExternalResourceAccess; // eax

  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    HasExternalResourceAccess = HampHostHasExternalResourceAccess((__int64)a1, 0x1Bu);
    HampAppCheckQueueInterruptiveUIChangeWorker(a1[94], HasExternalResourceAccess);
  }
}
