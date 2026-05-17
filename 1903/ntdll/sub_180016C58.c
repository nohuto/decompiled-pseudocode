/*
 * XREFs of sub_180016C58 @ 0x180016C58
 * Callers:
 *     sub_18000EE3C @ 0x18000EE3C (sub_18000EE3C.c)
 *     sub_18000EEB4 @ 0x18000EEB4 (sub_18000EEB4.c)
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     sub_1800157A4 @ 0x1800157A4 (sub_1800157A4.c)
 *     sub_18002B144 @ 0x18002B144 (sub_18002B144.c)
 *     sub_18002BFC0 @ 0x18002BFC0 (sub_18002BFC0.c)
 *     sub_1800E831C @ 0x1800E831C (sub_1800E831C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180016C58(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 i; // r9
  __int64 result; // rax

  if ( a1 && a2 <= 0x7FFFFFFF )
  {
    for ( i = a2; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( a3 )
    {
      if ( i )
        *a3 = a2 - i;
      else
        *a3 = 0LL;
    }
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
