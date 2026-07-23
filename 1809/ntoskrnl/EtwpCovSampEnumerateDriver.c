/*
 * XREFs of EtwpCovSampEnumerateDriver @ 0x1408C7760
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpCovSampImageNotify @ 0x1408C7D70 (EtwpCovSampImageNotify.c)
 */

__int64 __fastcall EtwpCovSampEnumerateDriver(__int64 a1)
{
  __int64 v2; // rax
  _QWORD v4[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(v4, 0, 0x38uLL);
  v2 = *(_QWORD *)(a1 + 48);
  LODWORD(v4[1]) |= 0x500u;
  v4[2] = v2;
  v4[4] = *(unsigned int *)(a1 + 64);
  v4[0] = 56LL;
  EtwpCovSampImageNotify((PUNICODE_STRING)(a1 + 72), 0LL, (PIMAGE_INFO)&v4[1]);
  return 0LL;
}
