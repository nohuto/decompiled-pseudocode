/*
 * XREFs of NVMeGetRichDeviceDescription @ 0x1C0012ABC
 * Callers:
 *     NVMeHwUnitControl @ 0x1C000B3A0 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCopyFirmwareRevision @ 0x1C0005A68 (NVMeCopyFirmwareRevision.c)
 *     memset @ 0x1C0007F80 (memset.c)
 */

__int64 __fastcall NVMeGetRichDeviceDescription(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx

  v2 = *(_QWORD *)(a1 + 1528);
  v3 = 0;
  if ( a2 && a2[1] >= 0x6Cu )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      memset(a2, 0, 0x6CuLL);
      *a2 = 1;
      a2[1] = 108;
      *(_OWORD *)((char *)a2 + 25) = *(_OWORD *)(v2 + 24);
      *(_OWORD *)((char *)a2 + 41) = *(_OWORD *)(v2 + 40);
      *(_QWORD *)((char *)a2 + 57) = *(_QWORD *)(v2 + 56);
      NVMeCopyFirmwareRevision(v2, (__int64)a2 + 90, 0x10u);
    }
    else
    {
      return (unsigned int)-1056964599;
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v3;
}
