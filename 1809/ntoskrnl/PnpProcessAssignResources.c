/*
 * XREFs of PnpProcessAssignResources @ 0x1406E95EC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     PnpProcessAssignResourcesWorker @ 0x1406E97D4 (PnpProcessAssignResourcesWorker.c)
 *     PipClearDevNodeUserFlags @ 0x1406EB03C (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PnpAssignResourcesToDevices @ 0x1406FBF44 (PnpAssignResourcesToDevices.c)
 */

char __fastcall PnpProcessAssignResources(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  char v6; // bp
  unsigned int v7; // ebx
  __int64 *PoolWithTag; // rax
  __int64 *v9; // r12
  __int64 v10; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  _QWORD *v14; // rsi
  __int64 *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rbx
  char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx

  v6 = 0;
  v7 = 8 * IopNumberDeviceNodes + 8;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, v7, 0x35706E50u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    *(_DWORD *)v9 = a2;
    PnpProcessAssignResourcesWorker(a1, v9);
    v10 = *((unsigned int *)v9 + 1);
    if ( (_DWORD)v10 )
    {
      v12 = ExAllocatePoolWithTag(PagedPool, (unsigned int)((_DWORD)v10 << 6), 0x36706E50u);
      v13 = v12;
      if ( v12 )
      {
        memset(v12, 0, (unsigned int)((_DWORD)v10 << 6));
        v14 = v13;
        v15 = v9 + 1;
        v16 = v10;
        do
        {
          v17 = *v15;
          memset(v14, 0, 0x40uLL);
          v14[3] = 0LL;
          ++v15;
          *v14 = v17;
          *((_DWORD *)v14 + 3) = 4;
          v14 += 8;
          --v16;
        }
        while ( v16 );
        v6 = 0;
        PnpAssignResourcesToDevices((unsigned int)v10, v13, a3);
        v18 = (char *)(v13 + 5);
        while ( 1 )
        {
          v19 = *((_QWORD *)v18 - 5);
          if ( v19 )
            v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
          else
            v20 = 0LL;
          v21 = *((unsigned int *)v18 + 4);
          if ( (int)v21 >= 0 )
          {
            v6 = 1;
            if ( *(_QWORD *)v18 )
            {
              ExAcquireFastMutex(&PiResourceListLock);
              *(_QWORD *)(v20 + 416) = *(_QWORD *)v18;
              *(_QWORD *)(v20 + 424) = *((_QWORD *)v18 + 1);
              KeReleaseGuardedMutex(&PiResourceListLock);
            }
            else
            {
              PipSetDevNodeFlags(v20, 256);
            }
            PipSetDevNodeState(v20, 772);
            PipClearDevNodeUserFlags(v20, 4LL);
            goto LABEL_18;
          }
          if ( (_DWORD)v21 != -1073741267 )
            break;
LABEL_18:
          v18 += 64;
          if ( !--v10 )
          {
            ExFreePoolWithTag(v13, 0x36706E50u);
            goto LABEL_3;
          }
        }
        switch ( (_DWORD)v21 )
        {
          case 0xC000008A:
            v23 = 17LL;
            break;
          case 0xC0000182:
            v23 = 34LL;
            break;
          case 0xC0000908:
          case 0xC0040035:
            v23 = 35LL;
            break;
          case 0xC0040036:
            v23 = 33LL;
            break;
          default:
            v22 = v20;
            if ( (_DWORD)v21 == -1073479625 )
              v23 = 36LL;
            else
              v23 = 12LL;
            goto LABEL_37;
        }
        v22 = v20;
LABEL_37:
        PipSetDevNodeProblem(v22, v23, v21);
        goto LABEL_18;
      }
    }
LABEL_3:
    ExFreePoolWithTag(v9, 0x35706E50u);
  }
  return v6;
}
