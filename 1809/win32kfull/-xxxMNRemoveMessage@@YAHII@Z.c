/*
 * XREFs of ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0208854
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxMNRemoveMessage(int a1, int a2)
{
  unsigned int v5[14]; // [rsp+30h] [rbp-38h] BYREF

  memset(v5, 0, 0x30uLL);
  if ( !(unsigned int)xxxInternalGetMessage((__int64)v5, 0LL, 0, 0, 2, 0) || v5[2] != a1 && v5[2] != a2 )
    return 0LL;
  xxxInternalGetMessage((__int64)v5, 0LL, v5[2], v5[2], 1, 0);
  return 1LL;
}
