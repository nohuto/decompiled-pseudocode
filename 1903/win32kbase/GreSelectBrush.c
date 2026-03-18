/*
 * XREFs of GreSelectBrush @ 0x1C009E300
 * Callers:
 *     <none>
 * Callees:
 *     GreDCSelectBrush @ 0x1C00182F0 (GreDCSelectBrush.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectBrush(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  v5[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v3 = GreDCSelectBrush(v5[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return v3;
}
