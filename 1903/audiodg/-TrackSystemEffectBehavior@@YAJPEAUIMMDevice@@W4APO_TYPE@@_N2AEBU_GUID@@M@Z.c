/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140008E0C
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140007D1C (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 * Callees:
 *     IsSkipAPOFailureCheck @ 0x140009048 (IsSkipAPOFailureCheck.c)
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14001415C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x140017340 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400173A8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, char a3, unsigned __int8 a4, __int64 a5, float a6)
{
  __int64 v7; // r15
  int v9; // ebx
  __int64 v10; // r12
  char *v11; // rdx
  int v13; // ecx
  char *v14; // rdx
  LPCGUID v15; // r9
  TraceLoggingHProvider v16; // r10
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h]
  __int64 v21; // [rsp+58h] [rbp-B0h]
  int v22; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+64h] [rbp-A4h] BYREF
  LPCWSTR pwsz; // [rsp+68h] [rbp-A0h] BYREF
  PROPVARIANT v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  _QWORD v28[2]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  int *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int64 v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF

  v28[1] = -2LL;
  v7 = a2;
  v18 = 0LL;
  if ( dword_140087200 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_140087200);
    if ( dword_140087200 == -1 )
    {
      xmmword_140086E94 = PKEY_Endpoint_LFX_FailCount;
      dword_140086EA4 = 9;
      xmmword_140086EA8 = PKEY_Endpoint_GFX_FailCount;
      dword_140086EB8 = 8;
      xmmword_140086EBC = PKEY_Endpoint_EFX_FailCount;
      dword_140086ECC = 31;
      xmmword_140086E44 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_140086E54 = 33;
      xmmword_140086E58 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_140086E68 = 34;
      xmmword_140086E6C = PKEY_Endpoint_EFX_ExceptionCount;
      dword_140086E7C = 35;
      Init_thread_footer(&dword_140087200);
    }
  }
  if ( !(_DWORD)v7 || (unsigned __int8)IsSkipAPOFailureCheck() )
  {
    v9 = 0;
    goto LABEL_12;
  }
  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &v18);
  if ( v9 >= 0 )
  {
    v10 = 20 * v7;
    v11 = (char *)&unk_140086E30;
    if ( !a4 )
      v11 = (char *)&unk_140086E80;
    v9 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(v18, &v11[v10], &pvar);
    if ( a3 )
    {
      if ( (_WORD)pvar == 19 && !(_DWORD)v20 || !(_WORD)pvar )
        goto LABEL_10;
      LOWORD(pvar) = 19;
      if ( a4 )
      {
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
          v18,
          &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
          &v25);
        if ( (_WORD)v25 != 19 || (_DWORD)v26 != 1 || (unsigned int)v20 > 1 )
          LODWORD(v20) = v20 - 1;
        PropVariantClear(&v25);
      }
      else
      {
        LODWORD(v20) = 0;
      }
    }
    else
    {
      if ( (_WORD)pvar == 19 )
      {
        v13 = v20;
      }
      else
      {
        LOWORD(pvar) = 19;
        v13 = 0;
      }
      LODWORD(v20) = (int)(float)(10.0 / a6) + v13;
    }
    if ( a4 )
      v14 = (char *)&unk_140086E30;
    else
      v14 = (char *)&unk_140086E80;
    v9 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v18 + 48LL))(v18, &v14[v10], &pvar);
  }
LABEL_10:
  if ( !a3 )
  {
    pwsz = 0LL;
    (*(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a1 + 40LL))(a1, &pwsz);
    if ( *(_DWORD *)g_SysFxUtilTlp > 2u && TlgKeywordOn(g_SysFxUtilTlp, 0x400000000000uLL) )
    {
      v28[0] = 0x1000000LL;
      v30 = v28;
      v31 = 8LL;
      v22 = a4;
      v32 = &v22;
      v33 = 4LL;
      v23 = v7;
      v34 = &v23;
      v35 = 4LL;
      v36 = a5;
      v37 = 16LL;
      TlgCreateWsz(&pDesc, pwsz);
      TlgWrite(v16, &unk_14006FCAB, 0LL, v15, 7u, &pData);
    }
    if ( pwsz )
      CoTaskMemFree((LPVOID)pwsz);
  }
  PropVariantClear(&pvar);
LABEL_12:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v9;
}
