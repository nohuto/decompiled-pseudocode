/*
 * XREFs of NtUserGetPointerFrameArrivalTimes @ 0x1C00EF110
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z @ 0x1C00A9618 (--0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z.c)
 *     ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C013BEFC (-GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z.c)
 */

__int64 __fastcall NtUserGetPointerFrameArrivalTimes(int a1, unsigned int a2, volatile void *a3)
{
  __int64 v6; // rcx
  int PointerFrameArrivalTimesInternal; // ebx
  __int64 CurrentProcessWow64Process; // rax
  CTouchProcessor *v9; // rcx
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  struct tagTHREADINFO *v12; // [rsp+88h] [rbp+20h] BYREF

  EnterLeaveCritSharedPti::EnterLeaveCritSharedPti((EnterLeaveCritSharedPti *)&v11, &v12, (__int64)a3);
  PointerFrameArrivalTimesInternal = 0;
  if ( !a1 || HIWORD(a1) || a2 - 1 > 0x63 || !a3 || a1 == 1 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
    ProbeForWrite(a3, 8LL * a2, CurrentProcessWow64Process != 0 ? 1 : 4);
    PointerFrameArrivalTimesInternal = CTouchProcessor::GetPointerFrameArrivalTimesInternal(
                                         v9,
                                         v12,
                                         a1,
                                         a2,
                                         (unsigned __int64 *)a3);
  }
  UserSessionSwitchLeaveCrit();
  return PointerFrameArrivalTimesInternal;
}
