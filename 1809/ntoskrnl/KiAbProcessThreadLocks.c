/*
 * XREFs of KiAbProcessThreadLocks @ 0x140023C40
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140023AE0 (KiAbDeferredProcessingWorker.c)
 *     KiAbPropagateBoosts @ 0x140023BB0 (KiAbPropagateBoosts.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x1400245F0 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140024DA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140024E74 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140024EC0 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140024F9C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140024FE4 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbCpuBoostOwners @ 0x140025190 (KiAbCpuBoostOwners.c)
 *     KiAbIoBoostOwners @ 0x140025280 (KiAbIoBoostOwners.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140119ABC (KiAbDetermineMaxWaiterPriority.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessThreadLocks(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // r14d
  int v8; // r15d
  __int64 v10; // rdx
  int v11; // r13d
  unsigned int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rax
  bool v15; // zf
  int v16; // esi
  __int64 LockedHeadEntry; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  char v22; // r9
  char v23; // r14
  int v24; // edx
  int v25; // r10d
  char CpuPriorityKey; // r15
  int v27; // eax
  char v28; // al
  char v29; // r9
  _DWORD *v30; // rbx
  char v31; // al
  __int64 ExtensionTable; // rax
  int v33; // [rsp+30h] [rbp-30h] BYREF
  __int64 v34; // [rsp+38h] [rbp-28h]
  _BYTE v35[32]; // [rsp+40h] [rbp-20h] BYREF
  int v36; // [rsp+A0h] [rbp+40h] BYREF
  int v37; // [rsp+B0h] [rbp+50h]
  int v38; // [rsp+B8h] [rbp+58h]

  v38 = a4;
  v37 = a3;
  v7 = a4;
  v8 = a3;
  if ( (*(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1422)) != 63 )
  {
    v10 = a1 + 800;
    v11 = *(char *)(a1 + 792) | *(char *)(a1 + 1422);
    v34 = a1 + 800;
    v12 = v11 ^ 0x3F;
    v15 = !_BitScanForward((unsigned int *)&a1, v12);
    if ( !v15 )
    {
      while ( 1 )
      {
        v12 &= v12 - 1;
        v13 = v10 + 96 * a1;
        v14 = *(_QWORD *)(v13 + 32);
        if ( !v14 || (v14 & 2) != 0 )
          break;
        if ( a2 && (v14 & 1) != 0 )
          goto LABEL_23;
        if ( *(__int64 *)(v13 + 32) >= 0 )
        {
          v27 = a2;
LABEL_26:
          if ( !v27 )
            goto LABEL_23;
          goto LABEL_11;
        }
        if ( a2 )
        {
          if ( (*(_BYTE *)(v13 + 27) & 1) != 0 )
            goto LABEL_23;
          if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
          {
            if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v10 + 96 * a1, v10, 15LL) == *(_BYTE *)(v13 + 48) )
              goto LABEL_22;
LABEL_11:
            v16 = 0;
            v33 = 0;
            LockedHeadEntry = KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v13);
            v20 = LockedHeadEntry;
            if ( LockedHeadEntry )
            {
              if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
              {
                if ( v8 )
                {
                  if ( v13 != LockedHeadEntry )
                    KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v13);
                  v21 = *(_QWORD *)(v20 + 56);
                  if ( v21 )
                  {
                    v22 = *(_BYTE *)(v21 + 48);
                    LOBYTE(v36) = v22;
                  }
                  else
                  {
                    LOBYTE(v36) = 15;
                    v22 = 15;
                  }
                  v23 = v22;
                  if ( (*(_BYTE *)(v20 + 25) & 1) == 0 )
                  {
                    v28 = KiAbOwnerComputeCpuPriorityKey(v20, v18, v19);
                    v23 = v29;
                    if ( v28 < v29 )
                    {
                      LOBYTE(v36) = v28;
                      v23 = v28;
                    }
                  }
                  KiAbTryIncrementIoWaiterCounts(v13, v20);
                  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v13);
                  if ( v23 < CpuPriorityKey )
                  {
                    if ( v25 )
                      goto LABEL_47;
                  }
                  else
                  {
                    if ( !v25 )
                      goto LABEL_21;
LABEL_47:
                    KiAbIoBoostOwners(v20, v25, a5, a6, a7);
                  }
                  LOBYTE(v24) = CpuPriorityKey;
                  KiAbCpuBoostOwners(v20, v24, a5, a6, a7);
                }
LABEL_33:
                KxReleaseQueuedSpinLock(v35);
                if ( v16 )
                {
                  v30 = (_DWORD *)(v13 - 16LL * *(unsigned __int8 *)(v13 + 24));
                  if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v30, 1953261124LL) )
                  {
                    if ( (v16 & 1) != 0 )
                      IoBoostThreadIoPriority(v30, 2LL, 0x80000000LL);
                    if ( (v16 & 2) != 0 && v30[452] )
                    {
                      ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                      if ( ExtensionTable )
                      {
                        (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v30);
                        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                      }
                    }
                    ObDereferenceObjectDeferDeleteWithTag(v30, 0x746C6644u);
                  }
                }
                goto LABEL_22;
              }
              if ( !v7 )
                goto LABEL_33;
              if ( v13 != LockedHeadEntry )
                KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
              KiAbDetermineMaxWaiterPriority(v20, &v36);
              if ( v36 )
              {
                if ( (unsigned int)KiAbSetMinimumThreadPriority(v13, (unsigned int)&v36, a5, a6, a7, (__int64)&v33)
                  && v13 != v20 )
                {
                  KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v13);
                }
                v16 = v33;
                goto LABEL_33;
              }
LABEL_21:
              KxReleaseQueuedSpinLock(v35);
            }
LABEL_22:
            v10 = v34;
            goto LABEL_23;
          }
          v31 = *(_BYTE *)(v13 - 16LL * *(unsigned __int8 *)(v13 + 24) + 195);
          if ( v31 > 15 )
            v31 = 15;
          v15 = v31 == *(_BYTE *)(v13 + 48);
        }
        else if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
        {
          v15 = v8 == 0;
        }
        else
        {
          v15 = v7 == 0;
        }
        if ( !v15 )
          goto LABEL_11;
LABEL_23:
        v15 = !_BitScanForward((unsigned int *)&a1, v12);
        v7 = v38;
        v8 = v37;
        if ( v15 )
          return;
      }
      v27 = 0;
      goto LABEL_26;
    }
  }
}
