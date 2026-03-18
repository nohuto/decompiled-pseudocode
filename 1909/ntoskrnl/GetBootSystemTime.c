/*
 * XREFs of GetBootSystemTime @ 0x140A20708
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140121E54 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     RtlpTimeToTimeFields @ 0x1401453E4 (RtlpTimeToTimeFields.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char __fastcall GetBootSystemTime(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  bool v3; // zf
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // rtt
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  char *v14; // rbx
  unsigned int v15; // edi
  unsigned int v16; // edx
  __int64 *v17; // rcx
  __int64 *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v26[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v27; // [rsp+48h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 2584);
  v3 = (*(_BYTE *)(a1 + 2608) & 1) == 0;
  v27 = 0uLL;
  if ( v3 && !ExpRealTimeIsUniversal )
    v2 += ExpTimeZoneBias;
  v7 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140424530)(&v25) - *(_QWORD *)(a1 + 2592);
  v8 = 10000000 * v7;
  v26[1] = (v7 * (unsigned __int128)0x989680uLL) >> 64;
  if ( is_mul_ok(v7, 0x989680uLL) )
  {
    v9 = 0;
  }
  else
  {
    v8 = -1LL;
    v9 = -1073741675;
  }
  v11 = v8;
  v10 = v8 / v25;
  v12 = v11 / v25;
  if ( v9 < 0 )
  {
    v6 = v7 / v25;
    v10 = 10000000 * (v7 / v25);
    v12 = v10 + 10000000 * (v7 % v25) / v25;
  }
  v13 = v12 + v2;
  v3 = (*(_BYTE *)(a1 + 2608) & 2) == 0;
  v23 = v13;
  if ( v3 )
  {
    if ( ExpRealTimeIsUniversal )
    {
      v17 = &v23;
    }
    else
    {
      v17 = v26;
      v26[0] = v13 - ExpTimeZoneBias;
    }
    RtlpTimeToTimeFields(v17, &v27, v6);
    LOBYTE(v10) = HalSetRealTimeClock(&v27);
    goto LABEL_18;
  }
  if ( (qword_140432498 & 4) != 0 )
    goto LABEL_18;
  LOBYTE(v10) = HalQueryRealTimeClock(&v27);
  if ( !(_BYTE)v10 )
    goto LABEL_18;
  v24 = 0LL;
  v14 = (char *)ExLeapSecondData;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    LOBYTE(v10) = RtlpTimeFieldsToTimeNoLeapSeconds((__int16 *)&v27, &v23);
    if ( !(_BYTE)v10 )
      goto LABEL_19;
    v13 = v23;
    goto LABEL_16;
  }
  v15 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v22, 0);
  LOBYTE(v10) = RtlpTimeFieldsToTimeNoLeapSeconds((__int16 *)&v27, &v24);
  if ( !(_BYTE)v10 )
    goto LABEL_19;
  v16 = 0;
  if ( !v15 )
  {
    v13 = v24;
LABEL_16:
    if ( !ExpRealTimeIsUniversal )
      v13 += ExpTimeZoneBias;
    goto LABEL_18;
  }
  v18 = (__int64 *)(v14 + 8);
  v13 = v24;
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 >= 0 )
    {
      LOBYTE(v10) = v19 + 0x80;
      if ( v13 < v19 + 10000000 )
      {
        if ( v13 < v19 )
          goto LABEL_16;
        v13 = 2 * v13 - v19;
      }
      else
      {
        v13 += 10000000LL;
      }
      goto LABEL_33;
    }
    v20 = v19 & 0x7FFFFFFFFFFFFFFFLL;
    LOBYTE(v10) = v20 + 0x80;
    if ( v13 < v20 + 10000000 )
      break;
    v13 -= 10000000LL;
LABEL_33:
    ++v16;
    ++v18;
    if ( v16 >= v15 )
      goto LABEL_16;
  }
  if ( v13 < v20 )
    goto LABEL_16;
LABEL_19:
  v13 = v23;
LABEL_18:
  *a2 = v13;
  return v10;
}
