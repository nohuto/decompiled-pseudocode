/*
 * XREFs of CmpTraceSecurityChanging @ 0x1405B9380
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1401B601C (RtlLengthSecurityDescriptorStrict.c)
 *     RtlFindUnicodeSubstring @ 0x1405B9440 (RtlFindUnicodeSubstring.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpTraceSecurityChanging(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  PUNICODE_STRING v9; // rdi
  unsigned int v10; // ebx
  unsigned int v12; // eax
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // r9
  __int64 v15; // r10
  unsigned __int16 v16; // r11
  int Length; // ecx
  PUNICODE_STRING FullString[2]; // [rsp+30h] [rbp-B1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-A1h] BYREF
  _DWORD *v20; // [rsp+60h] [rbp-81h]
  __int64 v21; // [rsp+68h] [rbp-79h]
  wchar_t *Buffer; // [rsp+70h] [rbp-71h]
  _DWORD v23[2]; // [rsp+78h] [rbp-69h] BYREF
  _DWORD *v24; // [rsp+80h] [rbp-61h]
  __int64 v25; // [rsp+88h] [rbp-59h]
  __int64 v26; // [rsp+90h] [rbp-51h]
  _DWORD v27[2]; // [rsp+98h] [rbp-49h] BYREF
  PUNICODE_STRING *v28; // [rsp+A0h] [rbp-41h]
  __int64 v29; // [rsp+A8h] [rbp-39h]
  _DWORD *v30; // [rsp+B0h] [rbp-31h]
  __int64 v31; // [rsp+B8h] [rbp-29h]
  __int64 v32; // [rsp+C0h] [rbp-21h]
  _DWORD v33[2]; // [rsp+C8h] [rbp-19h] BYREF
  _DWORD *v34; // [rsp+D0h] [rbp-11h]
  __int64 v35; // [rsp+D8h] [rbp-9h]
  __int64 v36; // [rsp+E0h] [rbp-1h]
  _DWORD v37[2]; // [rsp+E8h] [rbp+7h] BYREF

  FullString[0] = 0LL;
  v8 = CmpConstructNameWithStatus(a1, FullString);
  v9 = FullString[0];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( RtlFindUnicodeSubstring(FullString[0], &CmMpsSvcKeySubstring, 1u) )
    {
      RtlLengthSecurityDescriptorStrict();
      v12 = RtlLengthSecurityDescriptorStrict();
      v13 = v12;
      if ( v12 > 0xFFFF )
        v13 = -1;
      RtlLengthSecurityDescriptorStrict();
      if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 2uLL) )
      {
        LODWORD(FullString[0]) = a3;
        Length = v9->Length;
        Buffer = v9->Buffer;
        v24 = v27;
        v27[0] = v16;
        v28 = FullString;
        v30 = v33;
        v33[0] = v13;
        v34 = v37;
        v37[0] = v14;
        v20 = v23;
        v21 = v15;
        v23[0] = Length;
        v23[1] = 0;
        v25 = v15;
        v26 = a2;
        v27[1] = 0;
        v29 = 4LL;
        v31 = v15;
        v32 = a4;
        v33[1] = 0;
        v35 = v15;
        v36 = a5;
        v37[1] = 0;
        TlgWrite(&stru_140400AA0, &unk_14036CE6B, 0LL, 0LL, 0xBu, &pData);
      }
    }
    v10 = 0;
  }
  if ( v9 )
    CmpFreeTransientPoolWithTag(v9, 0x624E4D43u);
  return v10;
}
