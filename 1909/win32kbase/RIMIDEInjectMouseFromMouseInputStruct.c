/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C01486D4
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C01181A0 (NtUserInjectMouseInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C0145948 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C014600C (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C01460C8 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C0148930 (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C01490F8 (RIMIDEValidateMouseInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebp
  char *v9; // rsi
  __int16 *v10; // r14
  __int64 v11; // xmm1_8
  int v12; // edx
  unsigned int v13; // edi
  int v14; // ebx
  __int16 v15; // dx
  __int16 v16; // cx
  int v17; // eax
  __int16 v18; // ax
  unsigned __int64 v19; // rcx
  int v20; // edx
  int v21; // ebx
  __int64 v23; // [rsp+30h] [rbp-1D8h]
  _OWORD v25[24]; // [rsp+40h] [rbp-1C8h] BYREF

  v4 = a2;
  memset(v25, 0, sizeof(v25));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1 + 88, v6, v7);
  InputTraceLogging::RIM::InjectInput((a1 + 88) & -(__int64)(a1 != 0), 3u);
  v8 = 0;
  if ( a3 )
  {
    v9 = (char *)v25 + 2;
    v10 = (__int16 *)(v4 + 8);
    while ( 1 )
    {
      if ( v8 )
      {
        v11 = *((_QWORD *)v25 + 3 * v8 - 1);
        *(_OWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x35C) = *(_OWORD *)((char *)&v25[-1] + 24 * v8 - 8);
        *(_QWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x36C) = v11;
      }
      v23 = v4 + 32LL * v8;
      if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v23) )
        break;
      v13 = *((_DWORD *)v10 + 1);
      v14 = *(_DWORD *)(((a1 + 88) & -(__int64)(a1 != 0)) + 0x364);
      *((_WORD *)v9 - 1) = -2;
      v15 = (v13 >> 15) & 1 | 8;
      if ( (v13 & 0x2000) == 0 )
        v15 = (v13 >> 15) & 1;
      v16 = v15 | 2;
      if ( (v13 & 0x4000) == 0 )
        v16 = v15;
      *(_WORD *)v9 = v16;
      v17 = RIMIDEBuildRawButtonsFromMouseInputStruct(v14, v23);
      *(_DWORD *)(v9 + 6) = v17;
      *((_WORD *)v9 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v14, v17, v23);
      v18 = 0;
      if ( (v13 & 0x1800) != 0 )
        v18 = *v10;
      LODWORD(v19) = *((_DWORD *)v10 + 2);
      *((_WORD *)v9 + 2) = v18;
      *(_DWORD *)(v9 + 10) = *((_DWORD *)v10 - 2);
      *(_DWORD *)(v9 + 14) = *((_DWORD *)v10 - 1);
      if ( !(_DWORD)v19 )
        v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v4 = a2;
      *(_DWORD *)(v9 + 18) = v19;
      ++v8;
      v10 += 16;
      v9 += 24;
      if ( v8 >= a3 )
        goto LABEL_17;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 34, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_17:
    v21 = RIMIDEInjectMouseInput(a1, v25, a3);
    if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v20, 1, 35, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v21);
    }
  }
  return (unsigned int)v21;
}
