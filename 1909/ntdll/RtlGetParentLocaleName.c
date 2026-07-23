/*
 * XREFs of RtlGetParentLocaleName @ 0x18000EFE0
 * Callers:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800094BC (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlGetNeutralFallback @ 0x180013008 (RtlGetNeutralFallback.c)
 *     LdrpGetParentLangId @ 0x18007E8F4 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x180016C58 (RtlStringCchLengthW.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180016CBC (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpNlsGetNameIndex @ 0x180016E30 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18007BA38 (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800F6D60 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800F70D4 (RtlpIsCustomLocale.c)
 */

NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  ULONG v8; // ebp
  int NameIndex; // eax
  ULONG v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r11
  NTSTATUS result; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // [rsp+40h] [rbp+8h] BYREF

  if ( !LocaleName )
    return -1073741585;
  if ( !ParentLocaleName || !ParentLocaleName->Buffer )
    return -1073741584;
  if ( (Flags & 0xFFFFFFF9) != 0 )
    return -1073741583;
  v8 = Flags & 4;
  if ( (Flags & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale(LocaleName)
    || (v17 = Flags >> 1,
        LOBYTE(v16) = AllocateDestinationString,
        LOBYTE(v17) = (Flags & 2) != 0,
        result = RtlpGetCustomCultureData(LocaleName, v17, v16, ParentLocaleName),
        result < 0) )
  {
    if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
      return -1073741823;
    NameIndex = RtlpNlsGetNameIndex(LocaleName);
    v10 = Flags & 2;
    if ( NameIndex < 0 )
      goto LABEL_27;
    if ( !v10 )
    {
      _mm_lfence();
      if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                     * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                     + *(_QWORD *)(pTblPtrs + 8)
                     + 24LL) & 1) == 0 )
        return -1073741585;
    }
    _mm_lfence();
    v11 = *(unsigned __int16 *)(pTblPtrs + 48) * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
    v12 = *(_QWORD *)(pTblPtrs + 32) + 2LL;
    if ( v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(pTblPtrs + 8) + 184) )
    {
      if ( (int)RtlStringCchLengthW(v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(pTblPtrs + 8) + 184), 85LL, &v20) < 0 )
        return -1073741823;
      LOBYTE(v13) = AllocateDestinationString;
      return RtlpInitUnicodeStringUsingBuffer(v13, v14, v20, ParentLocaleName);
    }
    else
    {
LABEL_27:
      if ( !v8 || !(unsigned __int8)RtlpIsCustomLocale(LocaleName) )
        return -1073741585;
      LOBYTE(v19) = AllocateDestinationString;
      LOBYTE(v18) = v10 != 0;
      return RtlpGetCustomCultureData(LocaleName, v18, v19, ParentLocaleName);
    }
  }
  return result;
}
