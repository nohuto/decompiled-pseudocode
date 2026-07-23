/*
 * XREFs of PfpFileCheckAttributesForPrefetch @ 0x1400DDB74
 * Callers:
 *     PfpFileBuildReadSupport @ 0x140660480 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x140660E58 (PfSnGetSectionObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 */

NTSTATUS __fastcall PfpFileCheckAttributesForPrefetch(void *a1, int a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v4.Pointer = 0LL;
  v4.Information = 0LL;
  result = NtQueryInformationFile(a1, &v4, &v5, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    if ( result == 259 )
      KeBugCheckEx(0x191u, 0x26D6uLL, 0LL, 0LL, 0LL);
    return (a2 & v5) != 0 ? 0xC00000A4 : 0;
  }
  return result;
}
