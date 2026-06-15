/*
 * XREFs of ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140009760
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140009560 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140009640 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     TraceLoggingRegisterEx @ 0x14001A690 (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     atexit @ 0x14001C308 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPipeInstance::GetLatency(CPipeInstance *this, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // r14d
  __int64 v8; // rdi
  __int64 v10; // r10
  unsigned __int16 *v11; // rax
  __int64 v12; // rcx
  TLG_PENABLECALLBACK v13; // rdx
  PVOID v14; // r8
  __int64 v15; // rdi
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-89h] BYREF
  int v19; // [rsp+34h] [rbp-85h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-81h] BYREF
  __int64 v21; // [rsp+40h] [rbp-79h] BYREF
  double v22; // [rsp+48h] [rbp-71h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v24; // [rsp+58h] [rbp-61h]
  unsigned __int16 *v25; // [rsp+60h] [rbp-59h] BYREF
  int v26; // [rsp+68h] [rbp-51h]
  int v27; // [rsp+6Ch] [rbp-4Dh]
  void *v28; // [rsp+70h] [rbp-49h]
  int v29; // [rsp+78h] [rbp-41h]
  int v30; // [rsp+7Ch] [rbp-3Dh]
  __int64 v31; // [rsp+80h] [rbp-39h]
  __int64 v32; // [rsp+88h] [rbp-31h]
  double *v33; // [rsp+90h] [rbp-29h]
  __int64 v34; // [rsp+98h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+7h]
  __int64 v37; // [rsp+C8h] [rbp+Fh]
  int *v38; // [rsp+D0h] [rbp+17h]
  __int64 v39; // [rsp+D8h] [rbp+1Fh]

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v3 = 0LL;
  while ( v2 )
  {
    v5 = v2[2];
    v2 = (_QWORD *)*v2;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 56LL))(v5, &v21);
    if ( v7 < 0 )
    {
      if ( *(_DWORD *)(v5 + 40) == 2 )
      {
        v15 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v15 + 4) )
        {
          v16 = (const struct _TlgProvider_t *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                                 v6,
                                                 lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
          if ( *(_DWORD *)v16 > 2u )
          {
            v37 = 16LL;
            v36 = v15 + 8;
            v38 = &v19;
            v19 = v7;
            v39 = 4LL;
            TlgWrite(v16, &unk_140071F11, 0LL, v17, 4u, &pData);
          }
        }
      }
    }
    else
    {
      v3 += v21;
      if ( *(_DWORD *)(v5 + 40) == 2 )
      {
        v8 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v8 + 4) )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            Context = &qword_1400891F8;
            qword_1400891F8 = (__int64)&AudioDgTelemetryProvider::`vftable';
            qword_140089210 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
            qword_140089200 = (__int64)qword_140089210;
            byte_140089208 = 1;
            TraceLoggingRegisterEx(qword_140089210, v13, v14);
            dword_14008920C = 1;
            (*(void (__fastcall **)(__int64 *))(qword_1400891F8 + 8))(&qword_1400891F8);
            InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1400891F8);
          }
          v10 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v10 > 4u )
          {
            v32 = 16LL;
            v34 = 8LL;
            v31 = v8 + 8;
            v33 = &v22;
            v22 = (double)(int)v21 / 10000000.0;
            v23[1] = 4;
            v11 = *(unsigned __int16 **)(v10 + 8);
            v23[0] = ((unsigned int)&unk_140071EE0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v12 = *(_QWORD *)(v10 + 32);
            v25 = v11;
            v24 = 0LL;
            v26 = *v11;
            v27 = 2;
            v28 = &unk_140071EEB;
            v29 = 37;
            v30 = 1;
            EtwEventWriteTransfer(v12, v23, 0LL, 0LL, 4, &v25);
          }
        }
      }
    }
  }
  *a2 = v3;
  return 0LL;
}
