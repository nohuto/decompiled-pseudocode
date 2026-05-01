/*
 * XREFs of ?FindLastPathSegment@wil@@YAPEBGPEBG@Z @ 0x1801DB964
 * Callers:
 *     _anonymous_namespace_::GetAppViewFileName @ 0x1801DBD50 (_anonymous_namespace_--GetAppViewFileName.c)
 *     ?TryGetParentPathRange@wil@@YA_NPEBGPEA_K@Z @ 0x180200654 (-TryGetParentPathRange@wil@@YA_NPEBGPEA_K@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall wil::FindLastPathSegment(LPCWSTR lpStringSource, const unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  int StringOrdinal; // eax

  v2 = -1LL;
  do
    ++v2;
  while ( lpStringSource[v2] );
  v4 = v2;
  if ( v2 && lpStringSource[v4 - 1] == 92 )
    LODWORD(v2) = v2 - 1;
  StringOrdinal = FindStringOrdinal(0x800000u, lpStringSource, v2, L"\\", 1, 1);
  if ( StringOrdinal == -1 )
    return &lpStringSource[v4];
  else
    return &lpStringSource[StringOrdinal + 1];
}
