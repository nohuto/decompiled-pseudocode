/*
 * XREFs of MiProtectEnclavePages @ 0x1402D4818
 * Callers:
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400FABB4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeCanChangeEnclavePageProtection @ 0x1402A60DC (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1402A61A4 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x1402A63F4 (KeTrackEnclaveTbFlush.c)
 *     MiFlushEnclaveTb @ 0x1402D4400 (MiFlushEnclaveTb.c)
 *     MiUpdateEnclavePfnProtection @ 0x1402D50F4 (MiUpdateEnclavePfnProtection.c)
 *     MiWriteEnclavePte @ 0x1402D5188 (MiWriteEnclavePte.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140851614 (VslDebugProtectSecureProcessMemory.c)
 */

__int64 __fastcall MiProtectEnclavePages(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        _DWORD *a9,
        unsigned __int64 *a10,
        __int64 *a11)
{
  unsigned __int64 v11; // rbx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 result; // rax
  __int64 *v19; // rcx
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  int v22; // edx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  unsigned __int64 ValidPte; // rdi
  unsigned __int8 v26; // al
  unsigned int v27; // r10d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned int v30; // r8d
  int v31; // eax
  ULONG_PTR v32; // r9
  __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  int v35; // eax
  int v36; // ebx
  unsigned __int64 v37; // r15
  unsigned __int8 v38; // [rsp+30h] [rbp-D0h]
  unsigned int v39; // [rsp+34h] [rbp-CCh]
  int v40; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter4; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v44; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v45; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  unsigned __int64 v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 *v52; // [rsp+98h] [rbp-68h]
  unsigned __int64 v53; // [rsp+A0h] [rbp-60h]
  _DWORD *v54; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v55; // [rsp+B0h] [rbp-50h]
  _QWORD v56[24]; // [rsp+C0h] [rbp-40h] BYREF

  v11 = a4;
  v48 = a3;
  v41 = a4;
  v54 = a9;
  v55 = a10;
  v52 = a11;
  memset(v56, 0, 0xB8uLL);
  v15 = *(_DWORD *)(a3 + 64);
  if ( (v15 & 1) != 0 )
  {
    v20 = a7;
    LOBYTE(v21) = 0;
    v22 = a8 & 0x20000000;
    if ( (a8 & 0x20000000) != 0 )
    {
      if ( (a8 & 0x90000000) != 0 )
        return 3221225541LL;
    }
    else
    {
      if ( (v15 & 2) == 0 || (*(_DWORD *)(v48 + 72) & 1) == 0 )
        return 3221225496LL;
      if ( (a8 & 0x80000000) != 0 )
      {
        if ( a8 == 0x80000000 && !a6 )
        {
          LOBYTE(v21) = 8;
          goto LABEL_30;
        }
        return 3221225541LL;
      }
      if ( (a8 & 0x10000000) != 0 )
      {
        if ( a8 != 0x10000000 || a6 )
          return 3221225541LL;
        LOBYTE(v21) = 0x80;
        goto LABEL_30;
      }
    }
    if ( a7 > 7 && a7 != 24 || (a7 & 5) == 5 )
      return 3221225541LL;
    if ( a7 == 24 )
    {
      if ( v22 )
        return 3221225541LL;
    }
    else
    {
      v21 = (a7 & 4 | 2) >> 1;
      if ( (a7 & 2) != 0 )
        LOBYTE(v21) = v21 | 4;
    }
LABEL_30:
    v23 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v53 = v23;
    v47 = 0LL;
    v49 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51 = 0xFFFFFFFFLL;
    v24 = 0LL;
    v45 = -1LL;
    v40 = 0;
    v44 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
    if ( !v22 )
      v20 = a7 & 2 | 4;
    LODWORD(v56[0]) = 1;
    WORD2(v56[0]) = 0;
    v56[2] = 0LL;
    LODWORD(v56[1]) = 20;
    v56[3] = 0LL;
    v42 = v22 != 0 ? 2 : 4;
    ValidPte = MiMakeValidPte(v23, -1LL, v20 | 0x80000000);
    v26 = MiLockWorkingSetShared((__int64)v44);
    v27 = 0;
    v28 = v49;
    v29 = v41 & 0xFFFFFFFFFFFFF000uLL;
    v30 = v42;
    v38 = v26;
    v31 = 0;
    v46 = v41 & 0xFFFFFFFFFFFFF000uLL;
    v39 = 0;
    while ( 1 )
    {
      v41 = v29;
      v32 = v23;
      BugCheckParameter4 = v23;
      if ( v23 <= v28 )
        break;
LABEL_69:
      if ( v31 < 0 || (++v27, v39 = v27, v27 >= v30) )
      {
        v36 = v40;
LABEL_74:
        MiFlushEnclaveTb((int *)v56, v45, a8, v32);
        if ( v47 )
          MiUnlockPageTableInternal((__int64)v44, v47);
        MiUnlockWorkingSetShared((__int64)v44, v38);
        if ( v36 >= 0 )
        {
          v36 = 0;
          *v54 = MmProtectToValue[(unsigned int)v51];
          v37 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v46;
          *v55 = v46;
          *v52 = v37 + 4096;
        }
        return (unsigned int)v36;
      }
      v24 = v47;
    }
    while ( 1 )
    {
      if ( (v32 & 0x78) != 0 || v32 == v23 )
        goto LABEL_44;
      if ( MiWorkingSetIsContended((__int64)v44) || KeShouldYieldProcessor() )
        goto LABEL_40;
      if ( v24 )
        break;
LABEL_46:
      MiFlushEnclaveTb((int *)v56, v45, a8, v32);
      v45 = -1LL;
      if ( v24 )
        MiUnlockPageTableInternal((__int64)v44, v24);
      v47 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(BugCheckParameter4, 0LL, (*(_DWORD *)(v48 + 48) >> 12) & 0x3F, v38, 0);
      v32 = BugCheckParameter4;
      v27 = v39;
LABEL_49:
      if ( v27 )
      {
        if ( v27 == v42 - 1 )
        {
          v50 = MI_READ_PTE_LOCK_FREE(v32);
          v33 = v50;
          v34 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50) >> 12) & 0xFFFFFFFFFLL;
          MiUpdateEnclavePfnProtection(48 * v34 - 0x58000000000LL, v20);
          ValidPte = (v34 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
          MiWriteEnclavePte(BugCheckParameter4, 0);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v33, ValidPte) )
            MiInsertTbFlushEntry((__int64)v56, v41, 1LL, 0);
          v23 = v53;
          v45 = v41;
LABEL_63:
          v27 = v39;
        }
        else
        {
          if ( v27 != 1 )
          {
            KeChangeEnclavePageProtection(v41, v21);
            KeTrackEnclaveTbFlush();
            goto LABEL_63;
          }
          v35 = KeCanChangeEnclavePageProtection();
          v27 = v39;
          v40 = v35;
          if ( v35 < 0 )
          {
            v31 = -1073741800;
            v40 = -1073741800;
LABEL_68:
            v30 = v42;
            v29 = v46;
            v28 = v49;
            goto LABEL_69;
          }
        }
        v32 = BugCheckParameter4;
        goto LABEL_65;
      }
      v50 = MI_READ_PTE_LOCK_FREE(v32);
      if ( (v50 & 1) == 0 )
      {
        v36 = -1073741800;
        goto LABEL_74;
      }
      if ( v32 == v23 )
        v51 = (*(_DWORD *)(48
                         * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50) >> 12) & 0xFFFFFFFFFLL)
                         - 0x57FFFFFFFF0LL) >> 5) & 0x1F;
