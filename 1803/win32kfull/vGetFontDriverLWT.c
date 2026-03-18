/*
 * XREFs of vGetFontDriverLWT @ 0x1C00567A4
 * Callers:
 *     InitFNTCache @ 0x1C0056070 (InitFNTCache.c)
 * Callees:
 *     Win32FileInfo @ 0x1C00BF334 (Win32FileInfo.c)
 */

__int64 __fastcall vGetFontDriverLWT(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h]

  if ( (unsigned int)Win32FileInfo(L"\\SystemRoot\\system32\\win32kfull.sys") )
    *a1 = v5;
  result = Win32FileInfo(L"\\SystemRoot\\system32\\atmfd.dll");
  if ( (_DWORD)result )
  {
    result = v5;
    *a2 = v5;
  }
  return result;
}
