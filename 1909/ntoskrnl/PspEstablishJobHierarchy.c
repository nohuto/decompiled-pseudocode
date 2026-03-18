/*
 * XREFs of PspEstablishJobHierarchy @ 0x1406888B4
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140687DF0 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x14068917C (PspAssignProcessToJob.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400C84AC (IoSetDiskIoAttributionOnProcess.c)
 *     PsGetProcessSessionId @ 0x1400C8670 (PsGetProcessSessionId.c)
 *     KeRemoveSchedulingGroup @ 0x140114634 (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x140114808 (KeInsertSchedulingGroup.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     MmLinkJobProcess @ 0x140688B5C (MmLinkJobProcess.c)
 *     PspBindProcessSessionToJob @ 0x140688D60 (PspBindProcessSessionToJob.c)
 *     PspSetEffectiveJobLimits @ 0x14068A6D4 (PspSetEffectiveJobLimits.c)
 *     PspUnlinkJobProcess @ 0x14068A9D0 (PspUnlinkJobProcess.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406BD39C (PspAddSchedulingGroupToJobChain.c)
 *     PspEstablishDfssHierarchy @ 0x1408C7330 (PspEstablishDfssHierarchy.c)
 *     PspSetEffectiveRateControlJob @ 0x1408C7A18 (PspSetEffectiveRateControlJob.c)
 */

__int64 __fastcall PspEstablishJobHierarchy(char *Object, __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // esi
  __int64 v9; // rcx
  _QWORD *PoolWithTag; // r15
  unsigned __int64 v12; // r14
  unsigned __int16 *v13; // rcx
  __int64 v14; // rax
  PVOID v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  char v18; // al
  int i; // r8d
  __int64 v20; // rax
  void *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 == 3 )
      {
        PspUnlinkJobProcess(a3, a2);
        MmLinkJobProcess(Object, a2);
        ObfReferenceObjectWithTag(Object, 0x73507350u);
        ObfDereferenceObjectWithTag((PVOID)a3, 0x73507350u);
        v23 = *((_QWORD *)Object + 167);
        if ( !*((_DWORD *)Object + 333) )
        {
          if ( !v23 )
            goto LABEL_67;
          v23 = *(_QWORD *)(v23 + 1336);
        }
        IoSetDiskIoAttributionOnProcess(v23, a2);
        goto LABEL_67;
      }
      if ( a4 == 4 || a4 == 5 )
        goto LABEL_13;
      if ( a4 != 6 )
      {
        if ( a4 != 7 )
        {
          v8 = -1073741811;
          goto LABEL_6;
        }
LABEL_13:
        PoolWithTag = 0LL;
        v12 = *(_QWORD *)(a3 + 1104) + 1LL;
        if ( v12 > 2 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v12 - 16, 0x624A7350u);
          if ( !PoolWithTag )
            return 3221225626LL;
        }
        if ( a4 - 4 <= 1 )
        {
          v8 = PspBindProcessSessionToJob(Object, a2);
          if ( v8 < 0 )
            goto LABEL_39;
        }
        v13 = (unsigned __int16 *)*((_QWORD *)Object + 127);
        if ( v13 )
        {
          KeRemoveSchedulingGroup(v13);
          if ( (*(_DWORD *)(a3 + 1304) & 0x20) == 0 )
          {
            v8 = PspAddSchedulingGroupToJobChain(a3, 0LL);
            if ( v8 < 0 )
            {
              KeInsertSchedulingGroup(
                *((_QWORD *)Object + 126) + 128LL,
                *(_QWORD *)(*((_QWORD *)Object + 126) + 128LL),
                0LL);
LABEL_39:
              if ( PoolWithTag )
                ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
              goto LABEL_6;
            }
          }
          KeInsertSchedulingGroup(
            *((_QWORD *)Object + 126) + 128LL,
            *(_QWORD *)(*((_QWORD *)Object + 126) + 128LL),
            *(_QWORD *)(a3 + 1008) + 128LL);
        }
        else
        {
          v14 = *(_QWORD *)(a3 + 1016);
          if ( v14 )
            *((_QWORD *)Object + 127) = v14;
        }
        v15 = Object;
        if ( a4 != 4 )
          v15 = (PVOID)a3;
        ObfReferenceObjectWithTag(v15, 0x73507350u);
        v16 = *(_QWORD **)(a3 + 1064);
        v17 = Object + 1040;
        if ( *v16 != a3 + 1056 )
          __fastfail(3u);
        *v17 = a3 + 1056;
        *((_QWORD *)Object + 131) = v16;
        *v16 = v17;
        *(_QWORD *)(a3 + 1064) = v17;
        *((_QWORD *)Object + 134) = a3;
        *((_QWORD *)Object + 135) = *(_QWORD *)(a3 + 1080);
        v18 = *(_BYTE *)(a3 + 874) + 1;
        *((_QWORD *)Object + 138) = v12;
        Object[874] = v18;
        if ( v12 > 2 )
        {
          if ( v12 > 3 )
          {
            v22 = *(_QWORD *)(a3 + 1104) - 2LL;
            if ( *(_QWORD *)(a3 + 1104) != 2LL )
            {
              do
              {
                PoolWithTag[v22] = *(_QWORD *)(*(_QWORD *)(a3 + 1112) + 8 * v22 - 8);
                --v22;
              }
              while ( v22 );
            }
          }
          *PoolWithTag = *(_QWORD *)(a3 + 1072);
          *((_QWORD *)Object + 139) = PoolWithTag;
          PoolWithTag = 0LL;
        }
        if ( a4 == 4 )
        {
          PspUnlinkJobProcess(a3, a2);
          MmLinkJobProcess(Object, a2);
        }
        PspSetEffectiveJobLimits(Object, 0LL);
        *((_DWORD *)Object + 214) += *(_DWORD *)(a3 + 856);
        *((_DWORD *)Object + 216) += *(_DWORD *)(a3 + 864);
        *((_DWORD *)Object + 215) += *(_DWORD *)(a3 + 860);
        *((_DWORD *)Object + 217) += *(_DWORD *)(a3 + 868);
        *((_QWORD *)Object + 195) = *(_QWORD *)(a3 + 1560);
        if ( (*(_DWORD *)(a3 + 1304) & 0x1841000) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 326, *(_DWORD *)(a3 + 1304) & 0x1841000);
        for ( i = 0; i < 3; ++i )
        {
          if ( (unsigned int)(i - 1) > 1 && *(_QWORD *)(a3 + 832) )
            PspSetEffectiveRateControlJob(Object);
        }
        if ( *(_DWORD *)(a3 + 1332) )
        {
          v20 = a3;
        }
        else
        {
          v20 = *(_QWORD *)(a3 + 1336);
          if ( v20 )
            goto LABEL_60;
        }
        if ( !v20 )
        {
          if ( *((_DWORD *)Object + 333) && a4 == 4 )
            IoSetDiskIoAttributionOnProcess(*((_QWORD *)Object + 167), a2);
          goto LABEL_34;
        }
