/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x1C00BA518
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00B9ECC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     IPostQuitMessage @ 0x1C00BA650 (IPostQuitMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall TerminateDesktopThreads(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v4; // ebx
  PVOID *v5; // rcx
  __int64 v6; // rcx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v8; // [rsp+48h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (PVOID *)*((_QWORD *)&gTermIO + 2);
  if ( v5 )
  {
    Object = *v5;
    ObfReferenceObject(Object);
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
  v6 = qword_1C032A0F0;
  if ( qword_1C032A0F0 )
  {
    v8 = *(PVOID *)qword_1C032A0F0;
    ObfReferenceObject(v8);
    ++v4;
    if ( Event )
    {
      gTermNOIO |= 8u;
      KeSetEvent(Event, 1, 0);
    }
    else
    {
      IPostQuitMessage(qword_1C032A0F0, 0LL);
    }
  }
  if ( v4 )
  {
    if ( gdwInAtomicOperation )
    {
      v6 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, a3, a4);
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForMultipleObjects(v4, &Object, WaitAll, WrUserRequest, 0, 1u, &Timeout, 0LL) == 258 )
      gdwHydraHint |= 0x800000u;
    ObfDereferenceObject(Object);
    if ( v4 > 1 )
      ObfDereferenceObject(v8);
    EnterCrit(0LL, 1LL);
  }
  gdwHydraHint |= 0x800u;
}
