/*
 * XREFs of Interrupter_Create @ 0x1C0065A48
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Interrupter_CreateInterrupter @ 0x1C0065AE8 (Interrupter_CreateInterrupter.c)
 */

__int64 __fastcall Interrupter_Create(int a1, __int64 a2, _QWORD *a3)
{
  int Interrupter; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-30h]
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  Interrupter = Interrupter_CreateInterrupter(a1, a2, 0, 0, 0LL, (__int64)v9, (__int64)&v10);
  if ( Interrupter >= 0 )
  {
    v6 = v10;
    *(_QWORD *)(v10 + 40) = v9[0];
    *(_DWORD *)(v6 + 64) = -1;
    *a3 = v6;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = Interrupter;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), 2u, 9u, 0xAu, (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids, v8);
  }
  return (unsigned int)Interrupter;
}
