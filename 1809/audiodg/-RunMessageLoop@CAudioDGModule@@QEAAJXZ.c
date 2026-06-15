/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140013F48
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140013FDC (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140019808 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     McTemplateU0q @ 0x1400327B4 (McTemplateU0q.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this, __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rcx
  DWORD v5; // edi
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r9
  HANDLE CurrentProcess; // rax
  HANDLE Handles[2]; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids);
  }
  Handles[0] = this[15];
  Handles[1] = this[17];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0q(v3, a2, *((unsigned int *)this + 38));
  do
  {
    v5 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v5 == 1 )
    {
      *((_BYTE *)this + 148) = 1;
      v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                            v4,
                                            lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v6 > 2u && TlgKeywordOn(v6, 0x400000000000uLL) )
        TlgWrite(v7, &unk_140071D94, 0LL, v8, 2u, &pData);
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0x64u);
    }
  }
  while ( v5 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids);
  }
  return 0LL;
}
