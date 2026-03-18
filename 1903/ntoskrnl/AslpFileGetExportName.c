/*
 * XREFs of AslpFileGetExportName @ 0x140929D64
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x14092A494 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x140925EE0 (AslStringAnsiToUnicode.c)
 *     AslpFileQueryExportName @ 0x14092B2AC (AslpFileQueryExportName.c)
 */

__int64 __fastcall AslpFileGetExportName(wchar_t **a1)
{
  int ExportName; // eax
  int v3; // ebx
  char pszDest[256]; // [rsp+30h] [rbp-118h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  ExportName = AslpFileQueryExportName(pszDest);
  v3 = ExportName;
  if ( ExportName >= 0 )
  {
    v3 = AslStringAnsiToUnicode(a1, pszDest);
    if ( v3 >= 0 )
      return 0;
    goto LABEL_4;
  }
  if ( ExportName != -1073741275 && ExportName != -1073741701 )
LABEL_4:
    AslLogCallPrintf(1LL);
  return (unsigned int)v3;
}
