/*
 * XREFs of ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B8E0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027E60 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180024030 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800246B0 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampAppCheckQueueHostWorkersPostLicensing(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx

  for ( i = HampAppGetFirstHost(a1); ; i = HampAppGetNextHost(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    if ( i != a2 )
    {
      HampHostAcquireLockExclusiveEx(i, 0);
      HampHostCheckQueueStateWorker(v4, 0);
      HampHostReleaseLockExclusiveEx(v4);
    }
  }
}
