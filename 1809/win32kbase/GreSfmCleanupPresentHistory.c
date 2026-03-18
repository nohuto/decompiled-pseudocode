/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1C0098000
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0097CC0 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0098158 (-GreSfmCleanupDxgAdapter@@YAXI@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void GreSfmCleanupPresentHistory()
{
  unsigned int v0; // edi
  _BYTE *v1; // rsi
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // r8
  int v5; // [rsp+38h] [rbp-79h] BYREF
  __int64 v6; // [rsp+40h] [rbp-71h] BYREF
  _BYTE *v7; // [rsp+48h] [rbp-69h]
  _BYTE v8[160]; // [rsp+58h] [rbp-59h] BYREF

  memset(v8, 0, sizeof(v8));
  v0 = 0;
  v1 = v8;
  v6 = 0LL;
  LOBYTE(v2) = 1;
  v7 = 0LL;
  if ( (int)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C01CD6A0)(&v6, 0LL, v2, 0LL) >= 0 )
  {
    v3 = (unsigned int)v6;
    if ( (_DWORD)v6 )
    {
      if ( (unsigned int)v6 <= 8 || (v1 = PALLOCMEM2((unsigned int)(20 * v6), 1886221383LL, 1)) != 0LL )
      {
        memset(v1, 0, 20 * v3);
        v7 = v1;
        LOBYTE(v4) = 1;
        if ( (int)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C01CD6A0)(&v6, 0LL, v4, 0LL) >= 0
          && (_DWORD)v6
          && (unsigned int)v6 <= (unsigned int)v3 )
        {
          do
          {
            GreSfmCleanupDxgAdapter(*(_DWORD *)&v7[20 * v0]);
            v5 = 0;
            v5 = *(_DWORD *)&v7[20 * v0];
            ((void (__fastcall *)(int *, _QWORD))qword_1C01CD6B8)(&v5, 0LL);
            ++v0;
          }
          while ( v0 < (unsigned int)v6 );
        }
        if ( v1 != v8 )
          Win32FreePool((__int64)v1);
      }
    }
  }
}
