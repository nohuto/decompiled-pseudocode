/*
 * XREFs of EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408F95AC
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x140648C94 (MiValidateSectionSigningPolicy.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x140132A38 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x140132A70 (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x1406846FC (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogProhibitNonMicrosoftBinaries(int a1, __int64 a2, char a3, char a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  const wchar_t *v6; // rsi
  unsigned __int16 v9; // ax
  int v10; // eax
  const wchar_t *v11; // rcx
  int v12; // eax
  __int16 v13; // cx
  int v14; // eax
  int v15; // eax
  __int16 v16; // r10
  unsigned __int16 *v17; // r14
  int v18; // r9d
  unsigned int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  unsigned int v25; // r9d
  ULONG v26; // edx
  __int16 v27; // ax
  __int64 v28; // rax
  __int64 v29; // rcx
  ULONG v30; // r9d
  const EVENT_DESCRIPTOR *v31; // rdx
  PVOID v32; // rsi
  char v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v35[2]; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v37; // [rsp+3Ch] [rbp-C4h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  _DWORD *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  _DWORD v49[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  PVOID v52; // [rsp+D0h] [rbp-30h]
  _DWORD v53[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  _DWORD *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  __int64 v58; // [rsp+100h] [rbp+0h]
  _DWORD v59[2]; // [rsp+108h] [rbp+8h] BYREF
  char *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  char *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  const wchar_t *v65; // [rsp+140h] [rbp+40h]
  int v66; // [rsp+148h] [rbp+48h]
  int v67; // [rsp+14Ch] [rbp+4Ch]
  __int16 *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  const wchar_t *v70; // [rsp+160h] [rbp+60h]
  int v71; // [rsp+168h] [rbp+68h]
  int v72; // [rsp+16Ch] [rbp+6Ch]
  __int64 v73[24]; // [rsp+170h] [rbp+70h] BYREF
  char v74; // [rsp+290h] [rbp+190h] BYREF
  char v75; // [rsp+298h] [rbp+198h] BYREF

  v75 = a4;
  v74 = a3;
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  v39 = 0LL;
  P = 0LL;
  v6 = L"(null)";
  if ( *(_QWORD *)(a2 + 1128) )
    v5 = *(unsigned __int16 **)(a2 + 1128);
  v9 = *v5;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v9 )
  {
    v35[0] = v9 >> 1;
    UserData.Ptr = (ULONGLONG)v35;
    v10 = *v5;
    v11 = (const wchar_t *)*((_QWORD *)v5 + 1);
  }
  else
  {
    v35[0] = 6;
    UserData.Ptr = (ULONGLONG)v35;
    v11 = L"(null)";
    v10 = 12;
  }
  v65 = v11;
  v66 = v10;
  v67 = 0;
  EtwpQueryProcessCommandLine(a2, (__int64)&v39);
  v69 = 2LL;
  v68 = &v36;
  if ( (_WORD)v39 )
  {
    v70 = (const wchar_t *)P;
    v12 = (unsigned __int16)v39;
    v13 = (unsigned __int16)v39 >> 1;
  }
  else
  {
    v70 = L"(null)";
    v12 = 12;
    v13 = 6;
  }
  v36 = v13;
  v71 = v12;
  v72 = 0;
  v14 = EtwpTiFillProcessIdentity(v73, a2, &v41);
  v15 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v14 + 4)), (__int64)KeGetCurrentThread());
  v17 = a5;
  v19 = v15 + v18;
  v20 = 2LL * v19;
  v21 = v19 + 1;
  *(&UserData.Ptr + v20) = (ULONGLONG)&v74;
  *((_QWORD *)&UserData.Size + v20) = 1LL;
  v22 = v21 + 1;
  v23 = 16LL * v21;
  *(ULONGLONG *)((char *)&UserData.Ptr + v23) = (ULONGLONG)&v75;
  *(_QWORD *)((char *)&UserData.Size + v23) = 1LL;
  if ( v17 && (v24 = *v17) != 0 )
  {
    v6 = (const wchar_t *)*((_QWORD *)v17 + 1);
    v25 = v21 + 2;
    v26 = v24;
    v27 = v24 >> 1;
  }
  else
  {
    v25 = v21 + 2;
    v26 = 12;
    v27 = v16;
  }
  v37 = v27;
  v28 = 2LL * v22;
  v29 = 2LL * v25;
  v30 = v25 + 1;
  *(&UserData.Ptr + v28) = (ULONGLONG)&v37;
  *((_QWORD *)&UserData.Size + v28) = 2LL;
  *(&UserData.Ptr + v29) = (ULONGLONG)v6;
  *(&UserData.Size + 2 * v29) = v26;
  v31 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_NON_MICROSOFT_BINARIES;
  if ( a1 != 1 )
    v31 = &MITIGATION_ENFORCE_PROHIBIT_NON_MICROSOFT_BINARIES;
  *(&UserData.Reserved + 2 * v29) = 0;
  EtwWrite(EtwSecurityMitigationsRegHandle, v31, 0LL, v30, &UserData);
  v32 = P;
  if ( stru_140426650.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426650, 0x400000000000uLL) )
  {
    v42 = v41;
    v33 = v74;
    v34 = v75;
    v44 = &v38;
    v46 = v49;
    v48 = *((_QWORD *)v5 + 1);
    v49[0] = *v5;
    v50 = v53;
    v53[0] = (unsigned __int16)v39;
    v54 = &v42;
    v56 = v59;
    v58 = *((_QWORD *)v17 + 1);
    v59[0] = *v17;
    v60 = &v33;
    v62 = &v34;
    v38 = a1;
    v45 = 4LL;
    v47 = 2LL;
    v49[1] = 0;
    v51 = 2LL;
    v52 = v32;
    v53[1] = 0;
    v55 = 8LL;
    v57 = 2LL;
    v59[1] = 0;
    v61 = 1LL;
    v63 = 1LL;
    TlgWrite(&stru_140426650, &unk_1403945D1, 0LL, 0LL, 0xCu, &pData);
  }
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
}
