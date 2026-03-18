/*
 * XREFs of ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801C95FC
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18002D874 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x1800437D8 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::PerformDelayedSnapshot(CCachedVisualImage *this)
{
  signed int v2; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x5A9u, 0LL);
  return v4;
}
