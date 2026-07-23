/*
 * XREFs of PspUnlinkJobProcess @ 0x140604A04
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspUnlinkJobProcess(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = (_QWORD *)(a1 + 1088);
  for ( i = *(_QWORD **)(a1 + 1088); i != v2; i = (_QWORD *)*i )
  {
    if ( i[2] == a2 + 1136 )
      i[2] = *(_QWORD *)(a2 + 1144);
  }
  result = a2 + 1136;
  v5 = *(_QWORD *)(a2 + 1136);
  if ( *(_QWORD *)(v5 + 8) != result || (v6 = *(_QWORD **)(result + 8), *v6 != result) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  return result;
}
