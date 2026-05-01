/*
 * XREFs of StringCopyWorkerW @ 0x10005AC0
 * Callers:
 *     _HamHostIdInitializeKey@24 @ 0x10005930 (_HamHostIdInitializeKey@24.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  int v5; // edx
  _WORD *v6; // ecx
  int v7; // esi
  HRESULT v8; // ebx
  int v9; // eax
  size_t v10; // edi
  __int16 v11; // dx

  v7 = v5;
  v8 = 0;
  if ( !v5 )
    goto LABEL_6;
  v9 = 2147483646;
  v10 = cchDest - (_DWORD)v6;
  while ( v9 )
  {
    v11 = *(_WORD *)((char *)v6 + v10);
    if ( !v11 )
      break;
    *v6 = v11;
    --v9;
    ++v6;
    if ( !--v7 )
      goto LABEL_6;
  }
  if ( !v7 )
  {
LABEL_6:
    --v6;
    v8 = -2147024774;
  }
  *v6 = 0;
  return v8;
}
