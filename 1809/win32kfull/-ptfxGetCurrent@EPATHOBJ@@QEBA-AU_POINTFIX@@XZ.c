/*
 * XREFs of ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014133C
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A0A94 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GrePolylineTo @ 0x1C01404E0 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C01407D0 (GrePolyBezierTo.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0140FC0 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     GreAngleArc @ 0x1C02500CC (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C0250898 (GrePolyDraw.c)
 *     NtGdiArcInternal @ 0x1C0294C80 (NtGdiArcInternal.c)
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
