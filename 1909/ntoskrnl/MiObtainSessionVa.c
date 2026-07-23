/*
 * XREFs of MiObtainSessionVa @ 0x140138FF4
 * Callers:
 *     MmAllocatePoolMemory @ 0x140022AFC (MmAllocatePoolMemory.c)
 *     MiExpandPtes @ 0x1400E5D60 (MiExpandPtes.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     RtlFindClearBitsAndSetEx @ 0x140082540 (RtlFindClearBitsAndSetEx.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainSessionVa(unsigned int a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r8
  unsigned __int64 *v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 ClearBitsAndSet; // rsi
  unsigned __int64 v19; // r14
  struct _KTHREAD *v20; // rbx
  unsigned int v21; // edx
  unsigned __int8 v22; // r12
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  _KLOCK_ENTRY *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v32; // r10d
  unsigned __int64 *v33; // r11
  __int64 v34; // rax
  unsigned int v35; // r10d
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // rdx
  unsigned __int64 *v46; // r9
  unsigned int v47; // r9d
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rsi
  struct _KTHREAD *v52; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v54; // r14
  unsigned int v55; // r8d
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  _KLOCK_ENTRY *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  unsigned __int64 v62; // [rsp+30h] [rbp-48h]
  unsigned __int64 v63; // [rsp+38h] [rbp-40h]
  int v64; // [rsp+C0h] [rbp+48h] BYREF
  int v65; // [rsp+C8h] [rbp+50h] BYREF
  int v66; // [rsp+D0h] [rbp+58h]
  int v67; // [rsp+D8h] [rbp+60h]

  v1 = a1;
  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  v4 = (unsigned __int64 *)(v2 + 1112);
  v5 = *(_QWORD *)(v2 + 1112);
  v6 = *(_QWORD *)(v2 + 1120);
  v63 = *(_QWORD *)(v2 + 1128);
  v3 = v63;
  v62 = v5;
  v7 = v3 & -(__int64)(v3 < v5);
  v8 = v5 - 1;
  if ( (_DWORD)v1 )
  {
    while ( v8 - v7 + 1 < v1 )
    {
      v15 = -1LL;
LABEL_100:
      if ( !v7 )
        goto LABEL_12;
      v50 = v1 + v3;
      if ( v1 + v3 > v5 )
        v50 = v5;
      v8 = v50 - 1;
      v7 = 0LL;
    }
    v9 = v8 - v1 + 1;
    v10 = v6 + 8 * (v9 >> 6);
    v11 = (unsigned __int64 *)(v6 + 8 * (v7 >> 6));
    v12 = *v11 | ((1LL << (v7 & 0x3F)) - 1);
    if ( v1 > 0x7F )
    {
      v42 = v10 + 8;
      if ( (v9 & 0x3F) == 0 )
        v42 = v6 + 8 * ((v8 - v1 + 1) >> 6);
      if ( v12 )
      {
        if ( *++v11 )
          goto LABEL_77;
        v24 = !_BitScanReverse64((unsigned __int64 *)&v43, v12);
        if ( v24 )
          v44 = 64;
        else
          v44 = 63 - v43;
      }
      else
      {
        v44 = 0;
      }
LABEL_81:
      v15 = (((__int64)v11 - v6) >> 3 << 6) - v44;
      if ( v15 > v9 )
      {
LABEL_49:
        v15 = -1LL;
LABEL_50:
        v3 = v63;
        v5 = v62;
        goto LABEL_100;
      }
      v46 = &v11[(v1 - v44) >> 6];
      while ( ++v11 != v46 )
      {
        if ( *v11 )
          goto LABEL_77;
      }
      v47 = ((_BYTE)v1 - (_BYTE)v44) & 0x3F;
      if ( (((_BYTE)v1 - (_BYTE)v44) & 0x3F) != 0 )
      {
        v24 = !_BitScanForward64((unsigned __int64 *)&v48, *v11);
        if ( v24 )
          LODWORD(v48) = 64;
        if ( (unsigned int)v48 < v47 )
        {
LABEL_77:
          while ( (unsigned __int64)v11 <= v42 )
          {
            if ( !*++v11 )
            {
              v24 = !_BitScanReverse64((unsigned __int64 *)&v45, *(v11 - 1));
              if ( v24 )
                v44 = 64;
              else
                v44 = 63 - v45;
              goto LABEL_81;
            }
          }
LABEL_57:
          v15 = -1LL;
          goto LABEL_50;
        }
      }
LABEL_11:
      if ( v15 != -1LL )
      {
LABEL_12:
        v16 = v15;
        v4 = (unsigned __int64 *)(v2 + 1112);
        goto LABEL_13;
      }
      goto LABEL_50;
    }
    v13 = 64;
    if ( v1 < 0x40 )
    {
      if ( v1 <= 1 )
      {
        while ( 1 )
        {
          if ( v12 != -1 )
          {
            _BitScanForward64(&v14, ~v12);
            v66 = v14;
            v15 = v14 + (((__int64)v11 - v6) >> 3 << 6);
            goto LABEL_10;
          }
          if ( (unsigned __int64)++v11 > v10 )
            break;
          v12 = *v11;
        }
        v15 = -1LL;
        goto LABEL_50;
      }
      v32 = 0;
      v33 = (unsigned __int64 *)(v6 + 8 * (v8 >> 6));
      while ( 1 )
      {
        if ( v12 == -1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v11 > v10 )
              goto LABEL_49;
            v12 = *v11;
            if ( *v11 != -1LL )
            {
              v32 = 0;
              break;
            }
          }
        }
        v24 = !_BitScanForward64((unsigned __int64 *)&v34, v12);
        if ( v24 )
          LODWORD(v34) = 64;
        if ( v32 + (unsigned int)v34 >= v1 )
          break;
        v35 = v1;
        v36 = ~v12;
        while ( 1 )
        {
          v36 &= v36 >> (v35 >> 1);
          if ( !v36 )
            break;
          v35 -= v35 >> 1;
          if ( v35 <= 1 )
          {
            _BitScanForward64(&v37, v36);
            v66 = v37;
            v38 = (unsigned int)v37;
            goto LABEL_47;
          }
        }
        if ( v11 == v33 )
          goto LABEL_49;
        v24 = !_BitScanReverse64((unsigned __int64 *)&v49, v12);
        if ( v24 )
          v32 = 64;
        else
          v32 = 63 - v49;
        v12 = *++v11;
      }
      v38 = -(__int64)v32;
LABEL_47:
      v15 = (((__int64)v11 - v6) >> 3 << 6) + v38;
LABEL_10:
      if ( v15 > v9 )
        goto LABEL_49;
      goto LABEL_11;
    }
    while ( 1 )
    {
      while ( v12 < 0 )
      {
        if ( (unsigned __int64)++v11 > v10 )
          goto LABEL_57;
        v12 = *v11;
      }
      v24 = !_BitScanReverse64((unsigned __int64 *)&v39, v12);
      if ( !v24 )
        v13 = 63 - v39;
      v15 = (((((__int64)v11 - v6) >> 3) + 1) << 6) - v13;
      if ( v15 > v9 )
        goto LABEL_57;
      v40 = v1 - v13;
      if ( v1 == v13 )
        goto LABEL_11;
      v12 = *++v11;
      if ( v40 >= 0x40 )
      {
        if ( *v11 )
          goto LABEL_54;
        v40 -= 64LL;
        if ( !v40 )
          goto LABEL_11;
        v12 = *++v11;
      }
      v24 = !_BitScanForward64(&v41, v12);
      if ( v24 )
        v41 = 64LL;
      if ( v41 >= v40 )
        goto LABEL_11;
LABEL_54:
      v13 = 64;
    }
  }
  v16 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 == -1LL )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 1104, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v4, v1, v16);
  if ( ClearBitsAndSet == -1LL )
  {
    v51 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 1104;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v51);
    v64 = 0;
    v52 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v51) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v52->ApcState.Process);
    else
      SessionId = -1;
    --v52->SpecialApcDisable;
    v54 = ++v52->AbAllocationRegionCount;
    v55 = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v24 = !_BitScanReverse((unsigned int *)&v56, v55);
      v67 = v56;
      if ( v24 )
        goto LABEL_116;
      v57 = 1 << v56;
      v58 = v56;
      v59 = &v52->LockEntries[v58];
      v55 &= ~v57;
      if ( (v59->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v59->LockState.0 & 1) == 0
        && (*(_QWORD *)&v59->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v51 & 0x7FFFFFFFFFFFFFFCLL)
        && v59->LockState.SessionId == SessionId )
      {
        v59->AcquiredByte &= ~1u;
        if ( v59->LockState.0 )
          break;
      }
    }
    if ( !v59 )
    {
LABEL_116:
      if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v52, v51, SessionId, 0LL);
      goto LABEL_128;
    }
    v59->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v59->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v52->LockEntries[v58].TreeNode);
    v64 = v59->BoostBitmap.AllFields & 0x1FFFF;
    v59->BoostBitmap.AllFields &= 0xFFFE0000;
    v59->ThreadLocalFlags &= ~1u;
    v59->LockState.0 = 0LL;
    v60 = ((char *)v59 - (char *)v52 - 800) / 96;
    if ( v54 == 1 )
      v52->AbEntrySummary |= 1 << v60;
    else
      _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v60);
LABEL_128:
    --v52->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v52, v51, &v64);
    v24 = v52->SpecialApcDisable++ == -1;
    if ( v24 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
      KiCheckForKernelApcDelivery(v61);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  if ( (_DWORD)v1 == 1 )
    *(_QWORD *)(v2 + 1128) = ClearBitsAndSet + 1;
  *(_DWORD *)(v2 + 1152) += v1;
  v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 1104;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v19);
  v65 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v19) == 1 )
    v21 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  else
    v21 = -1;
  --v20->SpecialApcDisable;
  v22 = ++v20->AbAllocationRegionCount;
  v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v24 = !_BitScanReverse((unsigned int *)&v25, v23);
    if ( v24 )
      break;
    v26 = 1 << v25;
    v27 = v25;
    v28 = &v20->LockEntries[v27];
    v23 &= ~v26;
    if ( (v28->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v28->LockState.0 & 1) == 0
      && (*(_QWORD *)&v28->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
      && v28->LockState.SessionId == v21 )
    {
      v28->AcquiredByte &= ~1u;
      if ( v28->LockState.0 )
      {
        if ( v28 )
        {
          v28->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v28->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v20->LockEntries[v27].TreeNode);
          v65 = v28->BoostBitmap.AllFields & 0x1FFFF;
          v28->BoostBitmap.AllFields &= 0xFFFE0000;
          v28->ThreadLocalFlags &= ~1u;
          v28->LockState.0 = 0LL;
          v29 = ((char *)v28 - (char *)v20 - 800) / 96;
          if ( v22 == 1 )
            v20->AbEntrySummary |= 1 << v29;
          else
            _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v29);
          goto LABEL_33;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, v19, v21, 0LL);
LABEL_33:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, v19, &v65);
  v24 = v20->SpecialApcDisable++ == -1;
  if ( v24 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v30);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return qword_140464698 + (ClearBitsAndSet << 21);
}
