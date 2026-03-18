/*
 * XREFs of GetRedirectionBitmap @ 0x1C002B520
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C002B420 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     _SetLayeredWindowAttributes @ 0x1C002BD00 (_SetLayeredWindowAttributes.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     UpdateRedirectedDCE @ 0x1C00EE8D0 (UpdateRedirectedDCE.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01E92FC (ChangeRedirectionBitmapOwner.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E9890 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRedirectionBitmap(__int64 a1)
{
  __int64 v1; // rbx
  __int64 Prop; // rax

  v1 = 0LL;
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(_QWORD *)Prop;
  return v1;
}
