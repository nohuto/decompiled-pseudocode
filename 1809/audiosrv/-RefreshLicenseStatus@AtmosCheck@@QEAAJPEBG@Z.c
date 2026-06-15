/*
 * XREFs of ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18013B55C
 * Callers:
 *     ?ReportSpatialLicenseChangedCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D3B80 (-ReportSpatialLicenseChangedCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z @ 0x18013A6CC (-MapSubtypeToCommonTechIndex@AtmosCheck@@AEBAHPEBG@Z.c)
 *     ?UpdateLicenseStatus@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z @ 0x18013C780 (-UpdateLicenseStatus@AtmosCheck@@AEAAXPEBG0PEAJPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::RefreshLicenseStatus(AtmosCheck *this, const unsigned __int16 *a2)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  char v9; // r13
  char v10; // r15
  _QWORD *v11; // rbx
  const unsigned __int16 *v12; // r8
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  LPCWCH *v15; // r12
  __int64 v16; // r13
  char v17; // al
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  void (__fastcall ***v20)(_QWORD); // rcx
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  bool v23; // [rsp+38h] [rbp-59h] BYREF
  char v24; // [rsp+39h] [rbp-58h]
  char v25; // [rsp+3Ah] [rbp-57h]
  int v26; // [rsp+3Ch] [rbp-55h] BYREF
  int v27; // [rsp+40h] [rbp-51h]
  __int64 v28; // [rsp+48h] [rbp-49h]
  char *v29; // [rsp+50h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+78h] [rbp-19h] BYREF
  bool *v32; // [rsp+88h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v28 = -2LL;
  v4 = 0LL;
  if ( !*((_BYTE *)this + 72) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      1675LL,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( !*((_BYTE *)this + 184) )
  {
    v6 = -2147467259;
    v7 = 1676LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v7,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)v6);
    return v6;
  }
  v8 = AtmosCheck::MapSubtypeToCommonTechIndex(this, a2);
  if ( v8 == -1 )
  {
    v6 = -2147024809;
    v7 = 1681LL;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 32 * v8 + 208) )
  {
    v6 = -2147024809;
    v7 = 1682LL;
    goto LABEL_5;
  }
  v26 = -2147418113;
  v9 = 0;
  v24 = 0;
  v10 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v29 = (char *)this + 32;
  v11 = (_QWORD *)*((_QWORD *)this + 51);
  while ( 1 )
  {
    v11 = (_QWORD *)*v11;
    if ( v11 == *((_QWORD **)this + 51) )
      break;
    v23 = 0;
    v12 = (const unsigned __int16 *)(v11 + 2);
    if ( v11[5] >= 8uLL )
      v12 = *(const unsigned __int16 **)v12;
    AtmosCheck::UpdateLicenseStatus(this, a2, v12, &v26, &v23);
    if ( (unsigned int)dword_1801B1580 > 5 )
    {
      v31.Ptr = (ULONGLONG)&v26;
      *(_QWORD *)&v31.Size = 4LL;
      v32 = &v23;
      v33 = 1LL;
      TlgCreateWsz(&pDesc, a2);
      TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_1801781BB, v13, v14, 5u, &pData);
    }
    v15 = (LPCWCH *)((char *)this + 216);
    do
    {
      v16 = v11[6];
      v25 = v23;
      v27 = v26;
      v10 = 0;
      if ( CompareStringOrdinal(a2, -1, *v15, -1, 1) != 2
        || (v17 = v25, *(_DWORD *)(v4 + v16 + 4) == v27) && *(_BYTE *)(v4 + v16) == v25 )
      {
        v9 = v24;
      }
      else
      {
        *(_DWORD *)(v4 + v16 + 4) = v27;
        *(_BYTE *)(v4 + v16) = v17;
        v9 = 1;
        v24 = 1;
        v10 = 1;
      }
      if ( v10 )
        break;
      v15 += 4;
      v4 += 8LL;
    }
    while ( v4 < 48 );
    v4 = 0LL;
  }
  if ( this != (AtmosCheck *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( !v10 && (unsigned int)dword_1801B1580 > 5 )
  {
    TlgCreateWsz(&v31, a2);
    TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_18017848B, v18, v19, 3u, &pData);
  }
  if ( v9 )
  {
    v20 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
    if ( v20 )
    {
      if ( (unsigned int)dword_1801B1580 > 5 )
      {
        TlgCreateWsz(&v31, a2);
        TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_18017825C, v21, v22, 3u, &pData);
        v20 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
      }
      (**v20)(v20);
    }
  }
  return 0LL;
}
