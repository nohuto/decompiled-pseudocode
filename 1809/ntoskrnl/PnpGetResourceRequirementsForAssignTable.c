/*
 * XREFs of PnpGetResourceRequirementsForAssignTable @ 0x1406FC3D4
 * Callers:
 *     PnpAllocateResources @ 0x1406FC05C (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14083C5B4 (PnpReallocateResources.c)
 *     PnpQueryRebalanceWorker @ 0x1408408C8 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PipClearDevNodeFlags @ 0x1406E7780 (PipClearDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x1406FC794 (IopQueryDeviceResources.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14072F6C8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x140730064 (IopResourceRequirementsListToReqList.c)
 *     PnpFilterResourceRequirementsList @ 0x140740D10 (PnpFilterResourceRequirementsList.c)
 *     IopRearrangeReqList @ 0x140758EF4 (IopRearrangeReqList.c)
 */

__int64 __fastcall PnpGetResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2, int *a3)
{
  int v3; // edi
  unsigned __int64 v6; // rbx
  int v7; // eax
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  int DeviceResources; // eax
  void *v14; // rcx
  int v15; // ebp
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // eax
  void *v21; // rcx

  v3 = 0;
  *a3 = 0;
  if ( a1 < a2 )
  {
    v6 = a1 + 24;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 - 16);
      v8 = (_QWORD *)(v6 + 8);
      *(_QWORD *)(v6 + 8) = 0LL;
      if ( (v7 & 0x20) == 0 )
        break;
LABEL_13:
      v6 += 64LL;
      if ( v6 - 24 >= a2 )
      {
        v3 = *a3;
        return v3 == 0 ? 0xC0000001 : 0;
      }
    }
    *(_QWORD *)(v6 + 16) = 0LL;
    v9 = *(_QWORD *)(v6 - 24);
    *(_QWORD *)(v6 + 24) = 0LL;
    if ( v9 )
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
    else
      v10 = 0LL;
    ExAcquireFastMutex(&PiResourceListLock);
    if ( (*(_DWORD *)(v10 + 396) & 0x400) != 0 )
    {
      v21 = *(void **)(v10 + 440);
      if ( v21 )
      {
        ExFreePoolWithTag(v21, 0);
        *(_QWORD *)(v10 + 440) = 0LL;
        PipClearDevNodeFlags(v10, 512);
        *(_DWORD *)(v6 - 16) |= 0x400u;
      }
    }
    KeReleaseGuardedMutex(&PiResourceListLock);
    if ( !*(_QWORD *)v6 )
    {
      v11 = *(_QWORD *)(v10 + 440);
      if ( !v11 || (*(_DWORD *)(v10 + 396) & 0x200) != 0 )
      {
        DeviceResources = IopQueryDeviceResources(*(_QWORD *)(v6 - 24));
        if ( DeviceResources < 0 || !*(_QWORD *)v6 )
        {
          *(_DWORD *)(v6 + 32) = DeviceResources;
LABEL_12:
          *(_DWORD *)(v6 - 16) |= 0x20u;
          goto LABEL_13;
        }
        ExAcquireFastMutex(&PiResourceListLock);
        v14 = *(void **)(v10 + 440);
        if ( v14 )
        {
          ExFreePoolWithTag(v14, 0);
          PipClearDevNodeFlags(v10, 512);
        }
        *(_QWORD *)(v10 + 440) = *(_QWORD *)v6;
        KeReleaseGuardedMutex(&PiResourceListLock);
      }
      else
      {
        *(_QWORD *)v6 = v11;
        *(_DWORD *)(v6 - 12) = 4;
      }
    }
    if ( (*(_DWORD *)(v6 - 16) & 0x200) != 0 )
    {
      PnpFilterResourceRequirementsList(*(void **)v6);
      *(_DWORD *)(v6 - 16) &= ~0x200u;
    }
    v15 = IopResourceRequirementsListToReqList(v6 - 24, v6 + 8);
    if ( v15 >= 0 )
    {
      v16 = *v8;
      if ( *v8 )
      {
        IopRearrangeReqList(*v8);
        if ( *(_QWORD *)(v16 + 24) )
        {
          v19 = *(_DWORD *)(v16 + 32);
          v20 = 0;
          *(_DWORD *)(v6 + 32) = v15;
          if ( v19 >= 3 )
            v20 = v19;
          ++*a3;
          *(_DWORD *)(v6 - 8) = v20;
          goto LABEL_13;
        }
        PnpFreeResourceRequirementsForAssignTable(v6 - 24, v6 + 40, v17, v18);
        v15 = -1073741438;
      }
    }
    *(_DWORD *)(v6 + 32) = v15;
    goto LABEL_12;
  }
  return v3 == 0 ? 0xC0000001 : 0;
}
