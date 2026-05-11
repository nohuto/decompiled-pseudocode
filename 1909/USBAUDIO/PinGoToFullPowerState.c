/*
 * XREFs of PinGoToFullPowerState @ 0x1C0021D20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PinGoToFullPowerState(PKSPIN Pin, __int64 State)
{
  _QWORD *Context; // rbx
  unsigned int v3; // r14d
  int v5; // edi
  __int64 (__fastcall *v6)(PKSPIN, _QWORD); // rbp
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+30h] [rbp-28h]

  Context = Pin->Context;
  v3 = State;
  v5 = 0;
  v6 = *(__int64 (__fastcall **)(PKSPIN, _QWORD))(*(_QWORD *)(Context[18] + 128LL) + 40LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = State - 1;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      State,
      2u,
      0xCu,
      (__int64)&WPP_cc9c4cff163931cb0937dd2acbce6db6_Traceguids,
      Pin,
      v8);
  }
  if ( !*((_BYTE *)Context + 168) )
  {
    if ( v6 )
      v5 = v6(Pin, v3);
    *((_BYTE *)Context + 168) = 1;
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v5;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        State,
        2u,
        0xDu,
        (__int64)&WPP_cc9c4cff163931cb0937dd2acbce6db6_Traceguids,
        Pin,
        v7);
    }
  }
}
