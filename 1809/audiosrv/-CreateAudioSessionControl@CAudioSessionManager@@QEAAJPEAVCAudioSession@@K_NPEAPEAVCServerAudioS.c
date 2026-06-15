/*
 * XREFs of ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800041C0
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800040F0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800C82F0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800042C0 (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x1800042F0 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800B58C4 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::CreateAudioSessionControl(
        CAudioSessionManager *this,
        struct CAudioSession *a2,
        unsigned int a3,
        char a4,
        struct CServerAudioSessionControl **a5)
{
  CServerAudioSessionControl *v8; // rax
  __int64 v9; // r8
  CServerAudioSessionControl *v10; // rbx
  int v11; // edi

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0LL);
  }
  v8 = (CServerAudioSessionControl *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v10 = CServerAudioSessionControl::CServerAudioSessionControl(v8);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v11 = -2147024882;
    goto LABEL_17;
  }
  LOBYTE(v9) = a4;
  v11 = (*(__int64 (__fastcall **)(CServerAudioSessionControl *, _QWORD, __int64, struct CAudioSession *))(*(_QWORD *)v10 + 256LL))(
          v10,
          a3,
          v9,
          a2);
  if ( v11 < 0 )
  {
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1FEu, v11);
    goto LABEL_10;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13,
      (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
      (_DWORD)v10,
      0LL);
  }
  CServerAudioSessionControl::AddClientReference(v10);
  *a5 = v10;
LABEL_10:
  if ( v10 )
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v11;
}
