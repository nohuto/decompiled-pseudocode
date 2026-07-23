/*
 * XREFs of LdrpHandleInvalidUserCallTarget @ 0x180090150
 * Callers:
 *     LdrpValidateUserCallTarget @ 0x180090210 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180090260 (LdrpValidateUserCallTargetES.c)
 *     LdrpDispatchUserCallTarget @ 0x1800902B0 (LdrpDispatchUserCallTarget.c)
 *     LdrpDispatchUserCallTargetES @ 0x180090300 (LdrpDispatchUserCallTargetES.c)
 * Callees:
 *     RtlpHandleInvalidUserCallTarget @ 0x1800F98D0 (RtlpHandleInvalidUserCallTarget.c)
 */

void __fastcall LdrpHandleInvalidUserCallTarget()
{
  __int64 v0; // rax
  void (__fastcall *v1)(__int64, __int64, __int64, __int64); // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+A8h] [rbp-10h]

  v1 = (void (__fastcall *)(__int64, __int64, __int64, __int64))RtlpHandleInvalidUserCallTarget(v0);
  if ( v6 )
    v1(v3, v2, v4, v5);
}
