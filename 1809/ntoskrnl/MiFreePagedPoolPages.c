/*
 * XREFs of MiFreePagedPoolPages @ 0x140161B50
 * Callers:
 *     MiFreePoolPages @ 0x140161200 (MiFreePoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiFreePagedPoolPages(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rsi
  int SystemRegionType; // eax
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v5; // r8
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  ULONG_PTR v9; // r15
  unsigned __int64 v10; // r13
  unsigned __int64 *v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  _SLIST_HEADER *v14; // rcx
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r10
  _QWORD *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdi
  __int64 v28; // rsi
  struct _KEVENT *v29; // rcx
  struct _KEVENT *v30; // rcx
  struct _KTHREAD *v31; // rdi
  ULONG_PTR v32; // r9
  BOOL v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  _KLOCK_ENTRY *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  PSLIST_ENTRY result; // rax
  __int64 v42; // rcx
  __int64 v43; // r10
  _QWORD *v44; // rdi
  _QWORD *v45; // r12
  bool v46; // zf
  _QWORD *v47; // rdi
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r10
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r9
  bool v52; // cf
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rdi
  __int64 i; // rax
  struct _KTHREAD *v56; // rdi
  ULONG_PTR SessionId; // r9
  BOOL v58; // r14d
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  _KLOCK_ENTRY *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 SessionVm; // rax
  unsigned __int64 v67; // rdi
  __int64 v68; // rcx
  _SLIST_ENTRY *v69; // rdx
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // [rsp+30h] [rbp-29h]
  int v72; // [rsp+38h] [rbp-21h] BYREF
  int v73; // [rsp+3Ch] [rbp-1Dh] BYREF
  unsigned __int64 v74; // [rsp+40h] [rbp-19h]
  int v75; // [rsp+48h] [rbp-11h]
  ULONG_PTR v76; // [rsp+50h] [rbp-9h]
  int v77; // [rsp+58h] [rbp-1h]
  int v78; // [rsp+5Ch] [rbp+3h]
  unsigned __int16 *v79; // [rsp+60h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+Fh]
  int v81; // [rsp+70h] [rbp+17h]
  int v82; // [rsp+74h] [rbp+1Bh]
  unsigned __int64 v83; // [rsp+78h] [rbp+1Fh]
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp+67h] BYREF
  ULONG_PTR v85; // [rsp+C8h] [rbp+6Fh] BYREF

  v85 = a2;
  BugCheckParameter2 = a1;
  v2 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  SystemRegionType = MiGetSystemRegionType(a1);
  if ( SystemRegionType == 6 )
  {
    v75 = 6;
    v79 = (unsigned __int16 *)&unk_14043C360;
    v9 = (ULONG_PTR)&qword_14043C018;
    v10 = BugCheckParameter4;
    if ( v7 == 1951624525 || v7 == 1816358221 )
      v8 = 1;
  }
  else
  {
    if ( SystemRegionType != 1 )
      KeBugCheckEx(0xC2u, 0x42uLL, v5, 0LL, BugCheckParameter4);
    v75 = 1;
    v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v9 = v10 + 184;
    SessionVm = MiGetSessionVm();
    v5 = BugCheckParameter2;
    v79 = (unsigned __int16 *)SessionVm;
  }
  v11 = (unsigned __int64 *)(v9 + 8);
  v12 = (__int64)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - *(_QWORD *)(v9 + 24)) >> 3;
  v13 = v12 + v2 - 1;
  v83 = v12 + v2;
  if ( v13 >= *(_QWORD *)(v9 + 8) )
    goto LABEL_130;
  if ( v2 <= 1 )
  {
    if ( v2 == 1 )
    {
      if ( _bittest64(*(const signed __int64 **)(v9 + 16), v12) )
        goto LABEL_8;
      v5 = BugCheckParameter2;
    }
LABEL_130:
    KeBugCheckEx(0xC2u, 0x50uLL, v5, v12, qword_14043C058 << 12);
  }
  v42 = *(_QWORD *)(v9 + 16);
  v43 = *(_QWORD *)(v42 + 8 * (v12 >> 6));
  v44 = (_QWORD *)(v42 + 8 * (v12 >> 6));
  v45 = (_QWORD *)(v42 + 8 * (v13 >> 6));
  if ( v44 == v45 )
  {
    v46 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v2) << v12) & v43) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v2) << v12;
  }
  else
  {
    if ( ((-1LL << v12) & v43) != -1LL << v12 )
      goto LABEL_130;
    v47 = v44 + 1;
    if ( v47 != v45 )
    {
      while ( *v47 == -1LL )
      {
        if ( ++v47 == v45 )
          goto LABEL_69;
      }
      goto LABEL_130;
    }
LABEL_69:
    v46 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v13) & *v47) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v13;
  }
  if ( !v46 )
    goto LABEL_130;
  v11 = (unsigned __int64 *)(v9 + 8);
LABEL_8:
  if ( !v10 && !v6 && v2 == 1 && !v8 )
  {
    v14 = &qword_14043B118[25 * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]];
    if ( LOWORD(v14->Alignment) < (unsigned int)dword_140439B90 )
    {
      v69 = (_SLIST_ENTRY *)BugCheckParameter2;
      *(_QWORD *)BugCheckParameter2 = BugCheckParameter2 ^ qword_14043BF80;
      return RtlpInterlockedPushEntrySList(v14, v69 + 1);
    }
  }
  MmFreePoolMemory(&BugCheckParameter2, &v85);
  v76 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v74 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  RtlClearBitsEx((__int64)v11, v12, v2);
  v15 = *v11;
  v16 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  v17 = v11[1];
  if ( (v12 & 0xFFFFFFFFFFFFFE00uLL) >= *v11 )
    v16 = 0LL;
  v71 = *(_QWORD *)(v9 + 40);
  v18 = v15 - 1;
  v19 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  while ( 1 )
  {
    if ( v18 - v16 == -1LL )
      goto LABEL_70;
    v20 = (_QWORD *)(v17 + 8 * (v16 >> 6));
    v21 = ~*v20;
    if ( v21 != -1 )
      break;
    while ( (unsigned __int64)++v20 <= v17 + 8 * (v18 >> 6) )
    {
      v21 = ~*v20;
      if ( v21 != -1 )
        goto LABEL_18;
    }
LABEL_70:
    if ( !v16 )
    {
      v22 = *v11;
      v23 = v12 & 0xFFFFFFFFFFFFFE00uLL;
LABEL_112:
      v25 = v71;
      goto LABEL_113;
    }
    v48 = v19 + 1;
    if ( v19 + 1 > v15 )
      v48 = v15;
    v18 = v48 - 1;
    v16 = 0LL;
  }
LABEL_18:
  _BitScanForward64((unsigned __int64 *)&v21, ~v21);
  v22 = v21 + ((__int64)((__int64)v20 - v17) >> 3 << 6);
  v81 = v21;
  if ( v22 > v18 || v22 == -1LL )
    goto LABEL_70;
  v23 = v12 & 0xFFFFFFFFFFFFFE00uLL;
  if ( v22 < v19 )
    goto LABEL_112;
  v24 = v19 + 512;
  if ( v22 >= v19 + 512 )
    goto LABEL_112;
  if ( v12 + v2 <= v24 )
    goto LABEL_23;
  v49 = *v11;
  v50 = v24;
  v51 = v11[1];
  v52 = v24 < *v11;
  v74 = v24;
  if ( !v52 )
    v50 = 0LL;
  v23 = v24;
  v53 = v49 - 1;
  while ( 2 )
  {
    if ( v53 - v50 == -1LL )
    {
      v22 = -1LL;
      goto LABEL_134;
    }
    v54 = (_QWORD *)(v51 + 8 * (v50 >> 6));
    for ( i = ~*v54; i == -1; i = ~*v54 )
    {
      if ( (unsigned __int64)++v54 > v51 + 8 * (v53 >> 6) )
        goto LABEL_127;
    }
    _BitScanForward64((unsigned __int64 *)&i, ~i);
    v22 = i + ((__int64)((__int64)v54 - v51) >> 3 << 6);
    v82 = i;
    if ( v22 > v53 )
    {
LABEL_127:
      v22 = -1LL;
      goto LABEL_134;
    }
    if ( v22 != -1LL )
      break;
LABEL_134:
    if ( v50 )
    {
      v70 = v23 + 1;
      v50 = 0LL;
      if ( v23 + 1 > v49 )
        v70 = v49;
      v53 = v70 - 1;
      continue;
    }
    break;
  }
  if ( v22 >= v23 && v22 < v23 + 512 )
  {
LABEL_23:
    v25 = v71;
    v76 = 0LL;
LABEL_24:
    v74 = 0LL;
    v26 = 0LL;
    if ( v12 < v25 )
      *(_QWORD *)(v9 + 40) = v12;
    goto LABEL_26;
  }
  v25 = v71;
  if ( v12 < v71 )
  {
    v25 = v12;
    *(_QWORD *)(v9 + 40) = v12;
    v71 = v12;
  }
LABEL_113:
  if ( !v76 )
    goto LABEL_24;
  if ( v22 < v23 )
    v67 = *v11;
  else
    v67 = v22 & 0xFFFFFFFFFFFFFE00uLL;
  v26 = v67 - v23;
  RtlSetBitsEx(v9 + 8, v23, v67 - v23);
  if ( v67 < v83 && v67 < v71 || v71 >= v74 && v71 < v67 )
    *(_QWORD *)(v9 + 40) = v67;
LABEL_26:
  *(_QWORD *)(v9 + 48) -= v2;
  if ( v10 )
  {
    if ( v76 )
      *(_DWORD *)(v10 + 8124) -= v26 >> 9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    v72 = 0;
    v56 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v9) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v56->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v56->SpecialApcDisable;
    v58 = ++v56->AbAllocationRegionCount == 1;
    LODWORD(v59) = ((char)v56->AbEntrySummary | (char)v56->AbOrphanedEntrySummary) ^ 0x3F;
    v46 = !_BitScanReverse((unsigned int *)&v60, v59);
    v77 = v60;
    if ( v46 )
      goto LABEL_123;
    while ( 1 )
    {
      v61 = 1 << v60;
      v62 = v60;
      v63 = &v56->LockEntries[v62];
      v59 = ~v61 & (unsigned int)v59;
      if ( (v63->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v63->LockState.0 & 1) == 0
        && (*(_QWORD *)&v63->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
        && v63->LockState.SessionId == (_DWORD)SessionId )
      {
        v63->AcquiredByte &= ~1u;
        if ( v63->LockState.0 )
          break;
      }
      v46 = !_BitScanReverse((unsigned int *)&v60, v59);
      v77 = v60;
      if ( v46 )
        goto LABEL_123;
    }
    if ( !v63 )
    {
LABEL_123:
      if ( (*((_DWORD *)&v56->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v56, v9, SessionId, 0LL);
    }
    else
    {
      v63->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v63->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v56->LockEntries[v62].TreeNode, v59);
      v72 = 0;
      v72 = v63->BoostBitmap.AllFields & 0x1FFFF;
      v63->BoostBitmap.AllFields &= 0xFFFE0000;
      v63->ThreadLocalFlags &= ~1u;
      v63->LockState.0 = 0LL;
      v64 = ((char *)v63 - (char *)v56 - 800) / 96;
      if ( v58 )
        v56->AbEntrySummary |= 1 << v64;
      else
        _InterlockedOr8((volatile signed __int8 *)&v56->AbOrphanedEntrySummary, 1 << v64);
    }
    --v56->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v56, v9, (__int64)&v72);
    v46 = v56->SpecialApcDisable++ == -1;
    if ( v46 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
      KiCheckForKernelApcDelivery(v65);
    result = (PSLIST_ENTRY)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 48), -(__int64)v2);
  }
  else
  {
    if ( v75 == 6 )
    {
      v27 = qword_14043C058 - qword_14043C048;
      if ( qword_14043C058 - qword_14043C048 > (unsigned __int64)qword_140439B80 )
      {
        v28 = *(_QWORD *)(qword_14043B808 + 8LL * v79[87]);
        v29 = *(struct _KEVENT **)(v28 + 240);
        if ( v29->Header.SignalState )
          KeResetEvent(v29);
        if ( v27 >= qword_140439B88 )
        {
          v30 = *(struct _KEVENT **)(v28 + 248);
          if ( !v30->Header.SignalState )
            KeSetEvent(v30, 0, 0);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    v73 = 0;
    v31 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v9) == 1 )
      v32 = (unsigned int)MmGetSessionIdEx((__int64)v31->ApcState.Process);
    else
      v32 = 0xFFFFFFFFLL;
    --v31->SpecialApcDisable;
    v33 = ++v31->AbAllocationRegionCount == 1;
    LODWORD(v34) = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
    v46 = !_BitScanReverse((unsigned int *)&v35, v34);
    v78 = v35;
    if ( v46 )
      goto LABEL_65;
    while ( 1 )
    {
      v36 = 1 << v35;
      v37 = v35;
      v38 = &v31->LockEntries[v37];
      v34 = ~v36 & (unsigned int)v34;
      if ( (v38->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v38->LockState.0 & 1) == 0
        && (*(_QWORD *)&v38->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
        && v38->LockState.SessionId == (_DWORD)v32 )
      {
        v38->AcquiredByte &= ~1u;
        if ( v38->LockState.0 )
          break;
      }
      v46 = !_BitScanReverse((unsigned int *)&v35, v34);
      v78 = v35;
      if ( v46 )
        goto LABEL_65;
    }
    if ( !v38 )
    {
LABEL_65:
      if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v31, v9, v32, 0LL);
    }
    else
    {
      v38->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v38->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v31->LockEntries[v37].TreeNode, v34);
      v73 = 0;
      v73 = v38->BoostBitmap.AllFields & 0x1FFFF;
      v38->BoostBitmap.AllFields &= 0xFFFE0000;
      v38->ThreadLocalFlags &= ~1u;
      v38->LockState.0 = 0LL;
      v39 = ((char *)v38 - (char *)v31 - 800) / 96;
      if ( v33 )
        v31->AbEntrySummary |= 1 << v39;
      else
        _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v39);
    }
    --v31->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v31, v9, (__int64)&v73);
    v46 = v31->SpecialApcDisable++ == -1;
    if ( v46 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
      KiCheckForKernelApcDelivery(v40);
    result = (PSLIST_ENTRY)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v76 )
  {
    v68 = (v74 << 28) + (*(_QWORD *)(v9 + 24) << 25);
    v85 = v26 << 12;
    BugCheckParameter2 = v68 >> 16;
    return (PSLIST_ENTRY)MmFreePoolMemory(&BugCheckParameter2, &v85);
  }
  return result;
}
