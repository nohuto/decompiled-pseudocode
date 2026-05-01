/*
 * XREFs of ?RmGameModeCpuSetManagerReleaseAllocation@@YAJPEAX0_K@Z @ 0x180061930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmGameModeCpuSetManagerReleaseAllocation(
        void *a1,
        struct _RM_CPU_SET_CLIENT_CONTEXT *a2,
        unsigned __int64 a3)
{
  return RmSrvCpuSetManagerReleaseAllocation(a2, a3);
}
