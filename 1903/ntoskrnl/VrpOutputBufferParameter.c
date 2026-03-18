/*
 * XREFs of VrpOutputBufferParameter @ 0x140841DB4
 * Callers:
 *     VrpPostEnumerateKey @ 0x140844004 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140844BE0 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
