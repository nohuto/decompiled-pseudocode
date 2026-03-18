/*
 * XREFs of ?IsAssociatedWithSystemVisual@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAA_NVResourceHandle@@@Z @ 0x1C0004920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::IsAssociatedWithSystemVisual(__int64 a1, int a2)
{
  return *(_DWORD *)(a1 + 352) == a2;
}
