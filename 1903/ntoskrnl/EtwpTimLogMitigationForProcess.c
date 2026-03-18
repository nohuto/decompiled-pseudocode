/*
 * XREFs of EtwpTimLogMitigationForProcess @ 0x1406DFC34
 * Callers:
 *     MiAllowImageMap @ 0x1405EB0B4 (MiAllowImageMap.c)
 *     EtwTimLogProhibitDynamicCode @ 0x1406DFC04 (EtwTimLogProhibitDynamicCode.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x1408F9F3C (EtwTimLogProhibitWin32kSystemCalls.c)
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

void __fastcall EtwpTimLogMitigationForProcess(int a1, int a2, const EVENT_DESCRIPTOR *a3, __int64 a4)
{
  unsigned __int16 *v4; // rdi
  const wchar_t *v9; // rcx
  int v10; // esi
  unsigned __int16 v11; // ax
  int v12; // eax
  const wchar_t *v13; // rax
  __int16 v14; // cx
  int v15; // eax
  int v16; // eax
  int v17; // r9d
  PVOID v18; // rsi
  _WORD v19[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  int *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  _DWORD *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  _DWORD v35[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  PVOID v38; // [rsp+D0h] [rbp-30h]
  _DWORD v39[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  const wchar_t *v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]
  __int16 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  const wchar_t *v48; // [rsp+120h] [rbp+20h]
  int v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+12Ch] [rbp+2Ch]
  __int64 v51[16]; // [rsp+130h] [rbp+30h] BYREF

  v4 = (unsigned __int16 *)&EmptyUnicodeString;
  v23 = 0LL;
  P = 0LL;
  v9 = L"(null)";
  if ( *(_QWORD *)(a4 + 1128) )
    v4 = *(unsigned __int16 **)(a4 + 1128);
  v10 = 12;
  v11 = *v4;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v11 )
  {
    v19[0] = v11 >> 1;
    UserData.Ptr = (ULONGLONG)v19;
    v12 = *v4;
    v9 = (const wchar_t *)*((_QWORD *)v4 + 1);
  }
  else
  {
    v19[0] = 6;
    UserData.Ptr = (ULONGLONG)v19;
    v12 = 12;
  }
  v43 = v9;
  v45 = 0;
  v44 = v12;
  EtwpQueryProcessCommandLine(a4, (__int64)&v23);
  v47 = 2LL;
  v46 = &v20;
  if ( (_WORD)v23 )
  {
    v13 = (const wchar_t *)P;
    v10 = (unsigned __int16)v23;
    v14 = (unsigned __int16)v23 >> 1;
  }
  else
  {
    v13 = L"(null)";
    v14 = 6;
  }
  v20 = v14;
  v50 = 0;
  v48 = v13;
  v49 = v10;
  v15 = EtwpTiFillProcessIdentity(v51, a4, &v25);
  v16 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v15 + 4)), (__int64)KeGetCurrentThread());
  EtwWrite(EtwSecurityMitigationsRegHandle, a3, 0LL, v16 + v17, &UserData);
  v18 = P;
  if ( stru_140426618.LevelPlus1 > 5 && TlgKeywordOn(&stru_140426618, 0x200000000000uLL) )
  {
    v26 = v25;
    v28 = &v21;
    v30 = &v22;
    v32 = v35;
    v34 = *((_QWORD *)v4 + 1);
    v35[0] = *v4;
    v36 = v39;
    v39[0] = (unsigned __int16)v23;
    v40 = &v26;
    v21 = a1;
    v22 = a2;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 2LL;
    v35[1] = 0;
    v37 = 2LL;
    v38 = v18;
    v39[1] = 0;
    v41 = 8LL;
    TlgWrite(&stru_140426618, &unk_14039429F, 0LL, 0LL, 9u, &pData);
  }
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
}
