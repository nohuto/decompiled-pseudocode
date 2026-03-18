/*
 * XREFs of SdbpMatchOne @ 0x1409240D0
 * Callers:
 *     <none>
 * Callees:
 *     SdbpMatchList @ 0x1407721C8 (SdbpMatchList.c)
 */

__int64 __fastcall SdbpMatchOne(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v7; // [rsp+30h] [rbp-18h]

  return SdbpMatchList(a1, a2, a3, a5, a6, 1, v7);
}
