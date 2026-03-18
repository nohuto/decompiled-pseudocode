/*
 * XREFs of VerifierInitSystem @ 0x140A1E060
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x14076A730 (PsSetCreateProcessNotifyRoutine.c)
 *     VfPendingInitPhase1 @ 0x140972DB8 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x14097D548 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x14097D890 (VfSettingsMiscellaneousChecksInitPhase1.c)
 *     ViInitSystemPhase0 @ 0x140A1E0C0 (ViInitSystemPhase0.c)
 */

__int64 VerifierInitSystem()
{
  __int64 result; // rax

  if ( !(_DWORD)InitializationPhase )
    return ViInitSystemPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 4uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  if ( ViVerifierEnabled )
  {
    VfPoolInitPhase1();
    VfSettingsMiscellaneousChecksInitPhase1();
    VfPendingInitPhase1();
  }
  PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
  result = (unsigned int)ViImageExecutionOptions;
  if ( ViImageExecutionOptions == 1 )
    _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, 1u);
  return result;
}