LABEL_65:
      v41 += 4096LL;
      v32 += 8LL;
      BugCheckParameter4 = v32;
      if ( v32 > v49 )
      {
        v31 = v40;
        goto LABEL_68;
      }
      v24 = v47;
    }
    if ( (unsigned int)MiPageTableLockIsContended((__int64)v44, v24) )
    {
LABEL_40:
      MiFlushEnclaveTb((int *)v56, v45, a8, v32);
      v45 = -1LL;
      if ( v24 )
      {
        MiUnlockPageTableInternal((__int64)v44, v24);
        v24 = 0LL;
        v47 = 0LL;
      }
      MiUnlockWorkingSetShared((__int64)v44, v38);
      MiLockWorkingSetShared((__int64)v44);
    }
    v27 = v39;
    v32 = BugCheckParameter4;
LABEL_44:
    if ( v24 && (v32 & 0xFFF) != 0 )
      goto LABEL_49;
    goto LABEL_46;
  }
  v16 = *(_QWORD *)(a3 + 72);
  v17 = a5 - v11 + 1;
  v46 = v17;
  if ( *(_BYTE *)(v16 + 76) && (a8 & 0x20000000) != 0 )
  {
    *a9 = 4;
    result = 0LL;
LABEL_7:
    v19 = v52;
    *a10 = v11;
    *v19 = v17;
    return result;
  }
  result = VslDebugProtectSecureProcessMemory(a1, a2, (unsigned int)&v41, (unsigned int)&v46, a6, (__int64)a9);
  if ( (int)result >= 0 )
  {
    v17 = v46;
    v11 = v41;
    goto LABEL_7;
  }
  return result;
}
