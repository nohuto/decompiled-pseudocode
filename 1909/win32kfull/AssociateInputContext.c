/*
 * XREFs of AssociateInputContext @ 0x1C00FA4E0
 * Callers:
 *     AssociateInputContextEx @ 0x1C00FA3E0 (AssociateInputContextEx.c)
 *     DestroyInputContext @ 0x1C0156FFC (DestroyInputContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AssociateInputContext(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v4 = *(_QWORD *)(v2 + 208);
  if ( a2 )
    v3 = *a2;
  *(_QWORD *)(v2 + 208) = v3;
  return v4;
}
