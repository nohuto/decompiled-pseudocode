/*
 * XREFs of EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408BE27C
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x140650600 (MiValidateSectionSigningPolicy.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x140132084 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x1401320BC (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x14066DA18 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogProhibitNonMicrosoftBinaries(int a1, __int64 a2, char a3, char a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  __int16 v10; // cx
  int v11; // eax
  int v12; // eax
  ULONGLONG v13; // r10
  unsigned __int16 *v14; // r14
  int v15; // r8d
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  ULONG v27; // r9d
  const EVENT_DESCRIPTOR *v28; // rdx
  PVOID v29; // rsi
  char v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v32[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v33[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  _DWORD *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  _DWORD v46[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  PVOID v49; // [rsp+D0h] [rbp-30h]
  _DWORD v50[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  _DWORD *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  _DWORD v56[2]; // [rsp+108h] [rbp+8h] BYREF
  char *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  char *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  const wchar_t *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  __int16 *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  const wchar_t *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  __int64 v68[24]; // [rsp+170h] [rbp+70h] BYREF
  char v69; // [rsp+290h] [rbp+190h] BYREF
  char v70; // [rsp+298h] [rbp+198h] BYREF

  v70 = a4;
  v69 = a3;
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  v36 = 0LL;
  P = 0LL;
  if ( *(_QWORD *)(a2 + 1128) )
    v5 = *(unsigned __int16 **)(a2 + 1128);
  v8 = *v5;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v8 )
  {
    v32[0] = v8 >> 1;
    UserData.Ptr = (ULONGLONG)v32;
    v9 = *v5;
    v62 = (const wchar_t *)*((_QWORD *)v5 + 1);
    v63 = v9;
  }
  else
  {
    v32[0] = 6;
    UserData.Ptr = (ULONGLONG)v32;
    v62 = L"(null)";
    v63 = 12LL;
  }
  EtwpQueryProcessCommandLine(a2, (__int64)&v36);
  v65 = 2LL;
  v64 = &v34;
  if ( (_WORD)v36 )
  {
    v66 = (const wchar_t *)P;
    v67 = (unsigned __int16)v36;
    v10 = (unsigned __int16)v36 >> 1;
  }
  else
  {
    v66 = L"(null)";
    v10 = 6;
    v67 = 12LL;
  }
  v34 = v10;
  v11 = EtwpTiFillProcessIdentity(v68, a2, &v38);
  v12 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v11 + 4)), (__int64)KeGetCurrentThread());
  v14 = a5;
  v16 = v12 + v15;
  v17 = 2LL * v16;
  v18 = v16 + 1;
  *(&UserData.Ptr + v17) = (ULONGLONG)&v69;
  *((_QWORD *)&UserData.Size + v17) = 1LL;
  v19 = v16 + 2;
  v20 = 2LL * v18;
  *(&UserData.Ptr + v20) = (ULONGLONG)&v70;
  *((_QWORD *)&UserData.Size + v20) = 1LL;
  if ( v14 && (v21 = *v14) != 0 )
  {
    v22 = v19 + 1;
    v33[0] = v21 >> 1;
    v23 = 2LL * v19;
    *(&UserData.Ptr + v23) = (ULONGLONG)v33;
    *((_QWORD *)&UserData.Size + v23) = 2LL;
    v24 = 2LL * (v19 + 1);
    *(&UserData.Ptr + v24) = *((_QWORD *)v14 + 1);
    *(&UserData.Size + 2 * v24) = v21;
    *(&UserData.Reserved + 2 * v24) = 0;
  }
  else
  {
    v33[0] = 6;
    v22 = v18 + 2;
    v25 = 2LL * v19;
    *(&UserData.Ptr + v25) = (ULONGLONG)v33;
    *((_QWORD *)&UserData.Size + v25) = 2LL;
    v26 = 2LL * v22;
    *(&UserData.Ptr + v26) = v13;
    *((_QWORD *)&UserData.Size + v26) = 12LL;
  }
  v27 = v22 + 1;
  v28 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_NON_MICROSOFT_BINARIES;
  if ( a1 != 1 )
    v28 = &MITIGATION_ENFORCE_PROHIBIT_NON_MICROSOFT_BINARIES;
  EtwWrite(EtwSecurityMitigationsRegHandle, v28, 0LL, v27, &UserData);
  v29 = P;
  if ( stru_140401308.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401308, 0x400000000000uLL) )
  {
    v39 = v38;
    v30 = v69;
    v31 = v70;
    v41 = &v35;
    v43 = v46;
    v45 = *((_QWORD *)v5 + 1);
    v46[0] = *v5;
    v47 = v50;
    v50[0] = (unsigned __int16)v36;
    v51 = &v39;
    v53 = v56;
    v55 = *((_QWORD *)v14 + 1);
    v56[0] = *v14;
    v57 = &v30;
    v59 = &v31;
    v35 = a1;
    v42 = 4LL;
    v44 = 2LL;
    v46[1] = 0;
    v48 = 2LL;
    v49 = v29;
    v50[1] = 0;
    v52 = 8LL;
    v54 = 2LL;
    v56[1] = 0;
    v58 = 1LL;
    v60 = 1LL;
    TlgWrite(&stru_140401308, &unk_140374BB6, 0LL, 0LL, 0xCu, &pData);
  }
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
}
