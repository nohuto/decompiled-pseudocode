/*
 * XREFs of MiAllocateVirtualMemory @ 0x1405EE650
 * Callers:
 *     NtAllocateVirtualMemory @ 0x1405EDE60 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140676EB0 (MiAllocateVirtualMemoryCommon.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E1E30 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiFlushRelease @ 0x1400792BC (MiFlushRelease.c)
 *     MiIsProcessCfgEnabled @ 0x1400884AC (MiIsProcessCfgEnabled.c)
 *     MiAllowProtectionChange @ 0x1400F1668 (MiAllowProtectionChange.c)
 *     MiFlushAcquire @ 0x14012C234 (MiFlushAcquire.c)
 *     MiResetVirtualMemory @ 0x140132BA4 (MiResetVirtualMemory.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiCommitEnclavePages @ 0x1402BD124 (MiCommitEnclavePages.c)
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiCommitVadCfgBits @ 0x1405F55BC (MiCommitVadCfgBits.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     MiCheckSecuredVad @ 0x140619974 (MiCheckSecuredVad.c)
 *     MmExtendSection @ 0x14061D8CC (MmExtendSection.c)
 *     MiCommitPagefileBackedSection @ 0x14061EFB0 (MiCommitPagefileBackedSection.c)
 *     EtwTiLogAllocExecVm @ 0x1406777FC (EtwTiLogAllocExecVm.c)
 *     MiLogMemResetInfo @ 0x14084F2D0 (MiLogMemResetInfo.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408BA3C0 (PerfInfoLogVirtualAlloc.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, int a2, unsigned __int64 *a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  char v6; // bl
  unsigned __int8 v7; // r15
  unsigned __int64 *v8; // r13
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int v12; // ecx
  unsigned int ProtectionMask; // r12d
  _KPROCESS *v14; // rcx
  int v15; // ecx
  int v16; // eax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  ULONG_PTR v20; // rsi
  unsigned __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // r9d
  __int64 v28; // r8
  int v29; // r15d
  int v31; // eax
  __int64 v32; // r15
  int v33; // eax
  unsigned int v34; // edx
  int v35; // r8d
  int v36; // eax
  int v37; // ecx
  unsigned __int64 v38; // r14
  int v39; // ecx
  unsigned __int64 v40; // rdx
  int v41; // ecx
  unsigned __int64 v42; // r8
  __int64 v43; // r8
  int v44; // [rsp+28h] [rbp-D8h]
  char v45; // [rsp+50h] [rbp-B0h] BYREF
  char v46; // [rsp+51h] [rbp-AFh]
  unsigned __int64 v47; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 *v48; // [rsp+60h] [rbp-A0h]
  int v49; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+78h] [rbp-88h] BYREF
  int v52; // [rsp+7Ch] [rbp-84h] BYREF
  int v53; // [rsp+80h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-78h]
  char v55[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v61[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v62[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v63[48]; // [rsp+110h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v6 = 2;
  v48 = a3;
  v7 = 1;
  CurrentThread = KeGetCurrentThread();
  v8 = a3;
  v9 = v4 - *(_QWORD *)a1 + 1;
  v45 = 1;
  v10 = v9 == *(_QWORD *)(a1 + 24);
  v12 = *(_DWORD *)(a1 + 44);
  if ( !v10 )
    v6 = 0;
  v46 = 0;
  if ( (v12 & 0x40000000) != 0 )
  {
    if ( (v12 & 0xF0) == 0 )
      return 3221225541LL;
    v12 &= ~0x40000000u;
    v7 = 0;
    *(_DWORD *)(a1 + 44) = v12;
    v45 = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v12);
  if ( ProtectionMask != -1 )
  {
    v14 = *(_KPROCESS **)(a1 + 80);
    if ( *(_KPROCESS **)(a1 + 88) != v14 )
    {
      KiStackAttachProcess(v14, 0LL, (__int64)v63);
      v6 |= 1u;
    }
    v10 = (*(_DWORD *)(a1 + 52) & 0x4000000) == 0;
    v47 = 0LL;
    if ( !v10 && (v6 & 2) == 0 )
    {
      v29 = -1073741811;
      goto LABEL_86;
    }
    v15 = *(_DWORD *)(a1 + 40);
    if ( (v15 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 80) + 1808LL) )
    {
      v29 = -1073741811;
      goto LABEL_86;
    }
    if ( (v15 & 0x20400000) == 0x20000000 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 96)) )
    {
      v29 = -1073741727;
      goto LABEL_86;
    }
    v16 = *(_DWORD *)(a1 + 40);
    if ( (v16 & 0x2000) != 0 )
    {
      v31 = MiReserveUserMemory(a1, a2, ProtectionMask, v7, (__int64)&v47);
      v5 = v47;
      v29 = v31;
      if ( v31 >= 0 )
        goto LABEL_28;
    }
    else if ( (v16 & 0x40000000) != 0 )
    {
      v29 = -1073741811;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 72) )
      {
        v5 = *(_QWORD *)a1;
        v17 = *(_QWORD *)(a1 + 8);
        v58 = *(_QWORD *)a1 >> 12;
        v47 = v5;
        v50 = v17;
        v18 = v17 >> 12;
        v19 = MiObtainReferencedVadEx(v5, 0, &v51);
        v20 = v19;
        if ( !v19 )
        {
          v29 = v51;
          if ( v51 == -1073741664 )
            v29 = -1073741800;
          goto LABEL_86;
        }
        v21 = *(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32);
        if ( v18 > v21 )
        {
          v29 = -1073741800;
          goto LABEL_85;
        }
        *v48 = v5;
        v22 = *(_DWORD *)(v19 + 48) & 7;
        if ( (*(_DWORD *)(v19 + 48) & 0x20000) != 0 )
        {
          if ( v22 == 3 )
          {
            v33 = MiCommitEnclavePages(v21, v19, v5, v17, *(_DWORD *)(a1 + 40), ProtectionMask);
            goto LABEL_41;
          }
          if ( (*(_DWORD *)(a1 + 52) & 0x10000000) == 0 )
          {
            v29 = -1073741664;
            goto LABEL_85;
          }
        }
        if ( ((1 << v22) & 0x55) == 0 )
        {
          v29 = -1073741800;
          goto LABEL_85;
        }
        v23 = *(unsigned int *)(v19 + 52);
        LODWORD(v23) = v23 & 0x7FFFFFFF;
        if ( (v23 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 34) << 31)) >= 0x7FFFFFFFDLL )
        {
          v29 = -1073741800;
          goto LABEL_85;
        }
        if ( v22 != 6 )
        {
LABEL_19:
          v24 = *(_DWORD *)(a1 + 40);
          if ( (v24 & 0x1080000) != 0 )
          {
            v33 = MiResetVirtualMemory(*(_QWORD *)(a1 + 88), v5, v17, v20, v24, *(_BYTE *)(a1 + 96));
          }
          else
          {
            v6 &= ~4u;
            if ( (ProtectionMask & 2) != 0 )
            {
              v29 = MiAllowProtectionChange(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88), v20, ProtectionMask, v5, v17);
              if ( v29 < 0 )
                goto LABEL_85;
              if ( (!v45 || (*(_DWORD *)(v20 + 48) & 0x10) == 0) && MiIsProcessCfgEnabled() )
              {
                if ( (*(_DWORD *)(v20 + 48) & 0x8000000) != 0 )
                {
                  v29 = MiCheckSecuredVad(v20, v5, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 96));
                  if ( v29 < 0 )
                    goto LABEL_85;
                  v6 |= 4u;
                }
                v61[1] = v50;
                v61[0] = v5;
                v29 = MiCommitVadCfgBits(v20, v61, &v45);
                if ( v29 < 0 )
                  goto LABEL_85;
                v46 = 1;
              }
            }
            v25 = *(_DWORD *)(v20 + 48);
            v26 = *(_DWORD *)(a1 + 44);
            if ( (v25 & 0x4000) != 0 )
            {
              if ( (v26 & 0x88) != 0 || (v25 & 7) == 6 && (v26 & 0xFFFFF9F9) != 0 )
                goto LABEL_54;
              if ( (v25 & 0x8000000) == 0 )
              {
LABEL_25:
                v27 = *(_DWORD *)(a1 + 44);
                v28 = *(_QWORD *)(a1 + 24);
                v49 = 0;
                v29 = MiCommitExistingVad(v20, v5, v28, v27, &v49);
                if ( v29 >= 0 )
                {
                  MiUnlockAndDereferenceVad((char *)v20);
                  if ( v49 == 1 )
                  {
                    v59 = *(_QWORD *)(a1 + 24);
                    v36 = *(_DWORD *)(a1 + 44);
                    v60 = v5;
                    if ( v46 && !v45 )
                      v36 |= 0x40000000u;
                    MmProtectVirtualMemory(
                      *(_QWORD *)(a1 + 88),
                      *(_QWORD *)(a1 + 80),
                      (unsigned int)&v60,
                      (unsigned int)&v59,
                      v36,
                      (__int64)v55);
                  }
                  goto LABEL_27;
                }
                goto LABEL_85;
              }
              if ( !MiLocateVadEvent(v20, 64) )
              {
                v29 = MiCheckSecuredVad(v37, v5, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 96));
                if ( v29 < 0 )
                  goto LABEL_85;
                goto LABEL_25;
              }
LABEL_54:
              v29 = -1073741755;
              goto LABEL_85;
            }
            if ( (v26 & 0x600) != 0 )
              goto LABEL_54;
            if ( (v25 & 0x8000000) != 0 && (v6 & 4) == 0 )
            {
              v29 = MiCheckSecuredVad(v20, v5, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 96));
              if ( v29 < 0 )
                goto LABEL_85;
            }
            v32 = **(_QWORD **)(v20 + 72);
            v57 = v32;
            if ( *(_QWORD *)(v32 + 64) )
            {
              if ( *(__int64 *)(v20 + 120) >= 0 )
              {
                v29 = -1073741791;
              }
              else
              {
                v56 = ((unsigned __int64)(*(_DWORD *)(v20 + 64) & 0xFFFFFF) << 16)
                    - ((*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12)
                    + v50
                    + 1;
                if ( (unsigned int)MiFlushAcquire(v32, 0LL, 0LL) )
                {
                  v38 = 0LL;
                  if ( (*(_DWORD *)(v20 + 48) & 0x4000) == 0 && *(_QWORD *)(v20 + 128) )
                  {
                    v38 = *(_QWORD *)(v20 + 128);
                    ObfReferenceObject((PVOID)v38);
                  }
                  MiUnlockVad((__int64)CurrentThread, v20);
                  memset(v62, 0, sizeof(v62));
                  v39 = *(_DWORD *)(v32 + 56);
                  if ( v38 )
                  {
                    if ( (v39 & 0x20) != 0 )
                      v62[5] = v38 | 1;
                    else
                      v62[5] = v38 | 2;
                  }
                  else
                  {
                    v62[5] = v32;
                  }
                  LODWORD(v62[7]) = v39;
                  HIDWORD(v62[7]) = HIDWORD(v62[7]) & 0xFFFFF000 | 4;
                  v29 = MmExtendSection(v62, &v56, 0LL);
                  if ( v38 )
                    ObfDereferenceObject((PVOID)v38);
                  MiLockVad((__int64)CurrentThread, v20);
                  MiFlushRelease(v57, 0LL, 0LL);
                  if ( v29 >= 0
                    && (unsigned int)MiVadDeleted(v20) != 1
                    && v58 >= v42
                    && v58 <= v40
                    && v18 <= v40
                    && v18 >= v42 )
                  {
                    v5 = v47;
                    if ( ((*(_DWORD *)(v20 + 48) & 0x8000000) == 0
                       || (int)MiCheckSecuredVad(v41, v47, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 96)) >= 0)
                      && *(__int64 *)(v20 + 120) < 0 )
                    {
                      v29 = MiSetProtectionOnSection(
                              *(_QWORD *)(a1 + 80),
                              v20,
                              v5,
                              v50,
                              *(_DWORD *)(a1 + 44),
                              0,
                              &v53,
                              &v52);
                    }
                    goto LABEL_85;
                  }
                }
                else
                {
                  v29 = -1073741670;
                }
                v5 = v47;
              }
              goto LABEL_85;
            }
            v33 = MiCommitPagefileBackedSection(*(_QWORD *)(a1 + 80), v20, v5, v50, *(_DWORD *)(a1 + 44), v44);
          }
LABEL_41:
          v29 = v33;
          if ( v33 >= 0 )
          {
            MiUnlockAndDereferenceVad((char *)v20);
LABEL_27:
            v8 = v48;
LABEL_28:
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            {
              v43 = *(unsigned int *)(a1 + 40);
              if ( (v43 & 0x3000) != 0 )
              {
                if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
                  LODWORD(v43) = 0x2000;
                PerfInfoLogVirtualAlloc(v5, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 80), (unsigned int)v43);
              }
              else if ( (v43 & 0x1080000) != 0 )
              {
                MiLogMemResetInfo(v5, *(_QWORD *)(a1 + 24), v43);
              }
            }
            if ( (v6 & 1) != 0 )
              KiUnstackDetachProcess((__int64)v63, 0LL);
            if ( (ProtectionMask & 2) != 0 )
              EtwTiLogAllocExecVm(
                *(_QWORD *)(a1 + 80),
                *(unsigned __int8 *)(a1 + 96),
                v5,
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 40),
                *(_DWORD *)(a1 + 44));
            *v8 = v5;
            return (unsigned int)v29;
          }
LABEL_85:
          MiUnlockAndDereferenceVad((char *)v20);
          goto LABEL_86;
        }
        v34 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
        *(_DWORD *)(a1 + 44) = v34;
        v35 = *(_DWORD *)(v20 + 48) & 0xC0;
        if ( (*(_DWORD *)(v20 + 48) & 0x38) != 0 && v35 == 192 )
        {
          v34 |= 0x400u;
        }
        else
        {
          if ( v35 != 64 )
          {
LABEL_53:
            ProtectionMask = MiMakeProtectionMask(v34);
            if ( ProtectionMask == -1 )
              goto LABEL_54;
            goto LABEL_19;
          }
          v34 |= 0x200u;
        }
        *(_DWORD *)(a1 + 44) = v34;
        goto LABEL_53;
      }
      v29 = -1073741811;
    }
LABEL_86:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0 && v29 == -1073740748 )
      MiLogMemResetInfo(v5, *(_QWORD *)(a1 + 24), 0LL);
    if ( (v6 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v63, 0LL);
    return (unsigned int)v29;
  }
  return 3221225541LL;
}
