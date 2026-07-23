/*
 * XREFs of RtlULongSub @ 0x140101D94
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x14026E550 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x14068CEE8 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E8D18 (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x14070E2DC (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x140762A2C (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x1408F4F48 (BiGetFilePathFromEfiPath.c)
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
