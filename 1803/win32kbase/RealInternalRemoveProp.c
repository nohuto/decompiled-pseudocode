/*
 * XREFs of RealInternalRemoveProp @ 0x1C004D8B0
 * Callers:
 *     <none>
 * Callees:
 *     _FindProp @ 0x1C004D8F8 (_FindProp.c)
 */

_QWORD *__fastcall RealInternalRemoveProp(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  __int64 v4; // r10
  _OWORD *v5; // r8
  __int64 v6; // rcx

  result = (_QWORD *)FindProp(a1, a2, a3);
  v5 = result;
  if ( result )
  {
    result = (_QWORD *)*result;
    v6 = 2LL * (unsigned int)--*(_DWORD *)(v4 + 4);
    *v5 = *(_OWORD *)(v4 + 16LL * *(unsigned int *)(v4 + 4) + 8);
    *(_QWORD *)(v4 + 8 * v6 + 8) = 0LL;
    *(_QWORD *)(v4 + 8 * v6 + 16) = 0LL;
  }
  return result;
}
