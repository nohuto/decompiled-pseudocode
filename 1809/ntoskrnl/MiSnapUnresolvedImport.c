/*
 * XREFs of MiSnapUnresolvedImport @ 0x14084FFA8
 * Callers:
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 */

_WORD *__fastcall MiSnapUnresolvedImport(__int64 a1, __int64 *a2, void *a3)
{
  _WORD *result; // rax
  __int64 v6; // rcx
  ULONG Size; // [rsp+48h] [rbp+20h] BYREF

  result = RtlImageDirectoryEntryToData(a3, 1u, 0, &Size);
  if ( result )
  {
    v6 = *a2;
    if ( *a2 >= 0 )
      return (_WORD *)(v6 + a1 + 2);
    else
      return (_WORD *)(unsigned __int16)(v6 - result[8]);
  }
  return result;
}
