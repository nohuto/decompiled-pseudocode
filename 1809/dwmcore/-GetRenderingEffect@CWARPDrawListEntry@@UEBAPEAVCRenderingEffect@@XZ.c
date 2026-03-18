/*
 * XREFs of ?GetRenderingEffect@CWARPDrawListEntry@@UEBAPEAVCRenderingEffect@@XZ @ 0x180186720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CWARPDrawListEntry::GetRenderingEffect(CWARPDrawListEntry *this)
{
  return (struct CRenderingEffect *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL));
}
