/*
 * XREFs of NtUserGetPointerFrameTimes @ 0x1C0118450
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C016ACEC (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 */

__int64 __fastcall NtUserGetPointerFrameTimes(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // r15
  int PointerFrameTimesInternal; // ebx
  __int64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  CTouchProcessor *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  v7 = EnterSharedCrit(0, 1);
  PointerFrameTimesInternal = 0;
  if ( !a1 || HIWORD(a1) || (v9 = a2 - 1, (unsigned int)v9 > 0x63) || !a3 || a1 == 1 )
  {
    UserSetLastError(87LL, v6);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
    ProbeForWrite(a3, 32LL * a2, CurrentProcessWow64Process != 0 ? 1 : 4);
    PointerFrameTimesInternal = CTouchProcessor::GetPointerFrameTimesInternal(
                                  v11,
                                  v7,
                                  a1,
                                  a2,
                                  (struct tagTELEMETRY_POINTER_FRAME_TIMES *)a3);
  }
  UserSessionSwitchLeaveCrit(v13, v12);
  return PointerFrameTimesInternal;
}
