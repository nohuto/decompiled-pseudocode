/*
 * XREFs of HvlQueryVsmProtectionInfo @ 0x14072CCA4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     HvlpProcessIommu @ 0x140170ADC (HvlpProcessIommu.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140343D80 (HviGetHardwareFeatures.c)
 */

__int64 __fastcall HvlQueryVsmProtectionInfo(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // edi
  char v7; // al
  bool v8; // al
  __int16 v10; // [rsp+20h] [rbp-48h]
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  v6 = 0;
  if ( (unsigned int)a2 < 3 )
  {
    v6 = -1073741584;
    *a3 = 0;
    return v6;
  }
  LOBYTE(v10) = 0;
  if ( !HvlHypervisorConnected )
    goto LABEL_3;
  if ( (HvlpFlags & 2) == 0 )
  {
    if ( (HvlpFlags & 0x40) != 0 || HvlpProcessIommu() )
      LOBYTE(v10) = 1;
    HIBYTE(v10) = (HvlpFlags & 0x40) != 0;
    goto LABEL_5;
  }
  if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
  {
    HviGetHardwareFeatures((__int64)v11, a2, (__int64)a3, a4);
    v7 = LOBYTE(v11[0]) >> 7;
    HIBYTE(v10) = LOBYTE(v11[0]) >> 7;
  }
  else
  {
LABEL_3:
    v7 = HvlpProcessIommu();
    HIBYTE(v10) = 0;
  }
  LOBYTE(v10) = v7;
LABEL_5:
  v8 = (HvlpFlags & 0x20000) != 0;
  *(_WORD *)a1 = v10;
  *(_BYTE *)(a1 + 2) = v8;
  *a3 = 3;
  return v6;
}
