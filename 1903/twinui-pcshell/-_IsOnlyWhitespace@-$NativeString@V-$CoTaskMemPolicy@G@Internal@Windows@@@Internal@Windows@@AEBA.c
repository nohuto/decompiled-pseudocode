/*
 * XREFs of ?_IsOnlyWhitespace@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBA_NXZ @ 0x180360530
 * Callers:
 *     ?_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z @ 0x180360688 (-_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_IsOnlyWhitespace(
        _QWORD *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rdi
  char v4; // si

  v1 = a1[1];
  if ( v1 == -1LL )
  {
    if ( *a1 )
    {
      do
        ++v1;
      while ( *(_WORD *)(*a1 + 2 * v1) );
    }
    else
    {
      v1 = 0LL;
    }
  }
  v3 = 0LL;
  if ( !v1 )
    return 0;
  v4 = 1;
  do
  {
    if ( !wcschr(asc_1804FE9E0, *(_WORD *)(*a1 + 2 * v3)) )
      break;
    ++v3;
  }
  while ( v3 < v1 );
  if ( !v3 || v3 != v1 )
    return 0;
  return v4;
}
