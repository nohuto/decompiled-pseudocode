/*
 * XREFs of RtlStringCchCopyA @ 0x1C010C4EC
 * Callers:
 *     intializeGlobalRecorder @ 0x1C010C444 (intializeGlobalRecorder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  __int64 v3; // rdx
  signed __int64 v4; // r8
  char v5; // al
  NTSTRSAFE_PSTR v6; // rax

  v3 = 16LL;
  v4 = pszSrc - pszDest;
  do
  {
    if ( v3 == -2147483630 )
      break;
    v5 = pszDest[v4];
    if ( !v5 )
      break;
    *pszDest++ = v5;
    --v3;
  }
  while ( v3 );
  v6 = pszDest - 1;
  if ( v3 )
    v6 = pszDest;
  *v6 = 0;
  return v3 == 0 ? 0x80000005 : 0;
}
