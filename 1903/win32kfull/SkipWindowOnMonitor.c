/*
 * XREFs of SkipWindowOnMonitor @ 0x1C01012A0
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0100D18 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0101044 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     _lambda_16c3916dd104b3e87032ad92d6a38c73_::operator() @ 0x1C01013C8 (_lambda_16c3916dd104b3e87032ad92d6a38c73_--operator().c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0091D38 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SkipWindowOnMonitor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 *v3; // rsi
  struct tagMONITOR *v4; // rbp
  __int64 *i; // rdi

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( v1 && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 1 && *(_QWORD *)(v1 + 288) )
  {
    v3 = (__int64 *)(v1 + 312);
    v4 = _MonitorFromWindowInternal((struct tagWND *)a1, 0, 0);
    for ( i = *(__int64 **)(v1 + 312); i != v3; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) && _MonitorFromWindowInternal((struct tagWND *)i[2], 0, 0) == v4 )
        return 1;
    }
  }
  return v2;
}
