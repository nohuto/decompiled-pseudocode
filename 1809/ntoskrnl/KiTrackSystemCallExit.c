/*
 * XREFs of KiTrackSystemCallExit @ 0x140845FE0
 * Callers:
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PerfInfoLogSysCallExit @ 0x1403125A0 (PerfInfoLogSysCallExit.c)
 */

__int64 __fastcall KiTrackSystemCallExit(_QWORD *a1, __int64 a2)
{
  void (__fastcall *v2)(_QWORD, _QWORD, __int64, __int64 *, int, _QWORD); // rax
  __int64 v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  if ( a1 && a1[7] && KiDynamicTraceEnabled )
  {
    _InterlockedAdd(&KiSystemServiceTraceCallbacksActive, 1u);
    v2 = (void (__fastcall *)(_QWORD, _QWORD, __int64, __int64 *, int, _QWORD))a1[7];
    if ( v2 )
      v2(a1[3], a1[8], 1LL, &v4, 1, 0LL);
    _InterlockedDecrement(&KiSystemServiceTraceCallbacksActive);
  }
  if ( (BYTE8(PerfGlobalGroupMask[0]) & 0x40) != 0 )
    PerfInfoLogSysCallExit(v4);
  return v4;
}
