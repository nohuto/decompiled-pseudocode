/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x140028F30
 * Callers:
 *     MiInsertAndUnlockStandbyPages @ 0x140036060 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r14
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  char v16; // al
  unsigned __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // rdx
  unsigned __int64 v20; // r10
  __int64 v21; // r8
  char v22; // al
  __int64 v23; // rcx
  _QWORD *v24; // r9
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  __int64 result; // rax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  struct _KEVENT *v34; // rdi
  signed __int32 v35[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v37; // [rsp+28h] [rbp-50h]
  _QWORD v38[3]; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = *(_QWORD *)(a2 + 40);
  v6 = 0x2AAAAAAAAAAAAAABLL;
  v7 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  if ( (v5 & 0x10000000000000LL) != 0 || byte_14043EC9E && _bittest64((const signed __int64 *)qword_14043F2D8, v8 >> 9) )
    return MiPfnReferenceCountIsZero(a2, v8, a3, v6);
  if ( !a1 )
    return MiPfnReferenceCountIsZero(a2, v8, a3, v6);
  a3 = *(unsigned __int8 *)(a2 + 35);
  if ( (a3 & 0x10) != 0 )
    return MiPfnReferenceCountIsZero(a2, v8, a3, v6);
  if ( (a3 & 0x40) != 0 )
    return MiPfnReferenceCountIsZero(a2, v8, a3, v6);
  v9 = *(_QWORD *)(qword_14043B808 + 8 * ((v5 >> 40) & 0x3FF));
  if ( *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) != v9
    || ((unsigned __int8)a3 & 7u) >= 5 )
  {
    return MiPfnReferenceCountIsZero(a2, v8, a3, v6);
  }
  v37 = (volatile signed __int64 *)(v9 + 2600);
  v36 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v12 = (a1 + 0x58000000000LL) / 48;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v32 = SchedulerAssist[5];
      SchedulerAssist[5] = v32 + 1;
      if ( v32 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v36, v9 + 2600);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)(v9 + 2600), (__int64)&v36) )
  {
    KxWaitForLockOwnerShip(&v36);
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    KxReleaseQueuedSpinLock(&v36);
    return MiPfnReferenceCountIsZero(a2, v8, a3, v6);
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  v13 = 4288LL;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0 )
    v13 = 4992LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + v9));
  v14 = _InterlockedIncrement64((volatile signed __int64 *)(v9 + 7296));
  if ( v14 <= 0x420 )
  {
    switch ( v14 )
    {
      case 0xA0uLL:
        v33 = 4904LL;
        break;
      case 0x420uLL:
        v33 = 4936LL;
        break;
      case 0x22uLL:
        v33 = 4872LL;
        break;
      default:
        goto LABEL_17;
    }
    v38[0] = 0LL;
    v38[1] = v9 + 4864;
    v34 = (struct _KEVENT *)(v9 + v33);
    KxAcquireQueuedSpinLock(v38);
    KeSetEvent(v34, 0, 0);
    ++v34[1].Header.LockNV;
    KxReleaseQueuedSpinLock(v38);
  }
LABEL_17:
  v15 = v14 - 1;
  if ( v15 == *(_QWORD *)(v9 + 6120) || v15 == *(_QWORD *)(v9 + 6128) )
    MiUpdateAvailableEvents(v9);
  _InterlockedOr(v35, 0);
  v16 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = v16 & 0xF8 | 2;
  v17 = *(_QWORD *)(a1 + 16);
  if ( qword_14043B180 && (v17 & 0x10) == 0 )
    v17 &= ~qword_14043B180;
  v18 = 0xFFFFFFFFFLL;
  v19 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v20 = 0xFFFFFFF000000000uLL;
  *(_QWORD *)a2 ^= (v12 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  v21 = v8 & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) = v19 | *(_QWORD *)(a2 + 24) & 0xFFFFFFF000000000uLL;
  if ( ((v17 >> 12) & 0xFFFFFFFFFLL) == v12 )
    *(_QWORD *)(a1 + 16) = MiSwizzleInvalidPte((v21 << 12) | 0x880);
  else
    *(_QWORD *)(48 * v19 - 0x58000000000LL) = v21 | *(_QWORD *)(48 * v19 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  *(_QWORD *)(a1 + 40) = v21 | v20 & *(_QWORD *)(a1 + 40);
  v22 = *(_BYTE *)(a2 + 35);
  if ( (v22 & 8) != 0 )
    v23 = 5LL;
  else
    v23 = v22 & 7;
  v24 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL)) + 16LL)
                 + 1984LL * (*(_QWORD *)(a2 + 40) >> 58)
                 + 24 * (v23 + 8 * ((*(_QWORD *)(a2 + 40) >> 36) & 3LL)));
  ++v24[107];
  v25 = v24[109];
  if ( v25 == v18 )
  {
    v24[108] = v8;
  }
  else
  {
    v26 = 48 * v25 - 0x58000000000LL;
    v27 = v18 & (*(_QWORD *)v26 ^ (v8 << 28));
    *(_BYTE *)(v26 + 39) = v8;
    *(_QWORD *)v26 = (v8 << 28) ^ v27;
  }
  *(_QWORD *)a2 |= v20;
  *(_WORD *)(a2 + 36) = v25;
  v28 = *(_QWORD *)(a2 + 24) ^ (v25 >> 16 << 36);
  *(_BYTE *)(a2 + 39) = -1;
  *(_QWORD *)(a2 + 24) ^= v28 & 0xFFFFF000000000LL;
  v24[109] = v8;
  ++*(_QWORD *)(v9 + 2568);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v36, retaddr);
    goto LABEL_31;
  }
  _m_prefetchw(&v36);
  result = v36;
  if ( v36 )
    goto LABEL_35;
  result = _InterlockedCompareExchange64(v37, 0LL, (signed __int64)&v36);
  if ( (__int64 *)result != &v36 )
  {
    result = KxWaitForLockChainValid(&v36);
LABEL_35:
    v36 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_31:
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 && v30->NestingLevel <= 1u )
  {
    result = (unsigned int)(v31[5] - 1);
    v31[5] = result;
    if ( !(_DWORD)result )
      return KiRemoveSystemWorkPriorityKick(v30);
  }
  return result;
}
