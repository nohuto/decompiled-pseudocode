/*
 * XREFs of MiValidFault @ 0x1400B6D30
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageAndSetDirty @ 0x140086018 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiUpdatePrefetchPriority @ 0x1400B7100 (MiUpdatePrefetchPriority.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400DF174 (MiCheckAndUpdateIoAttribution.c)
 *     MiCheckSystemNxFault @ 0x1400E9508 (MiCheckSystemNxFault.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     KeInvalidAccessAllowed @ 0x140117D7C (KeInvalidAccessAllowed.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiCanGrantExecute @ 0x1402BBD50 (MiCanGrantExecute.c)
 *     MiSetFaultPacketDirectives @ 0x1402BC930 (MiSetFaultPacketDirectives.c)
 *     MiValidVirtualizationFault @ 0x1402BC950 (MiValidVirtualizationFault.c)
 *     MiForceCrashForInvalidAccess @ 0x14084D104 (MiForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r11
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // r14
  volatile signed __int64 v8; // r10
  __int64 v9; // rdx
  _KPROCESS *Process; // r13
  signed __int64 v11; // rbx
  unsigned int v12; // r9d
  ULONG_PTR v13; // r15
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  int v20; // r8d
  int v21; // r10d
  signed __int64 v22; // rcx
  char v24; // al
  int v25; // eax
  unsigned int v26; // r15d
  _BYTE *v27; // r12
  __int64 v28; // rax
  _BYTE *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r10
  __int64 v32; // r10
  __int64 v33; // rdx
  unsigned __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // [rsp+70h] [rbp+8h]
  __int64 v40; // [rsp+78h] [rbp+10h] BYREF
  ULONG_PTR v41; // [rsp+80h] [rbp+18h]

  v40 = a2;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v6 = (*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL;
  v41 = *(_QWORD *)a1;
  v7 = v6 - 0x98000000000LL;
  v8 = *(_QWORD *)v7;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v9 )
    {
      v28 = *(_QWORD *)(v9 + 8 * ((v7 >> 3) & 0x1FF));
      v9 = v8 | 0x20;
      if ( (v28 & 0x20) == 0 )
        v9 = *(_QWORD *)v7;
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v4 & 1) != 0 )
  {
    v24 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v24 == 1 )
    {
      MiUpdatePrefetchPriority(v4 & 0xFFFFFFFFFFFFFFFEuLL, v2, 0LL);
    }
    else if ( v24 != 3 )
    {
      goto LABEL_3;
    }
    return 0LL;
  }
LABEL_3:
  v11 = v40;
  if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (v40 & 0x80u) != 0LL )
  {
    v29 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v4 & 1) == 0 )
      goto LABEL_81;
    if ( *v29 != 1 )
    {
      if ( (v4 & 1) == 0 )
        goto LABEL_81;
      if ( *v29 != 3 )
      {
        if ( (v4 & 1) != 0 )
          goto LABEL_82;
LABEL_81:
        if ( (unsigned __int8)KeInvalidAccessAllowed(v4, v9, v3, 0xFFFFF68000000000uLL) != 1 )
LABEL_82:
          KeBugCheckEx(0x50u, v2, v3, v4, 8uLL);
      }
    }
    return (unsigned int)-1073741819;
  }
  v12 = 0;
  v39 = 0;
  if ( (v40 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
    return (unsigned int)-1073741819;
  v13 = v3 & 2;
  if ( (v3 & 2) != 0 )
  {
    if ( (v40 & 0x200) != 0 )
    {
      v25 = MiCopyOnWrite(v2, v7, 0xFFFFFFFFFFFFFFFFuLL, 0);
      v26 = v25;
      if ( v25 < 0 )
      {
        MiSetFaultPacketDirectives(a1, (unsigned int)v25);
        return v26;
      }
      v12 = 274;
      v39 = 274;
      goto LABEL_33;
    }
    if ( (v40 & 0x800) == 0 )
      return (unsigned int)-1073741819;
    if ( v40 >= 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 && v2 < 0xFFFF800000000000uLL )
    {
      if ( (BYTE1(KeGetCurrentThread()[1].Queue) & 0x10) == 0 )
      {
        v26 = -1073739997;
        if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
        {
          v30 = MiReleaseFaultState((__int64 *)(a1 + 56), 17, 0LL);
          MiForceCrashForInvalidAccess(Process);
          MiRelockFaultState((__int64 *)(a1 + 56), v30);
        }
        return v26;
      }
      v11 = v40;
    }
  }
  else if ( (v3 & 0x10) != 0 )
  {
    if ( v40 < 0 )
    {
      if ( (unsigned int)MiCanGrantExecute(Process, v2) != 1
        || (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFLL)
                      - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
      {
        return (unsigned int)-1073741819;
      }
      v32 = v31 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        v32 |= 0x20uLL;
      MiWriteValidPteNewProtection(v7, v32);
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        goto LABEL_132;
      v33 = 1LL;
LABEL_131:
      KeFlushSingleTb(v41, v33, 0LL);
LABEL_132:
      v12 = 0;
      goto LABEL_33;
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
    {
      MiCheckSystemNxFault(a1, v40, 5LL);
      v12 = 0;
    }
  }
  if ( !v13 )
  {
    if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 && ((MiFlags & 0x2000000) == 0 || (v11 & 0x42) != 0x40) )
      return (unsigned int)-1073741819;
    goto LABEL_21;
  }
  v14 = v11;
  if ( (unsigned __int64)&v40 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v40 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( !v34 )
      {
        v11 = v40;
        v14 = v40;
        goto LABEL_11;
      }
      v35 = *(_QWORD *)(v34 + 8 * (((unsigned __int64)&v40 >> 3) & 0x1FF));
      if ( (v35 & 0x20) != 0 )
        v14 = v11 | 0x20;
      if ( (v35 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
    v11 = v40;
  }
LABEL_11:
  v15 = (v14 >> 12) & 0xFFFFFFFFFLL;
  v16 = 6 * v15;
  if ( (*(_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
  {
    v17 = 48 * v15 - 0x58000000000LL;
    v18 = *(_QWORD *)(v17 + 16);
    v19 = v17 + 16;
    if ( (unsigned __int64)(v17 + 16) >= 0xFFFFF6FB7DBED000uLL
      && v19 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0 )
    {
      v15 = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(v15 + 640) != 1 && (v18 & 1) != 0 && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v15 = (__int64)KeGetCurrentThread()->ApcState.Process;
        v16 = *(_QWORD *)(v15 + 1544);
        if ( v16 )
        {
          v36 = *(_QWORD *)(v16 + 8 * ((v19 >> 3) & 0x1FF));
          v16 = v18 | 0x20;
          v15 = (unsigned __int8)v36;
          LOBYTE(v15) = v36 & 0x20;
          if ( (v36 & 0x20) == 0 )
            v16 = *(_QWORD *)(v17 + 16);
          v18 = v16;
          if ( (v36 & 0x42) != 0 )
            v18 = v16 | 0x42;
        }
      }
      v11 = v40;
    }
    if ( (v18 & 1) == 0
      && (!v18 || !qword_14043B180 || (v18 & qword_14043B180) != 0)
      && (v18 & 0x400) == 0
      && (v18 & 4) != 0 )
    {
      MiLockPageAndSetDirty(v17, 1LL, v16);
      v12 = 0;
    }
    if ( (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)v19 & 0x400LL) != 0 )
    {
      MiCheckAndUpdateIoAttribution(v17, v15, v16, 0LL);
      v12 = 0;
    }
  }
LABEL_21:
  v20 = 0;
  v21 = 0;
  v22 = v11;
  if ( (v11 & 0x20) != 0 )
  {
    if ( ((v4 & 1) == 0 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 5)
      && (MiFlags & 0x100) == 0
      && (MiFlags & 0x200) == 0 )
    {
      v20 = 1;
    }
  }
  else
  {
    v22 = v11 | 0x20;
    v21 = 1;
  }
  if ( (*(_QWORD *)(a1 + 8) & 2) == 0 || (v22 & 2) != 0 )
  {
    if ( !v21 )
    {
LABEL_32:
      if ( !v20 || (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        goto LABEL_33;
      v37 = *(_QWORD *)(a1 + 56);
      v38 = 0;
      if ( v37 )
        v38 = MiTbFlushType(v37);
      v33 = v38;
      goto LABEL_131;
    }
  }
  else
  {
    if ( (v22 & 0x42) == 0x40 )
      v20 = 1;
    v22 |= 0x62uLL;
  }
  if ( v11 == _InterlockedCompareExchange64((volatile signed __int64 *)v7, v22, v11) )
    goto LABEL_32;
LABEL_33:
  if ( (v4 & 1) != 0 )
  {
    v27 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v27 == 5 )
    {
      MiValidVirtualizationFault(a1, v27, v7);
      return v39;
    }
  }
  return v12;
}
