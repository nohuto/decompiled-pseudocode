/*
 * XREFs of ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005D6D4
 * Callers:
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C005C34C (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005D130 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C005D6BC (-NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C006B43C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0088B00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00AB774 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C00AF410 (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00B006C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00B4E58 (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00B4FA0 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C00014B4 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RequestNewBudget(VIDMM_GLOBAL *this, char a2)
{
  unsigned int v3; // r11d
  unsigned int v4; // r8d
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r9
  _BYTE *v8; // r10
  _QWORD *v9; // rax
  _QWORD *i; // rdx
  _QWORD **v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]

  if ( a2 )
  {
    DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
      (DXGAUTOEXPUSHLOCKSHARED *)&v14,
      (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
    v3 = *((_DWORD *)this + 1748);
    v4 = 0;
    if ( v3 )
    {
      v5 = *((_QWORD *)this + 5023);
      while ( 2 )
      {
        v6 = 1560LL * v4;
        v7 = 0LL;
        v8 = (_BYTE *)(v6 + v5 + 512);
        do
        {
          if ( (*v8 & 1) != 0 )
          {
            v9 = VIDMM_PARTITION::_PartitionTree;
            i = 0LL;
            while ( v9 )
            {
              i = v9;
              v9 = (_QWORD *)*v9;
            }
            if ( i )
            {
              while ( !*(_BYTE *)(*(_QWORD *)(i[5] + 368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL) + 24)
                                + 328LL * v4
                                + 120) )
              {
                v11 = (_QWORD **)i[1];
                v12 = i;
                if ( v11 )
                {
                  v13 = *v11;
                  for ( i = (_QWORD *)i[1]; v13; v13 = (_QWORD *)*v13 )
                    i = v13;
                }
                else
                {
                  while ( 1 )
                  {
                    i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !i || (_QWORD *)*i == v12 )
                      break;
                    v12 = i;
                  }
                }
                if ( !i )
                  goto LABEL_20;
              }
LABEL_27:
              if ( v16 == 1 )
              {
                ExReleasePushLockSharedEx(v15, 0LL);
              }
              else if ( v16 == 2 )
              {
                ExReleasePushLockExclusiveEx(v15, 0LL);
              }
              goto LABEL_31;
            }
          }
          else if ( *(_BYTE *)(v7 + v6 + v5 + 664) )
          {
            goto LABEL_27;
          }
LABEL_20:
          v8 += 24;
          v7 += 328LL;
        }
        while ( v7 < 656 );
        if ( ++v4 < v3 )
          continue;
        break;
      }
    }
    if ( v16 == 1 )
    {
      ExReleasePushLockSharedEx(v15, 0LL);
    }
    else if ( v16 == 2 )
    {
      ExReleasePushLockExclusiveEx(v15, 0LL);
    }
  }
  else
  {
LABEL_31:
    _InterlockedIncrement64((volatile signed __int64 *)this + 5168);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
  }
}
