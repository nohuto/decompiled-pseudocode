/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180119FDC
 * Callers:
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180119238 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?GetMany@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIShellTab@Tabs@ComposableShell@25@PEAI@Z @ 0x18020BDB0 (-GetMany@-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicat.c)
 *     ?IndexOf@?$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@4785@U?$VectorOptions@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIShellTab@Tabs@ComposableShell@25@PEAIPEAE@Z @ 0x18020C320 (-IndexOf@-$Vector@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@U-$DefaultEqualityPredicat.c)
 *     ?GetMany@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@25@PEAI@Z @ 0x180228110 (-GetMany@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEquality.c)
 *     ?IndexOf@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@25@PEAIPEAE@Z @ 0x180228C30 (-IndexOf@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEquality.c)
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x1803640F4 (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1803BC3BC (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1803C0010 (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