LABEL_60:
        v25 = v20;
        LOBYTE(v26) = 1;
        PspEnumJobsAndProcessesInJobHierarchy(Object, (int)PspSetJobIoAttributionJobPreCallback, 0, 0, (__int64)&v24, 5);
LABEL_34:
        v21 = *(void **)(a3 + 1544);
        if ( v21 )
        {
          ObfReferenceObjectWithTag(v21, 0x624A7350u);
          *((_QWORD *)Object + 193) = *(_QWORD *)(a3 + 1544);
          *((_QWORD *)Object + 194) = *(_QWORD *)(a3 + 1552);
        }
        if ( a4 == 7 )
          _interlockedbittestandset((volatile signed __int32 *)Object + 327, 0);
        v8 = 0;
        goto LABEL_39;
      }
      _interlockedbittestandset((volatile signed __int32 *)Object + 327, 0);
    }
LABEL_67:
    v8 = 0;
    goto LABEL_6;
  }
  v8 = PspBindProcessSessionToJob(Object, a2);
  if ( v8 >= 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x73507350u);
    MmLinkJobProcess(Object, a2);
  }
  v9 = *((_QWORD *)Object + 167);
  if ( !*((_DWORD *)Object + 333) )
  {
    if ( !v9 )
      goto LABEL_6;
    v9 = *(_QWORD *)(v9 + 1336);
  }
  IoSetDiskIoAttributionOnProcess(v9, a2);
LABEL_6:
  if ( a2 && v8 >= 0 && PsCpuFairShareEnabled )
  {
    if ( (unsigned int)PsGetProcessSessionId(a2) )
      PspEstablishDfssHierarchy(Object, a2, a4);
  }
  return (unsigned int)v8;
}
