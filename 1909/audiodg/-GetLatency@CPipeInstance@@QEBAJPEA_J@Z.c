/*
 * XREFs of ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000BA90
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000B8B0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000B9E0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     atexit @ 0x140016558 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x140025D60 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall CPipeInstance::GetLatency(CPipeInstance *this, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // r14d
  __int64 v7; // rdi
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  TLG_PENABLECALLBACK v12; // rdx
  PVOID v13; // r8
  __int64 v14; // rdi
  const GUID *v15; // r9
  TLG_PENABLECALLBACK v16; // rdx
  PVOID v17; // r8
  const struct _TlgProvider_t *v18; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-A8h]
  double v26; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v27[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v29; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  void *v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  double *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v4 = 0LL;
  while ( v2 )
  {
    v5 = v2[2];
    v2 = (_QWORD *)*v2;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 56LL))(v5, &v24);
    if ( v6 < 0 )
    {
      if ( *(_DWORD *)(v5 + 40) == 2 )
      {
        v14 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v14 + 4) )
        {
          v23 = 0LL;
          if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v20, &v23) && v20 )
          {
            v23 = &qword_140085EE8;
            qword_140085EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
            qword_140085F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
            qword_140085EF0 = (__int64)qword_140085F00;
            byte_140085EF8 = 1;
            TraceLoggingRegisterEx(qword_140085F00, v16, v17);
            dword_140085EFC = 1;
            (*(void (__fastcall **)(__int64 *))(qword_140085EE8 + 8))(&qword_140085EE8);
            InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140085EE8);
          }
          v18 = (const struct _TlgProvider_t *)*((_QWORD *)v23 + 1);
          if ( *(_DWORD *)v18 > 2u )
          {
            v41 = 16LL;
            v40 = v14 + 8;
            v42 = &v21;
            v21 = v6;
            v43 = 4LL;
            TlgWrite(v18, &unk_14006F9E0, 0LL, v15, 4u, &pData);
          }
        }
      }
    }
    else
    {
      v4 += v24;
      if ( *(_DWORD *)(v5 + 40) == 2 )
      {
        v7 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v7 + 4) )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            Context = &qword_140085EE8;
            qword_140085EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
            qword_140085F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
            qword_140085EF0 = (__int64)qword_140085F00;
            byte_140085EF8 = 1;
            TraceLoggingRegisterEx(qword_140085F00, v12, v13);
            dword_140085EFC = 1;
            (*(void (__fastcall **)(__int64 *))(qword_140085EE8 + 8))(&qword_140085EE8);
            InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140085EE8);
          }
          v9 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v9 > 4u )
          {
            v36 = 16LL;
            v38 = 8LL;
            v35 = v7 + 8;
            v37 = &v26;
            v26 = (double)(int)v24 / 10000000.0;
            v27[1] = 4;
            v10 = *(unsigned __int16 **)(v9 + 8);
            v11 = *(_QWORD *)(v9 + 32);
            v29 = v10;
            v27[0] = 184549376;
            v28 = 0LL;
            v30 = *v10;
            v31 = 2;
            v32 = &unk_14006F9BA;
            v33 = 37;
            v34 = 1;
            v25 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwEventWriteTransfer(v11, v27, 0LL, 0LL, 4, &v29);
          }
        }
      }
    }
  }
  *a2 = v4;
  return 0LL;
}
