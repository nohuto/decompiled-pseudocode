/*
 * XREFs of MiSystemFault @ 0x140075120
 * Callers:
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiCheckVirtualAddress @ 0x14005DBF0 (MiCheckVirtualAddress.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiCheckSystemPageTables @ 0x1400758D0 (MiCheckSystemPageTables.c)
 *     MiSynchronizeSystemVa @ 0x140075950 (MiSynchronizeSystemVa.c)
 *     MiHyperSpaceSize @ 0x140075C50 (MiHyperSpaceSize.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiNoFaultFound @ 0x140075DA0 (MiNoFaultFound.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockSystemVa @ 0x1400A15F4 (MiUnlockSystemVa.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400C4A00 (MiUpdatePfnPriorityByPte.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiResolveDemandZeroFault @ 0x1400CCE70 (MiResolveDemandZeroFault.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x140102370 (MiIsPrototypePteVadLookup.c)
 *     KeInvalidAccessAllowed @ 0x1401154F0 (KeInvalidAccessAllowed.c)
 *     MiIsWorkingSetTrimThread @ 0x14011C5DC (MiIsWorkingSetTrimThread.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012A24C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiCheckSystemNxFault @ 0x1401341C4 (MiCheckSystemNxFault.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiRspInIstStack @ 0x1402A9AE8 (KiRspInIstStack.c)
 *     MiGenerateAccessViolation @ 0x1402D285C (MiGenerateAccessViolation.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 *     MiTransientPageListWriter @ 0x1402E7AB4 (MiTransientPageListWriter.c)
 */

