/*
 * XREFs of IopCreateArcNames @ 0x1409D6694
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool_0 @ 0x1400DD83C (IopVerifierExAllocatePool_0.c)
 *     RtlInitAnsiString @ 0x1400EED70 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x14018DFA0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     IopCreateArcNamesDisk @ 0x1409D67C0 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1409D6910 (IopCreateArcNamesCd.c)
 */

__int64 __fastcall IopCreateArcNames(__int64 a1)
{
  __int64 v2; // rbx
  PVOID Pool_0; // rax
  __int64 result; // rax
  STRING DestinationString; // [rsp+20h] [rbp-A8h] BYREF
  char pszDest[128]; // [rsp+30h] [rbp-98h] BYREF

  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 192));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcHalDeviceName, &DestinationString, 1u);
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcBootDeviceName, &DestinationString, 1u);
  v2 = -1LL;
  do
    ++v2;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 184) + v2) );
  Pool_0 = IopVerifierExAllocatePool_0(PagedPool, v2 + 1);
  IoLoaderArcBootDeviceName = (__int64)Pool_0;
  if ( Pool_0 )
    memmove(Pool_0, *(const void **)(a1 + 184), v2 + 1);
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(a1 + 192));
  result = IopCreateArcNamesDisk();
  if ( (int)result >= 0 )
    return IopCreateArcNamesCd(a1);
  return result;
}
