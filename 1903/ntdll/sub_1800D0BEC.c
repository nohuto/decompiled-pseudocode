/*
 * XREFs of sub_1800D0BEC @ 0x1800D0BEC
 * Callers:
 *     sub_180071E18 @ 0x180071E18 (sub_180071E18.c)
 * Callees:
 *     sub_180020514 @ 0x180020514 (sub_180020514.c)
 *     sub_180020C18 @ 0x180020C18 (sub_180020C18.c)
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 */

__int64 sub_1800D0BEC()
{
  __int64 result; // rax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF

  result = (unsigned int)_InterlockedIncrement(&dword_1801665BC);
  if ( (_DWORD)result == 1 )
  {
    v1 = sub_180020C18();
    result = sub_180020514(0LL, 0, &_security_cookie, v1 ^ (unsigned int)dword_18017A368, 0LL);
    _InterlockedOr(v2, 0);
    byte_1801664E4 = 1;
  }
  else
  {
    while ( !byte_1801664E4 )
      result = ZwDelayExecution();
  }
  return result;
}
