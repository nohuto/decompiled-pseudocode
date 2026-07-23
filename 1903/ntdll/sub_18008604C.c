/*
 * XREFs of sub_18008604C @ 0x18008604C
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180085FA0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_18008604C(__int16 a1, char a2, _UNICODE_STRING *a3)
{
  const wchar_t *v4; // rax
  const WCHAR *v5; // rdx

  switch ( a1 )
  {
    case 1:
      v5 = L"\\System32\\";
      v4 = L"System32";
      break;
    case 332:
      v4 = L"SysWOW64";
      v5 = L"\\SysWOW64\\";
      break;
    case 452:
      v4 = L"SysARM32";
      v5 = L"\\SysARM32\\";
      break;
    case 14948:
      v4 = L"SyCHPE32";
      v5 = L"\\SyCHPE32\\";
      break;
    default:
      return 3221225485LL;
  }
  if ( !a2 )
    v5 = v4;
  RtlInitUnicodeString(a3, v5);
  return 0LL;
}
