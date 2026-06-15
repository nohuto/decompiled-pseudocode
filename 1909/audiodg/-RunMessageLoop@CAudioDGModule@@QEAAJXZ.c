/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14002B804
 * Callers:
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14002B798 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     atexit @ 0x140016558 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x140025D60 (TraceLoggingRegisterEx.c)
 *     McTemplateU0q @ 0x14002BDDC (McTemplateU0q.c)
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this, __int64 a2)
{
  void *v3; // rcx
  DWORD v4; // edi
  TLG_PENABLECALLBACK v5; // rdx
  PVOID v6; // r8
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r9
  HANDLE CurrentProcess; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-58h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-50h] BYREF
  HANDLE Handles[2]; // [rsp+40h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-38h] BYREF

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_096cc5c6496f370e991444f5a2f987a3_Traceguids);
  }
  Handles[0] = this[15];
  Handles[1] = this[17];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0q(v3, a2, *((unsigned int *)this + 38));
  do
  {
    v4 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v4 == 1 )
    {
      Context = 0LL;
      *((_BYTE *)this + 148) = 1;
      if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_140085EE8;
        qword_140085EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_140085F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        qword_140085EF0 = (__int64)qword_140085F00;
        byte_140085EF8 = v4;
        TraceLoggingRegisterEx(qword_140085F00, v5, v6);
        dword_140085EFC = v4;
        (*(void (__fastcall **)(__int64 *))(qword_140085EE8 + 8))(&qword_140085EE8);
        InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140085EE8);
      }
      v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v7 > 2u && TlgKeywordOn(v7, 0x400000000000uLL) )
        TlgWrite(v8, &unk_14006F81C, 0LL, v9, 2u, &pData);
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0x64u);
    }
  }
  while ( v4 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_096cc5c6496f370e991444f5a2f987a3_Traceguids);
  }
  return 0LL;
}
