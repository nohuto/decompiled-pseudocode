/*
 * XREFs of PopCheckShutdownMarker @ 0x1409DD374
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA70 (ZwUpdateWnfStateData.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406CADA0 (ExGetFirmwareEnvironmentVariable.c)
 *     PopRecordSleepCheckpoint @ 0x1406DEFDC (PopRecordSleepCheckpoint.c)
 *     PopClearSystemSleepCheckpoint @ 0x1406E0238 (PopClearSystemSleepCheckpoint.c)
 *     RtlGetSystemBootStatusEx @ 0x140760D00 (RtlGetSystemBootStatusEx.c)
 *     PopRecordSleepCheckpointSource @ 0x140866180 (PopRecordSleepCheckpointSource.c)
 *     PopDiagTraceDirtyTransition @ 0x1409F7FC8 (PopDiagTraceDirtyTransition.c)
 */

char __fastcall PopCheckShutdownMarker(int a1)
{
  char result; // al
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r9
  char v5; // bl
  int v6; // r9d
  char v7; // [rsp+50h] [rbp-B0h] BYREF
  bool v8; // [rsp+51h] [rbp-AFh] BYREF
  char v9[2]; // [rsp+52h] [rbp-AEh] BYREF
  int v10; // [rsp+54h] [rbp-ACh] BYREF
  int v11; // [rsp+58h] [rbp-A8h] BYREF
  int v12; // [rsp+5Ch] [rbp-A4h] BYREF
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  int v15; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+6Ch] [rbp-94h] BYREF
  int v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  int *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  __int128 *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  int *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  char *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  bool *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  int v40; // [rsp+140h] [rbp+40h] BYREF
  __int128 *v41; // [rsp+148h] [rbp+48h]
  int v42; // [rsp+150h] [rbp+50h]
  int v43; // [rsp+158h] [rbp+58h]
  __int128 *v44; // [rsp+160h] [rbp+60h]
  int v45; // [rsp+168h] [rbp+68h]
  int v46; // [rsp+170h] [rbp+70h]
  __int128 *v47; // [rsp+178h] [rbp+78h]
  int v48; // [rsp+180h] [rbp+80h]

  v40 = 14;
  v42 = 48;
  v45 = 32;
  v41 = &PopBsdPhysicalPowerButtonInfo;
  v48 = 32;
  v44 = &PopBsdPowerTransition;
  v43 = 7;
  v47 = &PopBsdPowerTransitionExtension;
  v46 = 16;
  RtlGetSystemBootStatusEx((__int64)&v40, 3u, 0LL);
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  xmmword_14043FEC0 = xmmword_14043FE90;
  xmmword_14043FED0 = xmmword_14043FEA0;
  if ( _mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8).m128i_u32[0]
    && pCallbackContext.LevelPlus1 > 5
    && TlgKeywordOn(&pCallbackContext, 0x200000000000uLL) )
  {
    v10 = WORD2(v3);
    v12 = WORD6(xmmword_14043FEC0);
    v15 = BYTE6(v3);
    v11 = v3;
    v13 = v3;
    v4 = HIBYTE(v3);
    v7 = v4 & 1;
    v14 = HIWORD(*((_QWORD *)&xmmword_14043FEC0 + 1));
    v20 = &PopBsdPhysicalPowerButtonInfoAtBoot;
    v22 = &v10;
    v24 = &v11;
    v26 = &xmmword_14043FEC0;
    v28 = &v12;
    v30 = &v13;
    v32 = &v14;
    v34 = &v15;
    v36 = &v7;
    v38 = &v8;
    v8 = (v4 & 2) != 0;
    v21 = 8LL;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 8LL;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 1LL;
    v39 = 1LL;
    TlgWrite(&pCallbackContext, &unk_14036E870, 0LL, 0LL, 0xCu, &pData);
  }
  PopBsdPowerTransitionExtensionAtBoot = PopBsdPowerTransitionExtension;
  xmmword_14043FF10 = xmmword_14043C608;
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  xmmword_14043FEF0 = *(_OWORD *)&Buffer;
  if ( (PopSimulate & 0x200) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) |= 1u;
  PopAutoChkCausedReboot = (BYTE14(PopBsdPowerTransition) & 0x10) != 0;
  v18 = WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  v16 = BYTE8(PopBsdPowerTransitionAtBoot) & 1;
  result = ZwUpdateWnfStateData((__int64)&v18, (__int64)&v16, 4LL);
  if ( (PopSimulate & 0x400) != 0 )
  {
    WORD6(PopBsdPowerTransitionAtBoot) = 1;
    result = BYTE8(PopBsdPowerTransitionAtBoot) & 0xF | 0x50;
    BYTE8(PopBsdPowerTransitionAtBoot) = result;
  }
  if ( (PopSimulate & 0x20000000) != 0 )
  {
    BYTE8(PopBsdPowerTransitionAtBoot) |= 2u;
    BYTE9(PopBsdPowerTransitionAtBoot) = 1;
  }
  if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) != 0 )
  {
    v17 = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (__int64)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (__int64)v9,
                (__int64)&v17,
                0LL) < 0 )
    {
      v5 = BYTE2(PopBsdPowerTransitionExtensionAtBoot);
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 8;
      PopRecordSleepCheckpointSource(2);
    }
    else
    {
      v5 = v9[0];
      BYTE2(PopBsdPowerTransitionExtensionAtBoot) = v9[0];
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 4;
      PopRecordSleepCheckpoint(v9[0]);
      PopRecordSleepCheckpointSource(1);
      PopClearSystemSleepCheckpoint(1);
    }
    LOBYTE(v6) = (BYTE8(PopBsdPowerTransitionAtBoot) & 2) != 0;
    return PopDiagTraceDirtyTransition(
             a1,
             BYTE8(PopBsdPowerTransitionAtBoot) >> 4,
             WORD6(PopBsdPowerTransitionAtBoot),
             v6,
             SBYTE9(PopBsdPowerTransitionAtBoot),
             PopBsdPowerTransitionAtBoot,
             0,
             v5,
             BYTE14(PopBsdPowerTransitionAtBoot) & 0xF);
  }
  return result;
}
