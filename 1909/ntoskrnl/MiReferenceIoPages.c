/*
 * XREFs of MiReferenceIoPages @ 0x1400F6770
 * Callers:
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MiMapContiguousMemoryLarge @ 0x14018D158 (MiMapContiguousMemoryLarge.c)
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140713B18 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoPte @ 0x140A14B10 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiDereferenceIoPages @ 0x1400F55EC (MiDereferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x1400F6B7C (MiIoSpaceIsConstant.c)
 *     MiRemoveUnmappedIoNode @ 0x1400F6EB0 (MiRemoveUnmappedIoNode.c)
 *     MiInitializeIoPageNodeArray @ 0x1400F6F74 (MiInitializeIoPageNodeArray.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFlushCacheMdl @ 0x1402DDE7C (MiFlushCacheMdl.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 *v11; // rax
  _BYTE *v12; // r14
  unsigned int v13; // ebp
  __int64 v14; // rdi
  unsigned __int64 *v15; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 IsConstant; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // bp
  _QWORD *v21; // rdi
  _QWORD *v22; // rsi
  _QWORD *PoolWithTag; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int16 *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  int v29; // r10d
  unsigned __int16 v30; // ax
  __int64 v31; // rdx
  unsigned __int64 v33; // rax
  _QWORD *v34; // rax
  int v35; // eax
  int v36; // ecx
  _WORD *v37; // rcx
  __int64 v38; // r12
  unsigned __int64 v39; // rcx
  struct _KPRCB *v40; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v42; // [rsp+24h] [rbp-144h]
  __int64 v45; // [rsp+30h] [rbp-138h]
  __int64 v46; // [rsp+40h] [rbp-128h]
  unsigned __int64 *v47; // [rsp+48h] [rbp-120h]
  __int64 *v48; // [rsp+50h] [rbp-118h]
  unsigned __int8 v49; // [rsp+68h] [rbp-100h]
  _BYTE v50[176]; // [rsp+70h] [rbp-F8h] BYREF

  v8 = a1;
  v45 = a3;
  memset(v50, 0, sizeof(v50));
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v9 = -1LL;
  v42 = 0;
  v10 = a2 & 0xFFFFFFFFFLL;
  v46 = v10;
  v47 = (unsigned __int64 *)&qword_140466488[v8];
  v11 = &qword_140466498;
  v12 = 0LL;
  v13 = 0;
  if ( (_DWORD)v8 != 1 )
    v11 = 0LL;
  v14 = v10;
  v48 = v11;
  v15 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( a1 == 1 )
  {
    IsConstant = MiIoSpaceIsConstant(v10, a3);
    if ( IsConstant )
      a4 = *(_DWORD *)(IsConstant + 40);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140466480);
  v19 = a3;
  if ( !a3 )
  {
LABEL_39:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140466480);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( v9 != -1 )
      MiDereferenceIoPages(a1, v14, v9 - v14);
    return v13;
  }
  while ( 1 )
  {
    v20 = 0;
    v21 = (_QWORD *)*v47;
    if ( *v47 )
    {
      while ( 1 )
      {
        v33 = v21[5];
        if ( v10 < v33 )
        {
          v34 = (_QWORD *)*v21;
          if ( !*v21 )
          {
            v20 = 0;
            break;
          }
        }
        else
        {
          if ( v10 < v33 + 512 )
          {
            v22 = v21;
            goto LABEL_19;
          }
          v34 = (_QWORD *)v21[1];
          if ( !v34 )
          {
            v20 = 1;
            break;
          }
        }
        v21 = v34;
      }
    }
    if ( !v48 )
      break;
    v22 = (_QWORD *)MiRemoveUnmappedIoNode(v48, v10, v18, v19);
    if ( !v22 )
      break;
LABEL_17:
    RtlAvlInsertNodeEx(v47, (unsigned __int64)v21, v20, v22);
    v19 = v45;
LABEL_19:
    if ( a6 && !*a6 )
      *a6 = v22;
    v24 = v22[5];
    v18 = v22[6];
    v25 = v24 + 512;
    v26 = (unsigned __int16 *)(v18 + 2 * (v10 - v24));
    if ( v24 == -512 || v19 + v10 <= v25 )
      v27 = 2 * (v19 + v10 - v24);
    else
      v27 = 1024LL;
    v28 = v18 + v27;
    if ( (unsigned __int64)v26 < v18 + v27 )
    {
      v18 = (__int64)a5;
      v29 = v42;
      while ( 1 )
      {
        v30 = *v26;
        v25 = *v26;
        if ( (*v26 & 0x3FFF) == 0x3FFF )
          break;
        v31 = (unsigned int)v25 >> 14;
        if ( (v30 & 0x3FFF) != 0 )
        {
          if ( (_DWORD)v31 == a4 )
            ++dword_1404664C0;
          else
            ++dword_1404664C4;
        }
        else
        {
          ++v22[7];
          if ( (_DWORD)v31 == a4 )
          {
            ++dword_1404664CC;
          }
          else
          {
            if ( v48 && (v30 & 0xC000) == 0x4000 && !v29 )
            {
              ++dword_1404664D0;
              if ( !v12 )
              {
                v12 = v50;
                v15 = (unsigned __int64 *)&v50[48];
              }
              *v15++ = v10;
              if ( v15 == (unsigned __int64 *)(v12 + 176) )
              {
                ++dword_1404664C8;
                *(_QWORD *)v12 = 0LL;
                *((_DWORD *)v12 + 2) = 131248;
                *((_QWORD *)v12 + 4) = 0LL;
                *((_QWORD *)v12 + 5) = 0x10000LL;
                v35 = MiFlushCacheMdl(1LL, v31, v18);
                v36 = v42;
                v19 = v45;
                v12 = 0LL;
                if ( v35 )
                  v36 = 1;
                v42 = v36;
                v29 = v36;
              }
            }
            v18 = (__int64)a5;
            v30 = (_WORD)a4 << 14;
          }
        }
        if ( v18 )
          *(_DWORD *)v18 |= 1 << (v30 >> 14);
        v25 = 1LL;
        --v19;
        ++v10;
        v45 = v19;
        *v26++ = (v30 ^ (v30 + 1)) & 0x3FFF ^ v30;
        if ( (unsigned __int64)v26 >= v28 )
          goto LABEL_34;
      }
      v14 = v46;
      v13 = -1073741670;
      if ( v10 != v46 )
        v9 = v10;
      goto LABEL_37;
    }
LABEL_34:
    if ( v42 )
    {
      v37 = (_WORD *)v22[6];
      v25 = (unsigned __int64)(v37 + 512);
      if ( v37 < v37 + 512 )
      {
        v18 = 0x3FFFLL;
        do
        {
          if ( (*v37 & 0x3FFF) == 0 )
            *v37 |= 0xC000u;
          ++v37;
        }
        while ( (unsigned __int64)v37 < v25 );
        CurrentIrql = v49;
        v19 = v45;
      }
    }
    if ( !v19 )
    {
      v14 = v46;
      v13 = 0;
LABEL_37:
      if ( v12 )
      {
        ++dword_1404664C8;
        v38 = (char *)v15 - v12;
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 4) = 0LL;
        *((_DWORD *)v12 + 11) = 0;
        *((_WORD *)v12 + 5) = 2;
        v39 = (unsigned __int64)(unsigned int)((v38 - 48) >> 3) << 12;
        *((_DWORD *)v12 + 10) = v39;
        *((_WORD *)v12 + 4) = 8 * (((v38 - 48) >> 3) + 6);
        MiFlushCacheMdl(v39, v25, v18);
      }
      goto LABEL_39;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x440uLL, 0x6F49694Du);
  v22 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x440uLL);
    v22[5] = v10 & 0xFFFFFFFFFFFFFE00uLL;
    v22[6] = v22 + 8;
    MiInitializeIoPageNodeArray(v22);
    goto LABEL_17;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140466480);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v40 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v40);
  }
  __writecr8(CurrentIrql);
  MiDereferenceIoPages(a1, v46, v10 - v46);
  return 3221225626LL;
}
