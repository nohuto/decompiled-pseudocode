/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x140694C10
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14033EFD8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     SepValidateReferencedCachedHandles @ 0x14061FF14 (SepValidateReferencedCachedHandles.c)
 *     PspReadUserQuotaLimits @ 0x140694974 (PspReadUserQuotaLimits.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140694B10 (RtlFormatCurrentUserKeyPath.c)
 *     PiDqOpenUserObjectRegKey @ 0x140695048 (PiDqOpenUserObjectRegKey.c)
 *     CmpGetVirtualizationID @ 0x1406F7000 (CmpGetVirtualizationID.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 *     LocalConvertSidToStringSidW @ 0x1408E311C (LocalConvertSidToStringSidW.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140918F4C (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildSidListString @ 0x14092CE10 (AdtpBuildSidListString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093DD88 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     wcscat_s @ 0x1401A6BB0 (wcscat_s.c)
 *     wcscpy_s @ 0x1401A6C50 (wcscpy_s.c)
 *     RtlValidSid @ 0x1405C8B40 (RtlValidSid.c)
 *     RtlIntegerToUnicode @ 0x140694DF0 (RtlIntegerToUnicode.c)
 *     RtlCreateUnicodeString @ 0x140694F30 (RtlCreateUnicodeString.c)
 *     RtlLargeIntegerToUnicode @ 0x1408D2ED0 (RtlLargeIntegerToUnicode.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v4; // edi
  WCHAR *v7; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v9; // r14
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING SourceString; // [rsp+28h] [rbp-D8h] BYREF
  wchar_t Dst; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR String[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[496]; // [rsp+4Ch] [rbp-B4h] BYREF
  WCHAR v18; // [rsp+23Ch] [rbp+13Ch] BYREF
  WCHAR v19; // [rsp+23Eh] [rbp+13Eh] BYREF

  v4 = 0;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  v13 = 0LL;
  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Dst, 0x100uLL, L"S-1-");
  v7 = String;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Dst, 0x100uLL, L"0x");
    v7 = (WCHAR *)v17;
    v11 = *((unsigned __int8 *)Sid + 5);
    HIDWORD(v13) = *((unsigned __int8 *)Sid + 3) + (*((unsigned __int8 *)Sid + 2) << 8);
    LODWORD(v13) = *((unsigned __int8 *)Sid + 7)
                 + (*((unsigned __int8 *)Sid + 6) << 8)
                 + (v11 << 16)
                 + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(__int64 *, __int64, __int64, _BYTE *))RtlLargeIntegerToUnicode)(
               &v13,
               v12,
               250LL,
               v17);
  }
  else
  {
    result = RtlIntegerToUnicode(
               *((unsigned __int8 *)Sid + 7)
             + (*((unsigned __int8 *)Sid + 6) << 8)
             + (*((unsigned __int8 *)Sid + 5) << 16)
             + (*((unsigned __int8 *)Sid + 4) << 24),
               0xAu,
               0xFCu,
               String);
  }
  if ( result >= 0 )
  {
    v9 = 0;
    if ( *((_BYTE *)Sid + 1) )
    {
      while ( 1 )
      {
        while ( v7 < &v18 && *v7 )
          ++v7;
        *v7++ = 45;
        result = RtlIntegerToUnicode(*((_DWORD *)Sid + v9 + 2), 0xAu, 256 - (v7 - &Dst), v7);
        if ( result < 0 )
          break;
        if ( ++v9 >= *((_BYTE *)Sid + 1) )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      if ( AllocateDestinationString )
        return RtlCreateUnicodeString(UnicodeString, &Dst) == 0 ? 0xC0000017 : 0;
      while ( v7 < &v19 && *v7 )
        ++v7;
      v10 = 2 * (v7 - &Dst);
      if ( v10 >= UnicodeString->MaximumLength )
        return -2147483643;
      SourceString.Length = v10;
      SourceString.Buffer = &Dst;
      SourceString.MaximumLength = v10 + 2;
      RtlCopyUnicodeString(UnicodeString, &SourceString);
      return v4;
    }
  }
  return result;
}
