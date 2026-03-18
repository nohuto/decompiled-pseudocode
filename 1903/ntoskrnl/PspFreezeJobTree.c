/*
 * XREFs of PspFreezeJobTree @ 0x1406DBB80
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x1406DBB80 (PspFreezeJobTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreezeJobTree @ 0x1406DBB80 (PspFreezeJobTree.c)
 *     PspDispatchWakeNotification @ 0x1406DBDD0 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1406DBE44 (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspFreezeJobTree(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // r9
  int v6; // eax
  int v8; // ecx
  int v9; // ecx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-29h] BYREF
  _OWORD v16[5]; // [rsp+50h] [rbp-19h] BYREF

  v15[1] = 0LL;
  v14 = 0LL;
  memset(v16, 0, sizeof(v16));
  v15[0] = a2;
  v4 = 0;
  LODWORD(v13) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  v6 = *(_DWORD *)v15[0];
  if ( (*(_DWORD *)v15[0] & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 1304) & 0x200;
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( v8 )
        goto LABEL_35;
    }
    else if ( !v8 )
    {
      goto LABEL_35;
    }
  }
  if ( (v6 & 4) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 1304) & 0x80000;
    if ( *(_BYTE *)(a2 + 5) )
    {
      if ( !v9 )
        goto LABEL_3;
    }
    else if ( v9 )
    {
      goto LABEL_3;
    }
LABEL_35:
    LODWORD(v13) = -1073741811;
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    return (unsigned int)v13;
  }
LABEL_3:
  if ( (v6 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 1304) & 0x800) != 0 )
    {
      LOBYTE(v5) = 1;
      PspComputeReportWakeFilter(a1, &v14, a2 + 8, v5);
      if ( v14 )
      {
        v10 = *(_OWORD *)(a1 + 896);
        v16[1] = *(_OWORD *)(a1 + 880);
        v11 = *(_OWORD *)(a1 + 912);
        v16[2] = v10;
        v12 = *(_OWORD *)(a1 + 928);
        v16[3] = v11;
        v16[4] = v12;
      }
    }
    *(_QWORD *)(a1 + 952) = *(_QWORD *)(a2 + 8);
    v6 = *(_DWORD *)a2;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 9u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1304), 9u);
    v6 = *(_DWORD *)a2;
    v4 = 5;
  }
  if ( (v6 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 0x13u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1304), 0x13u);
    v4 = 5;
  }
  if ( v4 )
    PspEnumJobsAndProcessesInJobHierarchy(
      (_QWORD *)a1,
      (int)PspSetJobFreezeCountCallback,
      0,
      (int)PspSetProcessFreezeStateCallback,
      (__int64)v15,
      v4);
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( v4 )
  {
    PspEnumJobsAndProcessesInJobHierarchy((_QWORD *)a1, 0, (int)PspExecuteJobFreezeThawCallback, 0, (__int64)&v13, 0);
    if ( (int)v13 < 0 )
    {
      *(_DWORD *)a2 &= ~4u;
      LODWORD(v16[0]) = 4;
      BYTE5(v16[0]) = 0;
      PspFreezeJobTree(a1, v16);
      LODWORD(v13) = 262;
    }
  }
  PspDispatchWakeNotification((PVOID)a1);
  return (unsigned int)v13;
}
