/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x1C00EAB60
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EADEC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C00EAD80 (IPostQuitMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall TerminateDesktopThreads(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v4; // ebx
  void *v5; // rcx
  PVOID v6; // rcx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v8; // [rsp+48h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( gpTouchProcessor )
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(gpTouchProcessor);
  v5 = (void *)*((_QWORD *)&gTermIO + 8);
  if ( v5 )
  {
    Object = (PVOID)*((_QWORD *)&gTermIO + 8);
    ObfReferenceObject(v5);
    v4 = 1;
    if ( *((_QWORD *)&gTermIO + 7) )
    {
      LODWORD(gTermIO) = (unsigned int)gTermIO | 8;
      KeSetEvent(*((PRKEVENT *)&gTermIO + 7), 1, 0);
    }
    else
    {
      IPostQuitMessage(*((_QWORD *)&gTermIO + 2), 0LL);
    }
    gdwHydraHint |= 0x80000u;
  }
  else if ( *((_QWORD *)&gTermIO + 1) )
  {
    HMAssignmentUnlock(&gTermIO + 1);
  }
  v6 = ::Object;
  if ( ::Object )
  {
    v8 = ::Object;
    ObfReferenceObject(::Object);
    ++v4;
    if ( Event )
    {
      gTermNOIO |= 8u;
      KeSetEvent(Event, 1, 0);
    }
    else
    {
      IPostQuitMessage(qword_1C0316700, 0LL);
    }
  }
  if ( v4 )
  {
    if ( gdwInAtomicOperation )
    {
      v6 = (PVOID)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, a3, a4);
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForMultipleObjects(v4, &Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL) == 258 )
      gdwHydraHint |= 0x800000u;
    ObfDereferenceObject(Object);
    if ( v4 > 1 )
      ObfDereferenceObject(v8);
    EnterCrit(0LL, 1LL);
  }
  gdwHydraHint |= 0x800u;
}
