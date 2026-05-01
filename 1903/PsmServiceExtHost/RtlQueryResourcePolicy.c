/*
 * XREFs of RtlQueryResourcePolicy @ 0x180042A80
 * Callers:
 *     ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x180042970 (-HampSystemGetQuiesceSerializationConfig@@YA-AW4_HAM_QUIESCE_SERIALIZATION@@XZ.c)
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x1800437A4 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 *     RhpCaptureSnapshots @ 0x1800800C4 (RhpCaptureSnapshots.c)
 * Callees:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x180042AF0 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180042B4C (RtlpQueryDiskSpeedPolicy.c)
 *     RtlGetNtSystemRoot_0 @ 0x180048254 (RtlGetNtSystemRoot_0.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18007FB08 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18007FD30 (RtlpQueryDiskWriteConstraintPolicy.c)
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
