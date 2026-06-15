/*
 * XREFs of ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140003DB4
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C3C0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000C8A0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14000D290 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003C100 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14003E5CC (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140003E2C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ @ 0x140003ED4 (-RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004970 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::Initialize(CPipeInstance *this)
{
  int v2; // edi

  if ( !*(_QWORD *)this && !*((_DWORD *)this + 2)
    || *((_DWORD *)this + 28) != 3 && !*((_DWORD *)this + 33) && (*((_BYTE *)this + 136) & 8) == 0 )
  {
    v2 = CPipeInstance::ResolveFormatConflictsRightLeft(this);
    if ( v2 < 0 )
    {
LABEL_6:
      if ( v2 >= 0 )
        return (unsigned int)v2;
      goto LABEL_14;
    }
LABEL_5:
    CPipeInstance::RemoveDummyProcessNodes(this);
    v2 = CPipeInstance::FixupStreamPipe(this);
    goto LABEL_6;
  }
  v2 = CPipeInstance::ResolveFormatConflictsLeftRight(this);
  if ( v2 >= 0 )
    goto LABEL_5;
LABEL_14:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      36LL,
      &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids,
      (unsigned int)v2);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::Initialize", 0x9EAu, v2);
  return (unsigned int)v2;
}
