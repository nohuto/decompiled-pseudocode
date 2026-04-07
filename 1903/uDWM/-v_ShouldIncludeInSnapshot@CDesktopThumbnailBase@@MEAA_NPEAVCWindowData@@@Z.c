/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CDesktopThumbnailBase@@MEAA_NPEAVCWindowData@@@Z @ 0x1800B0540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopThumbnailBase::v_ShouldIncludeInSnapshot(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  return (unsigned __int8)~*((_BYTE *)a2 + 607) >> 7;
}
