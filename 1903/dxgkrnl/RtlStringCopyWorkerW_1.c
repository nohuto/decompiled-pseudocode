/*
 * XREFs of RtlStringCopyWorkerW_1 @ 0x1C001924C
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW_1(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  signed __int64 v6; // r9
  NTSTRSAFE_PWSTR v7; // rdx
  __int64 v8; // r8
  wchar_t v9; // cx
  NTSTRSAFE_PWSTR v10; // rcx
  NTSTATUS result; // eax

  v6 = (char *)pszSrc - (char *)pszDest;
  v7 = pszDest;
  v8 = 260LL;
  do
  {
    if ( !cchToCopy )
      break;
    v9 = *(NTSTRSAFE_PWSTR)((char *)v7 + v6);
    if ( !v9 )
      break;
    *v7 = v9;
    --cchToCopy;
    ++v7;
    --v8;
  }
  while ( v8 );
  v10 = v7 - 1;
  result = v8 == 0 ? 0x80000005 : 0;
  if ( v8 )
    v10 = v7;
  *v10 = 0;
  return result;
}
