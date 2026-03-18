/*
 * XREFs of GreSetTextCharacterExtra @ 0x1C02B4E10
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetTextCharacterExtra(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+2Ch] [rbp-Ch]

  v7 = 0;
  v8 = 0;
  v3 = 0x80000000;
  XDCOBJ::vLock((XDCOBJ *)&v6, a1);
  if ( v6 )
  {
    v4 = *(_QWORD *)(v6 + 976);
    v3 = *(_DWORD *)(v4 + 280);
    *(_DWORD *)(v4 + 280) = a2;
    XDCOBJ::vUnlockFast((XDCOBJ *)&v6);
  }
  return v3;
}
