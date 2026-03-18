/*
 * XREFs of ?GetRenderingEffect@CWARPDrawListEntry@@UEBAPEAVCRenderingEffect@@XZ @ 0x1801B9A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CWARPDrawListEntry::GetRenderingEffect(CWARPDrawListEntry *this)
{
  return (struct CRenderingEffect *)(((unsigned __int64)this + 144) & -(__int64)(this != 0LL));
}
