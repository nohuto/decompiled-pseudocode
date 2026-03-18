/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0122994
 * Callers:
 *     GreGetDeviceCaps @ 0x1C0018CC0 (GreGetDeviceCaps.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0021720 (bDeleteDCInternalEx.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0025390 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C002ADD0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_DWORD *)this + 130);
  v2 = *((_QWORD *)this + 122);
  v3 = *(_DWORD *)(v2 + 340);
  if ( (v1 & 1) != 0 )
    v4 = v3 | 0x16090;
  else
    v4 = v3 | 0x6090;
  *(_DWORD *)(v2 + 340) = v4;
}
