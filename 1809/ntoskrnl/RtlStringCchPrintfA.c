/*
 * XREFs of RtlStringCchPrintfA @ 0x14018E100
 * Callers:
 *     IopCreateArcName @ 0x14070C6A8 (IopCreateArcName.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407468F8 (IopCopyBootLogRegistryToFile.c)
 *     IopMarkBootPartition @ 0x1409D7100 (IopMarkBootPartition.c)
 *     IopCreateArcNames @ 0x1409D7694 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x1409D7910 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1409F5F40 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x1409F61A0 (PipCriticalDeviceWaitCallback.c)
 * Callees:
 *     _vsnprintf @ 0x140194E60 (_vsnprintf.c)
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v3;
}
