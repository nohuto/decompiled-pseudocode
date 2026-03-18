/*
 * XREFs of ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z @ 0x1C02560AC
 * Callers:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C0255908 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 * Callees:
 *     ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEPEBEK@Z @ 0x1C0254C3C (-ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEPEBEK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum(
        __int64 a1,
        const unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned __int8 v4; // al
  unsigned int v6; // r8d
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r10

  if ( a3 < 3 )
    return 3223192968LL;
  v4 = a2[2];
  if ( !v4 )
    return 3223192969LL;
  if ( v4 > 3u && v4 != 7 && v4 != 12 )
  {
    if ( v4 == 78 )
    {
      v6 = 9;
      goto LABEL_12;
    }
    if ( v4 != 0xE3 && v4 != 0xF3 )
      return 3223192969LL;
  }
  v6 = (a2[1] & 0x7F) + 3;
  if ( (a2[1] & 0x7F) == 0xFFFFFFFD )
    return 3223192970LL;
LABEL_12:
  if ( a3 < v6 )
    return 3223192970LL;
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      if ( v6 != 11 )
        return 3223192970LL;
    }
    else if ( v4 != 3 && v4 != 7 && v4 != 12 )
    {
      switch ( v4 )
      {
        case 0x4Eu:
          if ( v6 != 9 )
            return 3223192970LL;
          break;
        case 0xE3u:
          if ( v6 - 6 > 0x20 )
            return 3223192970LL;
          break;
        case 0xF3u:
          break;
        default:
          return 3223192968LL;
      }
    }
  }
  v7 = CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(111, a2, v6 - 1);
  return v7 != *(_BYTE *)(v8 + v9) ? 0xC01E058B : 0;
}
