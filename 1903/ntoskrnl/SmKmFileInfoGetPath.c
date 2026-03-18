/*
 * XREFs of SmKmFileInfoGetPath @ 0x1408E9A88
 * Callers:
 *     SmProcessListRequestExtended @ 0x1408E8348 (SmProcessListRequestExtended.c)
 *     SmcGetCacheStats @ 0x1408EBFC0 (SmcGetCacheStats.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400E50E0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 */

__int64 __fastcall SmKmFileInfoGetPath(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v3; // rdi
  BOOLEAN v6; // bp
  int NameStringMode; // ebx
  unsigned int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-248h] BYREF
  void *v11[66]; // [rsp+40h] [rbp-238h] BYREF

  v3 = a3;
  memset(v11, 0, sizeof(v11));
  v6 = IoSetThreadHardErrorMode(0);
  NameStringMode = ObQueryNameStringMode(*(char **)(a1 + 8), (__int64)v11, 0x210u, v10, 0);
  if ( NameStringMode >= 0 )
  {
    memset(a2, 0, (unsigned int)v3);
    v8 = LOWORD(v11[0]);
    if ( LOWORD(v11[0]) >= (unsigned __int64)(v3 - 2) )
      v8 = v3 - 2;
    memmove(a2, v11[1], v8);
    NameStringMode = 0;
  }
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)NameStringMode;
}
