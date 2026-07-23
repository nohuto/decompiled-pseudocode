/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x14013FA9C
 * Callers:
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x140128774 (KiInitializeUserApc.c)
 *     KeRaiseUserException @ 0x140290890 (KeRaiseUserException.c)
 *     KiRaiseException @ 0x14029A3A0 (KiRaiseException.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall KiSetupForInstrumentationReturn(__int64 a1)
{
  struct _KTHREAD *result; // rax
  void *InstrumentationCallback; // r8

  result = KeGetCurrentThread();
  InstrumentationCallback = result->ApcState.Process->InstrumentationCallback;
  if ( InstrumentationCallback )
  {
    if ( *(_WORD *)(a1 + 368) == 51 )
    {
      result = *(struct _KTHREAD **)(a1 + 360);
      *(_QWORD *)(a1 + 88) = result;
      *(_QWORD *)(a1 + 360) = InstrumentationCallback;
    }
  }
  return result;
}
