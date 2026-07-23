/*
 * XREFs of EtwTimLogProhibitLowILImageMap @ 0x1408BDF40
 * Callers:
 *     MiAllowImageMap @ 0x1405F58B8 (MiAllowImageMap.c)
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

void __fastcall EtwTimLogProhibitLowILImageMap(int a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rsi
  unsigned __int16 v7; // ax
  unsigned int v8; // ecx
  __int16 v9; // cx
  int v10; // eax
  int v11; // eax
  __int16 v12; // r9
  ULONGLONG v13; // r10
  int v14; // r8d
  unsigned int v15; // r8d
  unsigned __int16 v16; // dx
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  ULONG v22; // r9d
  const EVENT_DESCRIPTOR *v23; // rdx
  PVOID v24; // rdi
  _WORD v25[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v26[2]; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  _DWORD *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  _DWORD v39[2]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  PVOID v42; // [rsp+C0h] [rbp-40h]
  _DWORD v43[2]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  _DWORD *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  _DWORD v49[2]; // [rsp+F8h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  const wchar_t *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  __int16 *v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  const wchar_t *v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 v57[20]; // [rsp+140h] [rbp+40h] BYREF

  v3 = (unsigned __int16 *)&EmptyUnicodeString;
  v29 = 0LL;
  P = 0LL;
  if ( *(_QWORD *)(a2 + 1128) )
    v3 = *(unsigned __int16 **)(a2 + 1128);
  v7 = *v3;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v7 )
  {
    v25[0] = v7 >> 1;
    UserData.Ptr = (ULONGLONG)v25;
    v8 = *v3;
    v51 = (const wchar_t *)*((_QWORD *)v3 + 1);
    v52 = v8;
  }
  else
  {
    v25[0] = 6;
    UserData.Ptr = (ULONGLONG)v25;
    v51 = L"(null)";
    v52 = 12LL;
  }
  EtwpQueryProcessCommandLine(a2, (__int64)&v29);
  v54 = 2LL;
  v53 = &v27;
  if ( (_WORD)v29 )
  {
    v55 = (const wchar_t *)P;
    v56 = (unsigned __int16)v29;
    v9 = (unsigned __int16)v29 >> 1;
  }
  else
  {
    v55 = L"(null)";
    v9 = 6;
    v56 = 12LL;
  }
  v27 = v9;
  v10 = EtwpTiFillProcessIdentity(v57, a2, &v31);
  v11 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v10 + 4)), (__int64)KeGetCurrentThread());
  v15 = v11 + v14;
  if ( a3 && (v16 = *a3) != 0 )
  {
    v17 = v15 + 1;
    v26[0] = v16 >> 1;
    v18 = 2LL * v15;
    *(&UserData.Ptr + v18) = (ULONGLONG)v26;
    *((_QWORD *)&UserData.Size + v18) = 2LL;
    v19 = 2LL * (v15 + 1);
    *(&UserData.Ptr + v19) = *((_QWORD *)a3 + 1);
    *(&UserData.Size + 2 * v19) = v16;
    *(&UserData.Reserved + 2 * v19) = 0;
  }
  else
  {
    v20 = 2LL * v15;
    v26[0] = v12;
    v17 = v15 + 1;
    *(&UserData.Ptr + v20) = (ULONGLONG)v26;
    *((_QWORD *)&UserData.Size + v20) = 2LL;
    v21 = 2LL * (v15 + 1);
    *(&UserData.Ptr + v21) = v13;
    *((_QWORD *)&UserData.Size + v21) = 12LL;
  }
  v22 = v17 + 1;
  v23 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_LOWIL_IMAGE_MAP;
  if ( a1 != 1 )
    v23 = &MITIGATION_ENFORCE_PROHIBIT_LOWIL_IMAGE_MAP;
  EtwWrite(EtwSecurityMitigationsRegHandle, v23, 0LL, v22, &UserData);
  v24 = P;
  if ( stru_140401308.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401308, 0x400000000000uLL) )
  {
    v32 = v31;
    v34 = &v28;
    v36 = v39;
    v38 = *((_QWORD *)v3 + 1);
    v39[0] = *v3;
    v40 = v43;
    v43[0] = (unsigned __int16)v29;
    v44 = &v32;
    v46 = v49;
    v48 = *((_QWORD *)a3 + 1);
    v49[0] = *a3;
    v28 = a1;
    v35 = 4LL;
    v37 = 2LL;
    v39[1] = 0;
    v41 = 2LL;
    v42 = v24;
    v43[1] = 0;
    v45 = 8LL;
    v47 = 2LL;
    v49[1] = 0;
    TlgWrite(&stru_140401308, &unk_14037491D, 0LL, 0LL, 0xAu, &pData);
  }
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
}
