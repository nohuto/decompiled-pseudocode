/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x180015918
 * Callers:
 *     RtlpMuiRegGetLanguageSpec @ 0x1800095D4 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001583C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015FD0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FD248 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800FE05C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800FF5E0 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800FFB18 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18010070C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800167FC (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x1800FE5C0 (RtlpMuiRegGrowStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // bp
  char v6; // r15
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v6 = a3;
  if ( !a1 || !a2 || !*a2 )
    goto LABEL_8;
  v9 = *(_DWORD *)a1 & 2;
  if ( !(_BYTE)a3 || (LOBYTE(a3) = 1, !v9) )
    LOBYTE(a3) = 0;
  v4 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, a3, &v15);
  if ( v4 >= 0 )
    goto LABEL_12;
  if ( !v6 )
  {
LABEL_8:
    result = 3221225485LL;
    goto LABEL_9;
  }
  LOBYTE(v11) = v9 == 0;
  v13 = RtlpMuiRegGrowStringPool(*(_QWORD *)(a1 + 32), v10, v15, v11);
  if ( v13
    && (*(_DWORD *)a1 |= 2u,
        LOBYTE(v14) = 1,
        *(_QWORD *)(a1 + 32) = v13,
        v4 = RtlpMuiRegGetOrAddStringToPool(v13, a2, v14, 0LL),
        v4 >= 0) )
  {
LABEL_12:
    result = 0LL;
  }
  else
  {
    result = 3221225495LL;
  }
LABEL_9:
  if ( a4 )
    *a4 = v4;
  return result;
}
