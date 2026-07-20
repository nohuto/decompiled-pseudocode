/*
 * XREFs of SmpCleanupStalePageFiles @ 0x14000AF84
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000AC40 (SmpCreatePagingFiles.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004FB0 (RtlStringCbPrintfW.c)
 *     SmpDeallocSavedRegistryEntry @ 0x14000A198 (SmpDeallocSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 *     SmpDeletePagingFile @ 0x140010484 (SmpDeletePagingFile.c)
 */

void SmpCleanupStalePageFiles()
{
  PVOID *v0; // rbx
  struct _UNICODE_STRING *v1; // rdi
  PVOID *v2; // rcx
  struct _UNICODE_STRING **Buffer; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  v0 = (PVOID *)SmpExistingPageFilesList;
  while ( v0 != &SmpExistingPageFilesList )
  {
    v1 = (struct _UNICODE_STRING *)v0;
    SmpDeletePagingFile(v0 + 2);
    v2 = (PVOID *)*v0;
    v0 = v2;
    if ( v2[1] != v1 || (Buffer = (struct _UNICODE_STRING **)v1->Buffer, *Buffer != v1) )
      __fastfail(3u);
    *Buffer = (struct _UNICODE_STRING *)v2;
    v2[1] = Buffer;
    SmpDeallocSavedRegistryEntry(v1);
  }
  if ( !SmpWsSwapPagefileCreated )
  {
    RtlStringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%c:\\%s", (unsigned __int16)SmpOsVolumeLetter, L"swapfile.sys");
    RtlInitUnicodeString(&DestinationString, pszDest);
    SmpDeletePagingFile(&DestinationString);
  }
}
