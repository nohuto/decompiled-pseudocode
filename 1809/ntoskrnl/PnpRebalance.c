/*
 * XREFs of PnpRebalance @ 0x140840B08
 * Callers:
 *     PnpProcessRebalance @ 0x14028BA04 (PnpProcessRebalance.c)
 *     PnpAllocateResources @ 0x1406FC05C (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14083C5B4 (PnpReallocateResources.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x1400F5308 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400F5F44 (PnpDiagnosticTraceObjectWithStatus.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpBuildCmResourceLists @ 0x14072F18C (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x14072F37C (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14072F6C8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopCommitConfiguration @ 0x1407565B4 (IopCommitConfiguration.c)
 *     PnpTraceRebalanceResult @ 0x14083AF68 (PnpTraceRebalanceResult.c)
 *     PnpCancelStopDeviceSubtree @ 0x1408406C8 (PnpCancelStopDeviceSubtree.c)
 *     PnpFindRebalanceCandidates @ 0x1408406F8 (PnpFindRebalanceCandidates.c)
 *     PnpStopDeviceSubtree @ 0x140840E44 (PnpStopDeviceSubtree.c)
 */

__int64 __fastcall PnpRebalance(__int64 a1, void *a2, unsigned int a3, char a4)
{
  __int64 v5; // rsi
  void *v6; // rcx
  unsigned __int16 *v9; // r12
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  int BestConfiguration; // ebx
  unsigned int v13; // r12d
  _DWORD *v14; // r15
  __int64 v15; // r13
  int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // r15
  _OWORD *v19; // rcx
  unsigned int v22; // [rsp+34h] [rbp-A5h] BYREF
  _QWORD *i; // [rsp+38h] [rbp-A1h]
  unsigned int v24; // [rsp+40h] [rbp-99h]
  size_t Size; // [rsp+48h] [rbp-91h]
  void *v26; // [rsp+50h] [rbp-89h]
  _QWORD *v27[3]; // [rsp+58h] [rbp-81h] BYREF
  _OWORD v28[7]; // [rsp+70h] [rbp-69h] BYREF

  v5 = a3;
  v6 = *(void **)(a1 + 712);
  v26 = a2;
  if ( v6 )
    memset(v6, 0, 0x58uLL);
  memset(v28, 0, sizeof(v28));
  v9 = (unsigned __int16 *)(a1 + 40);
  *((_QWORD *)&v28[2] + 1) = IopRootDeviceNode;
  *((_QWORD *)&v28[1] + 1) = IopRootDeviceNode;
  *((_QWORD *)&v28[3] + 1) = MEMORY[0xFFFFF78000000008];
  LOBYTE(v28[3]) = a4;
  PnpDiagnosticTraceObject(&KMPnPEvt_Rebalance_Start, (unsigned __int16 *)(a1 + 40));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)(unsigned int)IopNumberDeviceNodes << 6, 0x30706E50u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v28[1]) = 2;
    BestConfiguration = -1073741670;
    goto LABEL_17;
  }
  if ( (_DWORD)v5 )
    memmove(PoolWithTag, a2, v5 << 6);
  v13 = 0;
  v14 = &v28[1];
  v22 = 0;
  BestConfiguration = 0;
  v15 = 0LL;
  Size = v5 << 6;
  v16 = (_DWORD)v11 + ((_DWORD)v5 << 6);
  for ( i = &v11[8 * v5]; ; v16 = (int)i )
  {
    ++DWORD1(v28[0]);
    v24 = v13;
    PnpFindRebalanceCandidates(v15, a1, v16, &v22, a4, (__int64)v28);
    v13 = v22;
    if ( !(_DWORD)v5 && !a4 )
    {
      v17 = 0;
      if ( !v22 )
      {
LABEL_13:
        BestConfiguration = -1073741823;
        if ( *(_DWORD *)(a1 + 300) == 777 )
          *((_DWORD *)&v28[1] + v15) = 4;
        else
          *((_DWORD *)&v28[1] + v15) = 3;
LABEL_15:
        PnpCancelStopDeviceSubtree(IopRootDeviceNode);
        v18 = (unsigned __int64)i;
        goto LABEL_16;
      }
      while ( v11[8 * (unsigned __int64)v17] != *(_QWORD *)(a1 + 32) )
      {
        if ( ++v17 >= v22 )
          goto LABEL_13;
      }
    }
    if ( v24 != v22 )
      break;
    if ( !*v14 )
      *v14 = 5;
    if ( BestConfiguration != -1073739512 )
      BestConfiguration = -1073741823;
LABEL_28:
    v15 = (unsigned int)(v15 + 1);
    ++v14;
    if ( (unsigned int)v15 >= 2 )
      goto LABEL_15;
  }
  BestConfiguration = PnpFindBestConfiguration((__int64)v11, (unsigned int)v5 + v22, (__int64)v27);
  if ( BestConfiguration < 0 )
  {
    if ( !*v14 )
      *v14 = 6;
    goto LABEL_28;
  }
  PnpStopDeviceSubtree(IopRootDeviceNode);
  IopCommitConfiguration(v27);
  v18 = (unsigned __int64)i;
  if ( (_DWORD)v5 )
    PnpBuildCmResourceLists((unsigned __int64)v11, (unsigned __int64)i, 0);
  PnpBuildCmResourceLists(v18, (unsigned __int64)&v11[8 * (unsigned __int64)((unsigned int)v5 + v13)], 1);
  if ( (_DWORD)v5 )
    memmove(v26, v11, Size);
LABEL_16:
  PnpFreeResourceRequirementsForAssignTable(v18, (unsigned __int64)&v11[8 * (unsigned __int64)((unsigned int)v5 + v13)]);
  ExFreePoolWithTag(v11, 0x30706E50u);
  v9 = (unsigned __int16 *)(a1 + 40);
LABEL_17:
  PnpTraceRebalanceResult();
  v19 = *(_OWORD **)(a1 + 712);
  if ( BestConfiguration >= 0 )
  {
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0x62655250u);
      *(_QWORD *)(a1 + 712) = 0LL;
    }
  }
  else if ( v19 )
  {
    *v19 = v28[0];
    v19[1] = v28[1];
    v19[2] = v28[2];
    v19[3] = v28[3];
    v19[4] = v28[4];
    *((_QWORD *)v19 + 10) = *(_QWORD *)&v28[5];
  }
  PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_Rebalance_Stop, v9, BestConfiguration);
  return (unsigned int)BestConfiguration;
}
