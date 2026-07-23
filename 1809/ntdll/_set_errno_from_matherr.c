/*
 * XREFs of _set_errno_from_matherr @ 0x180098B80
 * Callers:
 *     _call_matherr @ 0x180097CF8 (_call_matherr.c)
 *     _handle_error @ 0x180097E24 (_handle_error.c)
 *     _except1 @ 0x180098500 (_except1.c)
 *     _umatherr @ 0x180098BB4 (_umatherr.c)
 * Callees:
 *     _errno @ 0x180088270 (_errno.c)
 */

int *__fastcall set_errno_from_matherr(int a1)
{
  int *result; // rax

  if ( a1 == 1 )
  {
    result = errno();
    *result = 33;
  }
  else
  {
    result = (int *)(unsigned int)(a1 - 2);
    if ( (unsigned int)result <= 1 )
    {
      result = errno();
      *result = 34;
    }
  }
  return result;
}
