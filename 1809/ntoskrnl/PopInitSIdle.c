/*
 * XREFs of PopInitSIdle @ 0x14071D85C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopDispatchFullWake @ 0x1406E3750 (PopDispatchFullWake.c)
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     PopSleepPowerSettingCallback @ 0x140748100 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1407488A4 (PopApplyPolicy.c)
 * Callees:
 *     PopResetIdleTime @ 0x140138CA0 (PopResetIdleTime.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     PopIsDozeSupported @ 0x1405B1814 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1405B1968 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleTimeoutInitialization @ 0x14071DA10 (PopTraceSystemIdleTimeoutInitialization.c)
 */

__int64 __fastcall PopInitSIdle(char a1)
{
  char v1; // bl
  int v3; // edi
  int v4; // r9d
  int v5; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r9
  char v11; // [rsp+28h] [rbp-89h]
  _BYTE v12[92]; // [rsp+48h] [rbp-69h] BYREF
  int v13; // [rsp+A4h] [rbp-Dh]
  __int64 Source2; // [rsp+ACh] [rbp-5h] BYREF
  int v15; // [rsp+B4h] [rbp+3h]
  int v16; // [rsp+B8h] [rbp+7h]

  v1 = 1;
  Source2 = 0x100000000LL;
  v13 = -1;
  v3 = 5;
  v15 = *((_DWORD *)PopPolicy + 14);
  v16 = 2;
  if ( (PopFullWake & 3) != 0 || !dword_1404191A0 || (PopSimulate & 0x1000000) != 0 )
  {
    PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v12);
    if ( *((_DWORD *)PopPolicy + 15) )
    {
      if ( v12[20] )
      {
        LODWORD(Source2) = 2;
        v3 = 1;
        v9 = *((_DWORD *)PopPolicy + 15);
        v16 = 1;
        goto LABEL_34;
      }
      if ( v12[3] || v12[4] || v12[5] )
      {
        LODWORD(Source2) = 2;
        v3 = 2;
        v9 = *((_DWORD *)PopPolicy + 15);
        v16 = 4;
        goto LABEL_34;
      }
    }
    else if ( !*((_DWORD *)PopPolicy + 22) )
    {
      goto LABEL_4;
    }
    if ( !PopIsDozeSupported((__int64)v12) || !*(_DWORD *)(v10 + 88) )
      goto LABEL_4;
    v3 = 3;
    LODWORD(Source2) = 3;
    v9 = *(_DWORD *)(v10 + 88);
    v16 = 5;
LABEL_34:
    v13 = v9;
    goto LABEL_4;
  }
  v3 = 4;
  if ( (unsigned int)(qword_1404187A4 - 2) <= 1 )
  {
    v16 = HIDWORD(qword_1404187A4);
    LODWORD(Source2) = qword_1404187A4;
  }
  else
  {
    LODWORD(Source2) = 2;
    v16 = 4;
  }
  v15 = 0;
  v13 = dword_1404191A0;
  HIDWORD(Source2) = 1;
LABEL_4:
  if ( RtlCompareMemory(&qword_1404186D4, &Source2, 0xCuLL) == 12
    && (v4 = dword_1404186E0, dword_1404186E0 == v16)
    && (v5 = dword_1404186CC, dword_1404186CC == v13) )
  {
    v1 = 0;
  }
  else
  {
    PopResetIdleTime(4u);
    v4 = v16;
    v5 = v13;
    dword_1404186DC = v15;
    qword_1404186D4 = Source2;
    byte_1404186F4 = 1;
    dword_1404186E0 = v16;
    dword_1404186CC = v13;
    if ( dword_1403FF780 )
      v7 = dword_1404186E4 | 1;
    else
      v7 = dword_1404186E4 & 0xFFFFFFFE;
    dword_1404186E4 = v7;
    if ( !byte_1404192F4 )
    {
      if ( dword_1403FF7A0 )
        v8 = v7 | 2;
      else
        v8 = v7 & 0xFFFFFFFD;
      dword_1404186E4 = v8;
    }
  }
  v11 = v5;
  LOBYTE(v5) = v1;
  return PopTraceSystemIdleTimeoutInitialization(v5, v3, qword_1404186D4, v4, v11, SBYTE4(qword_1404186D4), a1);
}
