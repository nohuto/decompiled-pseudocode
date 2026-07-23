/*
 * XREFs of sub_1801018F0 @ 0x1801018F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 */

__int64 __fastcall sub_1801018F0(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  _QWORD *v4; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = xmmword_1801638B0;
  v4 = sub_18004CF00(0x20uLL, 0x20uLL, 0, &v6);
  result = 0LL;
  if ( v4 )
  {
    *v4 = 0LL;
    *(_QWORD *)((char *)v4 + 20) = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    result = 1LL;
    *a3 = v4;
  }
  return result;
}
