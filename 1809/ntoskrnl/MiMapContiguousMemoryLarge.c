/*
 * XREFs of MiMapContiguousMemoryLarge @ 0x140183324
 * Callers:
 *     MiMapContiguousMemory @ 0x1400E5E24 (MiMapContiguousMemory.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x1400E6430 (MiIoSpaceIsConstant.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     MiMapWithLargePages @ 0x1401835A0 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x140183864 (MiGetPageTablesForLargeMap.c)
 *     MiAssignInitialPageAttribute @ 0x14018D314 (MiAssignInitialPageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMapContiguousMemoryLarge(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // r12
  __int64 PageTablesForLargeMap; // r15
  _QWORD *v8; // rdx
  unsigned __int8 v9; // r10
  unsigned __int64 v10; // r11
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r9
  ULONG_PTR v16; // r14
  int v17; // ebp
  unsigned __int8 *v18; // r12
  ULONG_PTR v19; // r8
  unsigned __int8 CurrentIrql; // r15
  __int64 v21; // rdx
  unsigned int AnyMultiplexedVm; // eax
  unsigned __int8 v24; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+48h] [rbp-60h] BYREF
  __int64 v28; // [rsp+50h] [rbp-58h]
  int v29; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+10h]
  unsigned int v31; // [rsp+C0h] [rbp+18h]
  int v32; // [rsp+C8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v5 = a5;
  PageTablesForLargeMap = 0LL;
  v30 = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  v9 = a4;
  *a5 = 0;
  v10 = 2LL;
  v12 = 1;
  v26 = 0LL;
  if ( a3 >> 3 == 1 )
  {
    v12 = 0;
  }
  else if ( a3 >> 3 == 3 && (a3 & 7) != 0 )
  {
    v12 = 2;
  }
  if ( a1 > 0xFFFFFFFFFLL )
  {
    LODWORD(v14) = 0;
  }
  else
  {
    v13 = 6 * a1;
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
  v28 = v15;
  v17 = 3;
  if ( !a2 )
    goto LABEL_19;
  v18 = (unsigned __int8 *)(v15 + 34);
  while ( 1 )
  {
    v19 = v16 + a1;
    if ( v16 + a1 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      break;
    if ( (v9 & (unsigned __int8)v10) != 0 && ((*v18 & 7) != 5 || !MiIsPfnFileOnly((__int64)(v18 - 34))) )
      KeBugCheckEx(0x1Au, 0x1160CuLL, v19, 0LL, 0LL);
    if ( !v15 )
      goto LABEL_18;
    v24 = *v18;
    if ( (*v18 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v18 - 34, v12);
      v24 = *v18;
      v10 = 2LL;
      v8 = v26;
      v9 = v32;
    }
    if ( v24 >> 6 != v12 )
      goto LABEL_18;
    v17 = v12;
LABEL_12:
    ++v16;
    v18 += 48;
    if ( v16 >= a2 )
      goto LABEL_18;
    v15 = v28;
  }
  if ( v15 )
    goto LABEL_18;
  if ( v16 )
    goto LABEL_12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v10);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < (unsigned __int8)v10 )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v8 = MiIoSpaceIsConstant(a1, a2);
  v26 = v8;
  if ( KiIrqlFlags
    && (KiIrqlFlags & 1) != 0
    && KeGetCurrentIrql() >= (unsigned __int8)v10
    && CurrentIrql < (unsigned __int8)v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    v8 = v26;
    v10 = 2LL;
    v9 = v32;
  }
  __writecr8(CurrentIrql);
  if ( !v8 )
    goto LABEL_12;
  v17 = *((_DWORD *)v8 + 10);
  v16 = a2;
LABEL_18:
  PageTablesForLargeMap = v30;
  v5 = a5;
LABEL_19:
  if ( v16 == a2 )
  {
    if ( (_DWORD)v14 || v8 )
    {
LABEL_25:
      PageTablesForLargeMap = MiGetPageTablesForLargeMap(a2, 9LL, 1LL);
      if ( PageTablesForLargeMap )
      {
        AnyMultiplexedVm = (unsigned int)MiGetAnyMultiplexedVm(3);
        MiMapWithLargePages(AnyMultiplexedVm, PageTablesForLargeMap, a1, a2, 1, v31, v17);
        if ( v27 )
          *v5 |= 1u;
      }
      else if ( !(_DWORD)v14 && !v26 )
      {
        v21 = a1;
        goto LABEL_54;
      }
    }
    else if ( (int)MiReferenceIoPages(1u, a1, a2, v12, &v29, &v27) >= 0 )
    {
      v21 = a1;
      if ( ((v29 - 1) & v29) == 0 )
      {
        v17 = *(unsigned __int16 *)(*(_QWORD *)(v27 + 48) + 2 * ((a1 & 0xFFFFFFFFFLL) - *(_QWORD *)(v27 + 40))) >> 14;
        LOWORD(a5) = *(_WORD *)(*(_QWORD *)(v27 + 48) + 2 * ((a1 & 0xFFFFFFFFFLL) - *(_QWORD *)(v27 + 40)));
        goto LABEL_25;
      }
LABEL_54:
      MiDereferenceIoPages(1, v21, a2);
    }
  }
  return PageTablesForLargeMap;
}
