/*
 * XREFs of GreCreateSemaphore @ 0x1C002D3D0
 * Callers:
 *     HmgCreate @ 0x1C0005068 (HmgCreate.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C002BF30 (GreCreateSemaphoreInternal.c)
 */

void __noreturn GreCreateSemaphore()
{
  GreCreateSemaphoreInternal(0);
}
