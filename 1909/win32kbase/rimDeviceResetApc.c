/*
 * XREFs of rimDeviceResetApc @ 0x1C00A6380
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0053400 (RIMDeliverDeviceResetRequest.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C005766C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0057AD4 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall rimDeviceResetApc(PVOID *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  int v5; // edx
  HANDLE *v6; // rsi
  int v7; // eax
  PVOID *v8; // [rsp+30h] [rbp-58h] BYREF
  char v9[8]; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  PVOID *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v9, 1, 0);
  if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x100uLL) )
  {
    v13 = 0;
    v11 = (PVOID *)&v8;
    v8 = ApcContext;
    v12 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E3E3A, 0LL, 0LL, 3u, &pData);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      (_DWORD)gRimLog,
      v5,
      1,
      12,
      (__int64)&WPP_3a389e9a9423354ed9b7dc7a59c7a373_Traceguids,
      (char)ApcContext);
  }
  if ( IoStatusBlock->Status >= 0 )
  {
    v6 = (HANDLE *)ApcContext[42];
    RIMLockExclusive((__int64)(v6 + 13));
    v7 = *((_DWORD *)ApcContext + 46);
    if ( (v7 & 0x80000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v7 | 0x80000;
      ZwSetEvent(v6[48], 0LL);
    }
    RIMDeliverDeviceResetRequest((char *)ApcContext);
    v6[14] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 13, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(ApcContext[4]);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v9);
}
