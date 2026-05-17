/*
 * XREFs of sub_1800D491C @ 0x1800D491C
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 */

__int64 (__fastcall **sub_1800D491C())()
{
  __int64 (__fastcall **result)(); // rax

  result = (__int64 (__fastcall **)())sub_18001AE58();
  if ( (_DWORD)result == 1 )
  {
    result = &off_180119190;
    qword_180165360 = (__int64)&off_180119190;
  }
  return result;
}
