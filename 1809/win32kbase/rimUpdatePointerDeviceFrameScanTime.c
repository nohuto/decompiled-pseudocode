/*
 * XREFs of rimUpdatePointerDeviceFrameScanTime @ 0x1C012C434
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimExtractScantime @ 0x1C012A79C (rimExtractScantime.c)
 *     rimSimulatedPointerDeviceScanTime @ 0x1C012C358 (rimSimulatedPointerDeviceScanTime.c)
 */

__int64 __fastcall rimUpdatePointerDeviceFrameScanTime(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  __int64 v4; // rbx
  bool v9; // zf
  __int64 v11[2]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v11[0] = KeQueryPerformanceCounter(0LL).QuadPart;
  v9 = (*(_DWORD *)(v4 + 308) & 0x200) == 0;
  v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( v9 )
    return rimSimulatedPointerDeviceScanTime(a1, v4, v11, &v12);
  else
    return rimExtractScantime(
             a1,
             v4,
             *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL),
             a3,
             a4,
             (unsigned __int64 *)v11,
             (unsigned int *)&v12);
}
