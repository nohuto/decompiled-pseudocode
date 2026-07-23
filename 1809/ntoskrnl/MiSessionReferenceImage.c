/*
 * XREFs of MiSessionReferenceImage @ 0x1401783DC
 * Callers:
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14009DB08 (MiSessionLookupImage.c)
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
