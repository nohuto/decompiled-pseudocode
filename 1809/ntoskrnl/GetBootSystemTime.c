/*
 * XREFs of GetBootSystemTime @ 0x1409D2C24
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpTimeFieldsToTime @ 0x1401271B0 (RtlpTimeFieldsToTime.c)
 *     RtlpTimeToTimeFields @ 0x14015DB34 (RtlpTimeToTimeFields.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall GetBootSystemTime(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  int v8; // ecx
  __int64 CurrentServerSiloGlobals; // rax
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // r9
  __int64 v12; // rbx
  bool v13; // zf
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 2560);
  if ( (*(_BYTE *)(a1 + 2584) & 1) == 0 && !ExpRealTimeIsUniversal )
    v3 += *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 440LL);
  v6 = ((__int64 (__fastcall *)(unsigned __int64 *))off_1403FF530)(&v17) - *(_QWORD *)(a1 + 2568);
  v7 = 10000000 * v6;
  if ( is_mul_ok(v6, 0x989680uLL) )
  {
    v8 = 0;
  }
  else
  {
    v7 = -1LL;
    v8 = -1073741675;
  }
  v10 = v7;
  CurrentServerSiloGlobals = v7 / v17;
  v11 = v10 / v17;
  if ( v8 < 0 )
  {
    v5 = v6 / v17;
    CurrentServerSiloGlobals = 10000000 * (v6 / v17);
    v11 = CurrentServerSiloGlobals + 10000000 * (v6 % v17) / v17;
  }
  v12 = v11 + v3;
  v13 = (*(_BYTE *)(a1 + 2584) & 2) == 0;
  v16 = v12;
  if ( v13 )
  {
    if ( !ExpRealTimeIsUniversal )
      v16 = v12 - *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132) + 440LL);
    RtlpTimeToTimeFields(&v16, &v18, v5);
    LOBYTE(CurrentServerSiloGlobals) = HalSetRealTimeClock(&v18);
  }
  else if ( (qword_14040ADF8 & 4) == 0 )
  {
    LOBYTE(CurrentServerSiloGlobals) = HalQueryRealTimeClock(&v18);
    if ( (_BYTE)CurrentServerSiloGlobals )
    {
      LOBYTE(CurrentServerSiloGlobals) = RtlpTimeFieldsToTime((__int64)&v18, &v16, v14);
      if ( !(_BYTE)CurrentServerSiloGlobals || ExpRealTimeIsUniversal )
      {
        v12 = v16;
      }
      else
      {
        CurrentServerSiloGlobals = (__int64)PsGetCurrentServerSiloGlobals();
        v12 = *(_QWORD *)(*(_QWORD *)(CurrentServerSiloGlobals + 1056) + 440LL) + v16;
      }
    }
  }
  *a2 = v12;
  return CurrentServerSiloGlobals;
}
