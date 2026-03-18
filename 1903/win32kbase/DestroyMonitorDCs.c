/*
 * XREFs of DestroyMonitorDCs @ 0x1C0063900
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00639B0 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     HdevFromMonitor @ 0x1C00642F0 (HdevFromMonitor.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyMonitorDCs(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rbp
  __int64 *v9; // rcx
  __int64 *v10; // rax
  int v12; // eax
  int v13; // eax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v5 = (__int64 *)(gpDispInfo + 24);
  v6 = *(__int64 **)(gpDispInfo + 24);
  if ( v6 )
  {
    do
    {
      v7 = v5;
      v8 = v6;
      if ( v6[11] && (unsigned int)HdevFromMonitor() == -1 )
      {
        v12 = *((_DWORD *)v6 + 16);
        if ( v12 >= 0 )
        {
          DestroyCacheDC(v5, v6[1]);
        }
        else
        {
          v6[11] = 0LL;
          v13 = v12 | 0x4000000;
          *((_DWORD *)v6 + 16) = v13;
          if ( (v13 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap(v6[1], 0LL);
            *((_DWORD *)v6 + 16) &= ~0x4000u;
            v6[4] = 0LL;
          }
        }
      }
      v9 = (__int64 *)*v5;
      v10 = (__int64 *)*v5;
      if ( v6 == (__int64 *)*v5 )
        v10 = (__int64 *)*v6;
      v5 = v6;
      v6 = v10;
      if ( v8 != v9 )
        v5 = v7;
    }
    while ( v10 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v3, v4);
}
