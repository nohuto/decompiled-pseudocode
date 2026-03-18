/*
 * XREFs of EtwTimLogProhibitChildProcessCreation @ 0x1406F876C
 * Callers:
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x140132A38 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x140132A70 (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x1406846FC (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogProhibitChildProcessCreation(int a1, __int64 a2, UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  unsigned __int16 *v5; // r14
  char v8; // r12
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // r15
  int v11; // eax
  const wchar_t *v12; // rcx
  int v13; // eax
  __int16 v14; // bx
  int v15; // eax
  int v16; // eax
  ULONGLONG v17; // r10
  int v18; // r8d
  unsigned int v19; // r9d
  unsigned __int16 v20; // ax
  ULONGLONG v21; // r11
  ULONG v22; // r8d
  __int16 v23; // ax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int16 v26; // ax
  ULONG v27; // r8d
  __int16 v28; // ax
  int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // rcx
  ULONG v32; // r9d
  bool v33; // zf
  const EVENT_DESCRIPTOR *v34; // rdx
  wchar_t *v35; // rbx
  int v36; // r9d
  __int64 v37; // r11
  _WORD v38[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v39; // [rsp+3Ch] [rbp-CCh] BYREF
  int v40; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v41; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v42; // [rsp+48h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v47; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v48; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  _DWORD *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]
  __int64 v54; // [rsp+D8h] [rbp-30h]
  _DWORD v55[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  wchar_t *v58; // [rsp+F8h] [rbp-10h]
  _DWORD v59[2]; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  _DWORD *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  wchar_t *v64; // [rsp+128h] [rbp+20h]
  _DWORD v65[2]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]
  wchar_t *v68; // [rsp+148h] [rbp+40h]
  _DWORD v69[2]; // [rsp+150h] [rbp+48h] BYREF
  EVENT_DATA_DESCRIPTOR v70; // [rsp+158h] [rbp+50h] BYREF
  _DWORD *v71; // [rsp+178h] [rbp+70h]
  __int64 v72; // [rsp+180h] [rbp+78h]
  __int64 v73; // [rsp+188h] [rbp+80h]
  _DWORD v74[2]; // [rsp+190h] [rbp+88h] BYREF
  _DWORD *v75; // [rsp+198h] [rbp+90h]
  __int64 v76; // [rsp+1A0h] [rbp+98h]
  wchar_t *v77; // [rsp+1A8h] [rbp+A0h]
  _DWORD v78[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  _DWORD *v79; // [rsp+1B8h] [rbp+B0h]
  __int64 v80; // [rsp+1C0h] [rbp+B8h]
  wchar_t *v81; // [rsp+1C8h] [rbp+C0h]
  _DWORD v82[2]; // [rsp+1D0h] [rbp+C8h] BYREF
  _DWORD *v83; // [rsp+1D8h] [rbp+D0h]
  __int64 v84; // [rsp+1E0h] [rbp+D8h]
  wchar_t *v85; // [rsp+1E8h] [rbp+E0h]
  _DWORD v86[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF
  const wchar_t *v88; // [rsp+208h] [rbp+100h]
  int v89; // [rsp+210h] [rbp+108h]
  int v90; // [rsp+214h] [rbp+10Ch]
  __int16 *v91; // [rsp+218h] [rbp+110h]
  __int64 v92; // [rsp+220h] [rbp+118h]
  const wchar_t *v93; // [rsp+228h] [rbp+120h]
  int v94; // [rsp+230h] [rbp+128h]
  int v95; // [rsp+234h] [rbp+12Ch]
  __int64 v96[24]; // [rsp+238h] [rbp+130h] BYREF

  LODWORD(v42) = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  *(_QWORD *)&v47.Length = 0LL;
  v47.Buffer = 0LL;
  *(_QWORD *)&v48.Length = 0LL;
  v48.Buffer = 0LL;
  v8 = 1;
  if ( *(_QWORD *)(a2 + 1128) )
    v5 = *(unsigned __int16 **)(a2 + 1128);
  EtwpQueryProcessCommandLine(a2, (__int64)&DestinationString);
  Length = DestinationString.Length;
  if ( !DestinationString.Length )
  {
    RtlInitUnicodeString(&DestinationString, L"Unknown");
    Length = DestinationString.Length;
    v8 = 0;
  }
  if ( !a3 || !a3->Length )
  {
    RtlInitUnicodeString(&v47, L"Unknown");
    a3 = &v47;
  }
  if ( !a4 || !a4->Length )
  {
    RtlInitUnicodeString(&v48, L"Unknown");
    a4 = &v48;
  }
  Buffer = DestinationString.Buffer;
  if ( (_DWORD)v42 == 2 && stru_140426618.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426618, 0x200000000001uLL) )
  {
    v72 = v37;
    v71 = v74;
    v73 = *((_QWORD *)v5 + 1);
    v74[0] = *v5;
    v75 = v78;
    v78[0] = Length;
    v79 = v82;
    v81 = a3->Buffer;
    v82[0] = a3->Length;
    v83 = v86;
    v85 = a4->Buffer;
    v86[0] = a4->Length;
    v74[1] = v36;
    v76 = v37;
    v77 = Buffer;
    v78[1] = v36;
    v80 = v37;
    v82[1] = v36;
    v84 = v37;
    v86[1] = v36;
    TlgWrite(&stru_140426618, &unk_140394561, 0LL, 0LL, 0xAu, &v70);
  }
  if ( v5 && *v5 )
  {
    v38[0] = *v5 >> 1;
    UserData.Ptr = (ULONGLONG)v38;
    *(_QWORD *)&UserData.Size = 2LL;
    v11 = *v5;
    v12 = (const wchar_t *)*((_QWORD *)v5 + 1);
  }
  else
  {
    v38[0] = 6;
    UserData.Ptr = (ULONGLONG)v38;
    v12 = L"(null)";
    v11 = 12;
    *(_QWORD *)&UserData.Size = 2LL;
  }
  v89 = v11;
  v91 = &v39;
  v88 = v12;
  v90 = 0;
  v92 = 2LL;
  if ( Length )
  {
    v13 = Length;
    v14 = Length >> 1;
    v93 = Buffer;
  }
  else
  {
    v93 = L"(null)";
    v13 = 12;
    v14 = 6;
  }
  v95 = 0;
  v39 = v14;
  v94 = v13;
  v15 = EtwpTiFillProcessIdentity(v96, a2, &v45);
  v16 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v15 + 4)), (__int64)KeGetCurrentThread());
  v19 = v16 + v18;
  if ( a3 && (v20 = a3->Length) != 0 )
  {
    v21 = (ULONGLONG)a3->Buffer;
    v22 = v20;
    v23 = v20 >> 1;
  }
  else
  {
    v22 = 12;
    v21 = v17;
    v23 = 6;
  }
  LOWORD(v40) = v23;
  v24 = 16LL * v19;
  v25 = 2LL * (v19 + 1);
  *(ULONGLONG *)((char *)&UserData.Ptr + v24) = (ULONGLONG)&v40;
  *(_QWORD *)((char *)&UserData.Size + v24) = 2LL;
  *(&UserData.Ptr + v25) = v21;
  *(&UserData.Size + 2 * v25) = v22;
  *(&UserData.Reserved + 2 * v25) = 0;
  if ( a4 && (v26 = a4->Length) != 0 )
  {
    v17 = (ULONGLONG)a4->Buffer;
    v27 = v26;
    v28 = v26 >> 1;
  }
  else
  {
    v28 = 6;
    v27 = 12;
  }
  v29 = v42;
  v41 = v28;
  v30 = 2LL * (v19 + 2);
  v31 = 2LL * (v19 + 3);
  v32 = v19 + 4;
  v33 = (_DWORD)v42 == 1;
  *(&UserData.Ptr + v30) = (ULONGLONG)&v41;
  v34 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_CHILD_PROCESS_CREATION;
  *((_QWORD *)&UserData.Size + v30) = 2LL;
  *(&UserData.Ptr + v31) = v17;
  if ( !v33 )
    v34 = &MITIGATION_ENFORCE_PROHIBIT_CHILD_PROCESS_CREATION;
  *(&UserData.Size + 2 * v31) = v27;
  *(&UserData.Reserved + 2 * v31) = 0;
  EtwWrite(EtwSecurityMitigationsRegHandle, v34, 0LL, v32, &UserData);
  v35 = DestinationString.Buffer;
  if ( stru_140426650.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426650, 0x400000000000uLL) )
  {
    v46 = v45;
    v50 = &v44;
    v52 = v55;
    v54 = *((_QWORD *)v5 + 1);
    v55[0] = *v5;
    v56 = v59;
    v59[0] = DestinationString.Length;
    v60 = &v46;
    v62 = v65;
    v64 = a3->Buffer;
    v65[0] = a3->Length;
    v66 = v69;
    v68 = a4->Buffer;
    v69[0] = a4->Length;
    LODWORD(v44) = v29;
    v51 = 4LL;
    v53 = 2LL;
    v55[1] = 0;
    v57 = 2LL;
    v58 = v35;
    v59[1] = 0;
    v61 = 8LL;
    v63 = 2LL;
    v65[1] = 0;
    v67 = 2LL;
    v69[1] = 0;
    TlgWrite(&stru_140426650, &unk_1403944C9, 0LL, 0LL, 0xCu, &pData);
  }
  if ( v8 )
    ExFreePoolWithTag(v35, 0);
}
