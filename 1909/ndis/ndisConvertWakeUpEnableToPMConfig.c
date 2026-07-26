/*
 * XREFs of ndisConvertWakeUpEnableToPMConfig @ 0x1C0072C3C
 * Callers:
 *     ndisSetOpenEnableWakeUp @ 0x1C00771E0 (ndisSetOpenEnableWakeUp.c)
 *     ndisXlateWakeUpEnableToPMParametersOid @ 0x1C007836C (ndisXlateWakeUpEnableToPMParametersOid.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertWakeUpEnableToPMConfig(char a1, __int64 a2, __int16 a3)
{
  char v3; // al
  __int16 v4; // r8

  if ( a3 == 1 )
  {
    v3 = 1;
    v4 = 16;
  }
  else
  {
    if ( a3 != 2 )
      return;
    v3 = 2;
    v4 = 20;
  }
  *(_BYTE *)a2 = 0x80;
  *(_WORD *)(a2 + 2) = v4;
  *(_BYTE *)(a2 + 1) = v3;
  if ( (a1 & 1) != 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  if ( (a1 & 2) != 0 )
    *(_DWORD *)(a2 + 4) |= 1u;
  if ( (a1 & 4) != 0 )
    *(_DWORD *)(a2 + 12) |= 1u;
}
