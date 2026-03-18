/*
 * XREFs of PspSetJobLimitsJobPreCallback @ 0x140697130
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     PspSetEffectiveJobLimits @ 0x140697164 (PspSetEffectiveJobLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPreCallback(__int64 a1, __int64 a2)
{
  PspSetEffectiveJobLimits(a1, a2);
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14042BDB0, 0LL);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x100u);
  }
  return 0LL;
}
