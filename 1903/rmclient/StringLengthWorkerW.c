/*
 * XREFs of StringLengthWorkerW @ 0x10005A70
 * Callers:
 *     _HamHostIdInitializeKey@24 @ 0x10005930 (_HamHostIdInitializeKey@24.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  int v3; // edx
  _WORD *v4; // ecx
  HRESULT v5; // esi
  int v6; // eax

  v5 = 0;
  v6 = v3;
  while ( *v4 )
  {
    ++v4;
    if ( !--v3 )
      goto LABEL_4;
  }
  if ( !v3 )
LABEL_4:
    v5 = -2147024809;
  if ( psz )
  {
    if ( v5 < 0 )
      *(_DWORD *)psz = 0;
    else
      *(_DWORD *)psz = v6 - v3;
  }
  return v5;
}
