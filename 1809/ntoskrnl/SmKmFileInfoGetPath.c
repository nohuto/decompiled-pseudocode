/*
 * XREFs of SmKmFileInfoGetPath @ 0x1408ADDC8
 * Callers:
 *     SmProcessListRequestExtended @ 0x1408AC358 (SmProcessListRequestExtended.c)
 *     SmcGetCacheStats @ 0x1408B01E0 (SmcGetCacheStats.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EEDD0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 */

__int64 __fastcall SmKmFileInfoGetPath(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v4; // rdi
  BOOLEAN v6; // bp
  int NameStringMode; // ebx
  unsigned int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-248h] BYREF
  unsigned __int16 v11; // [rsp+40h] [rbp-238h] BYREF
  void *Src; // [rsp+48h] [rbp-230h]

  v4 = a3;
  v6 = IoSetThreadHardErrorMode(0);
  NameStringMode = ObQueryNameStringMode(*(char **)(a1 + 8), (__int64)&v11, 0x210u, v10, 0);
  if ( NameStringMode >= 0 )
  {
    memset(a2, 0, (unsigned int)v4);
    v8 = v11;
    if ( v11 >= (unsigned __int64)(v4 - 2) )
      v8 = v4 - 2;
    memmove(a2, Src, v8);
    NameStringMode = 0;
  }
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)NameStringMode;
}
