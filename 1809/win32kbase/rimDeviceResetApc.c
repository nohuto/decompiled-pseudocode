/*
 * XREFs of rimDeviceResetApc @ 0x1C0092A20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0052780 (RIMDeliverDeviceResetRequest.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall rimDeviceResetApc(PVOID *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  HANDLE *v5; // rsi
  int v6; // eax
  _DWORD v7[2]; // [rsp+30h] [rbp-58h] BYREF
  PVOID *v8; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  PVOID *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v7, 1, 0);
  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
  {
    v12 = 0;
    v10 = (PVOID *)&v8;
    v8 = ApcContext;
    v11 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019FD75, 0LL, 0LL, 3u, &pData);
  }
  WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0xCu, (__int64)&WPP_561493f090f23b34cdf78ea19e95d7f9_Traceguids, ApcContext);
  if ( IoStatusBlock->Status >= 0 )
  {
    v5 = (HANDLE *)ApcContext[42];
    RIMLockExclusive((__int64)(v5 + 13));
    v6 = *((_DWORD *)ApcContext + 46);
    if ( (v6 & 0x80000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v6 | 0x80000;
      ZwSetEvent(v5[48], 0LL);
    }
    RIMDeliverDeviceResetRequest((char *)ApcContext);
    v5[14] = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 13, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(ApcContext[4]);
  if ( v7[0] && !v7[1] && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
}
