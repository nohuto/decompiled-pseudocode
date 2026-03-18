/*
 * XREFs of RtlpGetStackLimitsEx @ 0x140016C38
 * Callers:
 *     RtlDispatchException @ 0x1400173E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140019840 (RtlUnwindEx.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1400C2FA0 (KeQueryCurrentStackInformationEx.c)
 */

__int64 __fastcall RtlpGetStackLimitsEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v4; // [rsp+48h] [rbp+20h] BYREF

  result = KeQueryCurrentStackInformationEx(a1, &v4, a2, a3);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
