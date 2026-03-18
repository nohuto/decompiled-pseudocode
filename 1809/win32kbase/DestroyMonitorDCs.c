/*
 * XREFs of DestroyMonitorDCs @ 0x1C00489F0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0046FB0 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 *     HdevFromMonitor @ 0x1C0045520 (HdevFromMonitor.c)
 */

__int64 __fastcall DestroyMonitorDCs(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  int v13; // eax
  int v14; // eax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v5 = (__int64 *)(gpDispInfo + 24);
  v6 = *(_QWORD *)(gpDispInfo + 24);
  if ( v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 88);
      v8 = v5;
      v9 = v6;
      if ( v7 && (unsigned int)HdevFromMonitor(v7) == -1 )
      {
        v13 = *(_DWORD *)(v6 + 64);
        if ( v13 >= 0 )
        {
          DestroyCacheDC(v5, *(_QWORD *)(v6 + 8), v4);
        }
        else
        {
          *(_QWORD *)(v6 + 88) = 0LL;
          v14 = v13 | 0x4000000;
          *(_DWORD *)(v6 + 64) = v14;
          if ( (v14 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap(*(_QWORD *)(v6 + 8), 0LL);
            *(_DWORD *)(v6 + 64) &= ~0x4000u;
            *(_QWORD *)(v6 + 32) = 0LL;
          }
        }
      }
      v10 = *v5;
      v11 = *v5;
      if ( v6 == *v5 )
        v11 = *(_QWORD *)v6;
      v5 = (__int64 *)v6;
      v6 = v11;
      if ( v9 != v10 )
        v5 = v8;
    }
    while ( v11 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v3, v4);
}
