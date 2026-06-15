/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140005860
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007180 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140017D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        _QWORD *a5)
{
  struct IAudioMediaType *v8; // rdi
  struct IAudioMediaType *v9; // rbx
  int v10; // esi
  const GUID *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // r14d
  __int64 v16; // rax
  const void *v17; // r12
  __int64 v18; // rsi
  void *v19; // rax
  void *v20; // r15
  int v22; // [rsp+30h] [rbp-71h] BYREF
  struct IAudioMediaType *v23; // [rsp+38h] [rbp-69h] BYREF
  __int64 v24; // [rsp+40h] [rbp-61h] BYREF
  struct IAudioMediaType *v25; // [rsp+48h] [rbp-59h] BYREF
  _QWORD *v26; // [rsp+50h] [rbp-51h]
  __int64 v27; // [rsp+58h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-41h] BYREF
  const char *v29; // [rsp+80h] [rbp-21h]
  __int64 v30; // [rsp+88h] [rbp-19h]
  struct IAudioMediaType **v31; // [rsp+90h] [rbp-11h]
  __int64 v32; // [rsp+98h] [rbp-9h]
  int *v33; // [rsp+A0h] [rbp-1h]
  __int64 v34; // [rsp+A8h] [rbp+7h]

  v27 = -2LL;
  v26 = a5;
  v8 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( !a3
    || (v10 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v23, 0.0, 1), v22 = v10, v8 = v23, v10 >= 0) )
  {
    if ( !a4
      || (v10 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v25, 0.0, 1), v22 = v10, v9 = v25, v10 >= 0) )
    {
      v12 = a1 + 8;
      v13 = *(_QWORD *)(a1 + 8);
      v14 = a2
          ? (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v13 + 64))(
              v12,
              v8,
              v9,
              &v24)
          : (*(unsigned __int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v13 + 56))(
              v12,
              v8,
              v9,
              &v24);
      v22 = v14;
      v10 = v14;
      if ( v14 >= 0 )
      {
        v15 = v14;
        if ( !v24 )
        {
LABEL_12:
          if ( v15 )
            v10 = v15;
          v22 = v10;
          goto LABEL_15;
        }
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
        v17 = (const void *)v16;
        if ( v16 )
        {
          v18 = *(unsigned __int16 *)(v16 + 16);
          v19 = CoTaskMemAlloc(v18 + 18);
          v20 = v19;
          if ( v19 )
          {
            memcpy_0(v19, v17, v18 + 18);
            v10 = 0;
            v22 = 0;
            *v26 = v20;
            goto LABEL_12;
          }
          v10 = -2147024882;
          v22 = -2147024882;
        }
        else
        {
          v10 = -2004287480;
          v22 = -2004287480;
        }
      }
    }
  }
  if ( (unsigned int)hProvider > 2 )
  {
    v29 = "CAPOWrapperSrv::IsAudioFormatSupportedRemote";
    v30 = 45LL;
    LODWORD(v23) = 231;
    v31 = &v23;
    v32 = 4LL;
    v33 = &v22;
    v34 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_14006FD11, 0LL, v11, 5u, &pData);
    v10 = v22;
  }
LABEL_15:
  CoTaskMemFree(0LL);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioMediaType *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v10;
}
