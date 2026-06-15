/*
 * XREFs of ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B260
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400063F0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003FCB0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004192C (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B36C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B420 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D280 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140010F90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::Initialize(CPipeInstance *this)
{
  int v2; // ebx
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rdi
  __int64 *v6; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  bool v10; // zf

  if ( (*(_QWORD *)this || *((_DWORD *)this + 2))
    && (*((_DWORD *)this + 28) == 3 || *((_DWORD *)this + 32) || (*((_BYTE *)this + 132) & 8) != 0) )
  {
    v2 = CPipeInstance::ResolveFormatConflictsLeftRight(this);
    if ( v2 < 0 )
      goto LABEL_25;
  }
  else
  {
    v2 = CPipeInstance::ResolveFormatConflictsRightLeft(this);
    if ( v2 < 0 )
    {
LABEL_25:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          36LL,
          &WPP_48d0519fd63337424d216177f8c49edf_Traceguids,
          (unsigned int)v2);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::Initialize", 0x9E6u, v2);
      return (unsigned int)v2;
    }
  }
  v3 = (_QWORD *)*((_QWORD *)this + 3);
  while ( v3 )
  {
    v4 = v3;
    v5 = v3[2];
    v6 = v3 + 1;
    v3 = (_QWORD *)v3[1];
    if ( *(_DWORD *)(v5 + 40) == 4 )
    {
      v8 = *v4;
      if ( v4 == *((_QWORD **)this + 2) )
        *((_QWORD *)this + 2) = v8;
      else
        *v3 = v8;
      v9 = *v6;
      if ( v4 == *((_QWORD **)this + 3) )
        *((_QWORD *)this + 3) = v9;
      else
        *(_QWORD *)(*v4 + 8LL) = v9;
      *v4 = *((_QWORD *)this + 6);
      v10 = (*((_QWORD *)this + 4))-- == 1LL;
      *((_QWORD *)this + 6) = v4;
      if ( v10 )
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((char *)this + 16);
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
    }
  }
  v2 = CPipeInstance::FixupStreamPipe(this);
  if ( v2 < 0 )
    goto LABEL_25;
  return (unsigned int)v2;
}
