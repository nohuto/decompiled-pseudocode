/*
 * XREFs of PnpAllocateResources @ 0x1406FC05C
 * Callers:
 *     PnpAssignResourcesToDevices @ 0x1406FBF44 (PnpAssignResourcesToDevices.c)
 *     IopLegacyResourceAllocation @ 0x14072E084 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1400C5E00 (KeReleaseSemaphore.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1406E7780 (PipClearDevNodeFlags.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FC3D4 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopReleaseFilteredBootResources @ 0x14072EB78 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x14072F18C (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x14072F37C (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14072F6C8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopCommitConfiguration @ 0x1407565B4 (IopCommitConfiguration.c)
 *     PnpRebalance @ 0x140840B08 (PnpRebalance.c)
 */

__int64 __fastcall PnpAllocateResources(unsigned int a1, _DWORD *a2, char a3, _BYTE *a4)
{
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rbx
  int ResourceRequirementsForAssignTable; // ebp
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // r15d
  __int64 v15; // r8
  _DWORD *v16; // rax
  _QWORD *v17; // rcx
  unsigned int v18; // edi
  int *v19; // rcx
  __int64 v20; // rax
  int v21; // r15d
  _DWORD *v22; // rdi
  __int64 v23; // r14
  int BestConfiguration; // eax
  __int64 v25; // rdx
  int v26; // eax
  unsigned int v27; // eax
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int128 v33; // xmm5
  _DWORD *v34; // rcx
  unsigned __int64 v35; // rax
  int v36; // eax
  _DWORD *v37; // rcx
  unsigned __int64 v38; // rax
  _DWORD *i; // rdi
  _BYTE v40[16]; // [rsp+30h] [rbp-38h] BYREF
  size_t NumOfElements; // [rsp+80h] [rbp+18h] BYREF

  v4 = a1;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  LODWORD(NumOfElements) = v4;
  v9 = (unsigned __int64)&a2[16 * v4];
  ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(a2, v9, &NumOfElements);
  if ( ResourceRequirementsForAssignTable < 0 )
    goto LABEL_6;
  v12 = 0LL;
  v13 = 3221226029LL;
  v14 = 1;
  v15 = 64LL;
  if ( !BYTE1(PnpShutdownEvent.Limit) )
  {
    v16 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      while ( (int)v16[14] < 0 || *((_QWORD *)v16 + 3) )
      {
        v16 += 16;
        if ( (unsigned __int64)v16 >= v9 )
          goto LABEL_14;
      }
      v12 = 1LL;
    }
LABEL_14:
    if ( v16 != (_DWORD *)v9 && (unsigned __int64)a2 < v9 )
    {
      v34 = a2 + 2;
      v35 = ((unsigned __int64)((v4 << 6) - 1) >> 6) + 1;
      do
      {
        if ( (int)v34[12] < 0 || *((_QWORD *)v34 + 2) )
        {
          *v34 |= 0x20u;
          v34[12] = -1073741267;
        }
        v34 += 16;
        --v35;
      }
      while ( v35 );
    }
    if ( (_DWORD)v12 )
      goto LABEL_45;
  }
  v17 = a2;
  if ( (unsigned __int64)a2 < v9 )
  {
    while ( 1 )
    {
      v12 = *v17 ? *(_QWORD *)(*(_QWORD *)(*v17 + 312LL) + 40LL) : 0LL;
      if ( (*(_DWORD *)(v12 + 396) & 0x40) != 0 && v17[3] )
        break;
      v17 += 8;
      if ( (unsigned __int64)v17 >= v9 )
        goto LABEL_22;
    }
    v14 = 0;
  }
