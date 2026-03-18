/*
 * XREFs of _PnpCtxGetObjectContext @ 0x1406D29D8
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1406D2690 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverDatabase @ 0x1406D27A0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverPackage @ 0x1406D28C0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDeviceId @ 0x1406F5040 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverFile @ 0x140903FD0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectContext(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 392);
  return v3;
}
