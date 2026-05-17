/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x180067190
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800672AC @ 0x1800672AC (sub_1800672AC.c)
 */

char __fastcall RtlInitStrongEnumerationHashTable(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_1800672AC(a1, v5, 0LL);
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[4] = 0LL;
  v3 = v5[0];
  a2[3] = v5[0];
  *a2 = v3;
  return 1;
}
