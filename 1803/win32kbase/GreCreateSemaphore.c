/*
 * XREFs of GreCreateSemaphore @ 0x1C00348F0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032330 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0034614 (GreCreateSemaphoreInternal.c)
 */

void __noreturn GreCreateSemaphore()
{
  GreCreateSemaphoreInternal(0);
}
