/*
 * XREFs of ndisConvertWakeUpEnableToPMConfig @ 0x1C0049F80
 * Callers:
 *     ndisXlateWakeUpEnableToPMParametersOid @ 0x1C004BD38 (ndisXlateWakeUpEnableToPMParametersOid.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00E8C04 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertWakeUpEnableToPMConfig(char a1, __int64 a2, __int16 a3)
{
  __int16 v3; // r8
  char v4; // al

  if ( a3 == 1 )
  {
    v3 = 16;
    *(_BYTE *)a2 = 0;
    v4 = 1;
  }
  else
  {
    if ( a3 != 2 )
      return;
    v3 = 20;
    *(_WORD *)a2 = 0;
    v4 = 2;
  }
  *(_BYTE *)a2 = 0x80;
  *(_WORD *)(a2 + 2) = v3;
  *(_BYTE *)(a2 + 1) = v4;
  if ( (a1 & 1) != 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  if ( (a1 & 2) != 0 )
    *(_DWORD *)(a2 + 4) |= 1u;
  if ( (a1 & 4) != 0 )
    *(_DWORD *)(a2 + 12) |= 1u;
}
