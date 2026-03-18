/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C014A94C
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C011A6C0 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C0032954 (RIMIsRunningOnDesktop.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C0147FB8 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C014ABA0 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C014B51C (RIMIDEValidateKeybdInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r14d
  _BYTE *v10; // rdi
  _QWORD *v11; // rbx
  int v12; // edx
  bool v13; // zf
  char v14; // al
  unsigned int v15; // edx
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // dx
  __int16 v21; // ax
  unsigned __int64 v22; // rcx
  int v23; // edx
  int v24; // ebx
  _BYTE v26[192]; // [rsp+30h] [rbp-108h] BYREF

  memset(v26, 0, sizeof(v26));
  if ( a3 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  InputTraceLogging::RIM::InjectInput(-(__int64)(a1 != 0) & (a1 + 88), 2u);
  v9 = 0;
  if ( a3 )
  {
    v10 = &v26[4];
    v11 = (_QWORD *)(a2 + 16);
    while ( (unsigned int)RIMIDEValidateKeybdInputStruct(a2 + 24LL * v9) )
    {
      if ( *(_DWORD *)(a1 + 488) || (v13 = !RIMIsRunningOnDesktop(), v14 = 0, v13) )
        v14 = 1;
      v15 = *((_DWORD *)v11 - 3);
      if ( (v15 & 0x8000) == 0 || (v13 = v14 == 0, v16 = -3, v13) )
        v16 = -2;
      *((_WORD *)v10 - 2) = v16;
      v17 = 8 * (v15 & 0x10);
      if ( (v15 & 4) != 0 )
      {
        v18 = v17 | 0x20;
      }
      else
      {
        v18 = 8 * (v15 & 0x10);
        if ( *((_WORD *)v11 - 8) && (v15 & 8) == 0 )
          v18 = v17 | 0x40;
      }
      v19 = (2 * (v15 & 1)) | (v15 >> 1) & 1 | v18;
      if ( (v15 & 0x8000) != 0 )
      {
        v20 = 256;
        if ( *v11 == 256LL || (v20 = 512, *v11 == 512LL) )
          v19 |= v20;
      }
      *(_WORD *)v10 = v19;
      if ( (v19 & 0x40) != 0 )
        v21 = *((_WORD *)v11 - 8);
      else
        v21 = *((_WORD *)v11 - 7);
      LODWORD(v22) = *((_DWORD *)v11 - 2);
      *((_WORD *)v10 - 1) = v21;
      *((_WORD *)v10 + 1) = 0;
      if ( !(_DWORD)v22 )
        v22 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v10 + 1) = v22;
      ++v9;
      v10 += 12;
      v11 += 3;
      if ( v9 >= a3 )
        goto LABEL_27;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 32, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_27:
    v24 = RIMIDEInjectKeyboardInput(a1, v26, a3);
    if ( v24 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v23, 1, 33, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v24);
    }
  }
  return (unsigned int)v24;
}
