/*
 * XREFs of PopCheckShutdownMarker @ 0x140A14E68
 * Callers:
 *     PopProcessBootstat @ 0x140A14E04 (PopProcessBootstat.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     ExIsSoftBoot @ 0x140182500 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406ECB40 (ExGetFirmwareEnvironmentVariable.c)
 *     PopRecordSleepCheckpoint @ 0x14072649C (PopRecordSleepCheckpoint.c)
 *     PopClearSystemSleepCheckpoint @ 0x14072754C (PopClearSystemSleepCheckpoint.c)
 *     RtlGetSystemBootStatusEx @ 0x140769F20 (RtlGetSystemBootStatusEx.c)
 *     PopRecordSleepCheckpointSource @ 0x1408A2698 (PopRecordSleepCheckpointSource.c)
 *     PopDiagTraceDirtyTransition @ 0x140A3DA44 (PopDiagTraceDirtyTransition.c)
 */

char __fastcall PopCheckShutdownMarker(int a1)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r9
  char result; // al
  char v5; // bl
  int v6; // r9d
  LOGICAL CheckStamp; // [rsp+30h] [rbp-D0h]
  char v8; // [rsp+50h] [rbp-B0h] BYREF
  bool v9; // [rsp+51h] [rbp-AFh] BYREF
  char v10[2]; // [rsp+52h] [rbp-AEh] BYREF
  int v11; // [rsp+54h] [rbp-ACh] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+64h] [rbp-9Ch] BYREF
  int v16; // [rsp+68h] [rbp-98h] BYREF
  int Buffer; // [rsp+6Ch] [rbp-94h] BYREF
  int v18; // [rsp+70h] [rbp-90h] BYREF
  WNF_STATE_NAME StateName; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  int *v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  int *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int128 *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  int *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  int *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  int *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  char *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  bool *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  int v41; // [rsp+140h] [rbp+40h] BYREF
  __int128 *v42; // [rsp+148h] [rbp+48h]
  int v43; // [rsp+150h] [rbp+50h]
  int v44; // [rsp+158h] [rbp+58h]
  __int128 *v45; // [rsp+160h] [rbp+60h]
  int v46; // [rsp+168h] [rbp+68h]
  int v47; // [rsp+170h] [rbp+70h]
  __int128 *v48; // [rsp+178h] [rbp+78h]
  int v49; // [rsp+180h] [rbp+80h]

  v41 = 14;
  v43 = 48;
  v46 = 32;
  v42 = &PopBsdPhysicalPowerButtonInfo;
  v49 = 32;
  v45 = &PopBsdPowerTransition;
  v44 = 7;
  v48 = &PopBsdPowerTransitionExtension;
  v47 = 16;
  RtlGetSystemBootStatusEx((__int64)&v41, 3u, 0LL);
  PopBsdPhysicalPowerButtonInfoAtBoot = PopBsdPhysicalPowerButtonInfo;
  xmmword_14046BCD0 = xmmword_140467DE8;
  xmmword_14046BCE0 = xmmword_140467DF8;
  if ( _mm_srli_si128((__m128i)PopBsdPhysicalPowerButtonInfo, 8).m128i_u32[0]
    && pCallbackContext.LevelPlus1 > 5
    && TlgKeywordOn(&pCallbackContext, 0x200000000000uLL) )
  {
    v11 = WORD2(v2);
    v13 = WORD6(xmmword_14046BCD0);
    v16 = BYTE6(v2);
    v12 = v2;
    v14 = v2;
    v3 = HIBYTE(v2);
    v8 = v3 & 1;
    v15 = HIWORD(*((_QWORD *)&xmmword_14046BCD0 + 1));
    v21 = &PopBsdPhysicalPowerButtonInfoAtBoot;
    v23 = &v11;
    v25 = &v12;
    v27 = &xmmword_14046BCD0;
    v29 = &v13;
    v31 = &v14;
    v33 = &v15;
    v35 = &v16;
    v37 = &v8;
    v39 = &v9;
    v9 = (v3 & 2) != 0;
    v22 = 8LL;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 8LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 1LL;
    v40 = 1LL;
    TlgWrite(&pCallbackContext, &unk_14038E59F, 0LL, 0LL, 0xCu, &pData);
  }
  PopBsdPowerTransitionExtensionAtBoot = PopBsdPowerTransitionExtension;
  xmmword_14046BD20 = xmmword_140468120;
  PopBsdPowerTransitionAtBoot = PopBsdPowerTransition;
  xmmword_14046BD00 = *(_OWORD *)&::Buffer;
  if ( ExIsSoftBoot() )
    BYTE8(PopBsdPowerTransitionAtBoot) &= ~1u;
  if ( (PopSimulate & 0x200) != 0 )
    BYTE8(PopBsdPowerTransitionAtBoot) |= 1u;
  PopAutoChkCausedReboot = (BYTE14(PopBsdPowerTransition) & 0x10) != 0;
  StateName = (WNF_STATE_NAME)WNF_PO_PREVIOUS_SHUTDOWN_STATE;
  Buffer = BYTE8(PopBsdPowerTransitionAtBoot) & 1;
  result = ZwUpdateWnfStateData(&StateName, &Buffer, 4u, 0LL, 0LL, 0, 0);
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
    v18 = 1;
    if ( (int)ExGetFirmwareEnvironmentVariable(
                (__int64)L"*,",
                (__int64)&SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
                (__int64)v10,
                (__int64)&v18,
                0LL) < 0 )
    {
      v5 = BYTE2(PopBsdPowerTransitionExtensionAtBoot);
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 8;
      PopRecordSleepCheckpointSource(2);
    }
    else
    {
      v5 = v10[0];
      BYTE2(PopBsdPowerTransitionExtensionAtBoot) = v10[0];
      BYTE1(PopBsdPowerTransitionExtensionAtBoot) = BYTE1(PopBsdPowerTransitionExtensionAtBoot) & 0xF3 | 4;
      PopRecordSleepCheckpoint(v10[0]);
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
             CheckStamp,
             v5,
             BYTE14(PopBsdPowerTransitionAtBoot) & 0xF);
  }
  return result;
}
