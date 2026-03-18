/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1C00D7870
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00DBCE8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C00D7760 (-GreSfmCleanupDxgAdapter@@YAXI@Z.c)
 */

_BYTE *GreSfmCleanupPresentHistory()
{
  unsigned int v0; // edi
  _BYTE *v1; // rsi
  __int64 v2; // r8
  _BYTE *result; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // [rsp+38h] [rbp-79h] BYREF
  __int64 v7; // [rsp+40h] [rbp-71h] BYREF
  _BYTE *v8; // [rsp+48h] [rbp-69h]
  _BYTE v9[160]; // [rsp+58h] [rbp-59h] BYREF

  memset(v9, 0, sizeof(v9));
  v0 = 0;
  v1 = v9;
  v7 = 0LL;
  LOBYTE(v2) = 1;
  v8 = 0LL;
  result = (_BYTE *)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C01A1800)(&v7, 0LL, v2, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = (unsigned int)v7;
    if ( (_DWORD)v7 )
    {
      if ( (unsigned int)v7 <= 8 || (result = PALLOCMEM2((unsigned int)(20 * v7), 0x706D7447u, 1), (v1 = result) != 0LL) )
      {
        memset(v1, 0, 20 * v4);
        v8 = v1;
        LOBYTE(v5) = 1;
        if ( (int)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C01A1800)(&v7, 0LL, v5, 0LL) >= 0
          && (_DWORD)v7
          && (unsigned int)v7 <= (unsigned int)v4 )
        {
          do
          {
            GreSfmCleanupDxgAdapter(*(_DWORD *)&v8[20 * v0]);
            v6 = 0;
            v6 = *(_DWORD *)&v8[20 * v0];
            ((void (__fastcall *)(int *, _QWORD))qword_1C01A1818)(&v6, 0LL);
            ++v0;
          }
          while ( v0 < (unsigned int)v7 );
        }
        result = v9;
        if ( v1 != v9 )
          return (_BYTE *)Win32FreePool((__int64)v1);
      }
    }
  }
  return result;
}
