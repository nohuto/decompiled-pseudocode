/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x1800094BC
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x1800093C4 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800FFB18 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18010070C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetLanguageSpec @ 0x1800095D4 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     _MuiRegAllocArray @ 0x180016554 (_MuiRegAllocArray.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v5; // r15d
  __int64 v6; // r14
  unsigned __int8 v7; // si
  __int64 v8; // rax
  int ParentLocaleName; // edi
  int v10; // r9d
  int v12; // [rsp+38h] [rbp-8h]
  unsigned __int8 v13; // [rsp+70h] [rbp+30h] BYREF
  __int16 v14; // [rsp+88h] [rbp+48h] BYREF

  v14 = 0;
  v13 = 0;
  v5 = a1;
  v6 = 0LL;
  v7 = 0;
  if ( a1 && a2 )
  {
    v8 = MuiRegAllocArray(a1, 85LL);
    v6 = v8;
    if ( !v8 )
    {
      ParentLocaleName = -1073741801;
LABEL_17:
      *(_WORD *)(a2 + 10) = 0;
      *(_WORD *)(a2 + 8) &= 0x3FFFu;
      return (unsigned int)ParentLocaleName;
    }
    v12 = v8;
    ParentLocaleName = RtlGetParentLocaleName(a3);
    if ( ParentLocaleName >= 0 )
    {
      ParentLocaleName = RtlpMuiRegGetLanguageSpec(v5, v12, (unsigned int)&v13, v10, (__int64)&v14);
      if ( ParentLocaleName < 0 )
      {
        v7 = 0;
        v13 = 0;
        v14 = 0;
      }
      else
      {
        v7 = v13;
      }
    }
  }
  else
  {
    ParentLocaleName = -1073741811;
  }
  if ( v6 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v6);
    v7 = v13;
  }
  if ( ParentLocaleName < 0 )
    goto LABEL_17;
  if ( !v7 )
  {
    ParentLocaleName = -1073741823;
    goto LABEL_17;
  }
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  *(_WORD *)(a2 + 8) |= v7 << 14;
  *(_WORD *)(a2 + 10) = v14;
  return (unsigned int)ParentLocaleName;
}
