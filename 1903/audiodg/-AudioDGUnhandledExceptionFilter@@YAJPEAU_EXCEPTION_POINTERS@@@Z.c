/*
 * XREFs of ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x14002F700
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     atexit @ 0x140016148 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x140025E90 (TraceLoggingRegisterEx.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x14002FA58 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z @ 0x14003298C (-TrackAPOFailureUnhandled@CSystemAudioDeviceSharedBase@@QEAAXM@Z.c)
 */

__int64 __fastcall AudioDGUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  int v1; // edi
  unsigned int v2; // ebx
  const GUID *v3; // r9
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  const struct _TlgProvider_t *v6; // rcx
  CSystemAudioDeviceSharedBase **ValueAt; // rax
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  int v10; // [rsp+3Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v13; // [rsp+68h] [rbp+27h]
  __int64 v14; // [rsp+70h] [rbp+2Fh]

  v1 = qword_140087030;
  v2 = 0;
  if ( (_DWORD)qword_140087030 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_140086EE8;
      qword_140086EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_140086F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      qword_140086EF0 = (__int64)qword_140086F00;
      byte_140086EF8 = 1;
      TraceLoggingRegisterEx(qword_140086F00, v4, v5);
      dword_140086EFC = 1;
      (*(void (__fastcall **)(__int64 *))(qword_140086EE8 + 8))(&qword_140086EE8);
      InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140086EE8);
    }
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 2u )
    {
      v10 = v1;
      v13 = &v10;
      v14 = 4LL;
      TlgWrite(v6, &unk_14006F9B8, 0LL, v3, 3u, &pData);
    }
    if ( v1 )
    {
      do
      {
        ValueAt = (CSystemAudioDeviceSharedBase **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                                                     v6,
                                                     v2);
        CSystemAudioDeviceSharedBase::TrackAPOFailureUnhandled(*ValueAt, (float)v1);
        ++v2;
      }
      while ( v2 < v1 );
    }
  }
  return 0LL;
}
