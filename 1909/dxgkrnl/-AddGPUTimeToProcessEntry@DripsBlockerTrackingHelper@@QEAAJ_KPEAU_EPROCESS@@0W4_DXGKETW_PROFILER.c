/*
 * XREFs of ?AddGPUTimeToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0241748
 * Callers:
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C024168C (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0W4_DXGKETW_PROFILER_TYPE@@.c)
 * Callees:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C0242464 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddGPUTimeToProcessEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 result; // rax
  unsigned int v8; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v9[5]; // [rsp+44h] [rbp-14h] BYREF

  v8 = 0;
  v9[0] = 0;
  a5 = 0;
  result = DripsBlockerTrackingHelper::DoGetProcessEntry(a1, a2, 0LL, a3, -1, &v8, v9, &a5);
  if ( (int)result >= 0 && !a5 )
    *(_QWORD *)(4720LL * v8 + a1 + 48) += a4;
  return result;
}
