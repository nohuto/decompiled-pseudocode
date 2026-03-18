/*
 * XREFs of SecureChannel_Create @ 0x1C0063038
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C005BDD0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall SecureChannel_Create(union _LARGE_INTEGER a1, union _LARGE_INTEGER **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  _QWORD v8[8]; // [rsp+30h] [rbp-40h] BYREF
  union _LARGE_INTEGER *v9; // [rsp+90h] [rbp+20h] BYREF
  __int64 v10; // [rsp+A0h] [rbp+30h] BYREF

  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 3584))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *(_QWORD *)(a1.QuadPart + 32),
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    memset(v8, 0, 0x38uLL);
    v8[3] = 0x100000001LL;
    v8[6] = off_1C004F248;
    LODWORD(v8[0]) = 56;
    v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *, union _LARGE_INTEGER **))(WdfFunctions_01023
                                                                                                 + 1624))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v10,
           v8,
           &v9);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v9->QuadPart = v10;
      v9[1] = a1;
      KeQueryPerformanceCounter(v9 + 2);
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a1.QuadPart + 16),
        4u,
        0x13u,
        0xCu,
        (__int64)&WPP_8e4a88313dd436790ae6788f85b62921_Traceguids,
        v10);
      *a2 = v9;
      return v5;
    }
    v6 = 11;
  }
  else
  {
    v6 = 10;
  }
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1.QuadPart + 16),
    2u,
    0x13u,
    v6,
    (__int64)&WPP_8e4a88313dd436790ae6788f85b62921_Traceguids,
    v4);
  return v5;
}
