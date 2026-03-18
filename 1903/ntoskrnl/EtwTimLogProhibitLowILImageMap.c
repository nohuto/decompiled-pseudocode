/*
 * XREFs of EtwTimLogProhibitLowILImageMap @ 0x1408F98CC
 * Callers:
 *     MiAllowImageMap @ 0x1405EB0B4 (MiAllowImageMap.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x140132228 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x140132260 (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x14069118C (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogProhibitLowILImageMap(int a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rdi
  const wchar_t *v4; // r15
  ULONG v8; // r14d
  unsigned __int16 v9; // ax
  int v10; // eax
  const wchar_t *v11; // rcx
  int v12; // eax
  __int16 v13; // cx
  int v14; // eax
  int v15; // eax
  __int16 v16; // r10
  int v17; // r8d
  unsigned int v18; // edx
  unsigned __int16 v19; // ax
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rcx
  ULONG v23; // r9d
  const EVENT_DESCRIPTOR *v24; // rdx
  PVOID v25; // r14
  _WORD v26[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v33; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  _DWORD *v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h]
  __int64 v39; // [rsp+A8h] [rbp-60h]
  _DWORD v40[2]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  PVOID v43; // [rsp+C8h] [rbp-40h]
  _DWORD v44[2]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  _DWORD *v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  __int64 v49; // [rsp+F8h] [rbp-10h]
  _DWORD v50[2]; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  const wchar_t *v52; // [rsp+118h] [rbp+10h]
  int v53; // [rsp+120h] [rbp+18h]
  int v54; // [rsp+124h] [rbp+1Ch]
  int *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  const wchar_t *v57; // [rsp+138h] [rbp+30h]
  int v58; // [rsp+140h] [rbp+38h]
  int v59; // [rsp+144h] [rbp+3Ch]
  _QWORD v60[20]; // [rsp+148h] [rbp+40h] BYREF

  v3 = (unsigned __int16 *)&EmptyUnicodeString;
  v30 = 0LL;
  v4 = L"(null)";
  P = 0LL;
  if ( *(_QWORD *)(a2 + 1128) )
    v3 = *(unsigned __int16 **)(a2 + 1128);
  v8 = 12;
  v9 = *v3;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v9 )
  {
    v26[0] = v9 >> 1;
    UserData.Ptr = (ULONGLONG)v26;
    v10 = *v3;
    v11 = (const wchar_t *)*((_QWORD *)v3 + 1);
  }
  else
  {
    v26[0] = 6;
    UserData.Ptr = (ULONGLONG)v26;
    v11 = L"(null)";
    v10 = 12;
  }
  v52 = v11;
  v54 = 0;
  v53 = v10;
  EtwpQueryProcessCommandLine(a2, (__int64)&v30);
  v56 = 2LL;
  v55 = &v27;
  if ( (_WORD)v30 )
  {
    v57 = (const wchar_t *)P;
    v12 = (unsigned __int16)v30;
    v13 = (unsigned __int16)v30 >> 1;
  }
  else
  {
    v57 = L"(null)";
    v12 = 12;
    v13 = 6;
  }
  LOWORD(v27) = v13;
  v59 = 0;
  v58 = v12;
  v14 = EtwpTiFillProcessIdentity(v60, a2, &v32);
  v15 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v14 + 4)), (__int64)KeGetCurrentThread());
  v18 = v15 + v17;
  if ( a3 && (v19 = *a3) != 0 )
  {
    v4 = (const wchar_t *)*((_QWORD *)a3 + 1);
    v8 = v19;
    v20 = v19 >> 1;
  }
  else
  {
    v20 = v16;
  }
  v28 = v20;
  v21 = 2LL * v18;
  v22 = 2LL * (v18 + 1);
  v23 = v18 + 2;
  *(&UserData.Ptr + v21) = (ULONGLONG)&v28;
  v24 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_LOWIL_IMAGE_MAP;
  *((_QWORD *)&UserData.Size + v21) = 2LL;
  *(&UserData.Ptr + v22) = (ULONGLONG)v4;
  if ( a1 != 1 )
    v24 = &MITIGATION_ENFORCE_PROHIBIT_LOWIL_IMAGE_MAP;
  *(&UserData.Size + 2 * v22) = v8;
  *(&UserData.Reserved + 2 * v22) = 0;
  EtwWrite(EtwSecurityMitigationsRegHandle, v24, 0LL, v23, &UserData);
  v25 = P;
  if ( stru_140426618.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426618, 0x400000000000uLL) )
  {
    v33 = v32;
    v35 = &v29;
    v37 = v40;
    v39 = *((_QWORD *)v3 + 1);
    v40[0] = *v3;
    v41 = v44;
    v44[0] = (unsigned __int16)v30;
    v45 = &v33;
    v47 = v50;
    v49 = *((_QWORD *)a3 + 1);
    v50[0] = *a3;
    v29 = a1;
    v36 = 4LL;
    v38 = 2LL;
    v40[1] = 0;
    v42 = 2LL;
    v43 = v25;
    v44[1] = 0;
    v46 = 8LL;
    v48 = 2LL;
    v50[1] = 0;
    TlgWrite(&stru_140426618, &unk_1403943A9, 0LL, 0LL, 0xAu, &pData);
  }
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
}
