/*
 * XREFs of RtlQueryResourcePolicy @ 0x180041B90
 * Callers:
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180041954 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180043A4C (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 *     RhpCaptureSnapshots @ 0x180074094 (RhpCaptureSnapshots.c)
 * Callees:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x180041C00 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180041C5C (RtlpQueryDiskSpeedPolicy.c)
 *     RtlGetNtSystemRoot_0 @ 0x1800487F4 (RtlGetNtSystemRoot_0.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180073AD8 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x180073D00 (RtlpQueryDiskWriteConstraintPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  int v6; // ebx
  __int64 NtSystemRoot_0; // rax
  const wchar_t *v9; // rax

  if ( !a3 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, RtlpTestHookInitialize, 0LL, 0LL);
  if ( !a1 )
    return RtlpQueryPhysicalMemoryPolicy(a3);
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        NtSystemRoot_0 = RtlGetNtSystemRoot_0();
        return RtlpQueryDiskWriteConstraintPolicy(NtSystemRoot_0, a3);
      }
      else
      {
        return 3221225475LL;
      }
    }
    else
    {
      return RtlpQueryDiskSpeedPolicy(a3);
    }
  }
  else
  {
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v9 = L"C:\\data\\programs\\windowsapps";
    else
      v9 = (const wchar_t *)RtlGetNtSystemRoot_0();
    return RtlpQueryDiskSpacePolicy(v9, a3);
  }
}
