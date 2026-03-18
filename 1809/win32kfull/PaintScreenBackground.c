/*
 * XREFs of PaintScreenBackground @ 0x1C0136130
 * Callers:
 *     <none>
 * Callees:
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 */

__int64 PaintScreenBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  HDC v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  RECT v10; // [rsp+30h] [rbp-18h] BYREF

  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v4 = *(HDC *)(gpDispInfo + 56LL);
  v10 = *(RECT *)(*gpDispInfo + 24LL);
  FillRect(v4, &v10, *(HBRUSH *)(gpsi + 4704LL));
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return EnterCrit(0LL, 1LL);
}
