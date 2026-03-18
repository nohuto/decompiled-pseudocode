/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1C0067B00
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006767C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0067C58 (-GreSfmCleanupDxgAdapter@@YAXI@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void GreSfmCleanupPresentHistory()
{
  _BYTE *v0; // rdi
  __int64 v1; // r8
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rsi
  int v5; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v6[2]; // [rsp+40h] [rbp-71h] BYREF
  _BYTE *v7; // [rsp+48h] [rbp-69h]
  _BYTE v8[160]; // [rsp+58h] [rbp-59h] BYREF

  v6[1] = 0;
  memset(v8, 0, sizeof(v8));
  v6[0] = 0;
  v0 = v8;
  v7 = 0LL;
  LOBYTE(v1) = 1;
  if ( (int)((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, _QWORD))qword_1C0212058)(v6, 0LL, v1, 0LL) >= 0 )
  {
    v2 = v6[0];
    if ( v6[0] )
    {
      if ( v6[0] <= 8u || (v0 = PALLOCMEM2((unsigned int)(20 * v6[0]), 0x706D7447u, 1)) != 0LL )
      {
        memset(v0, 0, 20 * v2);
        v7 = v0;
        LOBYTE(v3) = 1;
        if ( (int)((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, _QWORD))qword_1C0212058)(v6, 0LL, v3, 0LL) >= 0
          && v6[0]
          && v6[0] <= (unsigned int)v2 )
        {
          v4 = 0LL;
          do
          {
            GreSfmCleanupDxgAdapter(*(_DWORD *)&v7[20 * v4]);
            v5 = 0;
            v5 = *(_DWORD *)&v7[20 * v4];
            ((void (__fastcall *)(int *, _QWORD))qword_1C0212068)(&v5, 0LL);
            v4 = (unsigned int)(v4 + 1);
          }
          while ( (unsigned int)v4 < v6[0] );
        }
        if ( v0 != v8 )
          Win32FreePool((__int64)v0);
      }
    }
  }
}
