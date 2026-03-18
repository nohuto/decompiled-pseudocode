/*
 * XREFs of UsbhHandleOvercurrent @ 0x1C0054DC0
 * Callers:
 *     UsbhHandleSuspend @ 0x1C000BC64 (UsbhHandleSuspend.c)
 *     UsbhEnumerate1 @ 0x1C000F870 (UsbhEnumerate1.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0015D90 (UsbhHubDispatchPortEvent.c)
 *     UsbhWaitConnect @ 0x1C0017FC0 (UsbhWaitConnect.c)
 *     UsbhEnumerate2 @ 0x1C002B118 (UsbhEnumerate2.c)
 * Callees:
 *     UsbhCancelEnumeration @ 0x1C0009AFC (UsbhCancelEnumeration.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C00567A4 (Usbh_OvercurrentRefHubBusy.c)
 */

__int64 __fastcall UsbhHandleOvercurrent(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v8; // rax
  __int64 v9; // r8
  const void *v10; // r9

  v8 = FdoExt(a1);
  if ( (*(_WORD *)(a4 + 420) & 0x100) == 0 || (v8[640] & 0x10000000) != 0 )
  {
    ++*(_DWORD *)(a4 + 2404);
    if ( a5 && PdoExt(a5)[280] == 101 )
    {
      Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
      UsbhException(a1, *(_WORD *)(a4 + 4), 0x73u, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2868, 0);
      a2 = 4;
      _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
    }
    else
    {
      UsbhCancelEnumeration(a1, a2, a4, a5);
      if ( *(_DWORD *)(a4 + 2404) >= 3u )
      {
        Log(a1, 1024, 1884247634, a4, 0LL);
        UsbhException(a1, *(_WORD *)(a4 + 4), 0x6Bu, v10, 0xB70u, 0, 0, usbfile_busfunc_c, 2907, 0);
        a2 = 4;
        _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
        Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
        UsbhException(a1, *(_WORD *)(a4 + 4), 6u, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2918, 0);
      }
      else
      {
        LOBYTE(v9) = 1;
        Usbh_OvercurrentRefHubBusy(a1, a4, v9);
        UsbhException(a1, *(_WORD *)(a4 + 4), 0x6Cu, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2893, 0);
        return 4;
      }
    }
  }
  else
  {
    UsbhException(
      a1,
      *(_WORD *)(a4 + 4),
      ((*(_WORD *)(a4 + 420) & 8) != 0) + 105,
      (const void *)a4,
      0xB70u,
      0,
      0,
      usbfile_busfunc_c,
      (*(_WORD *)(a4 + 420) & 8) != 0 ? 2843 : 2831,
      0);
  }
  return a2;
}
