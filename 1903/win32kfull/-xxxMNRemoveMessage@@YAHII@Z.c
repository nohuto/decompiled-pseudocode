/*
 * XREFs of ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0220204
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxMNRemoveMessage(int a1, int a2)
{
  int v5[12]; // [rsp+30h] [rbp-38h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( !(unsigned int)xxxInternalGetMessage((int)v5, 0, 0, 0, 2, 0) || v5[2] != a1 && v5[2] != a2 )
    return 0LL;
  xxxInternalGetMessage((int)v5, 0, v5[2], v5[2], 1, 0);
  return 1LL;
}
