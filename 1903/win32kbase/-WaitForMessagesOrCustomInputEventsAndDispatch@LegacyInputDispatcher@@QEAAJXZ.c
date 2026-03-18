/*
 * XREFs of ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0179350
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C006856C (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS result; // eax
  __int64 v3; // r8
  bool v4; // zf
  bool v5; // sf
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( !*((_QWORD *)this + 2) )
    return -1073741790;
  **((_QWORD **)this + 2) = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1416);
  result = KeWaitForMultipleObjects(
             *((_DWORD *)this + 12),
             *((PVOID **)this + 2),
             WaitAny,
             WrUserRequest,
             *((_BYTE *)this + 56),
             *((_BYTE *)this + 57),
             0LL,
             *((PKWAIT_BLOCK *)this + 3));
  v4 = result == 0;
  v5 = result < 0;
  if ( result >= 0 )
  {
    do
    {
      if ( v4 )
        break;
      v6 = *((unsigned int *)this + 10);
      v7 = *((unsigned int *)this + 13);
      if ( (unsigned int)v6 >= (unsigned int)v7 )
      {
LABEL_9:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v3);
        v6 = 0LL;
      }
      else
      {
        v3 = *((_QWORD *)this + 1);
        while ( *(_QWORD *)(v3 + 8LL * (unsigned int)v6) != *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * result) )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= (unsigned int)v7 )
            goto LABEL_9;
        }
      }
      LegacyInputDispatcher::Dispatch(this, v6, v3);
      result = KeWaitForMultipleObjects(
                 *((_DWORD *)this + 12),
                 *((PVOID **)this + 2),
                 WaitAny,
                 WrUserRequest,
                 *((_BYTE *)this + 56),
                 *((_BYTE *)this + 57),
                 0LL,
                 *((PKWAIT_BLOCK *)this + 3));
      v4 = result == 0;
      v5 = result < 0;
    }
    while ( result >= 0 );
    if ( !v5 )
      result = *((_DWORD *)this + 15);
  }
  *((_DWORD *)this + 12) = 1;
  return result;
}
