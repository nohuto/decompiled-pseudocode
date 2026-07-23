/*
 * XREFs of MiProtectEnclavePages @ 0x1402BE310
 * Callers:
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140086738 (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeCanChangeEnclavePageProtection @ 0x14028FB74 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14028FC3C (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x14028FE64 (KeTrackEnclaveTbFlush.c)
 *     MiFlushEnclaveTb @ 0x1402BDEFC (MiFlushEnclaveTb.c)
 *     MiUpdateEnclavePfnProtection @ 0x1402BEB84 (MiUpdateEnclavePfnProtection.c)
 *     MiWriteEnclavePte @ 0x1402BEC18 (MiWriteEnclavePte.c)
 *     VslDebugProtectSecureProcessMemory @ 0x1408194B0 (VslDebugProtectSecureProcessMemory.c)
 */

__int64 __fastcall MiProtectEnclavePages(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  int v11; // eax
  __int64 result; // rax
  unsigned int v13; // esi
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  int v16; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rbx
  unsigned __int64 ValidPte; // rdi
  unsigned __int8 v20; // al
  unsigned int v21; // r10d
  ULONG_PTR v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned int v24; // r8d
  ULONG_PTR v25; // rax
  ULONG_PTR v26; // r9
  __int64 v27; // r9
  __int64 v28; // rbx
  unsigned __int64 v29; // rsi
  int v30; // eax
  bool v31; // sf
  int v32; // ebx
  unsigned __int64 v33; // r12
  unsigned __int8 v34; // [rsp+30h] [rbp-D0h]
  unsigned int v35; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+40h] [rbp-C0h]
  int v38; // [rsp+44h] [rbp-BCh]
  ULONG_PTR v39; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v40; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v41; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v42; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  unsigned __int64 v47; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  _DWORD *v49; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v50; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v53; // [rsp+B4h] [rbp-4Ch]
  int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]

  v11 = *(_DWORD *)(a3 + 64);
  v49 = a9;
  v50 = a10;
  v51 = a11;
  v46 = a3;
  v36 = a4;
  if ( (v11 & 1) == 0 )
  {
    v43 = a5 - a4 + 1;
    result = VslDebugProtectSecureProcessMemory(a1, a2, (unsigned int)&v36, (unsigned int)&v43, a6, (__int64)a9);
    if ( (int)result >= 0 )
    {
      *a10 = v36;
      *a11 = v43;
    }
    return result;
  }
  v13 = a8;
  LOBYTE(v14) = 0;
  v15 = a7;
  v16 = a8 & 0x20000000;
  if ( (a8 & 0x20000000) != 0 )
  {
    if ( (a8 & 0x90000000) != 0 )
      return 3221225541LL;
  }
  else
  {
    if ( (v11 & 2) == 0 || (*(_DWORD *)(a3 + 72) & 1) == 0 )
      return 3221225496LL;
    if ( a8 < 0 )
    {
      if ( a8 == 0x80000000 && !a6 )
      {
        LOBYTE(v14) = 8;
        goto LABEL_26;
      }
      return 3221225541LL;
    }
    if ( (a8 & 0x10000000) != 0 )
    {
      if ( a8 == 0x10000000 && !a6 )
      {
        LOBYTE(v14) = 0x80;
        goto LABEL_26;
      }
      return 3221225541LL;
    }
  }
  if ( a7 > 7 && a7 != 24 || (a7 & 5) == 5 )
    return 3221225541LL;
  if ( a7 != 24 )
  {
    v14 = (a7 & 4 | 2) >> 1;
    if ( (a7 & 2) != 0 )
      LOBYTE(v14) = v14 | 4;
    goto LABEL_26;
  }
  if ( v16 )
    return 3221225541LL;
