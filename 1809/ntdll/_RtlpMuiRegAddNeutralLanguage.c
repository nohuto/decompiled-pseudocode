/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x18004C71C
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18004C624 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180102378 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180102F30 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetParentLocaleName @ 0x18003B4B0 (RtlGetParentLocaleName.c)
 *     _MuiRegAllocArray @ 0x1800400F0 (_MuiRegAllocArray.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18004C824 (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int8 v4; // al
  int v6; // r14d
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  int ParentLocaleName; // ebx
  int v10; // r9d
  int v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h]
  unsigned __int8 v14; // [rsp+70h] [rbp+30h] BYREF
  __int16 v15; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0;
  v4 = 0;
  v14 = 0;
  v6 = a1;
  v7 = 0LL;
  if ( a1 && a2 )
  {
    v8 = MuiRegAllocArray(a1, 0x55u);
    v7 = v8;
    if ( !v8 )
    {
      ParentLocaleName = -1073741801;
      goto LABEL_18;
    }
    v13 = v8;
    v12 = 11141120;
    ParentLocaleName = RtlGetParentLocaleName(a3, (__int64)&v12, 6u, 0);
    if ( ParentLocaleName < 0
      || (ParentLocaleName = RtlpMuiRegGetLanguageSpec(v6, v13, (unsigned int)&v14, v10, (__int64)&v15),
          ParentLocaleName < 0) )
    {
      v4 = 0;
      v15 = 0;
      v14 = 0;
    }
    else
    {
      v4 = v14;
    }
  }
  else
  {
    ParentLocaleName = -1073741811;
  }
  if ( v7 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    v4 = v14;
  }
  if ( !v4 )
  {
    if ( ParentLocaleName >= 0 )
      ParentLocaleName = -1073741823;
    goto LABEL_18;
  }
  if ( ParentLocaleName < 0 )
  {
LABEL_18:
    *(_WORD *)(a2 + 10) = 0;
    *(_WORD *)(a2 + 8) &= 0x3FFFu;
    return (unsigned int)ParentLocaleName;
  }
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  *(_WORD *)(a2 + 8) |= v4 << 14;
  *(_WORD *)(a2 + 10) = v15;
  return (unsigned int)ParentLocaleName;
}
