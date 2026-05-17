/*
 * XREFs of TpWaitForJobNotification @ 0x18007DE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_18007DF18 @ 0x18007DF18 (sub_18007DF18.c)
 *     sub_18007E008 @ 0x18007E008 (sub_18007E008.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // r9

  result = sub_18007E008(a1, 0LL);
  if ( (_DWORD)result )
  {
    sub_18007DF18(a1);
    return sub_180066BBC((volatile signed __int64 *)(a1 + 128), 0, 1uLL, v3);
  }
  return result;
}
