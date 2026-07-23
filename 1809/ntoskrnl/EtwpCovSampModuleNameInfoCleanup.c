/*
 * XREFs of EtwpCovSampModuleNameInfoCleanup @ 0x1408C8120
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1408C6144 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampModuleCleanup @ 0x1408C7F84 (EtwpCovSampModuleCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C9124 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 */

void __fastcall EtwpCovSampModuleNameInfoCleanup(__int64 *a1)
{
  __int64 v1; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    if ( (v1 & 1) != 0 )
    {
      (*(void (__fastcall **)(unsigned __int64))(FltMgrCallbacks + 32))(v1 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    else
    {
      UnicodeString.Buffer = (wchar_t *)(v1 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_DWORD *)&UnicodeString.Length = 65537;
      RtlFreeAnsiString(&UnicodeString);
    }
    *a1 = 0LL;
  }
}
