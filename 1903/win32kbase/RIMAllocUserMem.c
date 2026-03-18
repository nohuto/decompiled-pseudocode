/*
 * XREFs of RIMAllocUserMem @ 0x1C013CCB0
 * Callers:
 *     <none>
 * Callees:
 *     rimAllocUserMemInternal @ 0x1C013CD84 (rimAllocUserMemInternal.c)
 */

__int64 __fastcall RIMAllocUserMem(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  rimAllocUserMemInternal(a1, a2, &v3);
  return v3;
}
