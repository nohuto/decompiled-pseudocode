/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140010BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000D730 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        _QWORD *a5)
{
  struct IAudioMediaType *v8; // rbx
  struct IAudioMediaType *v9; // rdi
  void *v10; // rsi
  const GUID *v11; // r9
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // r15d
  __int64 v17; // rax
  const void *v18; // r12
  __int64 v19; // r14
  void *v20; // rax
  int v22; // [rsp+38h] [rbp-71h] BYREF
  struct IAudioMediaType *v23; // [rsp+40h] [rbp-69h] BYREF
  __int64 v24; // [rsp+48h] [rbp-61h] BYREF
  struct IAudioMediaType *v25; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v26; // [rsp+58h] [rbp-51h]
  __int64 v27; // [rsp+60h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-41h] BYREF
  const char *v29; // [rsp+88h] [rbp-21h]
  int v30; // [rsp+90h] [rbp-19h]
  int v31; // [rsp+94h] [rbp-15h]
  struct IAudioMediaType **v32; // [rsp+98h] [rbp-11h]
  int v33; // [rsp+A0h] [rbp-9h]
  int v34; // [rsp+A4h] [rbp-5h]
  int *v35; // [rsp+A8h] [rbp-1h]
  int v36; // [rsp+B0h] [rbp+7h]
  int v37; // [rsp+B4h] [rbp+Bh]

  v27 = -2LL;
  v26 = a5;
  v22 = 0;
  v8 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
    v12 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v23, 0.0, 1);
    v22 = v12;
    v8 = v23;
    if ( v12 < 0 )
      goto LABEL_26;
  }
  if ( a4 )
  {
    v12 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v25, 0.0, 1);
    v22 = v12;
    v9 = v25;
    if ( v12 < 0 )
      goto LABEL_26;
  }
  v13 = a1 + 8;
  v14 = *(_QWORD *)(a1 + 8);
  v15 = a2
      ? (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v14 + 64))(
          v13,
          v8,
          v9,
          &v24)
      : (*(unsigned __int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v14 + 56))(
          v13,
          v8,
          v9,
          &v24);
  v16 = v15;
  v12 = v15;
  v22 = v15;
  if ( v15 < 0 )
    goto LABEL_26;
  if ( !v24 )
    goto LABEL_14;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
  v18 = (const void *)v17;
  if ( !v17 )
  {
    v12 = -2004287480;
    v22 = -2004287480;
    goto LABEL_26;
  }
  v19 = *(unsigned __int16 *)(v17 + 16);
  v20 = CoTaskMemAlloc(v19 + 18);
  v10 = v20;
  if ( v20 )
  {
    memcpy_0(v20, v18, v19 + 18);
    v12 = 0;
  }
  else
  {
    v12 = -2147024882;
  }
  v15 = v12;
  v22 = v12;
  if ( v12 < 0 )
  {
LABEL_26:
    if ( (unsigned int)hProvider > 2 )
    {
      v29 = "CAPOWrapperSrv::IsAudioFormatSupportedRemote";
      v30 = 45;
      v31 = 0;
      LODWORD(v23) = 225;
      v32 = &v23;
      v33 = 4;
      v34 = 0;
      v35 = &v22;
      v36 = 4;
      v37 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140072181, 0LL, v11, 5u, &pData);
      v12 = v22;
    }
    goto LABEL_17;
  }
  *v26 = v10;
LABEL_14:
  v10 = 0LL;
  if ( v16 )
  {
    v12 = v16;
    v22 = v16;
    v15 = v16;
  }
  if ( v15 < 0 )
    goto LABEL_26;
LABEL_17:
  CoTaskMemFree(v10);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioMediaType *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v12;
}
