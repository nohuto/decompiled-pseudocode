/*
 * XREFs of _set_errno_from_matherr @ 0x14019A1E4
 * Callers:
 *     _call_matherr @ 0x1401998AC (_call_matherr.c)
 *     _handle_error @ 0x1401999D8 (_handle_error.c)
 *     _handle_errorf @ 0x140199B08 (_handle_errorf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall set_errno_from_matherr(int a1)
{
  __int64 result; // rax

  if ( a1 == 1 )
  {
    gbl_errno = 33;
  }
  else
  {
    result = (unsigned int)(a1 - 2);
    if ( (unsigned int)result <= 1 )
      gbl_errno = 34;
  }
  return result;
}
