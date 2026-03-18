/*
 * XREFs of HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1C00746D4
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0070DB0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     HUBFDO_RegisterSleepstudyBlockerReason @ 0x1C0074970 (HUBFDO_RegisterSleepstudyBlockerReason.c)
 *     HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x1C0074AD0 (HUBFDO_UnregisterSleepstudyBlockerReasons.c)
 */

__int64 __fastcall HUBFDO_RegisterSleepstudyBlockerReasons(__int64 a1, __int64 a2)
{
  int PdoFriendlyName; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v8; // [rsp+28h] [rbp-D8h]
  _QWORD v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v12; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+70h] [rbp-90h] BYREF
  __int128 v14; // [rsp+80h] [rbp-80h] BYREF
  __int128 v15; // [rsp+90h] [rbp-70h] BYREF
  char v16; // [rsp+A0h] [rbp-60h] BYREF

  v9[0] = 0x2000000LL;
  v12 = 0uLL;
  v13 = 0uLL;
  v14 = 0uLL;
  v15 = 0uLL;
  v9[1] = &v16;
  SleepstudyHelper_GenerateGuid(0LL, a1, &v12);
  PdoFriendlyName = SleepstudyHelper_GetPdoFriendlyName(a1, v9);
  v5 = PdoFriendlyName;
  if ( PdoFriendlyName < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 72;
LABEL_13:
      LODWORD(v8) = PdoFriendlyName;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 2520),
        2u,
        2u,
        v6,
        (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids,
        v8);
      goto LABEL_14;
    }
    goto LABEL_14;
  }
  SleepstudyHelper_GenerateGuid(7LL, a1 + 336, &v13);
  v10 = v13;
  v11 = v12;
  PdoFriendlyName = HUBFDO_RegisterSleepstudyBlockerReason(
                      a2,
                      (unsigned int)&v11,
                      (unsigned int)v9,
                      (unsigned int)&v10,
                      (__int64)L"Suspend unsupported by parent",
                      a2 + 2616);
  v5 = PdoFriendlyName;
  if ( PdoFriendlyName < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 73;
      goto LABEL_13;
    }
LABEL_14:
    HUBFDO_UnregisterSleepstudyBlockerReasons(a2);
    return v5;
  }
  SleepstudyHelper_GenerateGuid(7LL, a1 + 672, &v14);
  v11 = v14;
  v10 = v12;
  PdoFriendlyName = HUBFDO_RegisterSleepstudyBlockerReason(
                      a2,
                      (unsigned int)&v10,
                      (unsigned int)v9,
                      (unsigned int)&v11,
                      (__int64)L"Suspend unsupported by hardware",
                      a2 + 2624);
  v5 = PdoFriendlyName;
  if ( PdoFriendlyName < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 74;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
  SleepstudyHelper_GenerateGuid(7LL, a1 + 1008, &v15);
  v11 = v15;
  v10 = v12;
  PdoFriendlyName = HUBFDO_RegisterSleepstudyBlockerReason(
                      a2,
                      (unsigned int)&v10,
                      (unsigned int)v9,
                      (unsigned int)&v11,
                      (__int64)L"Selective Suspend Disabled By User",
                      a2 + 2632);
  v5 = PdoFriendlyName;
  if ( PdoFriendlyName < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 75;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
  return v5;
}
