/*
 * XREFs of GreCreateSemaphore @ 0x1C0056B20
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00AC8D0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0056C14 (GreCreateSemaphoreInternal.c)
 */

void __noreturn GreCreateSemaphore()
{
  GreCreateSemaphoreInternal(0LL);
}
