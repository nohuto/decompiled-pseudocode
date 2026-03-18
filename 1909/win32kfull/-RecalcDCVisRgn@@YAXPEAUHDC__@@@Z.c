/*
 * XREFs of ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0249498
 * Callers:
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C024AA44 (xxxMenuBarDraw.c)
 * Callees:
 *     RevalidateDCE @ 0x1C00CFBF0 (RevalidateDCE.c)
 */

void __fastcall RecalcDCVisRgn(HDC a1)
{
  __int64 v2; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v2 = LookupDC(a1, 1LL);
  if ( v2 )
    RevalidateDCE(v2);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
