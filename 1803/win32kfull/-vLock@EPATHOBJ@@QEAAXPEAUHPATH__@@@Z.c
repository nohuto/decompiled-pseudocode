/*
 * XREFs of ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C011D4B4
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C007BC4C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C011CF50 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     XEPATHOBJ_vConstructHPATHWrap @ 0x1C011D000 (XEPATHOBJ_vConstructHPATHWrap.c)
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C023A7A0 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0257180 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     EngCreatePath @ 0x1C0257A10 (EngCreatePath.c)
 * Callees:
 *     <none>
 */

void __fastcall EPATHOBJ::vLock(EPATHOBJ *this, struct HPATH__ *a2)
{
  struct HPATH__ *v3; // rcx
  __int64 v4; // rax

  v3 = a2;
  LOBYTE(a2) = 7;
  v4 = HmgShareLock(v3, a2);
  *((_QWORD *)this + 1) = v4;
  if ( v4 )
  {
    *((_DWORD *)this + 1) = *(_DWORD *)(v4 + 92);
    *(_DWORD *)this = *(_DWORD *)(v4 + 88);
  }
}
