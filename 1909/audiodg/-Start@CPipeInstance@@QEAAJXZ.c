/*
 * XREFs of ?Start@CPipeInstance@@QEAAJXZ @ 0x140004020
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140010110 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140002104 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040E8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140035BC8 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::Start(CPipeInstance *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 31) )
    return (unsigned int)v2;
  v3 = 0LL;
  v6 = 0LL;
  v7 = *((_QWORD *)this + 2);
  if ( !v7 )
    goto LABEL_6;
  while ( 1 )
  {
    v4 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v3, &v7);
    if ( *(_DWORD *)(v4 + 40) == 1 )
      break;
LABEL_4:
    if ( !v7 )
    {
      v3 = v6;
      goto LABEL_6;
    }
  }
  v2 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v4 + 32))(
         **(_QWORD **)(v4 + 32),
         &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
         &v6);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    if ( v2 >= 0 )
    {
      Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v6);
      goto LABEL_4;
    }
  }
  v3 = v6;
LABEL_6:
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
        &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
        (unsigned int)v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::Start", 0xFDFu, v2);
  }
  return (unsigned int)v2;
}
