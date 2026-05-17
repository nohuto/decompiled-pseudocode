/*
 * XREFs of RtlCopyUnicodeString @ 0x1800411E0
 * Callers:
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 *     RtlpComputeLangListCheckSum @ 0x18003ACBC (RtlpComputeLangListCheckSum.c)
 *     LdrGetDllFullName @ 0x18003F4B0 (LdrGetDllFullName.c)
 *     RtlConvertSidToUnicodeString @ 0x180040940 (RtlConvertSidToUnicodeString.c)
 *     RtlCanonicalizeDomainName @ 0x1800464A0 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllDirectory @ 0x180082750 (LdrGetDllDirectory.c)
 *     EtwpQueryUmLogger @ 0x180089384 (EtwpQueryUmLogger.c)
 *     QueryFeatureOverride @ 0x18009F2B4 (QueryFeatureOverride.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r8d
  unsigned int v5; // eax
  void *v6; // rsi
  const void *v7; // rdx
  unsigned __int64 v8; // rbx

  result = (unsigned __int64)a2;
  if ( a2 )
  {
    v4 = *a2;
    v5 = a1[1];
    v6 = (void *)*((_QWORD *)a1 + 1);
    v7 = (const void *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int16)v4 <= (unsigned __int16)v5 )
      v5 = v4;
    v8 = v5;
    *a1 = v5;
    memmove(v6, v7, v5);
    result = a1[1];
    if ( (unsigned __int64)*a1 + 2 <= result )
      *((_WORD *)v6 + (v8 >> 1)) = 0;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
