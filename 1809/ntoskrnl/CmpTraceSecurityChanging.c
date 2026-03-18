/*
 * XREFs of CmpTraceSecurityChanging @ 0x1405B8380
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1405B7C5C (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     RtlLengthSecurityDescriptorStrict @ 0x1401B5E94 (RtlLengthSecurityDescriptorStrict.c)
 *     RtlFindUnicodeSubstring @ 0x1405B8440 (RtlFindUnicodeSubstring.c)
 *     CmpConstructNameWithStatus @ 0x1405D73A0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpTraceSecurityChanging(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // r8
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v13; // eax
  unsigned __int16 v14; // bx
  unsigned __int16 v15; // r9
  __int64 v16; // r10
  unsigned __int16 v17; // r11
  int v18; // ecx
  _QWORD v19[2]; // [rsp+30h] [rbp-B1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-A1h] BYREF
  _DWORD *v21; // [rsp+60h] [rbp-81h]
  __int64 v22; // [rsp+68h] [rbp-79h]
  __int64 v23; // [rsp+70h] [rbp-71h]
  _DWORD v24[2]; // [rsp+78h] [rbp-69h] BYREF
  _DWORD *v25; // [rsp+80h] [rbp-61h]
  __int64 v26; // [rsp+88h] [rbp-59h]
  __int64 v27; // [rsp+90h] [rbp-51h]
  _DWORD v28[2]; // [rsp+98h] [rbp-49h] BYREF
  _QWORD *v29; // [rsp+A0h] [rbp-41h]
  __int64 v30; // [rsp+A8h] [rbp-39h]
  _DWORD *v31; // [rsp+B0h] [rbp-31h]
  __int64 v32; // [rsp+B8h] [rbp-29h]
  __int64 v33; // [rsp+C0h] [rbp-21h]
  _DWORD v34[2]; // [rsp+C8h] [rbp-19h] BYREF
  _DWORD *v35; // [rsp+D0h] [rbp-11h]
  __int64 v36; // [rsp+D8h] [rbp-9h]
  __int64 v37; // [rsp+E0h] [rbp-1h]
  _DWORD v38[2]; // [rsp+E8h] [rbp+7h] BYREF

  v19[0] = 0LL;
  v8 = CmpConstructNameWithStatus(a1, v19);
  v10 = (_QWORD *)v19[0];
  v11 = v8;
  if ( v8 >= 0 )
  {
    LOBYTE(v9) = 1;
    if ( RtlFindUnicodeSubstring(v19[0], &CmMpsSvcKeySubstring, v9) )
    {
      RtlLengthSecurityDescriptorStrict();
      v13 = RtlLengthSecurityDescriptorStrict();
      v14 = v13;
      if ( v13 > 0xFFFF )
        v14 = -1;
      RtlLengthSecurityDescriptorStrict();
      if ( stru_1403FFAA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403FFAA0, 2uLL) )
      {
        LODWORD(v19[0]) = a3;
        v18 = *(unsigned __int16 *)v10;
        v23 = v10[1];
        v25 = v28;
        v28[0] = v17;
        v29 = v19;
        v31 = v34;
        v34[0] = v14;
        v35 = v38;
        v38[0] = v15;
        v21 = v24;
        v22 = v16;
        v24[0] = v18;
        v24[1] = 0;
        v26 = v16;
        v27 = a2;
        v28[1] = 0;
        v30 = 4LL;
        v32 = v16;
        v33 = a4;
        v34[1] = 0;
        v36 = v16;
        v37 = a5;
        v38[1] = 0;
        TlgWrite(&stru_1403FFAA0, &unk_14036BDCB, 0LL, 0LL, 0xBu, &pData);
      }
    }
    v11 = 0;
  }
  if ( v10 )
    CmpFreeTransientPoolWithTag(v10, 0x624E4D43u);
  return v11;
}
