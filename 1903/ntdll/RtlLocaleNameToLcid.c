/*
 * XREFs of RtlLocaleNameToLcid @ 0x180016D90
 * Callers:
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x180054EA0 (RtlLoadString.c)
 *     sub_18007E254 @ 0x18007E254 (sub_18007E254.c)
 * Callees:
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18007B398 @ 0x18007B398 (sub_18007B398.c)
 *     sub_1800F6C80 @ 0x1800F6C80 (sub_1800F6C80.c)
 *     sub_1800F6FF4 @ 0x1800F6FF4 (sub_1800F6FF4.c)
 *     sub_1800F70E4 @ 0x1800F70E4 (sub_1800F70E4.c)
 *     sub_1800F71AC @ 0x1800F71AC (sub_1800F71AC.c)
 */

__int64 __fastcall RtlLocaleNameToLcid(PCWSTR SourceString, int *a2, int a3)
{
  char v3; // bp
  __int64 v6; // rdi
  int v7; // eax

  v3 = a3;
  if ( !SourceString )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225713LL;
  v6 = qword_180166368;
  if ( qword_180166368 )
  {
LABEL_5:
    v7 = sub_180016E30(SourceString);
    if ( v7 >= 0 )
    {
      if ( (v3 & 2) != 0
        || (_mm_lfence(),
            v6 = qword_180166368,
            (*(_BYTE *)(*(unsigned __int16 *)(qword_180166368 + 48)
                      * *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 24) + 8LL * v7 + 2)
                      + *(_QWORD *)(qword_180166368 + 8)
                      + 24LL) & 1) != 0) )
      {
        *a2 = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 8LL * v7 + 4) & 0x7FFFFFFF;
        return 0LL;
      }
      return 3221225711LL;
    }
    if ( (unsigned __int8)sub_1800F6FF4(SourceString) )
    {
      if ( (v3 & 1) != 0 && (unsigned __int8)sub_1800F70E4(SourceString) )
      {
        *a2 = 5120;
        return 0LL;
      }
      if ( (unsigned __int8)sub_1800F71AC(SourceString) )
      {
        *a2 = 3072;
        return 0LL;
      }
      if ( (v3 & 2) != 0 || (int)sub_1800F6C80(SourceString, 0LL, 0LL, 0LL) >= 0 )
      {
        *a2 = 4096;
        return 0LL;
      }
      return 3221225473LL;
    }
    return 3221225711LL;
  }
  if ( (unsigned __int8)sub_18007B398() )
  {
    v6 = qword_180166368;
    goto LABEL_5;
  }
  return 3221225473LL;
}
