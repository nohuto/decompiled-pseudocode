/*
 * XREFs of RtlStringCbCatExA @ 0x140268C20
 * Callers:
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x140011F38 (RtlStringCopyWorkerA.c)
 *     RtlStringLengthWorkerA @ 0x140268F48 (RtlStringLengthWorkerA.c)
 */

NTSTATUS __stdcall RtlStringCbCatExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCSTR pszSrc,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  NTSTATUS result; // eax
  __int64 v8; // r10
  size_t v9; // rbx
  char *v10; // rsi
  size_t v11; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+50h] [rbp+18h] BYREF

  pcchNewDestLength = (size_t)pszSrc;
  result = RtlStringLengthWorkerA(pszDest, cbDest, &pcchNewDestLength);
  if ( result >= 0 )
  {
    v9 = 256 - pcchNewDestLength;
    v10 = (char *)(pcchNewDestLength + v8);
    if ( pcchNewDestLength == 256 || pcchNewDestLength == 255 )
    {
      if ( !v8 )
        return -1073741811;
      result = -2147483643;
    }
    else
    {
      pcchNewDestLength = 0LL;
      result = RtlStringCopyWorkerA(v10, v9, &pcchNewDestLength, ", ", v11);
      v10 += pcchNewDestLength;
      v9 -= pcchNewDestLength;
      if ( (int)(result + 0x80000000) >= 0 && result != -2147483643 )
        return result;
    }
    if ( ppszDestEnd )
      *ppszDestEnd = v10;
    if ( pcbRemaining )
      *pcbRemaining = v9;
  }
  return result;
}
