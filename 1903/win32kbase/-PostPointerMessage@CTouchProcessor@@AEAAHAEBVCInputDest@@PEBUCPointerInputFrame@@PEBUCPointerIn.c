/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C016F63C
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0167B6C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     CheckAccess @ 0x1C002C1C0 (CheckAccess.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0039248 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00392A4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C0041144 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00423E0 (ApiSetEditionPostInputMessage.c)
 *     EtwTraceUIPIInputError @ 0x1C0072050 (EtwTraceUIPIInputError.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C016030C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0160330 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0166484 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     flagString @ 0x1C0176AA0 (flagString.c)
 *     messageString @ 0x1C0176B9C (messageString.c)
 *     WPP_RECORDER_SF_LsHHsLLLL @ 0x1C0177280 (WPP_RECORDER_SF_LsHHsLLLL.c)
 *     GetPointerInputSource @ 0x1C01868A0 (GetPointerInputSource.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PostPointerMessage(
        CTouchProcessor *this,
        const struct CInputDest *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerInfoNode *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 Queue; // rbp
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *ThreadInfo; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v28; // r14d
  __int64 v29; // rbp
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  int v34; // edx
  unsigned int v35; // ebx
  CInpLockGuard *v36[7]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+20h] BYREF

  v39 = 0LL;
  Queue = CInputDest::GetQueue(a2, 0LL);
  if ( !Queue )
    goto LABEL_19;
  if ( *((_DWORD *)this + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
  ThreadInfo = CInputDest::GetThreadInfo(a2);
  if ( !ThreadInfo )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
  if ( !a8 || (*(_DWORD *)a4 & 0x800) != 0 || a9 )
    goto LABEL_19;
  v22 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 24), 19);
  if ( !v22 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23);
  if ( CheckAccess((_DWORD *)(*(_QWORD *)(v22 + 480) + 896LL), (_DWORD *)(Queue + 436))
    || (v25 = *(_QWORD *)(*(_QWORD *)(v22 + 384) + 88LL)) != 0
    && (*(_DWORD *)(v25 + 812) & 0x30) == 0x10
    && (v26 = *((_QWORD *)ThreadInfo + 52), v25 == v26)
    && (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)ThreadInfo, *(_QWORD *)(v26 + 872), 0) )
  {
LABEL_19:
    v28 = a6;
    v29 = *((unsigned __int16 *)a4 + 90);
    if ( a6 != 595 )
      v29 |= (unsigned __int64)(*((_WORD *)a4 + 94) & 0xE1F7) << 16;
    GetPointerInputSource(*((unsigned int *)a4 + 44), a8, a9, &v39);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = flagString(WORD1(v29));
      messageString(v28, v30);
      WPP_RECORDER_SF_LsHHsLLLL(*((_DWORD *)a4 + 52), v31, v32, v33);
    }
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v36,
      (CTouchProcessor *)((char *)this + 48));
    v35 = ApiSetEditionPostInputMessage(
            (__int64)a2,
            0LL,
            v28,
            v29,
            a5,
            a7,
            *((_QWORD *)a4 + 32),
            0LL,
            *((_DWORD *)a4 + 80) != 0 ? 8 : 0,
            &v39,
            0LL,
            0LL);
    if ( v35 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v34, 7, 284, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v36);
    return v35;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v24, 7, 282, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput();
    EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, Queue, *(_QWORD *)(Queue + 436), 8);
    return 0LL;
  }
}
