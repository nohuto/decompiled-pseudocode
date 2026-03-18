/*
 * XREFs of GreDeleteSemaphore @ 0x1C002D330
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0060CB4 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     EngDeleteSemaphore @ 0x1C008D6E0 (EngDeleteSemaphore.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C009C000 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_49808adf2e8287706ad80fa46f25ee96_::operator() @ 0x1C00A9E58 (_lambda_49808adf2e8287706ad80fa46f25ee96_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C0102538 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C0106700 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C002D260 (MultiUserGreTrackRemoveEngResource.c)
 */

void __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource((__int64 *)&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    Win32FreePool((__int64)&Resource[-1].NumberOfSharedWaiters);
  }
}
