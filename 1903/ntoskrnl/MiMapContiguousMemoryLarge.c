/*
 * XREFs of MiMapContiguousMemoryLarge @ 0x14018C8D8
 * Callers:
 *     MiMapContiguousMemory @ 0x140118AF4 (MiMapContiguousMemory.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiDereferenceIoPages @ 0x1401174CC (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118650 (MiReferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x140118A5C (MiIoSpaceIsConstant.c)
 *     MiMapWithLargePages @ 0x14018CB60 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x14018CE14 (MiGetPageTablesForLargeMap.c)
 *     MiAssignInitialPageAttribute @ 0x140196860 (MiAssignInitialPageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMapContiguousMemoryLarge(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned int a3,
        int a4,
        _DWORD *a5)
{
  _DWORD *v5; // r12
  __int64 PageTablesForLargeMap; // r15
  _QWORD *v8; // rdx
  unsigned __int8 v9; // r10
  unsigned __int64 v10; // r11
  unsigned int v12; // esi
  ULONG_PTR v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r9
  ULONG_PTR v16; // r14
  int v17; // ebp
  unsigned __int8 *v18; // r12
  ULONG_PTR v19; // r8
  unsigned __int8 CurrentIrql; // r15
  __int64 v21; // rdx
  int v22; // eax
  unsigned int AnyMultiplexedVm; // eax
  unsigned __int8 v25; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-60h] BYREF
  __int64 v29; // [rsp+50h] [rbp-58h]
  int v30; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+10h]
  unsigned int v32; // [rsp+C0h] [rbp+18h]
  int v33; // [rsp+C8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v5 = a5;
  PageTablesForLargeMap = 0LL;
  v31 = 0LL;
  v8 = 0LL;
  v28 = 0LL;
  v9 = a4;
  *a5 = 0;
  v10 = 2LL;
  v12 = 1;
  v27 = 0LL;
  if ( a3 >> 3 == 1 )
  {
    v12 = 0;
  }
  else if ( a3 >> 3 == 3 && (a3 & 7) != 0 )
  {
    v12 = 2;
  }
  if ( BugCheckParameter2 > 0xFFFFFFFFFLL )
  {
    LODWORD(v14) = 0;
  }
  else
  {
    v13 = 6 * BugCheckParameter2;
    v14 = (*(_QWORD *)(8 * v13 - 0x57FFFFFFFD8LL) >> 53) & 1LL;
    if ( ((*(_QWORD *)(8 * v13 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    {
      v15 = 8 * v13 - 0x58000000000LL;
      goto LABEL_6;
    }
  }
  v15 = 0LL;
LABEL_6:
  v16 = 0LL;
  v29 = v15;
  v17 = 3;
  if ( !a2 )
    goto LABEL_19;
  v18 = (unsigned __int8 *)(v15 + 34);
  while ( 1 )
  {
    v19 = v16 + BugCheckParameter2;
    if ( v16 + BugCheckParameter2 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      break;
    if ( (v9 & (unsigned __int8)v10) != 0 && ((*v18 & 7) != 5 || !MiIsPfnFileOnly((__int64)(v18 - 34))) )
      KeBugCheckEx(0x1Au, 0x1160CuLL, v19, 0LL, 0LL);
    if ( !v15 )
      goto LABEL_18;
    v25 = *v18;
    if ( (*v18 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v18 - 34, v12);
      v25 = *v18;
      v10 = 2LL;
      v8 = v27;
      v9 = v33;
    }
    if ( v25 >> 6 != v12 )
      goto LABEL_18;
    v17 = v12;
LABEL_12:
    ++v16;
    v18 += 48;
    if ( v16 >= a2 )
      goto LABEL_18;
    v15 = v29;
  }
  if ( v15 )
    goto LABEL_18;
  if ( v16 )
    goto LABEL_12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v10);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < (unsigned __int8)v10 )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v8 = MiIoSpaceIsConstant(BugCheckParameter2, a2);
  v27 = v8;
  if ( KiIrqlFlags
    && (KiIrqlFlags & 1) != 0
    && KeGetCurrentIrql() >= (unsigned __int8)v10
    && CurrentIrql < (unsigned __int8)v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    v8 = v27;
    v10 = 2LL;
    v9 = v33;
  }
  __writecr8(CurrentIrql);
  if ( !v8 )
    goto LABEL_12;
  v17 = *((_DWORD *)v8 + 10);
  v16 = a2;
LABEL_18:
  PageTablesForLargeMap = v31;
  v5 = a5;
LABEL_19:
  if ( v16 == a2 )
  {
    if ( (_DWORD)v14 || v8 )
    {
LABEL_25:
      v22 = MiPageToNode(BugCheckParameter2, 0);
      PageTablesForLargeMap = MiGetPageTablesForLargeMap(a2, 9LL, 1LL, (unsigned int)(v22 + 1));
      if ( PageTablesForLargeMap )
      {
        AnyMultiplexedVm = (unsigned int)MiGetAnyMultiplexedVm(3);
        MiMapWithLargePages(AnyMultiplexedVm, PageTablesForLargeMap, BugCheckParameter2, a2, 1, v32, v17);
        if ( v28 )
          *v5 |= 1u;
      }
      else if ( !(_DWORD)v14 && !v27 )
      {
        v21 = BugCheckParameter2;
        goto LABEL_54;
      }
    }
    else if ( (int)MiReferenceIoPages(1, BugCheckParameter2, a2, v12, &v30, &v28) >= 0 )
    {
      v21 = BugCheckParameter2;
      if ( ((v30 - 1) & v30) == 0 )
      {
        v17 = *(unsigned __int16 *)(*(_QWORD *)(v28 + 48)
                                  + 2 * ((BugCheckParameter2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v28 + 40))) >> 14;
        LOWORD(a5) = *(_WORD *)(*(_QWORD *)(v28 + 48)
                              + 2 * ((BugCheckParameter2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v28 + 40)));
        goto LABEL_25;
      }
LABEL_54:
      MiDereferenceIoPages(1, v21, a2);
    }
  }
  return PageTablesForLargeMap;
}
