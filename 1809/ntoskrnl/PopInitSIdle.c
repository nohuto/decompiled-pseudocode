/*
 * XREFs of PopInitSIdle @ 0x14071C5DC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PopDispatchFullWake @ 0x1406E24D0 (PopDispatchFullWake.c)
 *     PopBatteryApplyCompositeState @ 0x14071A168 (PopBatteryApplyCompositeState.c)
 *     PopSleepPowerSettingCallback @ 0x140746F30 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1407476D4 (PopApplyPolicy.c)
 * Callees:
 *     PopResetIdleTime @ 0x140138B80 (PopResetIdleTime.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401C5BB0 (RtlCompareMemory.c)
 *     PopIsDozeSupported @ 0x1405B0814 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x1405B0968 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleTimeoutInitialization @ 0x14071C790 (PopTraceSystemIdleTimeoutInitialization.c)
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
  if ( (PopFullWake & 3) != 0 || !dword_140418120 || (PopSimulate & 0x1000000) != 0 )
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
  if ( (unsigned int)(qword_140417704 - 2) <= 1 )
  {
    v16 = HIDWORD(qword_140417704);
    LODWORD(Source2) = qword_140417704;
  }
  else
  {
    LODWORD(Source2) = 2;
    v16 = 4;
  }
  v15 = 0;
  v13 = dword_140418120;
  HIDWORD(Source2) = 1;
LABEL_4:
  if ( RtlCompareMemory(&qword_140417634, &Source2, 0xCuLL) == 12
    && (v4 = dword_140417640, dword_140417640 == v16)
    && (v5 = dword_14041762C, dword_14041762C == v13) )
  {
    v1 = 0;
  }
  else
  {
    PopResetIdleTime(4u);
    v4 = v16;
    v5 = v13;
    dword_14041763C = v15;
    qword_140417634 = Source2;
    byte_140417654 = 1;
    dword_140417640 = v16;
    dword_14041762C = v13;
    if ( dword_1403FE780 )
      v7 = dword_140417644 | 1;
    else
      v7 = dword_140417644 & 0xFFFFFFFE;
    dword_140417644 = v7;
    if ( !byte_140418254 )
    {
      if ( dword_1403FE7A0 )
        v8 = v7 | 2;
      else
        v8 = v7 & 0xFFFFFFFD;
      dword_140417644 = v8;
    }
  }
  v11 = v5;
  LOBYTE(v5) = v1;
  return PopTraceSystemIdleTimeoutInitialization(v5, v3, qword_140417634, v4, v11, SBYTE4(qword_140417634), a1);
}
