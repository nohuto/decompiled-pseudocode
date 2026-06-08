/*
 * XREFs of ValidateLpiState @ 0x1C002B9A8
 * Callers:
 *     ValidateCoordinatedLpiStates @ 0x1C002B75C (ValidateCoordinatedLpiStates.c)
 *     ValidateProcessorLpiStates @ 0x1C002C008 (ValidateProcessorLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     IsValidAcpiGenericAddress @ 0x1C0020C54 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateLpiState(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  unsigned __int16 v3; // r9
  unsigned int v4; // r8d
  unsigned __int8 v5; // al
  int v6; // r10d

  v2 = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v3 = 88;
    v4 = 1;
LABEL_3:
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
      if ( !IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001AD9C) )
      {
        v3 = v6 + 88;
LABEL_8:
        v4 = v6;
        goto LABEL_3;
      }
    }
    else
    {
      if ( v5 != 126 )
      {
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
        v3 = 90;
        goto LABEL_8;
      }
    }
  }
  return v2;
}
