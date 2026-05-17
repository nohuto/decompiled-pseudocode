/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x18006FF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x18007003C (RtlpPopulateContext.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

char __fastcall RtlInitStrongEnumerationHashTable(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  RtlpPopulateContext(a1, v5, 0LL);
  memset(a2, 0, 0x28uLL);
  v3 = v5[0];
  a2[3] = v5[0];
  *a2 = v3;
  return 1;
}
