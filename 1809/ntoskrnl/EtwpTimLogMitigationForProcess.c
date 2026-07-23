/*
 * XREFs of EtwpTimLogMitigationForProcess @ 0x1406C043C
 * Callers:
 *     MiAllowImageMap @ 0x1405F58B8 (MiAllowImageMap.c)
 *     EtwTimLogProhibitDynamicCode @ 0x1406C040C (EtwTimLogProhibitDynamicCode.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x1408BE628 (EtwTimLogProhibitWin32kSystemCalls.c)
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

void __fastcall EtwpTimLogMitigationForProcess(int a1, int a2, const EVENT_DESCRIPTOR *a3, __int64 a4)
{
  unsigned __int16 *v4; // rdi
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  __int16 v11; // cx
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  PVOID v15; // rsi
  _WORD v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  int *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  _DWORD *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  _DWORD v32[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  PVOID v35; // [rsp+D0h] [rbp-30h]
  _DWORD v36[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  const wchar_t *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int16 *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  const wchar_t *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  __int64 v46[16]; // [rsp+130h] [rbp+30h] BYREF

  v4 = (unsigned __int16 *)&EmptyUnicodeString;
  v20 = 0LL;
  P = 0LL;
  if ( *(_QWORD *)(a4 + 1128) )
    v4 = *(unsigned __int16 **)(a4 + 1128);
  v9 = *v4;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v9 )
  {
    v16[0] = v9 >> 1;
    UserData.Ptr = (ULONGLONG)v16;
    v10 = *v4;
    v40 = (const wchar_t *)*((_QWORD *)v4 + 1);
    v41 = v10;
  }
  else
  {
    v16[0] = 6;
    UserData.Ptr = (ULONGLONG)v16;
    v40 = L"(null)";
    v41 = 12LL;
  }
  EtwpQueryProcessCommandLine(a4, (__int64)&v20);
  v43 = 2LL;
  v42 = &v17;
  if ( (_WORD)v20 )
  {
    v44 = (const wchar_t *)P;
    v45 = (unsigned __int16)v20;
    v11 = (unsigned __int16)v20 >> 1;
  }
  else
  {
    v45 = 12LL;
    v44 = L"(null)";
    v11 = 6;
  }
  v17 = v11;
  v12 = EtwpTiFillProcessIdentity(v46, a4, &v22);
  v13 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v12 + 4)), (__int64)KeGetCurrentThread());
  EtwWrite(EtwSecurityMitigationsRegHandle, a3, 0LL, v13 + v14, &UserData);
  v15 = P;
  if ( stru_140401308.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401308, 0x200000000000uLL) )
  {
    v23 = v22;
    v25 = &v18;
    v27 = &v19;
    v29 = v32;
    v31 = *((_QWORD *)v4 + 1);
    v32[0] = *v4;
    v33 = v36;
    v36[0] = (unsigned __int16)v20;
    v37 = &v23;
    v18 = a1;
    v19 = a2;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 2LL;
    v32[1] = 0;
    v34 = 2LL;
    v35 = v15;
    v36[1] = 0;
    v38 = 8LL;
    TlgWrite(&stru_140401308, &unk_140374C4E, 0LL, 0LL, 9u, &pData);
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}