__int64 __fastcall MiSystemFault(_QWORD *a1)
{
  int v1; // eax
  ULONG_PTR v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r8
  unsigned __int64 i; // r9
  struct _KTHREAD *CurrentThread; // rsi
  int v8; // eax
  ULONG_PTR v9; // r14
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rsi
  _BYTE *v13; // rax
  __int16 v14; // cx
  bool v15; // al
  void *v16; // rdx
  unsigned __int64 v17; // rcx
  char v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r8
  void *SessionVm; // r12
  int v22; // esi
  int v23; // eax
  __int64 v24; // r8
  ULONG_PTR v25; // r9
  __int64 v26; // xmm1_8
  unsigned __int64 v27; // r14
  ULONG_PTR v28; // rbx
  char v29; // cl
  __int64 v31; // r15
  unsigned __int64 v32; // r10
  __int64 v33; // r9
  __int64 v34; // rbx
  char v35; // al
  _BYTE *v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rax
  _BYTE *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // xmm1_8
  KIRQL v43; // al
  _QWORD *v44; // r12
  KIRQL v45; // r13
  int v46; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  ULONG_PTR v54; // rdx
  __int64 v55; // rax
  _BYTE *v56; // rax
  _BYTE *v57; // rax
  _BYTE *v58; // rax
  char v59; // [rsp+30h] [rbp-69h]
  int v60; // [rsp+34h] [rbp-65h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v62[16]; // [rsp+40h] [rbp-59h] BYREF

  v1 = *((_DWORD *)a1 + 20);
  if ( (v1 & 0x40) != 0 )
    return 3221225477LL;
  if ( (v1 & 0x20) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  v3 = *a1;
  v4 = v3;
  v5 = 0xFFFFF68000000000uLL;
  for ( i = 0xFFFFF6FFFFFFFFFFuLL; v4 >= 0xFFFFF68000000000uLL; v4 = (__int64)(v4 << 25) >> 16 )
  {
    if ( v4 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL && v4 >= qword_1404675B0 && v4 <= qword_140465EE0 )
    a1[1] |= 2uLL;
  v59 = 0;
  if ( (a1[1] & 0x100000000000000LL) != 0 )
  {
    if ( v3 < 0xFFFFF68000000000uLL
      || v3 > 0xFFFFF6FFFFFFFFFFuLL
      || v4 > 0x7FFFFFFEFFFFLL && (v4 < qword_1404675B0 || v4 > qword_140465EE0) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( v4 < 0xFFFF800000000000uLL
    || v4 >= qword_140465ED8
    && v4 < qword_140465ED8 + MiHyperSpaceSize(v3, 0x100000000000000LL, 0xFFFFF68000000000uLL, 0xFFFFF6FFFFFFFFFFuLL) )
  {
    return 192LL;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v8 & 0x400) != 0 || (v8 & 0x100) != 0 && (unsigned int)MiTransientPageListWriter(CurrentThread, *a1, v5, i) == 1 )
    return 3221225477LL;
  v9 = *a1;
  v10 = 0LL;
  if ( dword_1404660C4 )
  {
    v43 = ExAcquireSpinLockShared(&dword_1404660C0);
    v44 = (_QWORD *)qword_1404660C8;
    v45 = v43;
    if ( qword_1404660C8 )
    {
      do
      {
        if ( (unsigned __int64)CurrentThread > v44[3] )
        {
          v44 = (_QWORD *)v44[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v44[3] )
            break;
          v44 = (_QWORD *)*v44;
        }
      }
      while ( v44 );
      if ( v44 && v44[5] != ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v44 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1404660C0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v45);
    if ( v44 )
      return 3221225477LL;
  }
  v11 = a1[2];
  v12 = v11 & 1;
  v13 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v11 & 1) != 0 )
  {
    if ( *v13 != 1 && *v13 != 3 )
      goto LABEL_22;
    goto LABEL_80;
  }
  if ( !v11 )
    goto LABEL_22;
  v14 = *(_WORD *)(v11 + 368);
  v15 = 0;
  if ( v14 != 16 )
  {
    if ( v14 == 51 )
    {
      v16 = (void *)KeUserPopEntrySListFault;
      v17 = *(_QWORD *)(v11 + 360);
      goto LABEL_20;
    }
LABEL_22:
    v18 = 0;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(v11 + 376) & 0x200) == 0
    && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v11 + 384), v5, i)
     || (unsigned int)KiRspInIstStack(2LL, v48, v49, v50)) )
  {
    goto LABEL_22;
  }
  v16 = &ExpInterlockedPopEntrySListFault;
  v17 = *(_QWORD *)(v11 + 360);
  v15 = KiDynamicTraceEnabled && v17 >= ControlPc && v17 < qword_140572A78 && KeGetCurrentIrql() == 15;
LABEL_20:
  if ( (void *)v17 != v16 && !v15 )
    goto LABEL_22;
LABEL_80:
  v18 = 1;
LABEL_23:
  memset(v62, 0, sizeof(v62));
  HIDWORD(v62[0]) = 1;
  v20 = byte_140467440[((v4 >> 39) & 0x1FF) - 256];
  if ( (a1[10] & 8) != 0 )
  {
    if ( (_DWORD)v20 == 6 )
      goto LABEL_30;
    return 3221225477LL;
  }
  if ( ((v11 & 1) == 0 || *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != 1) && !v18 )
    HIDWORD(v62[0]) = 3;
  if ( (_DWORD)v20 == 8 )
  {
    SessionVm = &unk_14046A480;
  }
  else if ( (_DWORD)v20 == 1 )
  {
    SessionVm = (void *)MiGetSessionVm(byte_140467440, v19, v20);
    if ( !SessionVm )
      goto LABEL_155;
    v59 = 1;
  }
  else
  {
    if ( (_DWORD)v20 == 6 )
    {
LABEL_30:
      SessionVm = &unk_140466D00;
      goto LABEL_31;
    }
    if ( (_DWORD)v20 == 12 )
    {
      SessionVm = &unk_140466BC0;
    }
    else
    {
      if ( (_DWORD)v20 == 14 )
      {
        v36 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v12 || *v36 != 1 && *v36 != 4 )
        {
LABEL_155:
          if ( (v62[0] & 0x200000000LL) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 2uLL);
          return 3221225477LL;
        }
        v37 = 4LL;
      }
      else
      {
        if ( (_DWORD)v20 != 9 )
          goto LABEL_155;
        v37 = 3LL;
      }
      SessionVm = (void *)MiGetAnyMultiplexedVm(v37);
    }
  }
