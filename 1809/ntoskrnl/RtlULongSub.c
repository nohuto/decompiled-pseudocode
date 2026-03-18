/*
 * XREFs of RtlULongSub @ 0x140101CF4
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x14026E260 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x14068BD48 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E7A98 (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x14070D05C (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x14076185C (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x1408F3CA8 (BiGetFilePathFromEfiPath.c)
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
