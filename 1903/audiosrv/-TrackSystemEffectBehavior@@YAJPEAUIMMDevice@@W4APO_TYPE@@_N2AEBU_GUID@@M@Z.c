/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x18013808C
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x1801383AC (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180064560 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800645C8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     IsSkipAPOFailureCheck @ 0x180138010 (IsSkipAPOFailureCheck.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, float a6)
{
  __int64 v6; // rsi
  int v8; // ebx
  int v9; // ecx
  LPCGUID v10; // r8
  TraceLoggingHProvider v11; // r9
  LPCWSTR pwsz; // [rsp+38h] [rbp-89h] BYREF
  __int64 v14; // [rsp+40h] [rbp-81h] BYREF
  int v15; // [rsp+48h] [rbp-79h] BYREF
  int v16; // [rsp+4Ch] [rbp-75h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-71h] BYREF
  __int64 v18; // [rsp+58h] [rbp-69h]
  __int64 v19; // [rsp+60h] [rbp-61h]
  _QWORD v20[2]; // [rsp+68h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-49h] BYREF
  _QWORD *v22; // [rsp+98h] [rbp-29h]
  int v23; // [rsp+A0h] [rbp-21h]
  int v24; // [rsp+A4h] [rbp-1Dh]
  int *v25; // [rsp+A8h] [rbp-19h]
  int v26; // [rsp+B0h] [rbp-11h]
  int v27; // [rsp+B4h] [rbp-Dh]
  int *v28; // [rsp+B8h] [rbp-9h]
  int v29; // [rsp+C0h] [rbp-1h]
  int v30; // [rsp+C4h] [rbp+3h]
  __int64 v31; // [rsp+C8h] [rbp+7h]
  int v32; // [rsp+D0h] [rbp+Fh]
  int v33; // [rsp+D4h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp+17h] BYREF

  v20[1] = -2LL;
  v6 = a2;
  v14 = 0LL;
  if ( dword_1801B9A28 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801B9A28);
    if ( dword_1801B9A28 == -1 )
    {
      xmmword_1801B99D4 = PKEY_Endpoint_LFX_FailCount;
      dword_1801B99E4 = 9;
      xmmword_1801B99E8 = PKEY_Endpoint_GFX_FailCount;
      dword_1801B99F8 = 8;
      xmmword_1801B99FC = PKEY_Endpoint_EFX_FailCount;
      dword_1801B9A0C = 31;
      xmmword_1801B9984 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_1801B9994 = 33;
      xmmword_1801B9998 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_1801B99A8 = 34;
      xmmword_1801B99AC = PKEY_Endpoint_EFX_ExceptionCount;
      dword_1801B99BC = 35;
      Init_thread_footer(&dword_1801B9A28);
    }
  }
  if ( !(_DWORD)v6 || IsSkipAPOFailureCheck() )
  {
    v8 = 0;
  }
  else
  {
    pvar = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &v14);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
        v14,
        &byte_1801B9970[20 * v6],
        &pvar);
      if ( (_WORD)pvar == 19 )
      {
        v9 = v18;
      }
      else
      {
        LOWORD(pvar) = 19;
        v9 = 0;
      }
      LODWORD(v18) = (int)(float)(10.0 / a6) + v9;
      v8 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v14 + 48LL))(
             v14,
             &byte_1801B9970[20 * v6],
             &pvar);
    }
    pwsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&pwsz,
      0LL);
    (*(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a1 + 40LL))(a1, &pwsz);
    if ( *(_DWORD *)g_SysFxUtilTlp > 2u && TlgKeywordOn(g_SysFxUtilTlp, 0x400000000000uLL) )
    {
      v20[0] = 0x1000000LL;
      v22 = v20;
      v23 = 8;
      v24 = 0;
      v15 = 1;
      v25 = &v15;
      v26 = 4;
      v27 = 0;
      v16 = v6;
      v28 = &v16;
      v29 = 4;
      v30 = 0;
      v31 = a5;
      v32 = 16;
      v33 = 0;
      TlgCreateWsz(&pDesc, pwsz);
      TlgWrite(v11, &unk_18017CEF9, v10, (LPCGUID)v11, 7u, &pData);
    }
    if ( pwsz )
      CoTaskMemFree((LPVOID)pwsz);
    PropVariantClear(&pvar);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v8;
}
