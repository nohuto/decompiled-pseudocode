/*
 * XREFs of GreSelectPenInternal @ 0x1C00BAAE0
 * Callers:
 *     GreSelectPen @ 0x1C01205D0 (GreSelectPen.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgPentryFromPobj @ 0x1C001F0B0 (HmgPentryFromPobj.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDCSelectPen @ 0x1C007E2F0 (GreDCSelectPen.c)
 */

struct HOBJ__ *__fastcall GreSelectPenInternal(HDC a1, struct HOBJ__ *a2, int a3)
{
  struct HOBJ__ *v4; // rbx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( a3 || (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v7[0]) + 8) & 0xFFFFFFFE) != 0 )
      v4 = GreDCSelectPen((struct HOBJ__ ***)v7[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v4;
}
