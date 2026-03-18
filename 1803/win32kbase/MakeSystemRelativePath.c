/*
 * XREFs of MakeSystemRelativePath @ 0x1C00532E0
 * Callers:
 *     ldevLoadDriver @ 0x1C0052FC0 (ldevLoadDriver.c)
 *     ldevLoadImage @ 0x1C0053150 (ldevLoadImage.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     _wcsnicmp @ 0x1C0074174 (_wcsnicmp.c)
 */

__int64 __fastcall MakeSystemRelativePath(PCWSTR Source, PUNICODE_STRING Destination, int a3)
{
  __int64 v3; // rbx
  int v4; // r14d
  const WCHAR *v6; // rdi
  unsigned int v7; // ebp
  __int64 result; // rax
  const wchar_t *i; // rbx

  v3 = -1LL;
  v4 = a3;
  v6 = Source;
  do
    ++v3;
  while ( Source[v3] );
  v7 = 2 * v3 + 44;
  if ( a3 )
  {
    if ( (unsigned int)v3 < 4 || wcsnicmp(&Source[(unsigned int)v3 - 4], L".DLL", 4uLL) )
      v7 = 2 * v3 + 52;
    else
      v4 = 0;
  }
  Destination->Length = 0;
  Destination->MaximumLength = v7;
  result = (__int64)PALLOCMEM2(v7, 0x6C694647u, 0);
  Destination->Buffer = (PWSTR)result;
  if ( result )
  {
    for ( i = &v6[(unsigned int)v3 - 10]; i >= v6; --i )
    {
      if ( !wcsnicmp(i, L"\\system32\\", 0xAuLL) )
      {
        v6 = i + 10;
        break;
      }
    }
    RtlAppendUnicodeToString(Destination, L"\\SystemRoot\\System32\\");
    RtlAppendUnicodeToString(Destination, v6);
    if ( v4 )
      RtlAppendUnicodeToString(Destination, L".dll");
    return 1LL;
  }
  return result;
}
