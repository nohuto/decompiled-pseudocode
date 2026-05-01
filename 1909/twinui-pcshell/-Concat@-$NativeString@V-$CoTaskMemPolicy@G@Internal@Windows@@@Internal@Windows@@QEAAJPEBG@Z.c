/*
 * XREFs of ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x18014E788
 * Callers:
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x1802418BC (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *(_WORD *)(a2 + 2 * v2) );
  }
  else
  {
    v2 = 0LL;
  }
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(a1, a2, v2);
}
