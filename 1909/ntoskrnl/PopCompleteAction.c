/*
 * XREFs of PopCompleteAction @ 0x140726430
 * Callers:
 *     PopExecutePowerAction @ 0x1407274F8 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140727BB0 (PopPolicyWorkerAction.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall PopCompleteAction(__int64 a1, LONG a2)
{
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  result = *(_DWORD *)(a1 + 4);
  if ( (result & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 4) = result & 0xFFFFFFDF;
    v3 = *(struct _KEVENT **)(a1 + 8);
    v3[1].Header.LockNV = a2;
    return KeSetEvent(v3, 0, 0);
  }
  return result;
}
