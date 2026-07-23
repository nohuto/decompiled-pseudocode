/*
 * XREFs of PiDrvDbResolveSystemFilePath @ 0x1408400C8
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083F81C (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     PiDrvDbGetFilePathVolume @ 0x14028B608 (PiDrvDbGetFilePathVolume.c)
 *     RtlUnicodeStringCchCopyN @ 0x14028B644 (RtlUnicodeStringCchCopyN.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 */

int __fastcall PiDrvDbResolveSystemFilePath(
        PCUNICODE_STRING SourceString,
        char a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        __int64 a5,
        PUNICODE_STRING UnicodeString)
{
  unsigned __int16 v6; // r11
  const UNICODE_STRING *v11; // r14
  wchar_t *v12; // rbx
  unsigned int v13; // r12d
  __int64 v14; // r13
  BOOLEAN v15; // al
  wchar_t *Buffer; // rsi
  BOOLEAN v17; // al
  int v18; // eax
  wchar_t *v19; // rsi
  unsigned __int16 Length; // r8
  WCHAR v21; // dx
  int result; // eax
  __int16 FilePathVolume; // ax
  unsigned __int16 v24; // r9
  __int16 v25; // r10
  int v26; // esi
  __int64 v27; // rax
  unsigned int v28; // esi
  wchar_t *StringRoutine; // rax
  int v30; // [rsp+20h] [rbp-38h] BYREF
  wchar_t *v31; // [rsp+28h] [rbp-30h]

  v6 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 6LL;
  if ( (a2 & 2) != 0 )
  {
    v15 = RtlPrefixUnicodeString(&PiDrvDbSystemRootNt, SourceString, 1u);
    v6 = 0;
    if ( v15 )
    {
      v11 = a3;
      v12 = SourceString->Buffer + 11;
    }
    else
    {
      Buffer = SourceString->Buffer;
      v17 = RtlPrefixUnicodeString(&PiDrvDbSystemRootWin32, SourceString, 1u);
      v6 = 0;
      if ( v17 )
      {
        v12 = Buffer + 12;
      }
      else
      {
        if ( *Buffer != 64 )
          goto LABEL_11;
        v18 = wcsnicmp(Buffer + 1, L"%SystemRoot%", 0xCuLL);
        v6 = 0;
        if ( v18 )
          goto LABEL_11;
        v13 = 1;
        v12 = SourceString->Buffer + 13;
      }
      v11 = a4;
    }
    if ( v12 )
      goto LABEL_16;
  }
LABEL_11:
  if ( (a2 & 1) != 0 && a4 && a5 )
  {
    v19 = SourceString->Buffer;
    if ( RtlPrefixUnicodeString(&PiDrvDbDosVolumePrefix, SourceString, 1u) )
    {
      v12 = v19 + 4;
      v13 = 4;
      if ( !(unsigned __int16)PiDrvDbGetFilePathVolume(v19 + 4) )
        goto LABEL_16;
LABEL_23:
      v12 = &v19[v14];
      FilePathVolume = PiDrvDbGetFilePathVolume(*(unsigned __int16 **)(a5 + 8));
      if ( FilePathVolume != v25 || a4->Length < v24 )
        return -1073741637;
      v11 = (const UNICODE_STRING *)&v30;
      v31 = a4->Buffer;
      v30 = 262148;
      goto LABEL_17;
    }
    if ( (unsigned __int16)PiDrvDbGetFilePathVolume(v19) )
    {
      v14 = 2LL;
      goto LABEL_23;
    }
  }
LABEL_16:
  if ( !v11 )
    return -1073741637;
LABEL_17:
  Length = v11->Length;
  if ( v11->Length < 2u )
    return -1073741637;
  v21 = *v12;
  if ( *v12 )
  {
    if ( v21 != 92 )
      return -1073741275;
    v21 = 92;
    if ( v11->Buffer[((unsigned __int64)Length >> 1) - 1] == 92 )
      v21 = *++v12;
  }
  v26 = Length + 2 * v13;
  if ( v21 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v12[v27] != v6 );
    v26 += 2 * v27;
  }
  v28 = v26 + 2;
  if ( v28 > 0xFFFE )
    return -2147483643;
  if ( v28 > UnicodeString->MaximumLength )
  {
    RtlFreeAnsiString(UnicodeString);
    UnicodeString->MaximumLength = v28;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v28);
    v6 = 0;
    UnicodeString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741670;
  }
  UnicodeString->Length = v6;
  if ( !v13 || (result = RtlUnicodeStringCchCopyN(UnicodeString, SourceString, v13), result >= 0) )
  {
    result = RtlAppendUnicodeStringToString(UnicodeString, v11);
    if ( result >= 0 )
    {
      if ( *v12 )
        return RtlAppendUnicodeToString(UnicodeString, v12);
    }
  }
  return result;
}
