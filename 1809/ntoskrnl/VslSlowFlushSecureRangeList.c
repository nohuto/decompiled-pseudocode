/*
 * XREFs of VslSlowFlushSecureRangeList @ 0x14027C2B4
 * Callers:
 *     HvlpSlowFlushListTb @ 0x14027A09C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14027A214 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslSlowFlushSecureRangeList(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v5; // rdx
  _KPROCESS *Process; // r10
  unsigned int v7; // eax
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecureHandle; // [rsp+28h] [rbp-80h]
  __int64 v10; // [rsp+30h] [rbp-78h]
  __int64 v11; // [rsp+38h] [rbp-70h]
  __int64 v12; // [rsp+40h] [rbp-68h]

  if ( KeGetCurrentIrql() > 2u )
    return 255;
  v5 = (_QWORD *)(a4 + a2);
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  if ( !a3 )
    return 0;
  while ( *v5 > 0x7FFFFFFEFFFFuLL )
  {
    ++v7;
    ++v5;
    if ( v7 >= a3 )
      return 0;
  }
  SecureHandle = Process->SecureState.SecureHandle;
  v10 = a1;
  v12 = a4;
  v11 = a3;
  return VslpEnterIumSecureMode(2u, 226LL, 0, (__int64)v8);
}