LABEL_26:
  v17 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = v17;
  v18 = 0LL;
  v47 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = 0xFFFFFFFFLL;
  v44 = 0LL;
  v37 = 0;
  v42 = -1LL;
  v40 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  if ( !v16 )
    v15 = a7 & 2 | 4;
  v52 = 1;
  v53 = 0;
  v54 = 20;
  v55 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v38 = v16 != 0 ? 2 : 4;
  ValidPte = MiMakeValidPte(v17, -1LL, v15 | 0x80000000);
  v20 = MiLockWorkingSetShared((__int64)v40);
  v21 = 0;
  v22 = v47;
  v23 = v36 & 0xFFFFFFFFFFFFF000uLL;
  v24 = v38;
  v34 = v20;
  v25 = v41;
  v43 = v36 & 0xFFFFFFFFFFFFF000uLL;
  v35 = 0;
  while ( 1 )
  {
    v36 = v23;
    v26 = v25;
    v39 = v25;
    if ( v25 <= v22 )
    {
      while ( 1 )
      {
        if ( (v26 & 0x78) != 0 || v26 == v25 )
          goto LABEL_40;
        if ( MiWorkingSetIsContended((__int64)v40) || KeShouldYieldProcessor() )
          goto LABEL_36;
        if ( v18 )
          break;
LABEL_42:
        MiFlushEnclaveTb(&v52, v42, v13, v26);
        v42 = -1LL;
        if ( v18 )
          MiUnlockPageTableInternal((__int64)v40, v18);
        LOBYTE(v27) = v34;
        v44 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v39, 0LL, (*(_DWORD *)(v46 + 48) >> 8) & 0x3F, v27, 0);
        v26 = v39;
        v21 = v35;
LABEL_45:
        if ( v21 )
        {
          if ( v21 == v38 - 1 )
          {
            v45 = MI_READ_PTE_LOCK_FREE(v26);
            v28 = v45;
            v29 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL;
            MiUpdateEnclavePfnProtection(48 * v29 - 0x58000000000LL, v15);
            ValidPte = (v29 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
            MiWriteEnclavePte(v39, 0);
            if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v28, ValidPte) )
              MiInsertTbFlushEntry((__int64)&v52, v36, 1LL, 0);
            v13 = a8;
            v42 = v36;
            goto LABEL_59;
          }
          if ( v21 != 1 )
          {
            KeChangeEnclavePageProtection(v36, v14);
            KeTrackEnclaveTbFlush();
LABEL_59:
            v21 = v35;
            v26 = v39;
            goto LABEL_60;
          }
          v30 = KeCanChangeEnclavePageProtection();
          v21 = v35;
          v31 = v30 < 0;
          v37 = v30;
          v25 = v41;
          if ( v31 )
          {
            v22 = v47;
            v32 = -1073741800;
            v37 = -1073741800;
LABEL_66:
            v24 = v38;
            v23 = v43;
            goto LABEL_67;
          }
          v26 = v39;
        }
        else
        {
          v45 = MI_READ_PTE_LOCK_FREE(v26);
          if ( (v45 & 1) == 0 )
          {
            v32 = -1073741800;
            goto LABEL_71;
          }
          v25 = v41;
          if ( v26 == v41 )
          {
            v48 = (*(_DWORD *)(48
                             * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL)
                             - 0x57FFFFFFFF0LL) >> 5) & 0x1F;
LABEL_60:
            v25 = v41;
          }
        }
        v36 += 4096LL;
        v26 += 8LL;
        v22 = v47;
        v39 = v26;
        if ( v26 > v47 )
        {
          v32 = v37;
          goto LABEL_66;
        }
        v18 = v44;
      }
      if ( (unsigned int)MiPageTableLockIsContended((__int64)v40, v18) )
      {
LABEL_36:
        MiFlushEnclaveTb(&v52, v42, v13, v26);
        v42 = -1LL;
        if ( v18 )
        {
          MiUnlockPageTableInternal((__int64)v40, v18);
          v18 = 0LL;
          v44 = 0LL;
        }
        MiUnlockWorkingSetShared((__int64)v40, v34);
        MiLockWorkingSetShared((__int64)v40);
      }
      v21 = v35;
      v26 = v39;
LABEL_40:
      if ( v18 && (v26 & 0xFFF) != 0 )
        goto LABEL_45;
      goto LABEL_42;
    }
    v32 = v37;
LABEL_67:
    if ( v32 < 0 )
      break;
    v35 = ++v21;
    if ( v21 >= v24 )
      break;
    v18 = v44;
  }
LABEL_71:
  MiFlushEnclaveTb(&v52, v42, v13, v26);
  if ( v44 )
    MiUnlockPageTableInternal((__int64)v40, v44);
  MiUnlockWorkingSetShared((__int64)v40, v34);
  if ( v32 >= 0 )
  {
    *v49 = MmProtectToValue[(unsigned int)v48];
    v33 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v43 + 4096;
    v32 = 0;
    *v50 = v43;
    *v51 = v33;
  }
  return (unsigned int)v32;
}
