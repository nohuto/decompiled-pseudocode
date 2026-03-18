/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x1C0016E34
 * Callers:
 *     NtUserSetProp @ 0x1C0016C50 (NtUserSetProp.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0016E5C (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetGlobalAtomTableOfWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 664LL);
  if ( result )
    return *(_QWORD *)(result + 136);
  return result;
}
