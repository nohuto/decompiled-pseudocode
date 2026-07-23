/*
 * XREFs of PlugPlayGetDeviceProperty @ 0x1406C7080
 * Callers:
 *     PiPnpRtlGetDeviceNtPropertyRoutine @ 0x1406C7040 (PiPnpRtlGetDeviceNtPropertyRoutine.c)
 * Callees:
 *     ZwPlugPlayControl @ 0x1401BA870 (ZwPlugPlayControl.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PlugPlayGetDeviceProperty(__int128 *a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, int a6)
{
  __int128 v10; // xmm0
  NTSTATUS v11; // esi
  int v12; // ecx
  _OWORD Buffer[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( a1 && a5 && !a6 )
  {
    memset(Buffer, 0, 0x28uLL);
    v10 = *a1;
    LODWORD(Buffer[1]) = a2;
    *((_QWORD *)&Buffer[1] + 1) = a3;
    Buffer[0] = v10;
    LODWORD(Buffer[2]) = a4;
    v11 = ZwPlugPlayControl(PlugPlayControlProperty, Buffer, 0x28u);
    if ( v11 < 0 )
    {
      if ( v11 != -1073741789 )
      {
        *a5 = 0;
        return (unsigned int)v11;
      }
    }
    else
    {
      v12 = Buffer[2];
      if ( a4 <= LODWORD(Buffer[2]) )
      {
LABEL_6:
        *a5 = v12;
        return (unsigned int)v11;
      }
      memset((void *)(a3 + LODWORD(Buffer[2])), 0, a4 - LODWORD(Buffer[2]));
    }
    v12 = Buffer[2];
    goto LABEL_6;
  }
  return 3221225485LL;
}
