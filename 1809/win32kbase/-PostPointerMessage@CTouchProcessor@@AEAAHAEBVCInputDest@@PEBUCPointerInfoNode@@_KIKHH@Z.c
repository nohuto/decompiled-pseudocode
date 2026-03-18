/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0140C70
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C002F22C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     IsInputThread @ 0x1C00315A0 (IsInputThread.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     EtwTraceUIPIInputError @ 0x1C003B5A0 (EtwTraceUIPIInputError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006F57C (ApiSetEditionPostInputMessage.c)
 *     flagString @ 0x1C0147A9C (flagString.c)
 *     messageString @ 0x1C0147B98 (messageString.c)
 *     WPP_RECORDER_SF_LsHHsLLLL @ 0x1C014831C (WPP_RECORDER_SF_LsHHsLLLL.c)
 *     GetPointerInputSource @ 0x1C0151A90 (GetPointerInputSource.c)
 *     ApiSetEditionIsGpqForegroundAccessible @ 0x1C0162230 (ApiSetEditionIsGpqForegroundAccessible.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CTouchProcessor::PostPointerMessage(
        CTouchProcessor *this,
        const struct CInputDest *a2,
        const struct CPointerInfoNode *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 Queue; // rax
  unsigned int v11; // ebp
  __int64 v12; // rbx
  struct tagTHREADINFO *ThreadInfo; // rsi
  unsigned int v14; // ebx
  __int64 v16; // rax
  unsigned int v17; // r15d
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  __int64 v24; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+20h]

  v25 = a4;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessible(a7) )
    return 0;
  Queue = CInputDest::GetQueue(a2, 0);
  v11 = a8;
  v12 = Queue;
  if ( Queue )
  {
    ThreadInfo = CInputDest::GetThreadInfo(a2);
    if ( !ThreadInfo )
      MicrosoftTelemetryAssertTriggeredMsgKM("How come we have USER Q, but not THREADINFO?");
    if ( a7 )
    {
      if ( (*(_DWORD *)a3 & 0x800) == 0
        && !CheckAccessForIntegrityLevelEx(
              *(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL),
              *(_QWORD *)(v12 + 428),
              0)
        && !v11 )
      {
        UserSetLastError(5LL);
LABEL_10:
        EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, v12, *(_QWORD *)(v12 + 428), 8);
        return 0;
      }
      if ( IsInputThread() && (*(_DWORD *)a3 & 0x800) == 0 && !v11 )
      {
        v16 = HMValidateHandleNoSecure(*((_QWORD *)a3 + 31), 19);
        if ( v16 )
        {
          if ( !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*(_QWORD *)(v16 + 480) + 888LL), *(_QWORD *)(v12 + 428), 0) )
            goto LABEL_10;
        }
      }
    }
  }
  v17 = a5;
  v18 = *((unsigned __int16 *)a3 + 118);
  if ( a5 != 595 )
    v18 |= (unsigned __int64)(*((_WORD *)a3 + 122) & 0xE1F7) << 16;
  GetPointerInputSource(*((unsigned int *)a3 + 58), a7, v11, &v24);
  v19 = flagString(WORD1(v18));
  messageString(v17, v19);
  WPP_RECORDER_SF_LsHHsLLLL(*((_QWORD *)this + 1), v20, v21, v22);
  v14 = ApiSetEditionPostInputMessage(
          (__int64)a2,
          0LL,
          v17,
          v18,
          v25,
          a6,
          *((_QWORD *)a3 + 39),
          0LL,
          *((_DWORD *)a3 + 94) != 0 ? 8 : 0,
          &v24,
          0LL,
          0LL);
  if ( v14 )
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0x113u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  return v14;
}
