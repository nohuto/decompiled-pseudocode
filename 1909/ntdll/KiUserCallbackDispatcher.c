/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A0BF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCallbackReturn @ 0x18009CF30 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A0A90 (KiUserCallForwarder.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
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
