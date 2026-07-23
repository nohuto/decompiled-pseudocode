/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x180085A00
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EF2A4 (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180102F30 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x180041540 (RtlStringCbCopyW.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, _UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  __int16 v5; // ax
  unsigned __int16 Length; // si
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(_WORD *)(a2 + 6);
    if ( v5 <= 0 )
    {
      if ( ((*(_WORD *)(a2 + 4) - 4096) & 0xFBFF) != 0 && RtlLCIDToCultureName(*(unsigned __int16 *)(a2 + 4), a3) )
        return v3;
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * v5)));
      Length = DestinationString.Length;
      if ( DestinationString.Length <= a3->MaximumLength
        && (int)RtlStringCbCopyW(a3->Buffer, a3->MaximumLength, (__int64)DestinationString.Buffer) >= 0 )
      {
        a3->Length = Length;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
