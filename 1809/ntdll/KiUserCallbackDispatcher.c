/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A4040
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1800A03A0 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A3EE0 (KiUserCallForwarder.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  __int64 v7; // [rsp+20h] [rbp+20h]

  v5 = KiUserCallForwarder(v7, (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)(unsigned int)a5);
  v6 = ZwCallbackReturn(0LL, 0, v5);
  RtlRaiseStatus(v6);
}
