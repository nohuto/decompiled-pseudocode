/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A4020
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1800A0380 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A3EC0 (KiUserCallForwarder.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax

  KiUserCallForwarder();
  v5 = ZwCallbackReturn();
  RtlRaiseStatus(v5);
}
