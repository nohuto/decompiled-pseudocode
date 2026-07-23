/*
 * XREFs of RtlIsValidLocaleName @ 0x1800F6B30
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180074270 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007B110 (RtlGetUserPreferredUILanguages.c)
 *     sub_1800EBD90 @ 0x1800EBD90 (sub_1800EBD90.c)
 * Callees:
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18007B398 @ 0x18007B398 (sub_18007B398.c)
 *     sub_1800F6C80 @ 0x1800F6C80 (sub_1800F6C80.c)
 *     sub_1800F6FF4 @ 0x1800F6FF4 (sub_1800F6FF4.c)
 */

BOOLEAN __cdecl RtlIsValidLocaleName(PCWSTR LocaleName, ULONG Flags)
{
  char v2; // di
  int v4; // eax

  v2 = Flags;
  if ( !LocaleName || (Flags & 0xFFFFFFFD) != 0 || !qword_180166368 && !sub_18007B398() )
    return 0;
  v4 = sub_180016E30((__int64)LocaleName);
  if ( v4 < 0 )
  {
    if ( !(unsigned __int8)sub_1800F6FF4(LocaleName)
      || (v2 & 2) == 0 && (int)sub_1800F6C80(LocaleName, 0LL, 0LL, 0LL) < 0 )
    {
      return 0;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    _mm_lfence();
    if ( (*(_BYTE *)(*(unsigned __int16 *)(qword_180166368 + 48)
                   * *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 24) + 8LL * v4 + 2)
                   + *(_QWORD *)(qword_180166368 + 8)
                   + 24LL) & 1) == 0 )
      return 0;
  }
  return 1;
}
