/*
 * XREFs of RIMReadInput @ 0x1C006AFC0
 * Callers:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C006D700 (-Read@CBaseInput@@QEAAJXZ.c)
 *     NtRIMReadInput @ 0x1C006DB80 (NtRIMReadInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C006B5CC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C006BA34 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     rimCompleteReads @ 0x1C006C048 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C006C104 (rimIssueReads.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C006CC2C (WPP_RECORDER_SF_qqqq.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C006CCF4 (rimConvertUserToKernelEventHandle.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C006CDAC (rimHandleAnyPnpRemovePendingDevices.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall RIMReadInput(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r13
  int v12; // edx
  int v13; // edi
  _BYTE *v14; // rbx
  char *v15; // r15
  int v16; // edx
  int v17; // edx
  char *v18; // rsi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v23; // r9d
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  _BYTE *v26; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v27[8]; // [rsp+68h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  _QWORD *v29; // [rsp+90h] [rbp-19h]
  int v30; // [rsp+98h] [rbp-11h]
  int v31; // [rsp+9Ch] [rbp-Dh]

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 80, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v13 >= 0 )
  {
    v14 = Object;
    if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v31 = 0;
      v29 = &v26;
      v26 = v14;
      v30 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E49A1, 0LL, 0LL, 3u, &pData);
    }
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v27, 1, 0);
    v15 = v14 + 104;
    RIMLockExclusive((__int64)(v14 + 104));
    if ( v14[81] || v14[82] )
    {
      v13 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 85, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
      goto LABEL_15;
    }
    rimHandleAnyPnpRemovePendingDevices(v14);
    v13 = rimConvertUserToKernelEventHandle(a4, &Handle);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v17, 1, 84, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, a4);
      }
      goto LABEL_15;
    }
    v18 = v14 + 568;
    RIMLockExclusive((__int64)(v14 + 568));
    if ( *((_QWORD *)v14 + 80) )
      rimIssueReads(v14);
    if ( !v14[584] )
    {
      v14[584] = 1;
      *((_QWORD *)v14 + 81) = Handle;
      *((_QWORD *)v14 + 84) = a6;
      *((_QWORD *)v14 + 83) = a7;
      *((_QWORD *)v14 + 85) = a8;
      *((_QWORD *)v14 + 86) = v10;
      *((_DWORD *)v14 + 174) = a3;
      *((_DWORD *)v14 + 164) = a5;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = Object;
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_qqqq(
          v20,
          v19,
          v21,
          81,
          (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
          (char)Object,
          a4,
          (char)Handle,
          (char)KeGetCurrentThread());
      }
      rimIssueReads(v14);
      v13 = rimCompleteReads((struct RawInputManagerObject *)v14);
      goto LABEL_14;
    }
    if ( *((_QWORD *)v14 + 80) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 83;
        goto LABEL_26;
      }
    }
    else
    {
      v13 = -1073740682;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 82;
LABEL_26:
        LOBYTE(v19) = 3;
        v14 = Object;
        WPP_RECORDER_SF_qqqq(
          v20,
          v19,
          v21,
          v23,
          (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
          (char)Object,
          a4,
          (char)Handle,
          (char)KeGetCurrentThread());
      }
    }
    ZwClose(Handle);
LABEL_14:
    *((_QWORD *)v18 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v18, 0LL);
    KeLeaveCriticalRegion();
LABEL_15:
    *((_QWORD *)v15 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v27);
    ObfDereferenceObject(v14);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v12, 1, 86, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v13);
  }
  return (unsigned int)v13;
}
