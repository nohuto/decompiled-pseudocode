/*
 * XREFs of VslFastFlushSecureRangeList @ 0x14027AE38
 * Callers:
 *     HvlpFastFlushListTb @ 0x140279920 (HvlpFastFlushListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1402799F8 (HvlpFastFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129CB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

NTSTATUS __fastcall VslFastFlushSecureRangeList(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  char v5; // bl
  _KPROCESS *Process; // rbp
  _QWORD *v7; // rdx
  __int64 v8; // r8
  bool v9; // cc
  _QWORD v10[14]; // [rsp+20h] [rbp-88h] BYREF

  v2 = a2;
  if ( KeGetCurrentIrql() > 2u )
    return 255;
  v5 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x68uLL);
  if ( !(_DWORD)v2 )
    return 0;
  v7 = &v10[2];
  v8 = v2;
  do
  {
    v9 = *a1 <= 0x7FFFFFFEFFFFuLL;
    *v7 = *a1++;
    if ( v9 )
      v5 = 1;
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v5 )
    return 0;
  v10[1] = Process->SecureState.SecureHandle;
  return VslpEnterIumSecureMode(2u, 225LL, 0, (__int64)v10);
}
