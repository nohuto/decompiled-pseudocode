/*
 * XREFs of ?AddRef@CRenderingTechnique@@UEAAKXZ @ 0x18006CDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderingTechnique::AddRef(CRenderingTechnique *this)
{
  return (***((__int64 (__fastcall ****)(_QWORD))this + 1))(*((_QWORD *)this + 1));
}
