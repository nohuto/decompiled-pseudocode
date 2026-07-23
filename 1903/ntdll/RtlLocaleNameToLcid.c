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

NTSTATUS __cdecl RtlLocaleNameToLcid(PCWSTR LocaleName, PLCID lcid, ULONG Flags)
{
  char v3; // bp
  __int64 v6; // rdi
  int v7; // eax

  v3 = Flags;
  if ( !LocaleName )
    return -1073741585;
  if ( !lcid )
    return -1073741584;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741583;
  v6 = qword_180166368;
  if ( qword_180166368 )
  {
LABEL_5:
    v7 = sub_180016E30(LocaleName);
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
        *lcid = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 8LL * v7 + 4) & 0x7FFFFFFF;
        return 0;
      }
      return -1073741585;
    }
    if ( (unsigned __int8)sub_1800F6FF4(LocaleName) )
    {
      if ( (v3 & 1) != 0 && (unsigned __int8)sub_1800F70E4(LocaleName) )
      {
        *lcid = 5120;
        return 0;
      }
      if ( (unsigned __int8)sub_1800F71AC(LocaleName) )
      {
        *lcid = 3072;
        return 0;
      }
      if ( (v3 & 2) != 0 || (int)sub_1800F6C80(LocaleName, 0LL, 0LL, 0LL) >= 0 )
      {
        *lcid = 4096;
        return 0;
      }
      return -1073741823;
    }
    return -1073741585;
  }
  if ( (unsigned __int8)sub_18007B398() )
  {
    v6 = qword_180166368;
    goto LABEL_5;
  }
  return -1073741823;
}
