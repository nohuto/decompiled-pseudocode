/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C022C7AC
 * Callers:
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C022C114 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x1C026EF2C (GreGetHFONT.c)
 *     GreGetMapMode @ 0x1C0287198 (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  int MapMode; // eax
  unsigned int v5; // ecx

  v3 = *(_QWORD *)(GetDPIServerInfo((__int64)a1, a2) + 24);
  if ( GreGetHFONT(a1) != v3 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v5 = 1;
  if ( MapMode != 1 )
    return 0;
  return v5;
}
