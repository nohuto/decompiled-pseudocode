/*
 * XREFs of CmpTraceSecurityChanging @ 0x140640940
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7F30 (RtlLengthSecurityDescriptor.c)
 *     CmpConstructNameWithStatus @ 0x140668850 (CmpConstructNameWithStatus.c)
 *     RtlFindUnicodeSubstring @ 0x14066A080 (RtlFindUnicodeSubstring.c)
 */

__int64 __fastcall CmpTraceSecurityChanging(
        __int64 a1,
        void *a2,
        int a3,
        void *a4,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int v8; // eax
  __int64 v9; // r8
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  ULONG v13; // ebx
  ULONG v14; // esi
  unsigned __int16 v15; // r9
  __int64 v16; // r10
  int v17; // ecx
  _QWORD v18[2]; // [rsp+30h] [rbp-B1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-A1h] BYREF
  _DWORD *v20; // [rsp+60h] [rbp-81h]
  __int64 v21; // [rsp+68h] [rbp-79h]
  __int64 v22; // [rsp+70h] [rbp-71h]
  _DWORD v23[2]; // [rsp+78h] [rbp-69h] BYREF
  _DWORD *v24; // [rsp+80h] [rbp-61h]
  __int64 v25; // [rsp+88h] [rbp-59h]
  void *v26; // [rsp+90h] [rbp-51h]
  _DWORD v27[2]; // [rsp+98h] [rbp-49h] BYREF
  _QWORD *v28; // [rsp+A0h] [rbp-41h]
  __int64 v29; // [rsp+A8h] [rbp-39h]
  _DWORD *v30; // [rsp+B0h] [rbp-31h]
  __int64 v31; // [rsp+B8h] [rbp-29h]
  void *v32; // [rsp+C0h] [rbp-21h]
  _DWORD v33[2]; // [rsp+C8h] [rbp-19h] BYREF
  _DWORD *v34; // [rsp+D0h] [rbp-11h]
  __int64 v35; // [rsp+D8h] [rbp-9h]
  PSECURITY_DESCRIPTOR v36; // [rsp+E0h] [rbp-1h]
  _DWORD v37[2]; // [rsp+E8h] [rbp+7h] BYREF

  v18[0] = 0LL;
  v8 = CmpConstructNameWithStatus(a1, v18);
  v10 = (_QWORD *)v18[0];
  v11 = v8;
  if ( v8 >= 0 )
  {
    LOBYTE(v9) = 1;
    if ( RtlFindUnicodeSubstring(v18[0], &CmMpsSvcKeySubstring, v9) )
    {
      v13 = RtlLengthSecurityDescriptor(a2);
      if ( v13 > 0xFFFF )
        LOWORD(v13) = -1;
      v14 = RtlLengthSecurityDescriptor(a4);
      if ( v14 > 0xFFFF )
        LOWORD(v14) = -1;
      RtlLengthSecurityDescriptor(SecurityDescriptor);
      if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 2uLL) )
      {
        LODWORD(v18[0]) = a3;
        v17 = *(unsigned __int16 *)v10;
        v22 = v10[1];
        v24 = v27;
        v27[0] = (unsigned __int16)v13;
        v28 = v18;
        v30 = v33;
        v33[0] = (unsigned __int16)v14;
        v34 = v37;
        v20 = v23;
        v37[0] = v15;
        v21 = v16;
        v23[0] = v17;
        v23[1] = 0;
        v25 = v16;
        v26 = a2;
        v27[1] = 0;
        v29 = 4LL;
        v31 = v16;
        v32 = a4;
        v33[1] = 0;
        v35 = v16;
        v36 = SecurityDescriptor;
        v37[1] = 0;
        TlgWrite(&stru_140425BC0, &unk_14038BB92, 0LL, 0LL, 0xBu, &pData);
      }
    }
    v11 = 0;
  }
  if ( v10 )
    CmpFreeTransientPoolWithTag(v10, 0x624E4D43u);
  return v11;
}
