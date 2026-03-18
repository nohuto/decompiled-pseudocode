/*
 * XREFs of KeUnsecureProcess @ 0x1402A5304
 * Callers:
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = *(_QWORD *)(a1 + 728);
  *(_QWORD *)(a1 + 728) = 0LL;
  if ( v1 )
  {
    memset(v3, 0, 0x68uLL);
    v3[1] = v1;
    return VslpEnterIumSecureMode(2, 30LL, 0LL, (__int64)v3);
  }
  return result;
}
