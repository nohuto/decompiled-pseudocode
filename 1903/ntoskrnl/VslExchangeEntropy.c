/*
 * XREFs of VslExchangeEntropy @ 0x14019C310
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall VslExchangeEntropy(void *a1)
{
  NTSTATUS v2; // ebx
  _BYTE v4[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  memmove(&v4[16], a1, 0x40uLL);
  v2 = VslpEnterIumSecureMode(2, 34LL, 0LL, (__int64)v4);
  if ( v2 >= 0 )
    memmove(a1, &v4[16], 0x40uLL);
  return (unsigned int)v2;
}
