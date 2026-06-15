/*
 * XREFs of ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x18001FC20
 * Callers:
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18001FD60 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18013ABB0 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001B3B0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAPOWrapperClient::IsAudioFormatSupported(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        struct IAudioMediaType **a5)
{
  unsigned int v6; // r15d
  __int64 v8; // rdi
  const GUID *v9; // r9
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  int v14; // [rsp+30h] [rbp-61h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-59h] BYREF
  int v16; // [rsp+40h] [rbp-51h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-41h] BYREF
  const char *v19; // [rsp+70h] [rbp-21h]
  __int64 v20; // [rsp+78h] [rbp-19h]
  int *v21; // [rsp+80h] [rbp-11h]
  __int64 v22; // [rsp+88h] [rbp-9h]
  int *v23; // [rsp+90h] [rbp-1h]
  __int64 v24; // [rsp+98h] [rbp+7h]

  v17 = -2LL;
  v6 = a2;
  v14 = 0;
  pv = 0LL;
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v11 = -2147024809;
    goto LABEL_12;
  }
  v8 = 0LL;
  if ( a3 && (v8 = (*(__int64 (__fastcall **)(const GUID *))(*(_QWORD *)&a3->Data1 + 40LL))(a3)) == 0 )
  {
    v11 = -2004287480;
    v14 = -2004287480;
  }
  else
  {
    v9 = 0LL;
    if ( a4
      && (v9 = (const GUID *)(*(__int64 (__fastcall **)(__int64, __int64, const GUID *, _QWORD))(*(_QWORD *)a4 + 40LL))(
                               a4,
                               a2,
                               a3,
                               0LL)) == 0LL )
    {
      v11 = -2004287480;
      v14 = -2004287480;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const GUID *, LPVOID *))(**(_QWORD **)(a1 + 56) + 40LL))(
              *(_QWORD *)(a1 + 56),
              v6,
              v8,
              v9,
              &pv);
      v11 = v10;
      v14 = v10;
      if ( v10 >= 0 )
      {
        v12 = v10;
        if ( pv )
        {
          v11 = CAudioMediaType::Create(
                  (const struct tWAVEFORMATEX *)pv,
                  (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                  a5,
                  0.0,
                  1);
          v14 = v11;
          if ( v11 >= 0 )
          {
            if ( v12 )
              v11 = v12;
            v14 = v11;
            goto LABEL_12;
          }
        }
        else
        {
          v11 = -2004287480;
          v14 = -2004287480;
        }
      }
    }
  }
  if ( (unsigned int)dword_1801B54B8 > 2 )
  {
    v19 = "CAPOWrapperClient::IsAudioFormatSupported";
    v20 = 42LL;
    v16 = 294;
    v21 = &v16;
    v22 = 4LL;
    v23 = &v14;
    v24 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B54B8, &unk_18017BD9D, a3, v9, 5u, &pData);
    v11 = v14;
  }
LABEL_12:
  CoTaskMemFree(pv);
  pv = 0LL;
  return (unsigned int)v11;
}
