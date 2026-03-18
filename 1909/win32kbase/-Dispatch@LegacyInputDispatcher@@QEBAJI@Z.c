/*
 * XREFs of ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C0053ECC
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0053C20 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0177160 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C0053F4C (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::Dispatch(LegacyInputDispatcher *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 13)
    || !LegacyInputDispatcher::HasInputDispatcherObjects(this)
    || (unsigned int)v4 < *((_DWORD *)this + 10) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  }
  v5 = *((_QWORD *)this + 4);
  v6 = v4;
  v7 = 2 * v4;
  if ( !*(_QWORD *)(v5 + 8 * v7) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v5, a3);
    v5 = *((_QWORD *)this + 4);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v5 + 8 * v7))(
          *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v6),
          *(_QWORD *)(v5 + 8 * v7 + 8));
  if ( v10 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v11);
  return (unsigned int)v10;
}
