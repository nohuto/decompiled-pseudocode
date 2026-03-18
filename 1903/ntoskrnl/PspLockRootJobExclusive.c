/*
 * XREFs of PspLockRootJobExclusive @ 0x140615C20
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405B30A0 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetNetRateControl @ 0x1408C864C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall PspLockRootJobExclusive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  for ( i = *(_QWORD *)(a1 + 1080); ; i = *(_QWORD *)(a1 + 1080) )
  {
    v7 = i;
    ExAcquireResourceExclusiveLite((PERESOURCE)(i + 56), 1u);
    if ( v7 == *(_QWORD *)(a1 + 1080) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  result = v7;
  *a3 = v7;
  return result;
}
