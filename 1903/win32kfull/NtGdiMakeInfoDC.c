/*
 * XREFs of NtGdiMakeInfoDC @ 0x1C012ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiMakeInfoDC(HDC a1, int a2)
{
  unsigned int InfoDC; // ebx
  DC *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  InfoDC = 0;
  v5[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    InfoDC = DC::bMakeInfoDC(v5[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  }
  return InfoDC;
}
