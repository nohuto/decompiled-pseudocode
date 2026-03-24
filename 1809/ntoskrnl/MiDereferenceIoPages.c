/*
 * XREFs of MiDereferenceIoPages @ 0x140123634
 * Callers:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiReferenceIoPages @ 0x1400E5FAC (MiReferenceIoPages.c)
 *     MiReplaceRotateWithDemandZero @ 0x1401229F0 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x14012337C (MiZeroAndFlushPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x1401831E4 (MiMapContiguousMemoryLarge.c)
 *     MmRotatePhysicalView @ 0x14066B910 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B24 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544A0 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140064B40 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceIoPages(int a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 *v3; // rbx
  ULONG_PTR v4; // r15
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v7; // r13
  unsigned __int64 *i; // rdi
  __int64 *v9; // rax
  KIRQL v10; // bp
  ULONG_PTR v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  _QWORD *j; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 *v16; // rbp
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // rdx
  _WORD *v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // r9
  unsigned __int64 k; // rsi
  unsigned __int64 *v25; // r10
  _WORD *v26; // rcx
  _WORD *v27; // rdx
  _QWORD *v28; // rdx
  bool v29; // r8
  int v30; // eax
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  bool v33; // r8
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v38[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v39; // [rsp+30h] [rbp-58h]
  __int64 *v40; // [rsp+38h] [rbp-50h]
  KIRQL v41; // [rsp+90h] [rbp+8h]
  ULONG_PTR v42; // [rsp+98h] [rbp+10h]
  __int16 v43; // [rsp+98h] [rbp+10h]
  _QWORD *v45; // [rsp+A8h] [rbp+20h] BYREF

  v42 = a3;
  v3 = 0LL;
  v4 = a2 & 0xFFFFFFFFFLL;
  v45 = 0LL;
  BugCheckParameter4 = a2 & 0xFFFFFFFFFLL;
  v7 = a3;
  i = (unsigned __int64 *)&qword_14043AD08[a1];
  v39 = i;
  v9 = &qword_14043AD18;
  if ( a1 != 1 )
    v9 = 0LL;
  v40 = v9;
  v10 = ExAcquireSpinLockExclusive(&dword_14043AD00);
  v41 = v10;
LABEL_5:
  for ( i = (unsigned __int64 *)*i; i; i = (unsigned __int64 *)i[1] )
  {
    v11 = i[5];
    if ( v4 < v11 )
      goto LABEL_5;
    if ( v4 < v11 + 512 )
      break;
  }
  if ( a3 )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0x1Au, 0x61948uLL, v4, a3, BugCheckParameter4);
      v12 = i[1];
      v13 = (unsigned __int64)i;
      if ( v12 )
      {
        for ( j = *(_QWORD **)v12; j; j = (_QWORD *)*j )
          v12 = (unsigned __int64)j;
      }
      else
      {
        for ( k = i[2]; ; k = *(_QWORD *)(v12 + 16) )
        {
          v12 = k & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v12 || *(_QWORD *)v12 == v13 )
            break;
          v13 = v12;
        }
      }
      v15 = i[6];
      v16 = i;
      v17 = i[5];
      v18 = (BugCheckParameter4 & 0xFFFFFFFFFLL) - v17;
      v19 = (_WORD *)(v15 + 2 * v18);
      v20 = BugCheckParameter4 + v7 > v17 + 512 ? 1024LL : 2 * (v18 + v7);
      v21 = v15 + v20;
      if ( (unsigned __int64)v19 < v15 + v20 )
        break;
LABEL_25:
      v7 = v42;
      i = (unsigned __int64 *)v12;
      if ( !v42 )
      {
        v10 = v41;
        goto LABEL_27;
      }
    }
    v22 = v42;
LABEL_19:
    if ( (*v19 & 0x3FFF) == 0 )
      KeBugCheckEx(0x1Au, 0x6194AuLL, v4, a3, BugCheckParameter4);
    v43 = (*v19 ^ (*v19 - 1)) & 0x3FFF ^ *v19;
    *v19 = v43;
    if ( (v43 & 0x3FFF) != 0 )
      goto LABEL_23;
    v23 = v16[7];
    if ( v23 == 0 || v23 > 0x200 )
      KeBugCheckEx(0x1Au, 0x6194BuLL, (ULONG_PTR)v16, v23, BugCheckParameter4);
    v16[7] = v23 - 1;
    if ( v23 != 1 )
      goto LABEL_23;
    RtlAvlRemoveNode(v39, v16);
    v25 = (unsigned __int64 *)v40;
    if ( v40 )
    {
      v26 = (_WORD *)v16[6];
      v27 = v26 + 512;
      while ( 1 )
      {
        if ( v26 >= v27 )
          goto LABEL_41;
        if ( (*v26 & 0xC000) == 0x4000 )
          break;
        ++v26;
      }
      _InterlockedOr(v38, 0);
      v30 = KiCacheFlushTimeStamp;
      *((_DWORD *)v16 + 14) = KiCacheFlushTimeStamp;
      if ( (__int64 *)qword_14043AD20 == &qword_14043AD20 )
        dword_14043AD30 = v30;
      v31 = (_QWORD *)qword_14043AD28;
      v32 = v16 + 3;
      if ( *(__int64 **)qword_14043AD28 != &qword_14043AD20 )
        __fastfail(3u);
      *v32 = &qword_14043AD20;
      v33 = 0;
      v16[4] = (unsigned __int64)v31;
      *v31 = v32;
      qword_14043AD28 = (__int64)(v16 + 3);
      v34 = (_QWORD *)*v25;
      if ( *v25 )
      {
        while ( 1 )
        {
          if ( v16[5] < v34[5] )
          {
            v36 = (_QWORD *)*v34;
            if ( !*v34 )
            {
              v33 = 0;
              break;
            }
          }
          else
          {
            v36 = (_QWORD *)v34[1];
            if ( !v36 )
            {
              v33 = 1;
              break;
            }
          }
          v34 = v36;
        }
      }
      RtlAvlInsertNodeEx(v25, (unsigned __int64)v34, v33, i);
      v16 = 0LL;
      ++qword_14043AD38;
    }
LABEL_41:
    if ( !v16 )
      goto LABEL_23;
    v28 = v45;
    v29 = 0;
    if ( !v45 )
      goto LABEL_43;
    while ( 1 )
    {
      if ( v16[5] < v28[5] )
      {
        v35 = (_QWORD *)*v28;
        if ( !*v28 )
        {
          v29 = 0;
LABEL_43:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v45, (unsigned __int64)v28, v29, i);
LABEL_23:
          ++v19;
          --v22;
          ++BugCheckParameter4;
          v42 = v22;
          if ( (unsigned __int64)v19 >= v21 )
          {
            v3 = v45;
            goto LABEL_25;
          }
          goto LABEL_19;
        }
      }
      else
      {
        v35 = (_QWORD *)v28[1];
        if ( !v35 )
        {
          v29 = 1;
          goto LABEL_43;
        }
      }
      v28 = v35;
    }
  }
LABEL_27:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043AD00);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    v3 = v45;
  }
  __writecr8(v10);
  while ( v3 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v45, v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v45;
  }
}
