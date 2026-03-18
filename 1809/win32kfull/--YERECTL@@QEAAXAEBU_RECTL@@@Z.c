/*
 * XREFs of ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C011B2B4
 * Callers:
 *     GreDrawStream @ 0x1C0047970 (GreDrawStream.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0051258 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02643D0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0272870 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::operator+=(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  signed int v3; // r8d
  signed int v4; // r10d
  int v5; // r9d
  signed int v6; // eax
  signed int v7; // eax

  result = *a1;
  v3 = a1[2];
  if ( (_DWORD)result == v3 || (v4 = a1[1], v5 = a1[3], v4 == v5) )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  else
  {
    if ( (int)*a2 < (int)result )
      *a1 = *a2;
    v6 = a2[1];
    if ( v6 < v4 )
      a1[1] = v6;
    v7 = a2[2];
    if ( v7 > v3 )
      a1[2] = v7;
    result = a2[3];
    if ( (int)result > v5 )
      a1[3] = result;
  }
  return result;
}
