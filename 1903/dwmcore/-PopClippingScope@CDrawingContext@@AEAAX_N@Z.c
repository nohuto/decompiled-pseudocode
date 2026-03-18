/*
 * XREFs of ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18016FFA8
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800C6BB0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003BB8C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 */

void __fastcall CDrawingContext::PopClippingScope(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = this;
  if ( a2 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 112, &v3);
  --*((_DWORD *)v2 + 258);
}
