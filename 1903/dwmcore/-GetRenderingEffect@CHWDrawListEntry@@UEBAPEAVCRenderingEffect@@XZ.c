/*
 * XREFs of ?GetRenderingEffect@CHWDrawListEntry@@UEBAPEAVCRenderingEffect@@XZ @ 0x1800DA940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CHWDrawListEntry::GetRenderingEffect(CHWDrawListEntry *this)
{
  return (struct CRenderingEffect *)*((_QWORD *)this + 19);
}
