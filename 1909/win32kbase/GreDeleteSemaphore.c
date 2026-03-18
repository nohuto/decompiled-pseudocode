/*
 * XREFs of GreDeleteSemaphore @ 0x1C00109E0
 * Callers:
 *     EngDeleteSemaphore @ 0x1C000DDA0 (EngDeleteSemaphore.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0068160 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00AA5D0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00B3670 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01216B4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C0128690 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C012E320 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     MultiUserGreTrackRemoveEngResource @ 0x1C00107E0 (MultiUserGreTrackRemoveEngResource.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

__int64 __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  __int64 result; // rax

  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource((__int64 *)&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    return Win32FreePool(&Resource[-1].NumberOfSharedWaiters);
  }
  return result;
}
