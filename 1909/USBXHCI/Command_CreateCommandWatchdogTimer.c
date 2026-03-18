/*
 * XREFs of Command_CreateCommandWatchdogTimer @ 0x1C005E324
 * Callers:
 *     Command_Create @ 0x1C005E170 (Command_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 */

__int64 __fastcall Command_CreateCommandWatchdogTimer(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  _QWORD v5[5]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v6[7]; // [rsp+58h] [rbp+1Fh] BYREF

  memset(v6, 0, sizeof(v6));
  v2 = a1[1];
  LODWORD(v6[0]) = 56;
  v6[3] = 0x100000001LL;
  if ( Controller_IsSecureDevice(v2) )
  {
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[2]) = 0;
    LODWORD(v6[3]) = 2;
  }
  else
  {
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[2]) = 1000;
  }
  v5[1] = Command_WdfEvtWatchdogTimerFunction;
  v6[4] = *a1;
  BYTE4(v5[2]) = 1;
  LODWORD(v5[0]) = 40;
  LODWORD(v5[3]) = 500;
  v3 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD *, _QWORD *))(WdfFunctions_01023 + 2544))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v5,
         v6,
         a1 + 3);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      2u,
      7u,
      0xCu,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      v3);
  return (unsigned int)v3;
}
