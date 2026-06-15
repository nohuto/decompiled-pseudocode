/*
 * XREFs of ?ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z @ 0x18010D5D4
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x180109778 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x18010B290 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongMultDivToUlongRU(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned int v12; // eax

  v4 = 0;
  v5 = a1 * a2;
  *a4 = -1;
  v8 = a1 * a2;
  if ( is_mul_ok(a1, a2) )
  {
    if ( v5 )
    {
      v9 = v5 - 1;
      v10 = -1LL;
      if ( !v8 )
        v9 = -1LL;
      v11 = v9 / a3;
      if ( v11 + 1 >= v11 )
        v10 = v11 + 1;
      v4 = v11 + 1 < v11 ? 0x80070216 : 0;
      if ( v11 + 1 >= v11 )
      {
        v12 = -1;
        if ( v10 <= 0xFFFFFFFF )
          v12 = v10;
        *a4 = v12;
        return v10 > 0xFFFFFFFF ? 0x80070216 : 0;
      }
    }
    else
    {
      *a4 = 0;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v4;
}
