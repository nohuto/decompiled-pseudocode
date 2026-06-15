/*
 * XREFs of _set_errno @ 0x180035184
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033E18 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl set_errno(int Value)
{
  return _o__set_errno(Value);
}
