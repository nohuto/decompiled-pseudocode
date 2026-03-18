/*
 * XREFs of ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C011CF50
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiFillPath @ 0x1C011B600 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C011B8A0 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C011CE20 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C027DB90 (NtGdiFlattenPath.c)
 *     NtGdiPathToRegion @ 0x1C027DE80 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C027DFA0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C027E100 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C027E230 (NtGdiWidenPath.c)
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C011CF20 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C011D4B4 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0257180 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, DC **a2)
{
  int v4; // eax
  struct HPATH__ *v6; // rdx
  _BYTE v7[8]; // [rsp+20h] [rbp-108h] BYREF
  struct HPATH__ **v8; // [rsp+28h] [rbp-100h]
  _BYTE v9[8]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v10; // [rsp+A8h] [rbp-80h]

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  v4 = *((_DWORD *)*a2 + 64);
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)*a2 + 64) = v4 & 0xFFFFFFFD;
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v9, *((struct HPATH__ **)*a2 + 26));
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v7);
    if ( v8 && v10 && EPATHOBJ::bClone((EPATHOBJ *)v7, (struct EPATHOBJ *)v9) )
      v6 = *v8;
    else
      v6 = 0LL;
    DC::hpath(*a2, v6);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 28) = 1;
  }
  EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 26));
  return this;
}
