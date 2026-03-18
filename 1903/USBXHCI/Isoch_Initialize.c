/*
 * XREFs of Isoch_Initialize @ 0x1C0069C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Isoch_CalculatePacketsPerFrame @ 0x1C002D6F0 (Isoch_CalculatePacketsPerFrame.c)
 */

__int64 __fastcall Isoch_Initialize(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  _QWORD v5[5]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v6[7]; // [rsp+58h] [rbp+1Fh] BYREF

  memset(v6, 0, sizeof(v6));
  memset(v5, 0, sizeof(v5));
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 408) = a1 + 400;
  *(_QWORD *)(a1 + 400) = a1 + 400;
  *(_QWORD *)(a1 + 424) = a1 + 416;
  *(_QWORD *)(a1 + 416) = a1 + 416;
  v2 = Isoch_CalculatePacketsPerFrame(a1);
  LODWORD(v5[2]) = 0;
  LODWORD(v5[3]) = 0;
  *(_DWORD *)(a1 + 356) = v2;
  v5[1] = Isoch_WdfEvtRingEmptyTimer;
  BYTE4(v5[2]) = 1;
  v6[3] = 0x100000001LL;
  v6[4] = *(_QWORD *)(a1 + 72);
  LODWORD(v5[0]) = 40;
  LODWORD(v6[0]) = 56;
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v5,
         v6,
         a1 + 320);
  if ( v3 >= 0 )
  {
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      2u,
      0xEu,
      0xAu,
      (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
