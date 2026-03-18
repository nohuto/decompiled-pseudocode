/*
 * XREFs of MiSessionReferenceImage @ 0x140181B9C
 * Callers:
 *     MmChangeImageProtection @ 0x1406A5FC0 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400172D0 (MiSessionLookupImage.c)
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
