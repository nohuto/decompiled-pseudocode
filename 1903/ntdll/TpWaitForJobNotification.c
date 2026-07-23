/*
 * XREFs of TpWaitForJobNotification @ 0x18007DE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_18007DF18 @ 0x18007DF18 (sub_18007DF18.c)
 *     sub_18007E008 @ 0x18007E008 (sub_18007E008.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = sub_18007E008(a1, 0LL);
  if ( result )
  {
    sub_18007DF18(a1);
    return sub_180066BBC(a1 + 16, 0, 1);
  }
  return result;
}
