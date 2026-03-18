/*
 * XREFs of GreWatchVisRgnChange @ 0x1C0299014
 * Callers:
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00CD178 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00CD2C0 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

void __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  __int64 *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJA::MDCOBJA((MDCOBJA *)v3, a1);
  if ( v3[0] )
  {
    if ( a2 )
      *((_DWORD *)v3[0] + 9) |= 0x20000u;
    else
      *((_DWORD *)v3[0] + 9) &= ~0x20000u;
    XDCOBJ::vAltUnlockFast(v3);
  }
}
