/*
 * XREFs of xxxDrawScrollBar @ 0x1C0106138
 * Callers:
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0078BA4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0020010 (CalcSBStuff.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C01061C8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     GetWndSBDisableFlags @ 0x1C0106D0C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxDrawScrollBar(struct tagWND *a1, HDC a2, unsigned int a3)
{
  __int64 v6; // rcx
  struct tagSBCALC *v7; // rdi
  unsigned int WndSBDisableFlags; // eax
  char v9; // [rsp+30h] [rbp-68h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
  if ( v6 && a1 == *(struct tagWND **)(v6 + 8) && (*(_DWORD *)v6 & 4) == 0 && a3 == ((*(_DWORD *)v6 >> 1) & 1) )
    v7 = *(struct tagSBCALC **)(v6 + 96);
  else
    v7 = (struct tagSBCALC *)&v9;
  CalcSBStuff((__int64)a1, (__int64)v7, a3);
  WndSBDisableFlags = GetWndSBDisableFlags(a1, a3);
  xxxDrawSB2(a1, v7, a2, a3, WndSBDisableFlags);
}
