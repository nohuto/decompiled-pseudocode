/*
 * XREFs of sub_180075CE8 @ 0x180075CE8
 * Callers:
 *     RtlAcquirePrivilege @ 0x180075AD0 (RtlAcquirePrivilege.c)
 * Callees:
 *     ZwOpenThreadTokenEx @ 0x18009CCC0 (ZwOpenThreadTokenEx.c)
 */

__int64 __fastcall sub_180075CE8(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = 1;
  result = ZwOpenThreadTokenEx(-2LL, a1, a3);
  if ( (int)result < 0 )
    return ZwOpenThreadTokenEx(-2LL, a1, 0LL);
  return result;
}
