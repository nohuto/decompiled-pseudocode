/*
 * XREFs of VrpBuildKeyPath @ 0x14080DFFC
 * Callers:
 *     VrpCreateNamespaceNode @ 0x140809E5C (VrpCreateNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14080A620 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14080AE64 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14080B784 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080C300 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x14080CB90 (VrpTranslatePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x1400B9870 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F51B0 (RtlAppendUnicodeStringToString.c)
 *     RtlUShortAdd @ 0x14011CDFC (RtlUShortAdd.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpBuildKeyPath(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  PCUNICODE_STRING v3; // rsi
  unsigned __int16 *p_MaximumLength; // r8
  USHORT Length; // cx
  USHORT *v8; // r8
  NTSTATUS v9; // ebx
  unsigned __int16 *v10; // r8
  wchar_t *PoolWithTag; // rax
  int v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v3 = (PCUNICODE_STRING)&v13;
  Destination->Length = 0;
  v13 = 0;
  if ( SourceString )
    v3 = SourceString;
  v14 = 0LL;
  p_MaximumLength = &Destination->MaximumLength;
  Length = v3->Length;
  *p_MaximumLength = v3->Length;
  if ( RtlUShortAdd(Length, Source->Length, p_MaximumLength) < 0 )
    return (unsigned int)-1073741811;
  v9 = RtlUShortAdd(*v8, 2u, v8);
  if ( v9 < 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, *v10, 0x67655256u);
    Destination->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCopyUnicodeString(Destination, v3);
      if ( Source->Length )
      {
        if ( *Source->Buffer != 92 && v3->Buffer[((unsigned __int64)v3->Length >> 1) - 1] != 92 )
          RtlAppendUnicodeToString(Destination, L"\\");
        RtlAppendUnicodeStringToString(Destination, Source);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v9;
}
