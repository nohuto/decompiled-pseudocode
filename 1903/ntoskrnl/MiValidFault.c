/*
 * XREFs of MiValidFault @ 0x1400C7190
 * Callers:
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 * Callees:
 *     MiTbFlushType @ 0x140023DD0 (MiTbFlushType.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiLockPageAndSetDirty @ 0x14005D264 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400A957C (MiCheckAndUpdateIoAttribution.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdatePrefetchPriority @ 0x14010A9B0 (MiUpdatePrefetchPriority.c)
 *     KeInvalidAccessAllowed @ 0x1401154F0 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x1401341C4 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiCanGrantExecute @ 0x1402D22EC (MiCanGrantExecute.c)
 *     MiKernelWriteToExecutableMemory @ 0x1402D2C0C (MiKernelWriteToExecutableMemory.c)
 *     MiSetFaultPacketDirectives @ 0x1402D3084 (MiSetFaultPacketDirectives.c)
 *     MiValidVirtualizationFault @ 0x1402D30A4 (MiValidVirtualizationFault.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r13
  ULONG_PTR v3; // r11
  ULONG_PTR v4; // r15
  volatile signed __int64 *v6; // r14
  _KPROCESS *Process; // r8
  signed __int64 v8; // rbx
  unsigned int v9; // r9d
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  int v15; // r8d
  int v16; // r10d
  signed __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 result; // rax
  char v20; // al
  int v21; // eax
  _BYTE *v22; // r15
  _BYTE *v23; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v25; // edx
  unsigned __int64 DeepFreezeStartTime; // r10
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // [rsp+70h] [rbp+8h]
  __int64 v31; // [rsp+78h] [rbp+10h] BYREF
  __int64 v32; // [rsp+80h] [rbp+18h]

  v31 = a2;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v6 = (volatile signed __int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v4 & 1) != 0 )
  {
    v20 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v20 == 1 )
    {
      MiUpdatePrefetchPriority(v4 & 0xFFFFFFFFFFFFFFFEuLL, v2, 0LL);
    }
    else if ( v20 != 3 )
    {
      goto LABEL_2;
    }
    return 0LL;
  }
LABEL_2:
  v8 = v31;
  if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (v31 & 0x80u) != 0LL )
  {
    v23 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v4 & 1) == 0 )
      goto LABEL_68;
    if ( *v23 != 1 )
    {
      if ( (v4 & 1) == 0 )
        goto LABEL_68;
      if ( *v23 != 3 )
      {
        if ( (v4 & 1) != 0 )
          goto LABEL_69;
LABEL_68:
        if ( (unsigned __int8)KeInvalidAccessAllowed(v4) != 1 )
LABEL_69:
          KeBugCheckEx(0x50u, v2, v3, v4, 8uLL);
      }
    }
    return 3221225477LL;
  }
  v9 = 0;
  v30 = 0;
  if ( (v31 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
    return 3221225477LL;
  v10 = *(_QWORD *)(a1 + 8) & 2LL;
  if ( (v3 & 2) != 0 )
  {
    if ( (v31 & 0x200) != 0 )
    {
      v21 = MiCopyOnWrite(v2, (unsigned __int64)v6, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v21 < 0 )
        return MiSetFaultPacketDirectives(a1, (unsigned int)v21);
      v18 = 274;
      goto LABEL_33;
    }
    if ( (v31 & 0x800) == 0 )
      return 3221225477LL;
    if ( v31 >= 0
      && (v31 & 0x42) == 0
      && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0
      && v2 < 0xFFFF800000000000uLL )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
      {
        if ( (BYTE1(CurrentThread[1].Queue) & 0x10) == 0 )
          return 3221227299LL;
        goto LABEL_80;
      }
      if ( (BYTE1(CurrentThread[1].Queue) & 0x20) != 0 )
      {
LABEL_80:
        v8 = v31;
        goto LABEL_8;
      }
      v8 = v31;
      result = MiKernelWriteToExecutableMemory(a1, v31);
      v30 = result;
      if ( (int)result < 0 )
        return result;
      goto LABEL_86;
    }
  }
  else if ( (v3 & 0x10) != 0 )
  {
    if ( v31 < 0 )
    {
      if ( (unsigned int)MiCanGrantExecute(Process, v2) != 1
        || (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFLL)
                      - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      {
        return 3221225477LL;
      }
      MiWriteValidPteNewProtection((unsigned __int64)v6);
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        goto LABEL_32;
      v25 = 1;
LABEL_106:
      KeFlushSingleTb(v2, v25, 0);
      goto LABEL_32;
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
    {
      MiCheckSystemNxFault(a1, v31, 5LL);
LABEL_86:
      v9 = 0;
    }
  }
LABEL_8:
  if ( v10 )
  {
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31);
    if ( (*(_QWORD *)(48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
    {
      v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v13 = *(_QWORD *)(v12 + 16);
      v14 = v12 + 16;
      v32 = v12;
      if ( (unsigned __int64)(v12 + 16) >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v13 & 1) != 0
          && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v27 = v13 | 0x20;
            v28 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v14 >> 3) & 0x1FF));
            if ( (v28 & 0x20) == 0 )
              v27 = v13;
            v13 = v27;
            v12 = v32;
            if ( (v28 & 0x42) != 0 )
              v13 |= 0x42uLL;
          }
        }
        v8 = v31;
      }
      if ( (v13 & 1) == 0
        && (!v13 || !qword_140465B00 || (v13 & qword_140465B00) != 0)
        && (v13 & 0x400) == 0
        && (v13 & 4) != 0 )
      {
        MiLockPageAndSetDirty(v12, 1);
        v12 = v32;
        v9 = 0;
      }
      if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)v14 & 0x400LL) != 0 )
      {
        MiCheckAndUpdateIoAttribution(v12);
        v9 = 0;
      }
    }
  }
  else if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 && ((MiFlags & 0x2000000) == 0 || (v8 & 0x42) != 0x40) )
  {
    return 3221225477LL;
  }
  v15 = v9;
  v16 = v9;
  v17 = v8;
  if ( (v8 & 0x20) != 0 )
  {
    if ( ((v4 & 1) == 0 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 5)
      && (MiFlags & 0x100) == 0
      && (MiFlags & 0x200) == 0 )
    {
      v15 = 1;
    }
  }
  else
  {
    v17 = v8 | 0x20;
    v16 = 1;
  }
  if ( (*(_QWORD *)(a1 + 8) & 2) == 0 || (v17 & 2) != 0 )
  {
    if ( !v16 )
    {
LABEL_31:
      if ( !v15 || (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        goto LABEL_32;
      v29 = *(_QWORD *)(a1 + 56);
      if ( v29 )
        v9 = MiTbFlushType(v29);
      v25 = v9;
      goto LABEL_106;
    }
  }
  else
  {
    if ( (v17 & 0x42) == 0x40 )
      v15 = 1;
    v17 |= 0x62uLL;
  }
  if ( v8 == _InterlockedCompareExchange64(v6, v17, v8) )
    goto LABEL_31;
LABEL_32:
  v18 = v30;
LABEL_33:
  if ( (v4 & 1) != 0 )
  {
    v22 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v22 == 5 )
      MiValidVirtualizationFault(a1, v22, v6);
  }
  return v18;
}
