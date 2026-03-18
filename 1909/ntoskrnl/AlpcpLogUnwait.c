/*
 * XREFs of AlpcpLogUnwait @ 0x140886794
 * Callers:
 *     AlpcpSignalAndWait @ 0x14000CDC0 (AlpcpSignalAndWait.c)
 *     AlpcpWaitForSingleObject @ 0x140122AC8 (AlpcpWaitForSingleObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpInvokeLogCallbacks @ 0x14088642C (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogUnwait(int a1)
{
  __int128 v2; // xmm0
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  v2 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  LODWORD(v4[1]) = 5;
  DWORD2(v4[1]) = a1;
  v4[0] = v2;
  return AlpcpInvokeLogCallbacks((__int64)v4, 0x20u);
}
