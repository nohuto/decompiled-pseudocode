/*
 * XREFs of sub_1800D0BEC @ 0x1800D0BEC
 * Callers:
 *     sub_180071E18 @ 0x180071E18 (sub_180071E18.c)
 * Callees:
 *     sub_180020514 @ 0x180020514 (sub_180020514.c)
 *     sub_180020C18 @ 0x180020C18 (sub_180020C18.c)
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 */

signed __int32 sub_1800D0BEC()
{
  signed __int32 result; // eax
  __int64 v1; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp+8h] BYREF

  result = _InterlockedIncrement(&dword_1801665BC);
  if ( result == 1 )
  {
    v1 = sub_180020C18();
    result = sub_180020514(0LL, 0, &_security_cookie, v1 ^ LdrSystemDllInitBlock.RngData, 0LL);
    _InterlockedOr(v2, 0);
    byte_1801664E4 = 1;
  }
  else
  {
    DelayInterval.QuadPart = -300000LL;
    while ( !byte_1801664E4 )
      result = ZwDelayExecution(0, &DelayInterval);
  }
  return result;
}
