/*
 * XREFs of ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x18018D498
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18008CFC0 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008FCAC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::PerformDelayedSnapshot(CCachedVisualImage *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-24h] BYREF
  struct tagRECT v8; // [rsp+38h] [rbp-20h] BYREF

  CCachedVisualImage::GetCurrentSize(this, &v6, &v7);
  v8.left = 0;
  v8.top = 0;
  v8.right = v6;
  v8.bottom = v7;
  v2 = CCachedVisualImage::Snapshot(this, &v8);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x61Bu);
  return v4;
}
