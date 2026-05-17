/*
 * XREFs of sub_1800A02E0 @ 0x1800A02E0
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A0330 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcher @ 0x1800A0440 (KiUserCallbackDispatcher.c)
 * Callees:
 *     __misaligned_access @ 0x18007FDC0 (__misaligned_access.c)
 */

__int64 sub_1800A02E0()
{
  __int64 v0; // rdx
  __int64 (__fastcall *v1)(_QWORD, __int64, __int64, __int64); // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  _guard_check_icall_fptr();
  return v1(v1, v0, v2, v3);
}
