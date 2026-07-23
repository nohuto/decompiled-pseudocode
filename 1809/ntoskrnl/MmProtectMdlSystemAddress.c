/*
 * XREFs of MmProtectMdlSystemAddress @ 0x1402A9E60
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiIoSpaceIsConstant @ 0x1400E6430 (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x1400E647C (MiMappingHasIoReferences.c)
 *     MiLookupIoPageNode @ 0x140110160 (MiLookupIoPageNode.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiMappingHasIoTracker @ 0x1401233E4 (MiMappingHasIoTracker.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // r14
  unsigned int ProtectionMask; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 ByteCount; // r15
  __int16 v13; // cx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 *v16; // rdi
  unsigned __int64 v17; // rsi
  ULONG_PTR BugCheckParameter4; // rax
  int v19; // r10d
  __int64 v20; // r11
  int v21; // r13d
  unsigned __int64 v22; // rbx
  __int64 v23; // r11
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // r10d
  int v27; // r11d
  __int64 v28; // r11
  int ProtectionPfnCompatible; // eax
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v31; // r10
  unsigned __int8 v32; // r11
  _QWORD *v33; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  int v35; // ecx
  _QWORD *v36; // rax
  int HasIoTracker; // [rsp+30h] [rbp-D0h]
  __int64 ValidPte; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v40; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h]
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v43; // [rsp+64h] [rbp-9Ch]
  int v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+6Ch] [rbp-94h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]

  BugCheckParameter2 = (ULONG_PTR)MemoryDescriptorList;
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
  v13 = MappedSystemVa;
  v45 = 0;
  v42 = 0;
  v14 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  v43 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v15 = ((unsigned __int64)(v13 & 0xFFF) + ByteCount + 4095) >> 12;
  v16 = (__int64 *)(v11 - 0x98000000000LL);
  v40 = v15;
  v17 = v14;
  v44 = 20;
  HasIoTracker = 0;
  v39 = v14;
  while ( v15 )
  {
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v16);
    ValidPte = BugCheckParameter4;
    if ( ((unsigned __int8)BugCheckParameter4 & (unsigned __int8)v20) != 0 )
    {
      v21 = v20;
      v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL;
      MiInsertTbFlushEntry((__int64)&v42, v17, v23, 0);
      if ( v17 == v14 )
        HasIoTracker = MiMappingHasIoTracker(v14);
      v20 = 1LL;
    }
    else
    {
      if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
        KeBugCheckEx(0x1Au, 0x1235uLL, BugCheckParameter2, (ULONG_PTR)v16, BugCheckParameter4);
      v24 = BugCheckParameter4;
      if ( qword_14043B180 )
      {
        if ( (BugCheckParameter4 & 0x10) != 0 )
          v24 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v24 = BugCheckParameter4 & ~qword_14043B180;
      }
      v22 = (v24 >> 12) & 0xFFFFFFFFFLL;
      v21 = 0;
      if ( v17 == v14 )
      {
        if ( (BugCheckParameter4 & 8) != 0 )
          v19 = v20;
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
        __writecr8(2uLL);
        if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v20) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v33 = MiIoSpaceIsConstant(v22, v20);
        if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v32) != 0 && KeGetCurrentIrql() >= v31 && CurrentIrql < v31 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        if ( v33 )
        {
          v35 = *((_DWORD *)v33 + 10);
        }
        else
        {
          v36 = MiLookupIoPageNode(v22);
          if ( !v36 )
            KeBugCheckEx(0x1Au, 0x61949uLL, v22, 1uLL, 0LL);
          v35 = *(unsigned __int16 *)(v36[6] + 2 * (v22 - v36[5])) >> 14;
        }
        v17 = v39;
        v15 = v40;
        ProtectionPfnCompatible = v9 & 7;
        if ( v35 )
        {
          if ( v35 == 2 )
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
        MiWriteValidPteNewProtection((unsigned __int64)v16, ValidPte);
        v28 = 1LL;
LABEL_68:
        if ( HasIoTracker == (_DWORD)v28 && v17 == v14 )
        {
          MiMappingHasIoReferences(v14);
          v28 = 1LL;
        }
        goto LABEL_71;
      }
      if ( MiPteInShadowRange((unsigned __int64)v16) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v8 = (unsigned int)v28;
          if ( !HIBYTE(word_14043B26C) )
            goto LABEL_64;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
LABEL_64:
          if ( ((unsigned __int8)v7 & (unsigned __int8)v28) != 0 )
            v10 |= 0x8000000000000000uLL;
        }
      }
      *v16 = v10;
      if ( (_DWORD)v8 )
        MiWritePteShadow((__int64)v16, v10);
      goto LABEL_68;
    }
    v25 = MiSwizzleInvalidPte((v22 << 12) | 0xB00);
    ValidPte = v25;
    if ( v26 == v27 && v17 == v14 )
      ValidPte = v25 | 8;
    if ( MiPteInShadowRange((unsigned __int64)v16) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v8 = (unsigned int)v28;
        if ( !HIBYTE(word_14043B26C) )
          goto LABEL_34;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
LABEL_34:
        if ( ((unsigned __int8)v7 & (unsigned __int8)v28) != 0 )
          v10 |= 0x8000000000000000uLL;
      }
    }
    *v16 = v10;
    if ( (_DWORD)v8 )
      MiWritePteShadow((__int64)v16, v10);
LABEL_71:
    v17 += 4096LL;
    ++v16;
    v15 -= v28;
    v39 = v17;
    v40 = v15;
  }
  MiFlushTbList(&v42, v10, v7, v8);
  return 0;
}
