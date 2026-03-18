/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C025ADBC
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025A6F4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x1C0299444 (GreGetHFONT.c)
 *     GreGetMapMode @ 0x1C02AF770 (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int MapMode; // eax
  unsigned int v6; // ecx

  v4 = *(_QWORD *)(GetDPIServerInfo((__int64)a1, a2, a3) + 24);
  if ( GreGetHFONT(a1) != v4 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v6 = 1;
  if ( MapMode != 1 )
    return 0;
  return v6;
}
