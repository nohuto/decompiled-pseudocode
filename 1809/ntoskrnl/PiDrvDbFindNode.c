/*
 * XREFs of PiDrvDbFindNode @ 0x14028B384
 * Callers:
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083E374 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14083EB84 (PiDrvDbResolveKeyFilePaths.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140625D40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PiDrvDbFindNode(PCWSTR SourceString, __int64 *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  RtlInitUnicodeString(&String2, SourceString);
  v4 = PiDrvDbNodeList;
  if ( (__int64 *)PiDrvDbNodeList == &PiDrvDbNodeList )
    return (unsigned int)-1073741275;
  do
  {
    v5 = v4;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v4 + 16), &String2, 1u) )
      break;
    v4 = *(_QWORD *)v4;
    v5 = 0LL;
  }
  while ( (__int64 *)v4 != &PiDrvDbNodeList );
  if ( !v5 )
    return (unsigned int)-1073741275;
  else
    *a2 = v5;
  return v3;
}
