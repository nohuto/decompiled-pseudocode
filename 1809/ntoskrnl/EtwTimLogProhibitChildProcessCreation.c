/*
 * XREFs of EtwTimLogProhibitChildProcessCreation @ 0x1406D6E5C
 * Callers:
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x140132084 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x1401320BC (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x14066DA18 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogProhibitChildProcessCreation(int a1, __int64 a2, UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  unsigned __int16 *v5; // r14
  char v8; // r12
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // r15
  const wchar_t *v11; // rax
  unsigned int v12; // eax
  __int16 v13; // bx
  int v14; // eax
  int v15; // eax
  __int16 v16; // r9
  int v17; // r10d
  int v18; // r8d
  unsigned int v19; // r8d
  unsigned __int16 v20; // dx
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // ecx
  unsigned __int16 v25; // dx
  unsigned int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rcx
  ULONG v29; // r9d
  const EVENT_DESCRIPTOR *v30; // rdx
  wchar_t *v31; // rbx
  int v32; // r9d
  __int64 v33; // r11
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _WORD v38[2]; // [rsp+38h] [rbp-D0h] BYREF
  _WORD v39[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v40; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v41; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v42; // [rsp+48h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v47; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v48; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v50; // [rsp+A8h] [rbp-60h]
  __int64 v51; // [rsp+B0h] [rbp-58h]
  __int16 *v52; // [rsp+B8h] [rbp-50h]
  __int64 v53; // [rsp+C0h] [rbp-48h]
  const wchar_t *v54; // [rsp+C8h] [rbp-40h]
  __int64 v55; // [rsp+D0h] [rbp-38h]
  __int64 v56[24]; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v58; // [rsp+1B8h] [rbp+B0h]
  __int64 v59; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v60; // [rsp+1C8h] [rbp+C0h]
  __int64 v61; // [rsp+1D0h] [rbp+C8h]
  __int64 v62; // [rsp+1D8h] [rbp+D0h]
  _DWORD v63[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  _DWORD *v64; // [rsp+1E8h] [rbp+E0h]
  __int64 v65; // [rsp+1F0h] [rbp+E8h]
  wchar_t *v66; // [rsp+1F8h] [rbp+F0h]
  _DWORD v67[2]; // [rsp+200h] [rbp+F8h] BYREF
  unsigned __int64 *v68; // [rsp+208h] [rbp+100h]
  __int64 v69; // [rsp+210h] [rbp+108h]
  _DWORD *v70; // [rsp+218h] [rbp+110h]
  __int64 v71; // [rsp+220h] [rbp+118h]
  wchar_t *v72; // [rsp+228h] [rbp+120h]
  _DWORD v73[2]; // [rsp+230h] [rbp+128h] BYREF
  _DWORD *v74; // [rsp+238h] [rbp+130h]
  __int64 v75; // [rsp+240h] [rbp+138h]
  wchar_t *v76; // [rsp+248h] [rbp+140h]
  _DWORD v77[2]; // [rsp+250h] [rbp+148h] BYREF
  EVENT_DATA_DESCRIPTOR v78; // [rsp+258h] [rbp+150h] BYREF
  _DWORD *v79; // [rsp+278h] [rbp+170h]
  __int64 v80; // [rsp+280h] [rbp+178h]
  __int64 v81; // [rsp+288h] [rbp+180h]
  _DWORD v82[2]; // [rsp+290h] [rbp+188h] BYREF
  _DWORD *v83; // [rsp+298h] [rbp+190h]
  __int64 v84; // [rsp+2A0h] [rbp+198h]
  wchar_t *v85; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v86[2]; // [rsp+2B0h] [rbp+1A8h] BYREF
  _DWORD *v87; // [rsp+2B8h] [rbp+1B0h]
  __int64 v88; // [rsp+2C0h] [rbp+1B8h]
  wchar_t *v89; // [rsp+2C8h] [rbp+1C0h]
  _DWORD v90[2]; // [rsp+2D0h] [rbp+1C8h] BYREF
  _DWORD *v91; // [rsp+2D8h] [rbp+1D0h]
  __int64 v92; // [rsp+2E0h] [rbp+1D8h]
  wchar_t *v93; // [rsp+2E8h] [rbp+1E0h]
  _DWORD v94[2]; // [rsp+2F0h] [rbp+1E8h] BYREF

  LODWORD(v42) = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  if ( *(_QWORD *)(a2 + 1128) )
    v5 = *(unsigned __int16 **)(a2 + 1128);
  v8 = 1;
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
  if ( (_DWORD)v42 == 2 && stru_1404012D0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1404012D0, 0x200000000001uLL) )
  {
    v80 = v33;
    v79 = v82;
    v81 = *((_QWORD *)v5 + 1);
    v82[0] = *v5;
    v83 = v86;
    v86[0] = Length;
    v87 = v90;
    v89 = a3->Buffer;
    v90[0] = a3->Length;
    v91 = v94;
    v93 = a4->Buffer;
    v94[0] = a4->Length;
    v82[1] = v32;
    v84 = v33;
    v85 = Buffer;
    v86[1] = v32;
    v88 = v33;
    v90[1] = v32;
    v92 = v33;
    v94[1] = v32;
    TlgWrite(&stru_1404012D0, &unk_140374A1E, 0LL, 0LL, 0xAu, &v78);
  }
  if ( v5 && *v5 )
  {
    v38[0] = *v5 >> 1;
    UserData.Ptr = (ULONGLONG)v38;
    *(_QWORD *)&UserData.Size = 2LL;
    v11 = (const wchar_t *)*((_QWORD *)v5 + 1);
    v51 = *v5;
    v50 = v11;
  }
  else
  {
    v38[0] = 6;
    UserData.Ptr = (ULONGLONG)v38;
    *(_QWORD *)&UserData.Size = 2LL;
    v50 = L"(null)";
    v51 = 12LL;
  }
  v53 = 2LL;
  v52 = &v41;
  if ( Length )
  {
    v12 = Length;
    v54 = Buffer;
    v13 = Length >> 1;
    v55 = v12;
  }
  else
  {
    v54 = L"(null)";
    v55 = 12LL;
    v13 = 6;
  }
  v41 = v13;
  v14 = EtwpTiFillProcessIdentity(v56, a2, &v45);
  v15 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v14 + 4)), (__int64)KeGetCurrentThread());
  v19 = v15 + v18;
  if ( a3 && (v20 = a3->Length) != 0 )
  {
    v39[0] = v20 >> 1;
    v21 = 2LL * v19;
    v22 = v19 + 1;
    *(&UserData.Ptr + v21) = (ULONGLONG)v39;
    *((_QWORD *)&UserData.Size + v21) = 2LL;
    v23 = 2LL * v22;
    *(&UserData.Ptr + v23) = (ULONGLONG)a3->Buffer;
    *(&UserData.Size + 2 * v23) = v20;
    *(&UserData.Reserved + 2 * v23) = 0;
  }
  else
  {
    v34 = 2LL * v19;
    v39[0] = v16;
    v22 = v19 + 1;
    *(&UserData.Ptr + v34) = (ULONGLONG)v39;
    *((_QWORD *)&UserData.Size + v34) = 2LL;
    v35 = 2LL * v22;
    *(&UserData.Ptr + v35) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v35) = 12LL;
  }
  v24 = v22 + 1;
  if ( a4 && (v25 = a4->Length) != 0 )
  {
    v26 = v22 + 2;
    LOWORD(v40) = v25 >> 1;
    v27 = 2LL * v24;
    v28 = 2LL * (v22 + 2);
    *(&UserData.Ptr + v27) = (ULONGLONG)&v40;
    *((_QWORD *)&UserData.Size + v27) = 2LL;
    *(&UserData.Ptr + v28) = (ULONGLONG)a4->Buffer;
    *(&UserData.Size + 2 * v28) = v25;
    *(&UserData.Reserved + 2 * v28) = 0;
  }
  else
  {
    v36 = 2LL * v24;
    LOWORD(v40) = v16;
    v26 = v22 + 2;
    *(&UserData.Ptr + v36) = (ULONGLONG)&v40;
    *((_QWORD *)&UserData.Size + v36) = 2LL;
    v37 = 2LL * (v22 + 2);
    *(&UserData.Ptr + v37) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v37) = 12LL;
  }
  v29 = v26 + 1;
  v30 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_CHILD_PROCESS_CREATION;
  if ( v17 != 1 )
    v30 = &MITIGATION_ENFORCE_PROHIBIT_CHILD_PROCESS_CREATION;
  EtwWrite(EtwSecurityMitigationsRegHandle, v30, 0LL, v29, &UserData);
  v31 = DestinationString.Buffer;
  if ( stru_140401308.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401308, 0x400000000000uLL) )
  {
    LODWORD(v44) = v42;
    v46 = v45;
    v58 = &v44;
    v60 = v63;
    v62 = *((_QWORD *)v5 + 1);
    v63[0] = *v5;
    v64 = v67;
    v67[0] = DestinationString.Length;
    v68 = &v46;
    v70 = v73;
    v72 = a3->Buffer;
    v73[0] = a3->Length;
    v74 = v77;
    v76 = a4->Buffer;
    v77[0] = a4->Length;
    v59 = 4LL;
    v61 = 2LL;
    v63[1] = 0;
    v65 = 2LL;
    v66 = v31;
    v67[1] = 0;
    v69 = 8LL;
    v71 = 2LL;
    v73[1] = 0;
    v75 = 2LL;
    v77[1] = 0;
    TlgWrite(&stru_140401308, &unk_140374986, 0LL, 0LL, 0xCu, &pData);
  }
  if ( v8 )
    ExFreePoolWithTag(v31, 0);
}
