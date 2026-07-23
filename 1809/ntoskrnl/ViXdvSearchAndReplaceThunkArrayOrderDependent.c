/*
 * XREFs of ViXdvSearchAndReplaceThunkArrayOrderDependent @ 0x14092981C
 * Callers:
 *     ViXdvSearchAllThunkArrays @ 0x140929764 (ViXdvSearchAllThunkArrays.c)
 * Callees:
 *     <none>
 */

char __fastcall ViXdvSearchAndReplaceThunkArrayOrderDependent(__int64 a1, int a2, __int64 a3)
{
  char **v3; // rax
  char *v4; // rcx
  char *v6; // rdx

  v3 = &VfOrderDependentThunks;
  while ( 1 )
  {
    if ( *((_DWORD *)v3 + 10) == a2 )
    {
      v4 = v3[3];
      if ( v4 )
        break;
    }
    v3 += 6;
    if ( !*v3 )
      return 0;
  }
  v6 = v3[2];
  if ( *(char **)v4 != v6 )
    ++ViXdvThunksNotPristine;
  if ( v6 )
    ++ViXdvThunksBoundToXdv;
  else
    ++ViXdvThunksShared;
  *(_QWORD *)v4 = a3;
  return 1;
}
