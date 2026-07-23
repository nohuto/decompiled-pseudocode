/*
 * XREFs of ViXdvSearchAndReplaceThunkArray @ 0x1409297D0
 * Callers:
 *     ViXdvSearchAllThunkArrays @ 0x140929764 (ViXdvSearchAllThunkArrays.c)
 * Callees:
 *     <none>
 */

char __fastcall ViXdvSearchAndReplaceThunkArray(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v6; // rdx

  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 32) == a3 )
    {
      v4 = *(_QWORD **)(a1 + 24);
      if ( v4 )
        break;
    }
    a1 += 40LL;
    if ( !*(_QWORD *)a1 )
      return 0;
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( *v4 != v6 )
    ++ViXdvThunksNotPristine;
  if ( v6 )
    ++ViXdvThunksBoundToXdv;
  else
    ++ViXdvThunksShared;
  *v4 = a4;
  return 1;
}
