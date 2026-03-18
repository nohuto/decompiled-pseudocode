/*
 * XREFs of ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C011D14C
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C007BC4C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     GrePolylineTo @ 0x1C011B6E0 (GrePolylineTo.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C011B9EC (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GrePolyBezierTo @ 0x1C011C660 (GrePolyBezierTo.c)
 *     GreAngleArc @ 0x1C026F194 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C026F8F8 (GrePolyDraw.c)
 *     NtGdiArcInternal @ 0x1C02818C0 (NtGdiArcInternal.c)
 * Callees:
 *     <none>
 */

struct _POINTFIX __fastcall EPATHOBJ::ptfxGetCurrent(EPATHOBJ *this, _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 80) & 1) != 0 )
    v3 = (_QWORD *)(v2 + 64);
  else
    v3 = (_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v2 + 40) + 20LL) - 1) + 3LL));
  *a2 = *v3;
  return (struct _POINTFIX)a2;
}
