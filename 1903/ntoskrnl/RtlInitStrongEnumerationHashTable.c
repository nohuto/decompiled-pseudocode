/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x140170B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x140085FE8 (RtlpPopulateContext.c)
 */

char __fastcall RtlInitStrongEnumerationHashTable(_DWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v5[0] = 0LL;
  RtlpPopulateContext(a1, (__int64)v5, 0);
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[4] = 0LL;
  v3 = v5[0];
  a2[3] = v5[0];
  *a2 = v3;
  return 1;
}
