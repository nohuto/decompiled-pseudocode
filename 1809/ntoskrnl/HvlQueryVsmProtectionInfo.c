/*
 * XREFs of HvlQueryVsmProtectionInfo @ 0x140818834
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpProcessIommu @ 0x140278384 (HvlpProcessIommu.c)
 *     HviGetHardwareFeatures @ 0x140322540 (HviGetHardwareFeatures.c)
 */

__int64 __fastcall HvlQueryVsmProtectionInfo(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  char v8; // al
  bool v9; // al
  __int16 v10; // [rsp+20h] [rbp-38h]
  _DWORD v11[4]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  if ( (unsigned int)a2 >= 3 )
  {
    LOBYTE(v10) = 0;
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) == 0 )
      {
        if ( (HvlpFlags & 0x40) != 0 || HvlpProcessIommu() )
          LOBYTE(v10) = 1;
        HIBYTE(v10) = (HvlpFlags & 0x40) != 0;
        goto LABEL_13;
      }
      HviGetHardwareFeatures((__int64)v11, a2, (__int64)a3, a4);
      v8 = LOBYTE(v11[0]) >> 7;
      HIBYTE(v10) = LOBYTE(v11[0]) >> 7;
    }
    else
    {
      v8 = HvlpProcessIommu();
      HIBYTE(v10) = 0;
    }
    LOBYTE(v10) = v8;
LABEL_13:
    v9 = (HvlpFlags & 0x20000) != 0;
    *(_WORD *)a1 = v10;
    *(_BYTE *)(a1 + 2) = v9;
    *a3 = 3;
    return v6;
  }
  v6 = -1073741584;
  *a3 = 0;
  return v6;
}
