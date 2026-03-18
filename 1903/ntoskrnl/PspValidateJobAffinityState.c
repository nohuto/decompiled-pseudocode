/*
 * XREFs of PspValidateJobAffinityState @ 0x1406E3170
 * Callers:
 *     PspInsertProcess @ 0x1406724A4 (PspInsertProcess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     PspCheckJobAccessState @ 0x1408C78AC (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspValidateJobAffinityState(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rcx

  v4 = 0;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v5 = *(_QWORD *)(a1 + 432);
  if ( !v5 || (v4 = PspCheckJobAccessState(v5, a2), v4 >= 0) )
    _InterlockedOr((volatile signed __int32 *)(a2 + 780), 0x4000000u);
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  return (unsigned int)v4;
}
