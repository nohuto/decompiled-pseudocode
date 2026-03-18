/*
 * XREFs of PspSetBackgroundJobTree @ 0x1406E8FEC
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetBackgroundJobTree(_QWORD *Object, char a2)
{
  struct _ERESOURCE *v2; // rdi
  int v4; // eax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v6) = a2;
  v2 = (struct _ERESOURCE *)(Object + 7);
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 7), 1u);
  v4 = Object[163] & 0x400;
  if ( !(_BYTE)v6 )
  {
    if ( v4 )
      goto LABEL_3;
LABEL_11:
    ExReleaseResourceLite(v2);
    return 3221225485LL;
  }
  if ( v4 )
    goto LABEL_11;
LABEL_3:
  if ( (_BYTE)v6 )
    _interlockedbittestandset((volatile signed __int32 *)Object + 326, 0xAu);
  else
    _interlockedbittestandreset((volatile signed __int32 *)Object + 326, 0xAu);
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    (int)PspSetJobBackgroundCountCallback,
    0,
    (int)PspSetProcessBackgroundCountCallback,
    (__int64)&v6,
    5);
  ExReleaseResourceLite(v2);
  if ( !(_BYTE)v6 )
    PspEnumJobsAndProcessesInJobHierarchy(Object, 0, (int)PspBoostJobIoPriorityCallback, 0, 0LL, 0);
  return 0LL;
}
