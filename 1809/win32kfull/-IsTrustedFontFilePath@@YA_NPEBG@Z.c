/*
 * XREFs of ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C011F074
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C007EB54 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

bool __fastcall IsTrustedFontFilePath(PCWSTR SourceString)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = *((_QWORD *)gpxsGlobals + 2);
  GreAcquireSemaphore(v4);
  RtlInitUnicodeStringEx(&DestinationString, SourceString);
  LOBYTE(SourceString) = RtlLookupElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 3), &DestinationString) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
  return (char)SourceString;
}
