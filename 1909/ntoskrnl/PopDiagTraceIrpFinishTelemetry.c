/*
 * XREFs of PopDiagTraceIrpFinishTelemetry @ 0x140172C20
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x140172A68 (PopDiagTraceIrpFinish.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14008BAAC (_TlgCreateWsz.c)
 *     PopDiagGetDriverName @ 0x140165900 (PopDiagGetDriverName.c)
 *     IoFindDeviceThatFailedIrp @ 0x140172560 (IoFindDeviceThatFailedIrp.c)
 *     PopComputeWatchdogTimeout @ 0x140173E10 (PopComputeWatchdogTimeout.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
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
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  int *v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  __int64 *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-50h] BYREF
  int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  int *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  __int64 *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  wchar_t v46[64]; // [rsp+118h] [rbp+10h] BYREF

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
          DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v46);
          v12 = v46;
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
            v29 = &v23;
            v31 = (int *)&v25;
            v33 = &v26;
            v26 = v7;
            v24 = v13;
            v20 = v14;
            v21 = v15;
            v22 = v2;
            v27 = 0x1000000LL;
            v30 = 4LL;
            v32 = 8LL;
            v34 = 8LL;
            TlgCreateWsz(&pDesc, v1);
            v37 = 4LL;
            v38 = &v20;
            v36 = &v24;
            v40 = &v21;
            v42 = &v22;
            v44 = &v27;
            v39 = 4LL;
            v41 = 4LL;
            v43 = 4LL;
            v45 = 8LL;
            LOBYTE(UnbiasedInterruptTime) = TlgWrite(&pCallbackContext, &unk_140391319, 0LL, 0LL, 0xBu, &pData);
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
      v20 = qword_140442F68;
      v29 = &v22;
      v31 = &v21;
      v33 = (__int64 *)&v17;
      pDesc.Ptr = (ULONGLONG)&v18;
      v36 = (int *)&v19;
      v38 = &v20;
      v21 = v2;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 1LL;
      *(_QWORD *)&pDesc.Size = 1LL;
      v37 = 1LL;
      v39 = 4LL;
      LOBYTE(UnbiasedInterruptTime) = TlgWrite(&pCallbackContext, &unk_1403912A7, 0LL, 0LL, 8u, &pData);
    }
  }
  return UnbiasedInterruptTime;
}
