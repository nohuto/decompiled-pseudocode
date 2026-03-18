/*
 * XREFs of GreDeleteSemaphore @ 0x1C0056B40
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0054DA0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EngDeleteSemaphore @ 0x1C00568A0 (EngDeleteSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00AC8D0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00B6150 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0123F24 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C012AE40 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C0130AD0 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C0056B90 (MultiUserGreTrackRemoveEngResource.c)
 */

void __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource(&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    Win32FreePool((__int64)&Resource[-1].NumberOfSharedWaiters);
  }
}
