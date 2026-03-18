/*
 * XREFs of _lambda_538836bead5a962845b1ca8b143e9ec1_::operator() @ 0x1C009E778
 * Callers:
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C006E2D0 (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall lambda_538836bead5a962845b1ca8b143e9ec1_::operator()(unsigned int **a1, _DWORD *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // [rsp+0h] [rbp-18h]

  *a2 = 19;
  a2[1] = (*a1)[6];
  a2[2] = *(_DWORD *)(*a1[1] * *((_QWORD *)*a1 + 9) + *((_QWORD *)*a1 + 5) + 8LL);
  a2[3] = *(_QWORD *)(*a1[1] * *((_QWORD *)*a1 + 9) + *((_QWORD *)*a1 + 5));
  v3 = *(_QWORD *)(*a1[1] * *((_QWORD *)*a1 + 9) + *((_QWORD *)*a1 + 5));
  result = HIDWORD(v3);
  a2[4] = HIDWORD(v3);
  return result;
}
