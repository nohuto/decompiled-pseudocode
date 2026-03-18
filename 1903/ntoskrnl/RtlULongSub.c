/*
 * XREFs of RtlULongSub @ 0x1400FE514
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x140281E60 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x1406AFA80 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140703680 (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x140739430 (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x140788698 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x140931950 (BiGetFilePathFromEfiPath.c)
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
