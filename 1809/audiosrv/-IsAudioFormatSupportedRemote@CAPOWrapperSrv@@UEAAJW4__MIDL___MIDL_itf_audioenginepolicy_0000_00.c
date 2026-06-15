/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x180130150
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180006370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX **a5)
{
  struct IAudioMediaType *v8; // rbx
  struct IAudioMediaType *v9; // rdi
  struct tWAVEFORMATEX *v10; // rsi
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r15d
  const struct tWAVEFORMATEX *v18; // rax
  int v20; // [rsp+38h] [rbp-81h] BYREF
  struct IAudioMediaType *v21; // [rsp+40h] [rbp-79h] BYREF
  __int64 v22; // [rsp+48h] [rbp-71h] BYREF
  struct IAudioMediaType *v23; // [rsp+50h] [rbp-69h] BYREF
  struct tWAVEFORMATEX *v24; // [rsp+58h] [rbp-61h] BYREF
  struct tWAVEFORMATEX **v25; // [rsp+60h] [rbp-59h]
  __int64 v26; // [rsp+68h] [rbp-51h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-41h] BYREF
  const char *v28; // [rsp+98h] [rbp-21h]
  int v29; // [rsp+A0h] [rbp-19h]
  int v30; // [rsp+A4h] [rbp-15h]
  struct IAudioMediaType **v31; // [rsp+A8h] [rbp-11h]
  int v32; // [rsp+B0h] [rbp-9h]
  int v33; // [rsp+B4h] [rbp-5h]
  int *v34; // [rsp+B8h] [rbp-1h]
  int v35; // [rsp+C0h] [rbp+7h]
  int v36; // [rsp+C4h] [rbp+Bh]

  v26 = -2LL;
  v25 = a5;
  v20 = 0;
  v8 = 0LL;
  v21 = 0LL;
  v9 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  if ( a3 )
  {
    v13 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v21, 0.0, 1);
    v20 = v13;
    v8 = v21;
    if ( v13 < 0 )
      goto LABEL_17;
  }
  if ( a4 )
  {
    v13 = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v23, 0.0, 1);
    v20 = v13;
    v9 = v23;
    if ( v13 < 0 )
      goto LABEL_17;
  }
  v14 = a1 + 8;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = a2
      ? (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v15 + 64))(
          v14,
          v8,
          v9,
          &v22)
      : (*(unsigned __int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(v15 + 56))(
          v14,
          v8,
          v9,
          &v22);
  v17 = v16;
  v13 = v16;
  v20 = v16;
  if ( v16 < 0 )
  {
LABEL_17:
    if ( (unsigned int)dword_1801B14C0 > 2 )
    {
      v28 = "CAPOWrapperSrv::IsAudioFormatSupportedRemote";
      v29 = 45;
      v30 = 0;
      LODWORD(v21) = 225;
      v31 = &v21;
      v32 = 4;
      v33 = 0;
      v34 = &v20;
      v35 = 4;
      v36 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1801B14C0, &unk_180177A9E, v11, v12, 5u, &pData);
      v13 = v20;
    }
    goto LABEL_19;
  }
  if ( !v22 )
    goto LABEL_14;
  v18 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
  if ( !v18 )
  {
    v13 = -2004287480;
    v20 = -2004287480;
    goto LABEL_17;
  }
  v13 = CloneWaveFormat(v18, &v24);
  v20 = v13;
  if ( v13 < 0 )
  {
    v10 = v24;
    goto LABEL_17;
  }
  *v25 = v24;
LABEL_14:
  if ( v17 )
    v13 = v17;
  v20 = v13;
  if ( v13 < 0 )
    goto LABEL_17;
LABEL_19:
  CoTaskMemFree(v10);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioMediaType *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IAudioMediaType *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v13;
}
