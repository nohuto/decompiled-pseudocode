/*
 * XREFs of ?CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0295C00
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0294EC0 (-AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CollectDisplayAdaptersCallback(
        struct DXGADAPTER *a1,
        DISPLAYSTATECHECKER *this)
{
  return DISPLAYSTATECHECKER::AddDisplayAdapter(this, a1);
}
