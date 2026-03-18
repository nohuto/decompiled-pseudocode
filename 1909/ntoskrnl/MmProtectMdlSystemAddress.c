/*
 * XREFs of MmProtectMdlSystemAddress @ 0x1402C1310
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMappingHasIoTracker @ 0x1400F5240 (MiMappingHasIoTracker.c)
 *     MiIoSpaceIsConstant @ 0x1400F6B7C (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x1400F6E30 (MiMappingHasIoReferences.c)
 *     MiLookupIoPageNode @ 0x1400F7460 (MiLookupIoPageNode.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // rbp
  unsigned int ProtectionMask; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 ByteCount; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  __int64 *v16; // rdi
  unsigned __int64 v17; // r13
  ULONG_PTR BugCheckParameter4; // rax
  int v19; // r10d
  unsigned __int64 v20; // r11
  int v21; // r12d
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  __int64 TransitionPte; // rax
  int v25; // r10d
  int ProtectionPfnCompatible; // eax
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v28; // r11
  _QWORD *v29; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  int v31; // ecx
  _QWORD *v32; // rax
  int HasIoTracker; // [rsp+30h] [rbp-128h]
  unsigned __int64 ValidPte; // [rsp+38h] [rbp-120h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-110h]
  _QWORD v37[24]; // [rsp+50h] [rbp-108h] BYREF

  BugCheckParameter2 = (ULONG_PTR)MemoryDescriptorList;
  memset(v37, 0, 0xB8uLL);
  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(MappedSystemVa) )
    return -1073741637;
  ProtectionMask = MiMakeProtectionMask(NewProtect);
  v9 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  v10 = ProtectionMask >> 3;
  if ( (unsigned int)(v10 - 1) <= 1 || (_DWORD)v10 == 3 && (ProtectionMask & 7) != 0 )
    return -1073741755;
  if ( (ProtectionMask & 5) == 5 )
    return -1073741755;
  v11 = (MappedSystemVa >> 9) & 0x7FFFFFFFF8LL;
  ByteCount = MemoryDescriptorList->ByteCount;
  v37[3] = 0LL;
  v13 = MappedSystemVa & 0xFFF;
  LODWORD(v37[1]) = 20;
  v14 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  v15 = (v13 + ByteCount + 4095) >> 12;
  v16 = (__int64 *)(v11 - 0x98000000000LL);
  v35 = v15;
  HasIoTracker = 0;
  v17 = v14;
  while ( v15 )
  {
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v16);
    ValidPte = BugCheckParameter4;
    if ( (BugCheckParameter4 & 1) != 0 )
    {
      v21 = 1;
      v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL;
      MiInsertTbFlushEntry((__int64)v37, v17, 1LL, 0);
      if ( v17 == v14 )
        HasIoTracker = MiMappingHasIoTracker(v14);
      v20 = 2LL;
    }
    else
    {
      if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
        KeBugCheckEx(0x1Au, 0x1235uLL, BugCheckParameter2, (ULONG_PTR)v16, BugCheckParameter4);
      v23 = BugCheckParameter4;
      if ( qword_140465800 )
      {
        if ( (BugCheckParameter4 & 0x10) != 0 )
          v23 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v23 = BugCheckParameter4 & ~qword_140465800;
      }
      v22 = (v23 >> 12) & 0xFFFFFFFFFLL;
      v21 = 0;
      if ( v17 == v14 )
      {
        if ( (BugCheckParameter4 & 8) != 0 )
          v19 = 1;
        HasIoTracker = v19;
      }
    }
    if ( v9 != 24 )
    {
      if ( (*(_QWORD *)(48 * v22 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v9, 48 * v22 - 0x58000000000LL);
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v20);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < (unsigned __int8)v20 )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v29 = MiIoSpaceIsConstant(v22, 1LL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v28 && CurrentIrql < v28 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        if ( v29 )
        {
          v31 = *((_DWORD *)v29 + 10);
        }
        else
        {
          v32 = MiLookupIoPageNode(v22);
          if ( !v32 )
            KeBugCheckEx(0x1Au, 0x61949uLL, v22, 1uLL, 0LL);
          v31 = *(unsigned __int16 *)(v32[6] + 2 * (v22 - v32[5])) >> 14;
        }
        v15 = v35;
        ProtectionPfnCompatible = v9 & 7;
        if ( v31 )
        {
          if ( v31 == 2 )
            ProtectionPfnCompatible |= 0x18u;
        }
        else
        {
          ProtectionPfnCompatible |= 8u;
        }
      }
      ValidPte = MiMakeValidPte((unsigned __int64)v16, v22, ProtectionPfnCompatible | 0xA0000000);
      if ( v21 == 1 )
      {
        MiWriteValidPteNewProtection((unsigned __int64)v16);
LABEL_68:
        if ( HasIoTracker == 1 && v17 == v14 )
          MiMappingHasIoReferences(v14);
        goto LABEL_71;
      }
      if ( MiPteInShadowRange((unsigned __int64)v16) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v8 = 1LL;
          if ( !HIBYTE(word_1404658EC) )
            goto LABEL_64;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
LABEL_64:
          if ( (v7 & 1) != 0 )
            v10 |= 0x8000000000000000uLL;
        }
      }
      *v16 = v10;
      if ( (_DWORD)v8 )
        MiWritePteShadow((__int64)v16);
      goto LABEL_68;
    }
    TransitionPte = MiMakeTransitionPte(v22, 24);
    ValidPte = TransitionPte;
    if ( v25 == 1 && v17 == v14 )
      ValidPte = TransitionPte | 8;
    if ( MiPteInShadowRange((unsigned __int64)v16) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v8 = 1LL;
        if ( !HIBYTE(word_1404658EC) )
          goto LABEL_34;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
LABEL_34:
        if ( (v7 & 1) != 0 )
          v10 |= 0x8000000000000000uLL;
      }
    }
    *v16 = v10;
    if ( (_DWORD)v8 )
      MiWritePteShadow((__int64)v16);
LABEL_71:
    v17 += 4096LL;
    ++v16;
    v35 = --v15;
  }
  MiFlushTbList((int *)v37, v10, v7, v8);
  return 0;
}