LABEL_22:
  if ( v17 == (_QWORD *)v9 || (unsigned __int64)a2 >= v9 )
  {
    v18 = NumOfElements;
  }
  else
  {
    v18 = NumOfElements;
    v19 = a2 + 2;
    do
    {
      v20 = *((_QWORD *)v19 - 1);
      if ( v20 )
        v12 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
      else
        v12 = 0LL;
      if ( (*(_DWORD *)(v12 + 396) & 0x40) == 0 || !*((_QWORD *)v19 + 2) )
      {
        v26 = *v19;
        if ( (*v19 & 0x20) == 0 )
        {
          v19[12] = -1073741267;
          *v19 = v26 | 0x20;
          --v18;
        }
      }
      v19 += 16;
    }
    while ( (unsigned __int64)(v19 - 2) < v9 );
  }
  if ( !v18 )
  {
    ResourceRequirementsForAssignTable = -1073741823;
    goto LABEL_45;
  }
  if ( v18 != (_DWORD)v4 )
  {
    v29 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      v12 = v9 - 64;
      do
      {
        if ( (v29[2] & 0x20) != 0 )
        {
          v9 -= 64LL;
          v30 = *(_OWORD *)v29;
          v31 = *((_OWORD *)v29 + 1);
          v32 = *((_OWORD *)v29 + 2);
          v33 = *((_OWORD *)v29 + 3);
          *(_OWORD *)v29 = *(_OWORD *)v12;
          *((_OWORD *)v29 + 1) = *(_OWORD *)(v12 + 16);
          *((_OWORD *)v29 + 2) = *(_OWORD *)(v12 + 32);
          *((_OWORD *)v29 + 3) = *(_OWORD *)(v12 + 48);
          *(_OWORD *)v12 = v30;
          *(_OWORD *)(v12 + 16) = v31;
          *(_OWORD *)(v12 + 32) = v32;
          *(_OWORD *)(v12 + 48) = v33;
          v12 -= 64LL;
        }
        else
        {
          v29 += 16;
        }
      }
      while ( (unsigned __int64)v29 < v9 );
    }
  }
  if ( v18 > 1 )
  {
    v27 = 0;
    v28 = a2 + 5;
    do
    {
      *v28 = v27++;
      v28 += 16;
    }
    while ( v27 < v18 );
    qsort(a2, v18, 0x40uLL, PnpCompareResourceRequestPriority);
  }
  if ( v14 )
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration(a2, v18, v40, v13);
  else
    ResourceRequirementsForAssignTable = -1073741823;
  if ( ResourceRequirementsForAssignTable >= 0 )
  {
    ResourceRequirementsForAssignTable = IopCommitConfiguration(v40, v12, v15, v13);
    for ( i = a2; (unsigned __int64)i < v9; i += 16 )
    {
      if ( ResourceRequirementsForAssignTable < 0 )
        i[14] = -1073741800;
      else
        PnpBuildCmResourceLists(i, i + 16, 0LL);
    }
    goto LABEL_44;
  }
  v21 = 0;
  v22 = a2;
  if ( (unsigned __int64)a2 >= v9 )
    goto LABEL_44;
  while ( 1 )
  {
    if ( *(_QWORD *)v22 )
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 312LL) + 40LL);
    else
      v23 = 0LL;
    BestConfiguration = PnpFindBestConfiguration(v22, 1LL, v40, v13);
    ResourceRequirementsForAssignTable = BestConfiguration;
    if ( BestConfiguration >= 0 )
    {
      v21 = 1;
      ResourceRequirementsForAssignTable = IopCommitConfiguration(v40, v25, v15, v13);
      if ( ResourceRequirementsForAssignTable < 0 )
        v22[14] = -1073741800;
      else
        PnpBuildCmResourceLists(v22, v22 + 16, 0LL);
      goto LABEL_42;
    }
    if ( BestConfiguration == -1073741670 )
      goto LABEL_43;
    if ( !v21 && (a2[2] & 0x80u) == 0 )
      break;
    v22[2] |= 0x20u;
    v22[14] = -1073741267;
LABEL_42:
    v22 += 16;
    if ( (unsigned __int64)v22 >= v9 )
      goto LABEL_43;
  }
  PipSetDevNodeFlags(v23, 0x40000);
  ResourceRequirementsForAssignTable = PnpRebalance(v23, v22, 1LL, 0LL);
  PipClearDevNodeFlags(v23, 0x40000);
  if ( ResourceRequirementsForAssignTable < 0 )
  {
    v36 = -1073741800;
    if ( ResourceRequirementsForAssignTable == -1073739512 )
      v36 = -1073739512;
    v22[14] = v36;
    goto LABEL_42;
  }
  if ( a4 )
    *a4 = 1;
  v22 += 16;
LABEL_43:
  if ( (unsigned __int64)v22 < v9 )
  {
    if ( ResourceRequirementsForAssignTable == -1073741670 )
    {
      do
      {
        v22[14] = -1073741670;
        v22 += 16;
      }
      while ( (unsigned __int64)v22 < v9 );
    }
    else
    {
      v37 = v22 + 2;
      v38 = ((v9 - (unsigned __int64)v22 - 1) >> 6) + 1;
      do
      {
        *v37 |= 0x20u;
        v37[12] = -1073741267;
        v37 += 16;
        --v38;
      }
      while ( v38 );
    }
  }
LABEL_44:
  IopReleaseFilteredBootResources(a2, v9, v15, v13);
LABEL_45:
  PnpFreeResourceRequirementsForAssignTable(a2, v9, v15, v13);
LABEL_6:
  if ( !a3 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ResourceRequirementsForAssignTable;
}
