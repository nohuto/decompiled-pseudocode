/*
 * XREFs of CcSetReadAheadGranularity @ 0x140128200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall CcSetReadAheadGranularity(PFILE_OBJECT FileObject, ULONG Granularity)
{
  *((_DWORD *)FileObject->PrivateCacheMap + 1) = Granularity - 1;
}
