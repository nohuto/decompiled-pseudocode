/*
 * XREFs of ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014F034
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0126B5C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C01272B4 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     GrePolylineTo @ 0x1C014EC30 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C014EE40 (GrePolyBezierTo.c)
 *     GreAngleArc @ 0x1C0269620 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C0269DF4 (GrePolyDraw.c)
 *     NtGdiArcInternal @ 0x1C02A9BF0 (NtGdiArcInternal.c)
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
