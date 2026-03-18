/*
 * XREFs of ?GetProcessEntry@DripsBlockerTrackingHelper@@AEAAE_KPEAD0PEAI@Z @ 0x1C020FCB8
 * Callers:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C020E988 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@P.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02116A4 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@.c)
 * Callees:
 *     <none>
 */

char __fastcall DripsBlockerTrackingHelper::GetProcessEntry(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        char *a3,
        SIZE_T a4,
        unsigned int *a5)
{
  char v5; // di
  _QWORD *v6; // rsi
  unsigned int v7; // ebx

  v5 = 0;
  v6 = (_QWORD *)((char *)this + 16);
  v7 = 0;
  while ( RtlCompareMemory((char *)this + 72 * v7 + 33, a3, a4) != a4 || *v6 != a2 )
  {
    ++v7;
    v6 += 9;
    if ( v7 >= 0x100 )
      return v5;
  }
  v5 = 1;
  *a5 = v7;
  return v5;
}
