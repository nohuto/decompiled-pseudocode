/*
 * XREFs of ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0241320
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0124494 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0qqsz @ 0x1C0024684 (McTemplateK0qqsz.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ @ 0x1C0240F04 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ.c)
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C0241DE4 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z @ 0x1C0242F18 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z.c)
 *     ?EtwProfilerTypeName@DXGGLOBAL@@SAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C0298BF4 (-EtwProfilerTypeName@DXGGLOBAL@@SAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddProcessEntry(
        DripsBlockerTrackingHelper *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int ProcessEntry; // r15d
  unsigned int v7; // edi
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  _BYTE v17[4]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-14h] BYREF
  unsigned int v19[4]; // [rsp+48h] [rbp-10h] BYREF

  v18 = 0;
  v19[0] = 0;
  v17[0] = 0;
  ProcessEntry = DripsBlockerTrackingHelper::DoGetProcessEntry(a1, a2, a3, a4, a5, &v18, v19, v17);
  if ( ProcessEntry >= 0 && !v17[0] )
  {
    v7 = v19[0];
    v8 = 4720LL * v18;
    v9 = v8 + 72LL * v19[0];
    v10 = v8 + 72 * (v19[0] + 2LL);
    ++*(_DWORD *)((char *)a1 + v10);
    ++*(_DWORD *)((char *)a1 + v9 + 148);
    *(_DWORD *)((char *)a1 + v9 + 176) += *((_BYTE *)a1 + 302104) != 0;
    if ( *(_DWORD *)((char *)a1 + v10) == 1 )
    {
      DripsBlockerTrackingHelper::EnableEntryAccounting(a1, v18, v7, 1);
      if ( bTracingEnabled )
      {
        DXGGLOBAL::GetGlobal(v12, v11);
        v13 = (const wchar_t *)DXGGLOBAL::EtwProfilerTypeName(*(unsigned int *)((char *)a1 + v9 + 172), v19);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          McTemplateK0qqsz((__int64)a1 + v8 + 8, v14, v15, v18, v7, (const GUID *)((char *)a1 + v8 + 8), v13);
      }
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(a1);
    }
  }
  return (unsigned int)ProcessEntry;
}