LABEL_31:
  if ( !(unsigned int)MiSynchronizeSystemVa((_DWORD)SessionVm, *a1, v20, 0, (__int64)v62) )
    goto LABEL_155;
  v22 = BYTE4(v62[0]) & 2;
  if ( (v62[0] & 0x200000000LL) == 0
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
    && !(unsigned int)MiIsWorkingSetTrimThread()
    && (unsigned int)MiGetSystemRegionType(v4) == 1
    || (v23 = MiCheckSystemPageTables(a1), v23 == 2) )
  {
    MiUnlockSystemVa(v62);
    goto LABEL_155;
  }
  if ( v23 == 1 )
  {
    MiUnlockSystemVa(v62);
    return 0LL;
  }
  v26 = v62[5];
  *(_OWORD *)(a1 + 7) = *(_OWORD *)&v62[3];
  a1[9] = v26;
  v27 = a1[3];
  v28 = *(_QWORD *)v27;
  if ( v27 >= 0xFFFFF6FB7DBED000uLL
    && v27 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v28 & 1) == 0 )
      goto LABEL_38;
    if ( (v28 & 0x20) == 0 || (v28 & 0x42) == 0 )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v52 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v27 >> 3) & 0x1FF));
        v53 = v28 | 0x20;
        if ( (v52 & 0x20) == 0 )
          v53 = *(_QWORD *)v27;
        v28 = v53;
        if ( (v52 & 0x42) != 0 )
          v28 = v53 | 0x42;
      }
    }
  }
  if ( (v28 & 1) == 0 )
  {
LABEL_38:
    if ( *a1 >= 0xFFFFF68000000000uLL && *a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( !v18 )
      {
        v25 = a1[2];
        if ( (v25 & 1) == 0 || *(_BYTE *)(v25 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          KeBugCheckEx(0x50u, *a1, a1[1], v25, 9uLL);
        goto LABEL_65;
      }
      goto LABEL_110;
    }
    if ( (v28 & 0x400) != 0 )
    {
      if ( (v28 & 2) != 0 )
      {
        v41 = a1[2];
        if ( (v41 & 1) == 0 || *(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        {
          LODWORD(v10) = MiResolveDemandZeroFault(a1, a1[3], 0LL, 0LL);
          v42 = a1[9];
          *(_OWORD *)&v62[3] = *(_OWORD *)(a1 + 7);
          v62[5] = v42;
        }
        goto LABEL_65;
      }
      v31 = v28;
      if ( qword_140465B00 && (v28 & 0x10) == 0 )
        v31 = v28 & ~qword_140465B00;
      v29 = v59;
      v10 = v31 >> 16;
      if ( !v59 )
      {
LABEL_45:
        if ( (a1[1] & 2) == 0 || v10 || v29 || ((v28 >> 5) & 4) != 0 )
        {
          a1[12] = v10;
          return 3221225494LL;
        }
        if ( (a1[10] & 8) != 0 )
          goto LABEL_110;
        v58 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (a1[2] & 1LL) != 0 )
        {
          if ( *v58 != 1 && *v58 != 3 )
          {
LABEL_209:
            if ( !(unsigned int)MiGenerateAccessViolation(a1) )
              KeBugCheckEx(0xBEu, *a1, v28, a1[2], 0xEuLL);
            goto LABEL_110;
          }
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2]) != 1 )
        {
          goto LABEL_209;
        }
        goto LABEL_110;
      }
      if ( (unsigned int)MiIsPrototypePteVadLookup(v28) )
      {
        v55 = MiCheckVirtualAddress(v32, &v60, &v61);
        v10 = v55;
        if ( !v55 )
        {
          v56 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
          if ( (a1[2] & 1LL) != 0 )
          {
            if ( *v56 == 1 || *v56 == 3 )
              goto LABEL_110;
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2]) == 1 )
          {
            goto LABEL_110;
          }
          if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          {
            MiUnlockSystemVa(v62);
            return 3489660934LL;
          }
          goto LABEL_110;
        }
      }
LABEL_44:
      v29 = v59;
      goto LABEL_45;
    }
    if ( (v28 & 0x3E0) == 0 && (v28 & 0x800) == 0 )
    {
      if ( (a1[10] & 8) == 0 )
      {
        v57 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (a1[2] & 1LL) != 0 )
        {
          if ( *v57 == 1 || *v57 == 3 )
            goto LABEL_110;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2]) == 1 )
        {
          goto LABEL_110;
        }
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0LL);
      }
