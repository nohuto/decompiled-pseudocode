/*
 * XREFs of SkipWindowOnMonitor @ 0x1C00FB434
 * Callers:
 *     NextTopWindow @ 0x1C002DCFC (NextTopWindow.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00FB27C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SkipWindowOnMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 *v6; // rsi
  struct tagMONITOR *v7; // rbp
  __int64 v8; // r9
  __int64 *i; // rdi

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  if ( v4 && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 1 && *(_QWORD *)(v4 + 288) )
  {
    v6 = (__int64 *)(v4 + 312);
    v7 = _MonitorFromWindowInternal((struct tagWND *)a1, 0LL, 0LL, a4);
    for ( i = *(__int64 **)(v4 + 312); i != v6; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) && _MonitorFromWindowInternal((struct tagWND *)i[2], 0LL, 0LL, v8) == v7 )
        return 1;
    }
  }
  return v5;
}
