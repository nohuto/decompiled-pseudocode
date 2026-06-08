/*
 * XREFs of ValidateLpiState @ 0x1C002DC80
 * Callers:
 *     ValidateCoordinatedLpiStates @ 0x1C002DA00 (ValidateCoordinatedLpiStates.c)
 *     ValidateProcessorLpiStates @ 0x1C002E4EC (ValidateProcessorLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     IsValidAcpiGenericAddress @ 0x1C002086C (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateLpiState(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  unsigned __int16 v3; // r9
  unsigned int v4; // r8d
  unsigned __int8 v5; // cl
  int v6; // r10d

  v2 = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741823;
    v3 = 88;
    v4 = 1;
LABEL_4:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v4,
      v3,
      (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids);
    return (unsigned int)-1073741823;
  }
  v5 = *(_BYTE *)(a1 + 24);
  if ( v5 != 127 )
  {
    v6 = 1;
    if ( v5 == 1 )
    {
      if ( !IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001BDAC) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v3 = v6 + 88;
        goto LABEL_10;
      }
    }
    else
    {
      if ( v5 != 126 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x5Bu,
            (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
            v5);
        return (unsigned int)-1073741823;
      }
      if ( !a2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v3 = 90;
LABEL_10:
        v4 = v6;
        goto LABEL_4;
      }
    }
  }
  return v2;
}
