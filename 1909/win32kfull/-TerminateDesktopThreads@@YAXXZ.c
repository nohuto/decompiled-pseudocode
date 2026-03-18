/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x1C0079CA8
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C007A04C (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     IPostQuitMessage @ 0x1C0079FE0 (IPostQuitMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void TerminateDesktopThreads(void)
{
  ULONG v0; // ebx
  void *v1; // rcx
  int v2; // edx
  int v3; // ecx
  PVOID v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v12; // [rsp+48h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  if ( gpTouchProcessor )
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(gpTouchProcessor);
  v1 = (void *)gTermIO[8];
  if ( v1 )
  {
    Object = (PVOID)gTermIO[8];
    ObfReferenceObject(v1);
    v0 = 1;
    if ( gTermIO[7] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_(v3, v2, 8, 10, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
      }
      LODWORD(gTermIO[0]) |= 8u;
      KeSetEvent((PRKEVENT)gTermIO[7], 1, 0);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 4;
        WPP_RECORDER_SF_(v3, v2, 8, 11, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
      }
      IPostQuitMessage(gTermIO[2], 0LL);
    }
    gdwHydraHint |= 0x80000u;
  }
  else if ( gTermIO[1] )
  {
    HMAssignmentUnlock(&gTermIO[1]);
  }
  v4 = ::Object;
  if ( ::Object )
  {
    v12 = ::Object;
    ObfReferenceObject(::Object);
    ++v0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(v6, v5, 7, 12, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
    }
    if ( Event )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(v6, v5, 8, 13, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
      }
      gTermNOIO |= 8u;
      KeSetEvent(Event, 1, 0);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(v6, v5, 8, 14, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
      }
      IPostQuitMessage(qword_1C0329730, 0LL);
    }
  }
  if ( v0 )
  {
    Timeout.QuadPart = 0LL;
    if ( gdwInAtomicOperation )
    {
      v4 = (PVOID)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(v8, v7, 7, 15, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
    }
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForMultipleObjects(v0, &Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL) == 258 )
      gdwHydraHint |= 0x800000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_(v10, v9, 7, 16, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
    }
    ObfDereferenceObject(Object);
    if ( v0 > 1 )
      ObfDereferenceObject(v12);
    EnterCrit(0LL, 1LL);
  }
  gdwHydraHint |= 0x800u;
}
