/*
 * XREFs of SmpBuildSubSystemLists @ 0x140008CB0
 * Callers:
 *     <none>
 * Callees:
 *     SmpFindRegistryValueEx @ 0x1400095D4 (SmpFindRegistryValueEx.c)
 *     SmpDeallocSavedRegistryEntry @ 0x1400097B8 (SmpDeallocSavedRegistryEntry.c)
 */

__int64 __fastcall SmpBuildSubSystemLists(
        const wchar_t *a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  bool v7; // r12
  UNICODE_STRING *RegistryValue; // rax
  UNICODE_STRING *v9; // rbx
  __int64 v10; // rax
  _QWORD *Buffer; // rcx
  USHORT Length; // bp
  UNICODE_STRING **v13; // rax
  const WCHAR *v14; // rcx
  UNICODE_STRING **v16; // rax
  WCHAR v17; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-38h] BYREF

  v7 = _wcsicmp(a1, L"Required") == 0;
  if ( *a3 )
  {
    do
    {
      RtlInitUnicodeString(&DestinationString, a3);
      RegistryValue = (UNICODE_STRING *)SmpFindRegistryValueEx(a6 + 2, &DestinationString);
      v9 = RegistryValue;
      if ( RegistryValue )
      {
        v10 = *(_QWORD *)&RegistryValue->Length;
        if ( *(UNICODE_STRING **)(v10 + 8) != v9 || (Buffer = v9->Buffer, (UNICODE_STRING *)*Buffer != v9) )
LABEL_18:
          __fastfail(3u);
        *Buffer = v10;
        *(_QWORD *)(v10 + 8) = Buffer;
        Length = v9[1].Length;
        if ( !v9[2].Length || (RtlInitUnicodeString(&String2, L"Posix"), RtlEqualUnicodeString(v9 + 1, &String2, 0)) )
        {
          SmpDeallocSavedRegistryEntry(v9);
        }
        else if ( v7 )
        {
          v13 = (UNICODE_STRING **)qword_140025B48;
          if ( *(__int64 **)qword_140025B48 != &SmpSubSystemsRequired )
            goto LABEL_18;
          *(_QWORD *)&v9->Length = &SmpSubSystemsRequired;
          v9->Buffer = (PWSTR)v13;
          *v13 = v9;
          qword_140025B48 = (__int64)v9;
          *a6 += 2;
          a6[1] += v9[2].Length + v9[1].Length + 4;
        }
        else
        {
          v16 = (UNICODE_STRING **)qword_140025B58;
          if ( *(__int64 **)qword_140025B58 != &SmpSubSystemsToDefer )
            goto LABEL_18;
          *(_QWORD *)&v9->Length = &SmpSubSystemsToDefer;
          v9->Buffer = (PWSTR)v16;
          *v16 = v9;
          qword_140025B58 = (__int64)v9;
        }
        v14 = (const WCHAR *)((char *)a3 + Length);
      }
      else
      {
        do
        {
          v17 = *a3;
          v14 = a3++;
        }
        while ( v17 );
      }
      a3 = v14 + 1;
    }
    while ( v14[1] );
  }
  return 0LL;
}
