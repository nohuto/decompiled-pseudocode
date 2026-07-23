/*
 * XREFs of PopDiagTraceIrpFinishTelemetry @ 0x140171520
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x140171368 (PopDiagTraceIrpFinish.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     PopDiagGetDriverName @ 0x140155E94 (PopDiagGetDriverName.c)
 *     IoFindDeviceThatFailedIrp @ 0x14016C298 (IoFindDeviceThatFailedIrp.c)
 *     PopComputeWatchdogTimeout @ 0x140172DE8 (PopComputeWatchdogTimeout.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIrpFinishTelemetry(__int64 a1)
{
  const WCHAR *v1; // r15
  int v2; // r14d
  __int64 v4; // rbx
  __int64 UnbiasedInterruptTime; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 DeviceThatFailedIrp; // rax
  NTSTATUS DriverName; // eax
  wchar_t *v12; // rcx
  int v13; // r9d
  int v14; // r10d
  int v15; // r11d
  char v17; // [rsp+38h] [rbp-D0h] BYREF
  char v18; // [rsp+39h] [rbp-CFh] BYREF
  char v19; // [rsp+3Ah] [rbp-CEh] BYREF
  int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  int v23; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  int *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  __int64 *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-50h] BYREF
  int *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  int *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  int *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  int *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  wchar_t v43[64]; // [rsp+108h] [rbp+0h] BYREF

  v1 = (const WCHAR *)&pwsz;
  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = *(_QWORD *)(v4 + 48);
  v7 = UnbiasedInterruptTime;
  if ( v6 )
  {
    if ( *(_BYTE *)(v4 + 196) )
    {
      v8 = UnbiasedInterruptTime - v6;
      LOBYTE(UnbiasedInterruptTime) = 75 * (UnbiasedInterruptTime - v6);
      v9 = v8 / 0x2710;
      if ( (unsigned int)(v8 / 0x2710) >= 0x1388 )
      {
        if ( v2 < 0 && !*(_DWORD *)(v4 + 188) )
        {
          DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a1);
          DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v43);
          v12 = v43;
          if ( DriverName < 0 )
            v12 = (wchar_t *)&pwsz;
          v1 = v12;
        }
        LOBYTE(UnbiasedInterruptTime) = PopComputeWatchdogTimeout(v4);
        if ( pCallbackContext.LevelPlus1 > 5 )
        {
          LOBYTE(UnbiasedInterruptTime) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
          if ( (_BYTE)UnbiasedInterruptTime )
          {
            v25 = *(_QWORD *)(v4 + 48);
            v23 = v9;
            v28 = &v23;
            v30 = (int *)&v25;
            v32 = &v26;
            v26 = v7;
            v24 = v13;
            v20 = v14;
            v21 = v15;
            v22 = v2;
            v29 = 4LL;
            v31 = 8LL;
            v33 = 8LL;
            TlgCreateWsz(&pDesc, v1);
            v36 = 4LL;
            v37 = &v20;
            v35 = &v24;
            v39 = &v21;
            v41 = &v22;
            v38 = 4LL;
            v40 = 4LL;
            v42 = 4LL;
            LOBYTE(UnbiasedInterruptTime) = TlgWrite(&pCallbackContext, &unk_1403720CF, 0LL, 0LL, 0xAu, &pData);
          }
        }
      }
    }
  }
  if ( !*(_BYTE *)(v4 + 184) && pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(UnbiasedInterruptTime) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)UnbiasedInterruptTime )
    {
      v22 = *(_DWORD *)(v4 + 212);
      v17 = *(_BYTE *)(a1 + 68);
      v18 = *(_BYTE *)(v4 + 240);
      v19 = PopCurrentBroadcast;
      v20 = qword_140418728;
      v28 = &v22;
      v30 = &v21;
      v32 = (__int64 *)&v17;
      pDesc.Ptr = (ULONGLONG)&v18;
      v35 = (int *)&v19;
      v37 = &v20;
      v21 = v2;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 1LL;
      *(_QWORD *)&pDesc.Size = 1LL;
      v36 = 1LL;
      v38 = 4LL;
      LOBYTE(UnbiasedInterruptTime) = TlgWrite(&pCallbackContext, &unk_14037205D, 0LL, 0LL, 8u, &pData);
    }
  }
  return UnbiasedInterruptTime;
}
