/*
 * XREFs of sub_180016E30 @ 0x180016E30
 * Callers:
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 *     sub_18006ABB8 @ 0x18006ABB8 (sub_18006ABB8.c)
 *     RtlIsValidLocaleName @ 0x1800F6B30 (RtlIsValidLocaleName.c)
 * Callees:
 *     sub_180016ED0 @ 0x180016ED0 (sub_180016ED0.c)
 */

__int64 __fastcall sub_180016E30(__int64 a1)
{
  int v1; // ebx
  int v3; // r11d
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  int v8; // r11d
  int v9; // ecx

  v1 = 0;
  v3 = *(unsigned __int16 *)(qword_180166368 + 2) - 1;
  if ( v3 < 0 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(qword_180166368 + 24);
  v5 = *(_QWORD *)(qword_180166368 + 32);
  while ( 1 )
  {
    v6 = (v3 + v1) / 2;
    v7 = sub_180016ED0(a1, v5 + 2LL * *(unsigned __int16 *)(v4 + 8 * v6) + 2);
    if ( !v7 )
      break;
    v9 = v6 - 1;
    if ( v7 >= 0 )
      v9 = v8;
    v3 = v9;
    if ( v7 >= 0 )
      v1 = v6 + 1;
    if ( v1 > v9 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v6;
}
