/*
 * XREFs of KiSetupForInstrumentationReturn @ 0x14013F97C
 * Callers:
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x140128684 (KiInitializeUserApc.c)
 *     KeRaiseUserException @ 0x1402905A0 (KeRaiseUserException.c)
 *     KiRaiseException @ 0x14029A0B0 (KiRaiseException.c)
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
