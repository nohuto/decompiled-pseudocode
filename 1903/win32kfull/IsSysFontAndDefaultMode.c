/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C025B4F4
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025AE34 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x1C02999F4 (GreGetHFONT.c)
 *     GreGetMapMode @ 0x1C02AFC20 (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1)
{
  __int64 v2; // rbx
  int MapMode; // eax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(GetDPIServerInfo() + 24);
  if ( GreGetHFONT(a1) != v2 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v4 = 1;
  if ( MapMode != 1 )
    return 0;
  return v4;
}
