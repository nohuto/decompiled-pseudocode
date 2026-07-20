/*
 * XREFs of SkipPathTypeIndicator_U @ 0x14000F810
 * Callers:
 *     GetLongPathNameW @ 0x14000F388 (GetLongPathNameW.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall SkipPathTypeIndicator_U(const WCHAR *a1)
{
  const wchar_t *v1; // rbx
  __int32 v2; // eax
  __int32 v3; // eax
  __int32 v4; // eax
  __int32 v5; // eax
  int v6; // eax
  int v7; // edi

  v1 = a1;
  v2 = RtlDetermineDosPathNameType_U(a1) - 1;
  if ( !v2 )
  {
LABEL_11:
    v7 = 2;
    v1 += 2;
    if ( !_wcsnicmp(v1, L"?\\UNC", 5uLL) )
      v1 += 6;
    do
    {
      if ( !*v1 )
        break;
      if ( *v1 == 92 || *v1 == 47 )
        --v7;
      ++v1;
    }
    while ( v7 );
    return v1;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v1 += 3;
    return v1;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v1 += 2;
    return v1;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return ++v1;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 0LL;
    goto LABEL_11;
  }
  return v1;
}
