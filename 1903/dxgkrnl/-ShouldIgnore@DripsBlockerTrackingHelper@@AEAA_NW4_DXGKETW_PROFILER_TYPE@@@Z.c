/*
 * XREFs of ?ShouldIgnore@DripsBlockerTrackingHelper@@AEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0245F48
 * Callers:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C0241DE4 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0245534 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     <none>
 */

char __fastcall DripsBlockerTrackingHelper::ShouldIgnore(__int64 a1, int a2)
{
  int *v2; // rax
  int v3; // ecx
  int v5; // [rsp+8h] [rbp+8h] BYREF
  int v6; // [rsp+Ch] [rbp+Ch]

  v6 = HIDWORD(a1);
  v2 = &v5;
  v5 = 8017;
  v3 = 0;
  while ( a2 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v3 )
      return 0;
  }
  return 1;
}
