/*
 * XREFs of ndisXlateWakeUpEnableToPMParametersOid @ 0x1C004BD38
 * Callers:
 *     ndisOidPostPMParameters @ 0x1C0024F90 (ndisOidPostPMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C00E8758 (ndisSetEnableWakeUp.c)
 * Callees:
 *     ndisConvertWakeUpEnableToPMConfig @ 0x1C0049F80 (ndisConvertWakeUpEnableToPMConfig.c)
 */

__int64 __fastcall ndisXlateWakeUpEnableToPMParametersOid(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  _DWORD *v3; // r11

  v1 = *(_DWORD *)(a1 + 152);
  v2 = 0;
  if ( v1 >= 0x10 )
  {
    ndisConvertWakeUpEnableToPMConfig(**(_DWORD **)(a1 + 40), *(_QWORD *)(a1 + 40), 2 - (v1 < 0x14));
    v3[8] = -50265847;
    v3[12] = v3[38];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
