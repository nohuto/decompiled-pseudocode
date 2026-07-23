/*
 * XREFs of RtlpWow64SelectSystem32PathInternal @ 0x1800EC0CC
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x1800EBCB0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpWow64SelectSystem32PathInternal(__int16 a1, char a2, _UNICODE_STRING *a3)
{
  const wchar_t *v5; // rax
  const WCHAR *v6; // rdx

  switch ( a1 )
  {
    case 1:
      v6 = L"\\System32\\";
      v5 = L"System32";
      break;
    case 332:
      v5 = L"SysWOW64";
      v6 = L"\\SysWOW64\\";
      break;
    case 452:
      v5 = L"SysARM32";
      v6 = L"\\SysARM32\\";
      break;
    case 14948:
      v5 = L"SyCHPE32";
      v6 = L"\\SyCHPE32\\";
      break;
    default:
      return 3221225485LL;
  }
  if ( !a2 )
    v6 = v5;
  RtlInitUnicodeString(a3, v6);
  return 0LL;
}
