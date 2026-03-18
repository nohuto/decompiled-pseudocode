/*
 * XREFs of _lambda_73beea7eabdc26e1849045dd168ca159_::operator() @ 0x1C00AF4A0
 * Callers:
 *     ?EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008800 (-EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_73beea7eabdc26e1849045dd168ca159_::operator()(unsigned int **a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 14;
  *(_DWORD *)(a2 + 4) = (*a1)[6];
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(*a1[1] * *((_QWORD *)*a1 + 15) + *((_QWORD *)*a1 + 11));
  result = *(unsigned int *)(*a1[1] * *((_QWORD *)*a1 + 15) + *((_QWORD *)*a1 + 11) + 8LL);
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
