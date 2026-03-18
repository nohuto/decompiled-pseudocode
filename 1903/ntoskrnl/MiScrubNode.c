/*
 * XREFs of MiScrubNode @ 0x1402ECAC0
 * Callers:
 *     MiScrubMemoryWorker @ 0x14089D280 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClaimPhysicalRun @ 0x1400D9208 (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x1400DA610 (MiPfnsWorthTrying.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiEmptyKernelStackCache @ 0x1402D1990 (MiEmptyKernelStackCache.c)
 *     MiMakePageBad @ 0x1402EC458 (MiMakePageBad.c)
 *     MiScrubPage @ 0x1402ECD28 (MiScrubPage.c)
 *     MiScrubNodeLargePages @ 0x14089BF34 (MiScrubNodeLargePages.c)
 */

unsigned __int64 __fastcall MiScrubNode(__int16 *a1, __int64 a2)
{
  __int16 *v3; // rbx
  __int64 v4; // r13
  unsigned __int64 result; // rax
  _DWORD *v6; // rcx
  __int64 i; // r15
  unsigned __int64 v8; // r12
  ULONG_PTR v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // ebx
  unsigned __int8 v14; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  int v17; // [rsp+98h] [rbp+10h] BYREF

  v3 = a1;
  v4 = *(_QWORD *)(a2 + 176) + 16 * (**(unsigned int **)(a2 + 176) + 1LL);
  result = MiScrubNodeLargePages(a2, a1, *(unsigned int *)(a2 + 184), *(_QWORD *)(a2 + 160));
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
            v3 = a1;
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
