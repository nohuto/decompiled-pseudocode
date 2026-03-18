/*
 * XREFs of ?GetTransform@CInteractionRoot@@UEBA?AVCMILMatrix@@XZ @ 0x18023C880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::GetTransform(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  *(_OWORD *)a2 = _xmm;
  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  return result;
}
