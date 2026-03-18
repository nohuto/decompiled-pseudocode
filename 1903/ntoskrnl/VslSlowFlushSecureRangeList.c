/*
 * XREFs of VslSlowFlushSecureRangeList @ 0x1402908D8
 * Callers:
 *     HvlpSlowFlushListTb @ 0x14028E264 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14028E3EC (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslSlowFlushSecureRangeList(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v9; // rcx
  _KPROCESS *Process; // r8
  unsigned int v11; // eax
  _QWORD v12[14]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  v6 = a4;
  memset(v12, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255;
  v9 = (_QWORD *)(v6 + a2);
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = 0;
  if ( !(_DWORD)v5 )
    return 0;
  while ( *v9 > 0x7FFFFFFEFFFFuLL )
  {
    ++v11;
    ++v9;
    if ( v11 >= (unsigned int)v5 )
      return 0;
  }
  v12[1] = Process->SecureState.SecureHandle;
  v12[2] = a1;
  v12[3] = v5;
  v12[4] = v6;
  return VslpEnterIumSecureMode(2, 242LL, 0LL, (__int64)v12);
}
