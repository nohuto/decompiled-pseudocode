/*
 * XREFs of RtlULongSub @ 0x1401006A4
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x140281BC0 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x1406B19B0 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140705460 (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x14073B6C0 (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x14078AAF8 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x1409313C4 (BiGetFilePathFromEfiPath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongSub(ULONG ulMinuend, ULONG ulSubtrahend, ULONG *pulResult)
{
  ULONG v3; // r9d

  if ( ulMinuend < ulSubtrahend )
    v3 = -1;
  else
    v3 = ulMinuend - ulSubtrahend;
  *pulResult = v3;
  return ulMinuend < ulSubtrahend ? 0xC0000095 : 0;
}
