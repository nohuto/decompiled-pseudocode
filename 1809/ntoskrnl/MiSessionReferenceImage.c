/*
 * XREFs of MiSessionReferenceImage @ 0x1401782BC
 * Callers:
 *     MmChangeImageProtection @ 0x140651780 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x140678FD0 (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14009DBC8 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionReferenceImage(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (__int64)MiSessionLookupImage(a1);
  if ( result )
  {
    ++*(_DWORD *)(result + 60);
    return 1LL;
  }
  return result;
}
