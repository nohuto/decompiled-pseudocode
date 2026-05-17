/*
 * XREFs of LdrGetFileNameFromLoadAsDataTable @ 0x1800E0060
 * Callers:
 *     <none>
 * Callees:
 *     sub_180054C74 @ 0x180054C74 (sub_180054C74.c)
 */

__int64 __fastcall LdrGetFileNameFromLoadAsDataTable(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  result = sub_180054C74(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( *((_QWORD *)&v4 + 1) )
      *a2 = *((_QWORD *)&v4 + 1);
    else
      return 3221225473LL;
  }
  return result;
}
