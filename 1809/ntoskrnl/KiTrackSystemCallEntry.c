/*
 * XREFs of KiTrackSystemCallEntry @ 0x140845EE0
 * Callers:
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PerfInfoLogSysCallEntry @ 0x140312510 (PerfInfoLogSysCallEntry.c)
 *     KiSystemServiceTraceTableCompareFunction @ 0x140845EC4 (KiSystemServiceTraceTableCompareFunction.c)
 */

__int64 __fastcall KiTrackSystemCallEntry(unsigned __int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // r10
  __int64 v9; // rbx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, __int64, int, __int64); // rax

  v8 = *(_QWORD *)(KiSystemServiceTraceCallbackTable + 8);
  v9 = *(_QWORD *)KiSystemServiceTraceCallbackTable;
  if ( (v8 & 1) != 0 && v9 )
    v9 ^= KiSystemServiceTraceCallbackTable;
  v10 = v8 & 1;
  if ( v9 )
  {
    do
    {
      v11 = KiSystemServiceTraceTableCompareFunction(a1, v9);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        v12 = *(_QWORD *)v9;
      }
      if ( v10 && v12 )
        v9 ^= v12;
      else
        v9 = v12;
    }
    while ( v9 );
    if ( v9 && *(_QWORD *)(v9 + 40) && KiDynamicTraceEnabled )
    {
      _InterlockedIncrement(&KiSystemServiceTraceCallbacksActive);
      v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, __int64))(v9 + 40);
      if ( v13 )
        v13(*(_QWORD *)(v9 + 24), *(_QWORD *)(v9 + 48), *(unsigned int *)(v9 + 32), a2, a3, a4);
      _InterlockedDecrement(&KiSystemServiceTraceCallbacksActive);
    }
  }
  if ( (BYTE8(PerfGlobalGroupMask[0]) & 0x40) != 0 )
    PerfInfoLogSysCallEntry(a1);
  return v9;
}
