/*
 * XREFs of ?Start@CPipeInstance@@QEAAJXZ @ 0x140004E94
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140004670 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140004E68 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140005DE0 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::Start(CPipeInstance *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 31) )
  {
    v3 = 0LL;
    v7 = 0LL;
    v4 = (_QWORD *)*((_QWORD *)this + 2);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      if ( *(_DWORD *)(v5 + 40) == 1 )
      {
        v2 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v5 + 32))(
               **(_QWORD **)(v5 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v7);
        if ( v2 < 0 || (v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7), v2 < 0) )
        {
          v3 = v7;
          break;
        }
        Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v7);
        v3 = v7;
      }
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    if ( v2 < 0 )
    {
      CPipeInstance::Stop(this);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          53LL,
          &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
          (unsigned int)v2);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Start", 0xFDEu, v2);
    }
  }
  return (unsigned int)v2;
}
