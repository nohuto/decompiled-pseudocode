/*
 * XREFs of DestroyMonitorDCs @ 0x1C005CDA0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005C620 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 *     HdevFromMonitor @ 0x1C006E200 (HdevFromMonitor.c)
 */

__int64 __fastcall DestroyMonitorDCs(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdx
  int v4; // r8d
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  int v10; // eax
  int v11; // eax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v5 = (_QWORD *)(gpDispInfo + 24);
  v6 = *(_QWORD **)(gpDispInfo + 24);
  if ( v6 )
  {
    do
    {
      v7 = v6[11];
      if ( v7 && (unsigned int)HdevFromMonitor(v7) == -1 )
      {
        v10 = *((_DWORD *)v6 + 16);
        if ( v10 >= 0 )
        {
          DestroyCacheDC(v5, v6[1]);
        }
        else
        {
          v6[11] = 0LL;
          v11 = v10 | 0x4000000;
          *((_DWORD *)v6 + 16) = v11;
          if ( (v11 & 0x4000) != 0 )
          {
            GreSelectRedirectionBitmap(v6[1], 0LL);
            *((_DWORD *)v6 + 16) &= ~0x4000u;
            v6[4] = 0LL;
          }
        }
      }
      v8 = (_QWORD *)*v5;
      if ( v6 == (_QWORD *)*v5 )
        v8 = (_QWORD *)*v6;
      else
        v6 = v5;
      v5 = v6;
      v6 = v8;
    }
    while ( v8 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v3, v4);
}
