/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A0440
 * Callers:
 *     <none>
 * Callees:
 *     ZwCallbackReturn @ 0x18009C780 (ZwCallbackReturn.c)
 *     sub_1800A02E0 @ 0x1800A02E0 (sub_1800A02E0.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax

  v5 = sub_1800A02E0();
  v6 = ZwCallbackReturn(0LL, 0, v5);
  RtlRaiseStatus(v6);
}
