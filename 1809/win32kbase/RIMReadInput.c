/*
 * XREFs of RIMReadInput @ 0x1C004FC10
 * Callers:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C007AA60 (-Read@CBaseInput@@QEAAJXZ.c)
 *     NtRIMReadInput @ 0x1C0093460 (NtRIMReadInput.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     rimCompleteReads @ 0x1C00504E0 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0050690 (rimIssueReads.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0051F4C (WPP_RECORDER_SF_qqqq.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0052040 (rimConvertUserToKernelEventHandle.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00520F8 (rimHandleAnyPnpRemovePendingDevices.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall RIMReadInput(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v12; // edi
  _QWORD *v13; // rbx
  char *v14; // r15
  char *v15; // rsi
  int v16; // edx
  int v17; // ecx
  char CurrentThread; // al
  int v20; // r9d
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-81h]
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  _DWORD v24[2]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD *v25; // [rsp+68h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+70h] [rbp-39h] BYREF
  _QWORD *v27; // [rsp+90h] [rbp-19h]
  __int64 v28; // [rsp+98h] [rbp-11h]

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x51u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v12 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v12 >= 0 )
  {
    v13 = Object;
    if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v25 = v13;
      v27 = &v25;
      v28 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019EB50, 0LL, 0LL, 3u, &v26);
    }
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v24, 1, 0);
    v14 = (char *)(v13 + 13);
    RIMLockExclusive((__int64)(v13 + 13));
    if ( *((_BYTE *)v13 + 81) || *((_BYTE *)v13 + 82) )
    {
      v12 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x56u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      rimHandleAnyPnpRemovePendingDevices(v13);
      v12 = rimConvertUserToKernelEventHandle(a4, &Handle);
      if ( v12 < 0 )
      {
        WPP_RECORDER_SF_q(gRimLog, 3u, 0x14u, 0x55u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, a4);
      }
      else
      {
        v15 = (char *)(v13 + 71);
        RIMLockExclusive((__int64)(v13 + 71));
        if ( v13[80] )
          rimIssueReads(v13);
        if ( *((_BYTE *)v13 + 584) )
        {
          CurrentThread = (unsigned __int8)KeGetCurrentThread();
          if ( v13[80] )
          {
            v20 = 84;
          }
          else
          {
            v12 = -1073740682;
            v20 = 83;
          }
          v13 = Object;
          WPP_RECORDER_SF_qqqq(
            v17,
            v16,
            20,
            v20,
            (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids,
            (char)Object,
            a4,
            (char)Handle,
            CurrentThread);
          ZwClose(Handle);
        }
        else
        {
          *((_BYTE *)v13 + 584) = 1;
          v13[81] = Handle;
          v13[84] = a6;
          v13[83] = a7;
          v13[85] = a8;
          v13[86] = a2;
          *((_DWORD *)v13 + 174) = a3;
          *((_DWORD *)v13 + 164) = a5;
          v13 = Object;
          WPP_RECORDER_SF_qqqq(
            v17,
            v16,
            21,
            82,
            (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids,
            (char)Object,
            a4,
            (char)Handle,
            (char)KeGetCurrentThread());
          rimIssueReads(v13);
          v12 = rimCompleteReads((struct RawInputManagerObject *)v13);
        }
        *((_QWORD *)v15 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v15, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    *((_QWORD *)v14 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
    if ( !v24[1] && v24[0] && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
    ObfDereferenceObject(v13);
  }
  LODWORD(pData) = v12;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x57u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, pData);
  return (unsigned int)v12;
}
