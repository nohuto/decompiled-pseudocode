/*
 * XREFs of sub_1800B6F20 @ 0x1800B6F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B6F20(__int64 a1)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)(a1 + 16);
  *v1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return sub_1800CFDD0(v1);
}
