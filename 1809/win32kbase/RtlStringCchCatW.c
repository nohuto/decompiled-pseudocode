/*
 * XREFs of RtlStringCchCatW @ 0x1C00A9314
 * Callers:
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00A9084 (-GetSpriteFillColor@@YAKXZ.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x1C00A937C (RtlStringCopyWorkerW_0.c)
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v4; // rdx
  NTSTRSAFE_PWSTR v5; // rax
  NTSTATUS result; // eax
  __int64 v7; // rcx
  size_t v8; // [rsp+20h] [rbp-18h]

  v4 = 260LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 260 - v4;
  else
    v7 = 0LL;
  if ( v4 )
    return RtlStringCopyWorkerW_0(&pszDest[v7], 260 - v7, (size_t *)pszSrc, pszSrc, v8);
  return result;
}
