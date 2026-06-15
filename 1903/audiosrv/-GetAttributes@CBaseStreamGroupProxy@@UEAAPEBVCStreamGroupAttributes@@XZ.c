/*
 * XREFs of ?GetAttributes@CBaseStreamGroupProxy@@UEAAPEBVCStreamGroupAttributes@@XZ @ 0x180049160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct CStreamGroupAttributes *__fastcall CBaseStreamGroupProxy::GetAttributes(CBaseStreamGroupProxy *this)
{
  return (const struct CStreamGroupAttributes *)*((_QWORD *)this + 8);
}
