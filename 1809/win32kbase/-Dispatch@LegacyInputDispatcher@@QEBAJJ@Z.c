/*
 * XREFs of ?Dispatch@LegacyInputDispatcher@@QEBAJJ@Z @ 0x1C004AA24
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C004A890 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C014A1E0 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C004AAF0 (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::Dispatch(LegacyInputDispatcher *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // r8

  v3 = (int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 13)
    || !LegacyInputDispatcher::HasInputDispatcherObjects(this)
    || (unsigned int)v3 < *((_DWORD *)this + 10) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  }
  if ( !*((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (int)v3 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !LegacyInputDispatcher::HasInputDispatcherObjects(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 13) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v8 = *((unsigned int *)this + 10);
  if ( (unsigned int)v3 < (unsigned int)v8 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v5, v7);
    v8 = *((unsigned int *)this + 10);
  }
  v9 = *((_QWORD *)this + 4);
  v10 = 2LL * (unsigned int)(v3 - v8);
  if ( !*(_QWORD *)(v9 + 16LL * (unsigned int)(v3 - v8)) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v9, v7);
    v9 = *((_QWORD *)this + 4);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v9 + 8 * v10))(
          *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v3),
          *(_QWORD *)(v9 + 8 * v10 + 8));
  if ( v13 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
  return (unsigned int)v13;
}
