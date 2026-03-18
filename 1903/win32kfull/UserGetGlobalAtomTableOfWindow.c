/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x1C01026E4
 * Callers:
 *     InternalSetProp @ 0x1C008C438 (InternalSetProp.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C01024A4 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     NtUserSetProp @ 0x1C0102500 (NtUserSetProp.c)
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
