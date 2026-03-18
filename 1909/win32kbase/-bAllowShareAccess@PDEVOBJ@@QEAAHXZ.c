/*
 * XREFs of ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C002C420
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x1C002C1B0 (GreLockVisRgnSharedOrExclusive.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002C2F0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C390 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002E230 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009A2D0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0125480 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PDEVOBJ::bAllowShareAccess(PDEVOBJ *this)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // r8
  _BOOL8 result; // rax

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  result = (v2 & 1) != 0
        && (v2 & 0x1000000) == 0
        && (*(_DWORD *)(v1 + 2612) == 5
         || (v2 & 0x20000) != 0
         || (v3 = *(_QWORD *)(v1 + 2576), ((v3 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0)
         && (*(_DWORD *)(v3 + 160) & 0x800000) != 0)
        && (*(_DWORD *)(v1 + 2128) & 0x400) == 0
        && (v2 & 0x48000000) == 0
        && (*(_DWORD *)(v1 + 1824) & 0x8000000) == 0
        && (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 40LL) & 0x1000000) == 0;
  return result;
}
