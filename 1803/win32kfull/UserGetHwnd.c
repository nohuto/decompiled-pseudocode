/*
 * XREFs of UserGetHwnd @ 0x1C01B24AC
 * Callers:
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C02478F0 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0248150 (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C028A850 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C00E513C (-PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z.c)
 */

__int64 __fastcall UserGetHwnd(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v6; // edi
  struct tagWND *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v6 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v7 = PwndFromHDC(a1);
  if ( v7 )
  {
    v8 = (unsigned __int16)atomWndObj;
    v9 = *((_QWORD *)v7 + 15);
    *a2 = *(_QWORD *)v7;
    *a3 = RealGetProp(v9, v8, 1LL);
    v6 = 1;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v6;
}
