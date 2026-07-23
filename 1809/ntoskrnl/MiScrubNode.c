/*
 * XREFs of MiScrubNode @ 0x1402CF8B8
 * Callers:
 *     MiScrubMemoryWorker @ 0x140860D50 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnsWorthTrying @ 0x14009A6F0 (MiPfnsWorthTrying.c)
 *     MiClaimPhysicalRun @ 0x14009BE60 (MiClaimPhysicalRun.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiEmptyKernelStackCache @ 0x1402BB874 (MiEmptyKernelStackCache.c)
 *     MiMakePageBad @ 0x1402CF318 (MiMakePageBad.c)
 *     MiScrubPage @ 0x1402CFB40 (MiScrubPage.c)
 *     MiScrubNonPagedPool @ 0x140850338 (MiScrubNonPagedPool.c)
 *     MiScrubNodeLargePages @ 0x140860954 (MiScrubNodeLargePages.c)
 */

unsigned __int64 __fastcall MiScrubNode(ULONG_PTR *a1, __int64 a2)
{
  __int16 *v3; // rbx
  __int64 v4; // rbp
  unsigned __int64 result; // rax
  _DWORD *v6; // rcx
  __int64 i; // r15
  unsigned __int64 v8; // r13
  ULONG_PTR v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // ebx
  unsigned __int8 v14; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  int v17; // [rsp+98h] [rbp+10h] BYREF

  v3 = (__int16 *)a1;
  v4 = *(_QWORD *)(a2 + 176) + 16 * (**(unsigned int **)(a2 + 176) + 1LL);
  if ( a1 == &MiSystemPartition )
    MiScrubNonPagedPool(a2, *(unsigned int *)(a2 + 184), *(_QWORD *)(a2 + 160));
  result = MiScrubNodeLargePages(a2, v3, *(unsigned int *)(a2 + 184), *(_QWORD *)(a2 + 160));
  v6 = *(_DWORD **)(a2 + 176);
  for ( i = 0LL; (unsigned int)i < *v6; i = (unsigned int)(i + 1) )
  {
    result = *(unsigned __int8 *)(v4 + 2 * i);
    if ( (_DWORD)result == *(_DWORD *)(a2 + 184) )
    {
      v8 = *(_QWORD *)&v6[4 * (unsigned int)i + 4];
      v9 = v8 + *(_QWORD *)&v6[4 * (unsigned int)i + 6] - 1LL;
      result = 0xFFFFFA8000000000uLL;
      v10 = 48 * v9 - 0x58000000000LL;
      while ( v9 >= v8 && v8 )
      {
        result = *(_QWORD *)(a2 + 160);
        if ( *(_DWORD *)(result + 4) )
          return result;
        v17 = 0;
        result = MiPfnsWorthTrying(v3, v10, 1LL, 117440512, &v17);
        v11 = result;
        if ( result )
        {
          if ( result >= v9 - v8 + 1 )
            break;
          v12 = 48 - 48 * result;
          result = 1 - result;
          v10 += v12;
          v9 += 1 - v11;
        }
        else
        {
          if ( v17 == 1 )
            MiEmptyKernelStackCache();
          result = MiClaimPhysicalRun(
                     (__int64)v3,
                     v9,
                     1LL,
                     0xFFFFFFFFFLL,
                     a2 + 128,
                     117440512,
                     -1,
                     0LL,
                     *(unsigned __int8 *)(v10 + 34) >> 6,
                     0LL);
          if ( !result )
          {
            v13 = MiScrubPage(a2, v10, 0LL, 0LL);
            v14 = MiLockPageInline(v10);
            if ( v13 < 0 || (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
              MiMakePageBad(v10, 2);
            else
              MiInsertPageInFreeOrZeroedList(v9, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            result = v14;
            __writecr8(v14);
            v3 = (__int16 *)a1;
          }
        }
        --v9;
        v10 -= 48LL;
      }
    }
    v6 = *(_DWORD **)(a2 + 176);
  }
  return result;
}
