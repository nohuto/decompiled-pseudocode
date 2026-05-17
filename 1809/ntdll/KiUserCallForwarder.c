/*
 * XREFs of KiUserCallForwarder @ 0x1800A3EC0
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A3F10 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcher @ 0x1800A4020 (KiUserCallbackDispatcher.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x1800844E0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 KiUserCallForwarder()
{
  __int64 v0; // rdx
  __int64 (__fastcall *v1)(_QWORD, __int64, __int64, __int64); // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  _guard_check_icall_fptr();
  return v1(v1, v0, v2, v3);
}
