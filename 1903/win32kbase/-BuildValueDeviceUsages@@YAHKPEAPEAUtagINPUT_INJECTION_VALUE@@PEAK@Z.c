/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C014C3EC
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C014A3BC (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall BuildValueDeviceUsages(__int64 a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  struct tagINPUT_INJECTION_VALUE **v5; // r14
  int v6; // edi
  __int64 v7; // rbp
  unsigned int v8; // edi
  int v9; // esi
  char *v10; // r15
  char *v11; // r12
  struct tagINPUT_INJECTION_VALUE *v12; // rax
  int v13; // edx
  struct tagINPUT_INJECTION_VALUE *v14; // r9
  struct tagINPUT_INJECTION_VALUE *v15; // rcx
  __int16 *v16; // r8
  unsigned int v17; // edx
  __int16 v18; // ax
  unsigned int v19; // r8d
  _WORD *v20; // r9
  __int64 v21; // rcx
  char v23; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v5 = a2;
  v6 = a1;
  if ( *a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = 5LL;
  if ( v6 == 3 )
  {
    v8 = 6;
    v9 = 11;
    v10 = (char *)&unk_1C0213272;
    v11 = (char *)&unk_1C0213274;
LABEL_7:
    v12 = (struct tagINPUT_INJECTION_VALUE *)Win32AllocPoolZInit(0x90uLL, 1785620818LL);
    *v5 = v12;
    v14 = v12;
    if ( v12 )
    {
      v15 = v12;
      v16 = (__int16 *)&unk_1C0213354;
      v17 = 5;
      do
      {
        *(_WORD *)v15 = *(v16 - 1);
        v15 = (struct tagINPUT_INJECTION_VALUE *)((char *)v15 + 12);
        v18 = *v16;
        v16 += 16;
        *((_WORD *)v15 - 5) = v18;
        --v7;
      }
      while ( v7 );
      v19 = 0;
      v20 = (_WORD *)((char *)v14 + 60);
      do
      {
        if ( v19 >= v8 )
          break;
        ++v17;
        v21 = 32LL * v19++;
        *v20 = *(_WORD *)&v10[v21];
        v20[1] = *(_WORD *)&v11[v21];
        v20 += 6;
      }
      while ( v17 < 0xC );
      if ( v17 == v9 )
      {
        *a3 = 12;
        return 1;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = v17;
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_Dd(
          (_DWORD)gRimLog,
          v17,
          1,
          12,
          (__int64)&WPP_d639f9b3c8303ec708ac518d58b8cc98_Traceguids,
          v23,
          v9);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v13, 1, 13, (__int64)&WPP_d639f9b3c8303ec708ac518d58b8cc98_Traceguids, 23);
    }
    return v3;
  }
  if ( v6 == 2 )
  {
    v8 = 5;
    v10 = (char *)&unk_1C0213192;
    v9 = 10;
    v11 = (char *)&unk_1C0213194;
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, (_DWORD)a2, 1, 11, (__int64)&WPP_d639f9b3c8303ec708ac518d58b8cc98_Traceguids, v6);
  }
  return 0LL;
}