LABEL_110:
      LODWORD(v10) = -1073741819;
      goto LABEL_65;
    }
    if ( (v28 & 0x3E0) != 0x300 )
    {
      if ( (v28 & 0x3E0) != 0x3E0 )
        goto LABEL_44;
      v38 = a1[2];
      if ( (v38 & 1) != 0 && *(_BYTE *)(v38 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        goto LABEL_44;
    }
    if ( (a1[10] & 8) == 0 )
    {
      v39 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (a1[2] & 1LL) != 0 )
      {
        if ( *v39 == 1 || *v39 == 3 )
          goto LABEL_107;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2]) == 1 )
      {
        goto LABEL_107;
      }
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 1uLL);
    }
LABEL_107:
    if ( (v28 & 0x3E0) == 0x300 )
      goto LABEL_110;
    v40 = a1[2];
    if ( (v40 & 1) == 0 || *(_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      goto LABEL_110;
    goto LABEL_44;
  }
  if ( (v28 & 0x80u) != 0LL )
  {
    v54 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v54 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v22 )
        KeBugCheckEx(0x50u, v54, a1[1], a1[2], 8uLL);
      goto LABEL_110;
    }
  }
  v33 = a1[2];
  if ( (v33 & 1) != 0 && *(_BYTE *)(v33 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriorityByPte(a1[3], *(_DWORD *)((v33 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7);
    goto LABEL_65;
  }
  if ( (a1[1] & 2) == 0 )
  {
    MiCheckSystemNxFault(a1, v28, 2LL);
    v33 = a1[2];
    goto LABEL_64;
  }
  if ( (v28 & 0x800) != 0 )
  {
LABEL_64:
    MiNoFaultFound((_DWORD)a1, v27, *a1, v33, 1);
LABEL_65:
    v34 = v62[3];
    if ( v62[3] )
    {
      if ( v62[5] )
      {
        if ( WORD1(v62[4]) )
          MiEmptyDeferredWorkingSetEntries(&v62[3]);
        MiUnlockPageTableInternal(v34);
        v35 = BYTE5(v62[4]) | 2;
      }
      else
      {
        v35 = BYTE5(v62[4]);
      }
      if ( (v35 & 1) != 0 )
        MiUnlockWorkingSetExclusive(v34, BYTE4(v62[4]), v24, v25);
      else
        MiUnlockWorkingSetShared(v34, BYTE4(v62[4]));
    }
    return (unsigned int)v10;
  }
  if ( (v28 & 0x200) == 0 && (a1[10] & 8) == 0 )
  {
    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
      KeBugCheckEx(0xBEu, *a1, v28, a1[2], 0xBuLL);
    goto LABEL_110;
  }
  v46 = MiCopyOnWrite(*a1, a1[3], 0xFFFFFFFFFFFFFFFFuLL, 0);
  MiUnlockSystemVa(v62);
  if ( v46 < 0 )
    MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v46);
  return 0LL;
}
