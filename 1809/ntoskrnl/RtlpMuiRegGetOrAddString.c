/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x14073FEB4
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x14073F6A0 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x14073FDC0 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1409079B8 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x140908248 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x140908318 (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x140908818 (_RtlMuiRegAddLIPParent.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14073FF4C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x1409083D8 (RtlpMuiRegGrowStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // bp
  char v6; // r15
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v6 = a3;
  if ( !a1 || !a2 || !*a2 )
    goto LABEL_12;
  if ( !(_BYTE)a3 || (LOBYTE(a3) = 1, (*(_DWORD *)a1 & 2) == 0) )
    LOBYTE(a3) = 0;
  v4 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, a3, &v12);
  if ( v4 >= 0 )
    goto LABEL_7;
  if ( v6 )
  {
    v10 = RtlpMuiRegGrowStringPool(*(PVOID *)(a1 + 32));
    if ( v10 )
    {
      *(_DWORD *)a1 |= 2u;
      LOBYTE(v11) = 1;
      *(_QWORD *)(a1 + 32) = v10;
      v4 = RtlpMuiRegGetOrAddStringToPool(v10, a2, v11, 0LL);
      if ( v4 >= 0 )
      {
LABEL_7:
        result = 0LL;
        goto LABEL_8;
      }
    }
    result = 3221225495LL;
  }
  else
  {
LABEL_12:
    result = 3221225485LL;
  }
LABEL_8:
  if ( a4 )
    *a4 = v4;
  return result;
}
