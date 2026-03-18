/*
 * XREFs of PaintScreenBackground @ 0x1C0140710
 * Callers:
 *     <none>
 * Callees:
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 */

__int64 PaintScreenBackground()
{
  __int64 v0; // rcx
  HDC v1; // rcx
  __int64 v2; // rcx
  RECT v4; // [rsp+30h] [rbp-18h] BYREF

  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v0);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v1 = *(HDC *)(gpDispInfo + 56LL);
  v4 = *(RECT *)(*gpDispInfo + 24LL);
  FillRect(v1, &v4, *(HBRUSH *)(gpsi + 4704LL));
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v2);
  return EnterCrit(0LL, 1LL);
}
