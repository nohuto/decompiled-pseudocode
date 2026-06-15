/*
 * XREFs of ?Stop@CPipeInstance@@QEAAJXZ @ 0x140035BD8
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140004030 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140038C80 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140002104 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::Stop(CPipeInstance *this)
{
  _QWORD *v1; // rax
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  v2 = 0;
  v3 = 0LL;
  v7 = 0LL;
  v8 = v1;
  if ( v1 )
  {
    do
    {
      v4 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v3, &v8);
      if ( *(_DWORD *)(v4 + 40) == 1 )
      {
        v5 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v4 + 32))(
               **(_QWORD **)(v4 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v7);
        if ( v5 < 0 || (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7), v5 < 0) )
          v2 = v5;
        Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v7);
      }
    }
    while ( v8 );
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x36u,
          (__int64)&WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
          v2);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Stop", 0x101Fu, v2);
    }
    v3 = v7;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v2;
}
