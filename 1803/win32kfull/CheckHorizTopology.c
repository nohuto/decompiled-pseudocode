/*
 * XREFs of CheckHorizTopology @ 0x1C02C3C08
 * Callers:
 *     fsc_CheckEndPoint @ 0x1C02C3D80 (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C02C3E68 (fsc_EndContourEndpoint.c)
 * Callees:
 *     AddHorizOff @ 0x1C02C3A88 (AddHorizOff.c)
 *     AddHorizOn @ 0x1C02C3AE8 (AddHorizOn.c)
 */

__int64 __fastcall CheckHorizTopology(int a1, int a2, char a3)
{
  unsigned int v3; // r9d
  bool v6; // cc
  bool v7; // cc

  v3 = 0;
  if ( a2 > dword_1C032FE1C )
  {
    if ( dword_1C032FE1C <= dword_1C032FE14 )
    {
      if ( dword_1C032FE1C < dword_1C032FE14 )
      {
LABEL_4:
        v3 = AddHorizOn(a3);
        if ( !v3 )
          return (unsigned int)AddHorizOff(a3);
        return v3;
      }
      if ( dword_1C032FE18 >= State[0] )
        return v3;
    }
    return (unsigned int)AddHorizOn(a3);
  }
  if ( a2 < dword_1C032FE1C )
  {
    if ( dword_1C032FE1C <= dword_1C032FE14 )
    {
      if ( dword_1C032FE1C < dword_1C032FE14 || dword_1C032FE18 > State[0] )
        return (unsigned int)AddHorizOff(a3);
      return v3;
    }
    goto LABEL_4;
  }
  if ( dword_1C032FE1C > dword_1C032FE14 )
  {
    v6 = a1 <= dword_1C032FE18;
    goto LABEL_23;
  }
  if ( dword_1C032FE1C < dword_1C032FE14 )
  {
    if ( a1 < dword_1C032FE18 )
      return (unsigned int)AddHorizOff(a3);
    return v3;
  }
  v7 = dword_1C032FE18 < State[0];
  if ( dword_1C032FE18 > State[0] )
  {
    if ( a1 < dword_1C032FE18 )
      return (unsigned int)AddHorizOff(a3);
    v7 = dword_1C032FE18 < State[0];
  }
  if ( v7 )
  {
    v6 = a1 <= dword_1C032FE18;
LABEL_23:
    if ( v6 )
      return v3;
    return (unsigned int)AddHorizOn(a3);
  }
  return v3;
}
