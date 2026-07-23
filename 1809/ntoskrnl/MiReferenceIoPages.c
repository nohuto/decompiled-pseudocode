/*
 * XREFs of MiReferenceIoPages @ 0x1400E602C
 * Callers:
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x140183324 (MiMapContiguousMemoryLarge.c)
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoPte @ 0x1409D02E0 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializeIoPageNodeArray @ 0x1400E5A18 (MiInitializeIoPageNodeArray.c)
 *     MiRemoveUnmappedIoNode @ 0x1400E5A50 (MiRemoveUnmappedIoNode.c)
 *     MiIoSpaceIsConstant @ 0x1400E6430 (MiIoSpaceIsConstant.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiFlushCacheMdl @ 0x1402C404C (MiFlushCacheMdl.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(unsigned int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v6; // ebp
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  __int64 *v9; // rax
  char *v10; // r14
  unsigned int v11; // esi
  __int64 v12; // rdi
  unsigned __int64 *v13; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 IsConstant; // rax
  __int64 v16; // r9
  bool v17; // bp
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int16 *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  int v28; // r10d
  unsigned __int16 v29; // ax
  __int64 v30; // rdx
  _QWORD *PoolWithTag; // rax
  int v33; // eax
  int v34; // ecx
  _WORD *v35; // rcx
  unsigned __int64 v36; // rcx
  struct _KPRCB *v37; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v39; // [rsp+24h] [rbp-144h]
  __int64 v42; // [rsp+30h] [rbp-138h]
  __int64 v43; // [rsp+40h] [rbp-128h]
  unsigned __int64 *v44; // [rsp+48h] [rbp-120h]
  unsigned __int64 *v45; // [rsp+50h] [rbp-118h]
  unsigned __int8 v46; // [rsp+68h] [rbp-100h]
  char v47; // [rsp+70h] [rbp-F8h] BYREF
  char v48; // [rsp+A0h] [rbp-C8h] BYREF

  v6 = a1;
  v42 = a3;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v7 = -1LL;
  v39 = 0;
  v8 = a2 & 0xFFFFFFFFFLL;
  v43 = a2 & 0xFFFFFFFFFLL;
  v44 = (unsigned __int64 *)&qword_14043BDC8[a1];
  v9 = &qword_14043BDD8;
  v10 = 0LL;
  v11 = 0;
  if ( a1 != 1 )
    v9 = 0LL;
  v12 = a2 & 0xFFFFFFFFFLL;
  v45 = (unsigned __int64 *)v9;
  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v46 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( a1 == 1 )
  {
    IsConstant = MiIoSpaceIsConstant(v8, a3);
    if ( IsConstant )
      a4 = *(_DWORD *)(IsConstant + 40);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14043BDC0);
  v16 = v42;
  if ( !v42 )
  {
LABEL_39:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BDC0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( v7 != -1 )
      MiDereferenceIoPages(v6, v12, v7 - v12);
    return v11;
  }
  while ( 1 )
  {
    v17 = 0;
    v18 = (_QWORD *)*v44;
    if ( *v44 )
    {
      while ( 1 )
      {
        v19 = v18[5];
        if ( v8 >= v19 )
        {
          if ( v8 < v19 + 512 )
          {
            v21 = v18;
            goto LABEL_18;
          }
          v20 = (_QWORD *)v18[1];
          if ( !v20 )
          {
            v17 = 1;
            break;
          }
        }
        else
        {
          v20 = (_QWORD *)*v18;
          if ( !*v18 )
          {
            v17 = 0;
            break;
          }
        }
        v18 = v20;
      }
    }
    if ( !v45 )
      break;
    v21 = (_QWORD *)MiRemoveUnmappedIoNode(v45, v8);
    if ( !v21 )
      break;
LABEL_51:
    RtlAvlInsertNodeEx(v44, (unsigned __int64)v18, v17, v21);
    v16 = v42;
LABEL_18:
    if ( a6 && !*a6 )
      *a6 = v21;
    v22 = v21[5];
    v23 = v21[6];
    v24 = v22 + 512;
    v25 = (unsigned __int16 *)(v23 + 2 * (v8 - v22));
    if ( v22 == -512 || v16 + v8 <= v24 )
      v26 = 2 * (v16 + v8 - v22);
    else
      v26 = 1024LL;
    v27 = v23 + v26;
    if ( (unsigned __int64)v25 < v23 + v26 )
    {
      v23 = (__int64)a5;
      v28 = v39;
      while ( 1 )
      {
        v29 = *v25;
        v24 = *v25;
        if ( (*v25 & 0x3FFF) == 0x3FFF )
          break;
        v30 = (unsigned int)v24 >> 14;
        if ( (v29 & 0x3FFF) != 0 )
        {
          if ( (_DWORD)v30 == a4 )
            ++dword_14043BE00;
          else
            ++dword_14043BE04;
        }
        else
        {
          ++v21[7];
          if ( (_DWORD)v30 == a4 )
          {
            ++dword_14043BE0C;
          }
          else
          {
            if ( v45 && (v29 & 0xC000) == 0x4000 && !v28 )
            {
              ++dword_14043BE10;
              if ( !v10 )
              {
                v10 = &v47;
                v13 = (unsigned __int64 *)&v48;
              }
              *v13++ = v8;
              if ( v13 == (unsigned __int64 *)(v10 + 176) )
              {
                ++dword_14043BE08;
                *(_QWORD *)v10 = 0LL;
                *((_DWORD *)v10 + 2) = 131248;
                *((_QWORD *)v10 + 4) = 0LL;
                *((_QWORD *)v10 + 5) = 0x10000LL;
                v33 = MiFlushCacheMdl(1LL, v30, v23);
                v34 = v39;
                v16 = v42;
                v10 = 0LL;
                if ( v33 )
                  v34 = 1;
                v39 = v34;
                v28 = v34;
              }
            }
            v23 = (__int64)a5;
            v29 = (_WORD)a4 << 14;
          }
        }
        if ( v23 )
          *(_DWORD *)v23 |= 1 << (v29 >> 14);
        v24 = 1LL;
        --v16;
        ++v8;
        v42 = v16;
        *v25++ = (v29 ^ (v29 + 1)) & 0x3FFF ^ v29;
        if ( (unsigned __int64)v25 >= v27 )
          goto LABEL_33;
      }
      v12 = v43;
      v11 = -1073741670;
      if ( v8 != v43 )
        v7 = v8;
      goto LABEL_36;
    }
LABEL_33:
    if ( v39 )
    {
      v35 = (_WORD *)v21[6];
      v24 = (unsigned __int64)(v35 + 512);
      if ( v35 < v35 + 512 )
      {
        v23 = 0x3FFFLL;
        do
        {
          if ( (*v35 & 0x3FFF) == 0 )
            *v35 |= 0xC000u;
          ++v35;
        }
        while ( (unsigned __int64)v35 < v24 );
        CurrentIrql = v46;
        v16 = v42;
      }
    }
    if ( !v16 )
    {
      v12 = v43;
      v11 = 0;
LABEL_36:
      if ( v10 )
      {
        ++dword_14043BE08;
        *(_QWORD *)v10 = 0LL;
        *((_QWORD *)v10 + 4) = 0LL;
        *((_DWORD *)v10 + 11) = 0;
        v36 = (unsigned __int64)(unsigned int)(((char *)v13 - v10 - 48) >> 3) << 12;
        *((_DWORD *)v10 + 10) = v36;
        *((_WORD *)v10 + 5) = 2;
        *((_WORD *)v10 + 4) = 8 * ((((char *)v13 - v10 - 48) >> 3) + 6);
        MiFlushCacheMdl(v36, v24, v23);
      }
      v6 = a1;
      goto LABEL_39;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x440uLL, 0x6F49694Du);
  v21 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x440uLL);
    v21[5] = v8 & 0xFFFFFFFFFFFFFE00uLL;
    v21[6] = v21 + 8;
    MiInitializeIoPageNodeArray((__int64)v21);
    goto LABEL_51;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BDC0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v37 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v37);
  }
  __writecr8(CurrentIrql);
  MiDereferenceIoPages(a1, v43, v8 - v43);
  return 3221225626LL;
}
