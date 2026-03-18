/*
 * XREFs of fs_NewSfnt @ 0x1C02B1E24
 * Callers:
 *     bLoadTTF @ 0x1C021995C (bLoadTTF.c)
 *     bReloadGlyphSet @ 0x1C021A0A4 (bReloadGlyphSet.c)
 *     pvHandleKerningPairs @ 0x1C0220004 (pvHandleKerningPairs.c)
 *     bInitInAndOut @ 0x1C02227F4 (bInitInAndOut.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B1F84 (fs_SetUpKey.c)
 *     fsg_PrivateFontSpaceSize @ 0x1C02BE038 (fsg_PrivateFontSpaceSize.c)
 *     fsg_WorkSpaceSetOffsets @ 0x1C02BE8AC (fsg_WorkSpaceSetOffsets.c)
 *     sfac_ComputeMapping @ 0x1C02BF258 (sfac_ComputeMapping.c)
 *     sfac_DoOffsetTableMap @ 0x1C02BF614 (sfac_DoOffsetTableMap.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C02C0278 (sfac_LoadCriticalSfntMetrics.c)
 */

__int64 __fastcall fs_NewSfnt(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8) )
    return 4099LL;
  v5 = fs_SetUpKey(a1, 0LL, &v7);
  v6 = v5;
  if ( !v5 )
    return v7;
  result = sfac_DoOffsetTableMap(v5);
  if ( !(_DWORD)result )
  {
    result = sfac_LoadCriticalSfntMetrics(v6, v6 + 316, v6 + 364, v6 + 388);
    if ( !(_DWORD)result )
    {
      result = fsg_PrivateFontSpaceSize(v6, v6 + 388, v6 + 568, &v7);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a2 + 16) = v7 + 4;
        *(_DWORD *)(a2 + 12) = fsg_WorkSpaceSetOffsets(v6 + 388, v6 + 480, v6 + 944) + 4;
        result = sfac_ComputeMapping(v6, *(unsigned __int16 *)(a1 + 104), *(unsigned __int16 *)(a1 + 106));
        if ( !(_DWORD)result )
        {
          *(_DWORD *)(v6 + 420) = 2;
          *(_DWORD *)(v6 + 428) = 1;
        }
      }
    }
  }
  return result;
}
