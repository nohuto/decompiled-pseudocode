/*
 * XREFs of PlugPlayGetRelatedDevice @ 0x1406FD870
 * Callers:
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x1406FD830 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 * Callees:
 *     ZwPlugPlayControl @ 0x1401BA870 (ZwPlugPlayControl.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __fastcall PlugPlayGetRelatedDevice(__int128 *a1, int a2, __int64 a3, int a4, _DWORD *a5, int a6)
{
  __int128 v10; // xmm0
  NTSTATUS result; // eax
  _OWORD Buffer[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( !a1 || !a5 || a6 )
    return -1073741811;
  memset(Buffer, 0, 0x28uLL);
  v10 = *a1;
  LODWORD(Buffer[1]) = a2;
  *((_QWORD *)&Buffer[1] + 1) = a3;
  Buffer[0] = v10;
  LODWORD(Buffer[2]) = a4;
  result = ZwPlugPlayControl(PlugPlayControlGetRelatedDevice, Buffer, 0x28u);
  *a5 = LODWORD(Buffer[2]) + 1;
  return result;
}
