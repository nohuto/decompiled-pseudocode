/*
 * XREFs of ?GetRenderingEffect@CGroupDrawListEntry@@UEBAPEAVCRenderingEffect@@XZ @ 0x1800DA810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CRenderingEffect *__fastcall CGroupDrawListEntry::GetRenderingEffect(CGroupDrawListEntry *this)
{
  return (struct CRenderingEffect *)*((_QWORD *)this + 3);
}
