/*
 * XREFs of ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140042974
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400102E0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11@Z @ 0x140041AC0 (-PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetHistoryBufferManager(struct CAudioHistoryBufferManager **a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  if ( InitOnceExecuteOnce(&InitOnce, (PINIT_ONCE_FN)CreateHistoryBufferManager, 0LL, 0LL) )
  {
    *a1 = (struct CAudioHistoryBufferManager *)lpCriticalSection;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiohistorybuffermanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
