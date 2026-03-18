/*
 * XREFs of ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0249BD8
 * Callers:
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 * Callees:
 *     RevalidateDCE @ 0x1C00EEDF0 (RevalidateDCE.c)
 */

void __fastcall RecalcDCVisRgn(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, a4);
  v5 = LookupDC(a1, 1LL);
  if ( v5 )
    RevalidateDCE(v5);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
