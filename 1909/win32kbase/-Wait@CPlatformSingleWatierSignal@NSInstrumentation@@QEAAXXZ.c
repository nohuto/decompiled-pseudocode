/*
 * XREFs of ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C0130B2C
 * Callers:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C0131914 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPlatformSingleWatierSignal::Wait(
        NSInstrumentation::CPlatformSingleWatierSignal *this)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  *(_QWORD *)this = &Event;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 2, -1, 0) != 1 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
}
