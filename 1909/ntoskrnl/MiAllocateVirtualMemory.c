/*
 * XREFs of MiAllocateVirtualMemory @ 0x140604C50
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x14067CE50 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x14067D000 (NtAllocateVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x14071AC58 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14001CC70 (MiIsProcessCfgEnabled.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1400507D0 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiFlushRelease @ 0x1400717B4 (MiFlushRelease.c)
 *     MiLockVad @ 0x14007323C (MiLockVad.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     MiFlushAcquire @ 0x140088B00 (MiFlushAcquire.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiAllowProtectionChange @ 0x1400E53B0 (MiAllowProtectionChange.c)
 *     MiLocateVadEvent @ 0x1400E8414 (MiLocateVadEvent.c)
 *     MiResetVirtualMemory @ 0x140133F4C (MiResetVirtualMemory.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiCommitEnclavePages @ 0x1402D35E0 (MiCommitEnclavePages.c)
 *     MiGetVadPageSize @ 0x1402E5380 (MiGetVadPageSize.c)
 *     MiCommitVadCfgBits @ 0x1405EB568 (MiCommitVadCfgBits.c)
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MmExtendSection @ 0x140624DB0 (MmExtendSection.c)
 *     MiCommitPagefileBackedSection @ 0x140648664 (MiCommitPagefileBackedSection.c)
 *     MiCheckSecuredVad @ 0x14065FD5C (MiCheckSecuredVad.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     EtwTiLogAllocExecVm @ 0x14067DC3C (EtwTiLogAllocExecVm.c)
 *     MiLogMemResetInfo @ 0x14088950C (MiLogMemResetInfo.c)
 *     PerfInfoLogVirtualAlloc @ 0x1408F55C8 (PerfInfoLogVirtualAlloc.c)
 */

__int64 __fastcall MiAllocateVirtualMemory(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  _QWORD *v3; // rsi
  unsigned __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v8; // bl
  unsigned int v9; // ecx
  unsigned __int8 v10; // r8
  unsigned int ProtectionMask; // r13d
  _KPROCESS *v12; // rcx
  bool v13; // zf
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  ULONG_PTR v19; // rsi
  unsigned __int64 v20; // rcx
  int v21; // edx
  int v22; // edx
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  int v25; // ecx
  int v26; // ecx
  int v27; // edx
  unsigned int v28; // r9d
  __int64 v29; // r8
  int v30; // r15d
  int v32; // eax
  __int64 v33; // r15
  int v34; // eax
  unsigned int v35; // edx
  int v36; // r8d
  int v37; // eax
  int v38; // ecx
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r14
  int v41; // ecx
  unsigned __int64 v42; // rdx
  int v43; // ecx
  unsigned __int64 v44; // r8
  __int64 v45; // rdx
  __int64 VadPageSize; // rax
  __int64 v47; // r8
  int v48; // [rsp+20h] [rbp-E0h]
  int v49; // [rsp+28h] [rbp-D8h]
  __int64 v50; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v51; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v52; // [rsp+50h] [rbp-B0h] BYREF
  char v53; // [rsp+51h] [rbp-AFh]
  unsigned __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v57; // [rsp+70h] [rbp-90h]
  int v58; // [rsp+78h] [rbp-88h] BYREF
  char v59[4]; // [rsp+7Ch] [rbp-84h] BYREF
  int v60; // [rsp+80h] [rbp-80h] BYREF
  struct _KTHREAD *v61; // [rsp+88h] [rbp-78h]
  char v62[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v64; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v68[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v69[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v70; // [rsp+E0h] [rbp-20h]
  __int64 v71; // [rsp+F0h] [rbp-10h]
  __int64 v72; // [rsp+F8h] [rbp-8h]
  __int64 v73; // [rsp+100h] [rbp+0h]
  int v74; // [rsp+108h] [rbp+8h]
  int v75; // [rsp+10Ch] [rbp+Ch]
  _BYTE v76[48]; // [rsp+110h] [rbp+10h] BYREF

  v3 = (_QWORD *)a2;
  v57 = (_QWORD *)a2;
  memset(v76, 0, sizeof(v76));
  v6 = 0LL;
  if ( (unsigned __int64)v3 >= 2 )
  {
    if ( *v3 == MiGetProcessPartition(*(_QWORD *)(a1 + 88)) )
      v3 = 0LL;
    v57 = v3;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 2;
  v9 = *(_DWORD *)(a1 + 44);
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 1LL != *(_QWORD *)(a1 + 24) )
    v8 = 0;
  v61 = CurrentThread;
  v52 = 1;
  v53 = 0;
  if ( (v9 & 0x40000000) != 0 )
  {
    if ( (v9 & 0xF0) == 0 )
      return 3221225541LL;
    v9 &= ~0x40000000u;
    *(_DWORD *)(a1 + 44) = v9;
    v52 = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  if ( ProtectionMask != -1 )
  {
    v12 = *(_KPROCESS **)(a1 + 88);
    if ( *(_KPROCESS **)(a1 + 96) != v12 )
    {
      KiStackAttachProcess(v12, 0, (__int64)v76);
      v10 = v52;
      v8 |= 1u;
    }
    v13 = (*(_DWORD *)(a1 + 60) & 0x4000000) == 0;
    v54 = 0LL;
    if ( !v13 && (v8 & 2) == 0 )
    {
      v30 = -1073741811;
      goto LABEL_91;
    }
    v14 = *(_DWORD *)(a1 + 40);
    if ( (v14 & 0x40000000) != 0 && !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1856LL) )
    {
      v30 = -1073741811;
      goto LABEL_91;
    }
    v15 = *(_DWORD *)(a1 + 120) & 0x1A;
    if ( v15 )
    {
      if ( (v15 & 2) != 0 )
      {
        v45 = 0xFFFFLL;
      }
      else if ( (v15 & 8) != 0 )
      {
        v45 = 0x1FFFFFLL;
      }
      else
      {
        v45 = -1LL;
        if ( (v15 & 0x10) != 0 )
          v45 = 0x3FFFFFFFLL;
      }
      if ( ((*(_QWORD *)(a1 + 8) + 1LL) & v45) != 0 || (v45 & *(_QWORD *)a1) != 0 )
      {
        v30 = -1073741811;
        goto LABEL_91;
      }
    }
    else if ( (v14 & 0x20400000) != 0x20000000 )
    {
      goto LABEL_12;
    }
    v8 |= 0x10u;
LABEL_12:
    if ( (v8 & 0x10) != 0 )
    {
      if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 104)) )
      {
        v30 = -1073741727;
        goto LABEL_91;
      }
      v10 = v52;
    }
    v16 = *(_DWORD *)(a1 + 40);
    if ( (v16 & 0x2000) != 0 )
    {
      v32 = MiReserveUserMemory(a1, (_DWORD)v3, ProtectionMask, v10, (__int64)&v54);
      v6 = v54;
      v30 = v32;
      if ( v32 >= 0 )
        goto LABEL_33;
    }
    else if ( (v16 & 0x40000000) != 0 )
    {
      v30 = -1073741811;
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 80) )
      {
        v6 = *(_QWORD *)a1;
        v17 = *(_QWORD *)a1 >> 12;
        v55 = *(_QWORD *)(a1 + 8);
        v64 = v17;
        v65 = v55 >> 12;
        v54 = v6;
        v18 = MiObtainReferencedVadEx(v6, 0, &v58);
        v19 = v18;
        if ( !v18 )
        {
          v30 = v58;
          if ( v58 == -1073741664 )
            v30 = -1073741800;
          goto LABEL_91;
        }
        v20 = *(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32);
        if ( v55 >> 12 > v20 )
        {
          v30 = -1073741800;
          goto LABEL_90;
        }
        if ( (*(_DWORD *)(v18 + 48) & 0x1100000) != 0x1100000 && *(_DWORD *)(a1 + 48) )
        {
          v30 = -1073741800;
          goto LABEL_90;
        }
        *a3 = v6;
        v21 = *(_DWORD *)(v18 + 48);
        if ( (v21 & 0x3100000) == 0x2100000 )
        {
          if ( (v21 & 0x70) == 0x30 )
          {
            v34 = MiCommitEnclavePages(v20, v18, v6, v55, *(_DWORD *)(a1 + 40), ProtectionMask);
LABEL_46:
            v30 = v34;
            if ( v34 < 0 )
              goto LABEL_90;
            MiUnlockAndDereferenceVad((char *)v19);
LABEL_33:
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            {
              v47 = *(unsigned int *)(a1 + 40);
              if ( (v47 & 0x3000) != 0 )
              {
                if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
                  LODWORD(v47) = 0x2000;
                PerfInfoLogVirtualAlloc(v6, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 88), (unsigned int)v47);
              }
              else if ( (v47 & 0x1080000) != 0 )
              {
                MiLogMemResetInfo(v6, *(_QWORD *)(a1 + 24), v47);
              }
            }
            if ( (v8 & 1) != 0 )
              KiUnstackDetachProcess((struct _KTHREAD *)v76, 0);
            if ( (ProtectionMask & 2) != 0 )
              EtwTiLogAllocExecVm(
                *(_QWORD *)(a1 + 88),
                *(unsigned __int8 *)(a1 + 104),
                v6,
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 40),
                *(_DWORD *)(a1 + 44));
            *a3 = v6;
            return (unsigned int)v30;
          }
          if ( (*(_DWORD *)(a1 + 60) & 0x10000000) == 0 )
          {
            v30 = -1073741664;
            goto LABEL_90;
          }
        }
        if ( MiVadSupportsPrivateCommit(v18) )
        {
          v23 = v55;
        }
        else
        {
          if ( (v22 & 0x500000) != 0x500000 )
          {
            v30 = -1073741800;
            goto LABEL_90;
          }
          VadPageSize = MiGetVadPageSize(v19);
          v23 = v55;
          if ( (((VadPageSize << 12) - 1) & (v6 | (v55 + 1))) != 0 )
          {
            v30 = -1073741811;
            goto LABEL_90;
          }
        }
        v24 = *(unsigned int *)(v19 + 52);
        LODWORD(v24) = v24 & 0x7FFFFFFF;
        if ( (v24 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) >= 0x7FFFFFFFDLL )
        {
          v30 = -1073741800;
          goto LABEL_90;
        }
        if ( (v22 & 0x70) != 0x40 )
        {
LABEL_25:
          v25 = *(_DWORD *)(a1 + 40);
          if ( (v25 & 0x1080000) != 0 )
          {
            v34 = MiResetVirtualMemory(*(_QWORD *)(a1 + 96), v6, v23, v19, v25, *(_BYTE *)(a1 + 104));
          }
          else
          {
            v8 &= ~4u;
            if ( (ProtectionMask & 2) != 0 )
            {
              v30 = MiAllowProtectionChange(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v19, ProtectionMask, v6, v23);
              if ( v30 < 0 )
                goto LABEL_90;
              if ( (!v52 || (*(_DWORD *)(v19 + 48) & 0x100) == 0) && MiIsProcessCfgEnabled() )
              {
                if ( (*(_DWORD *)(v19 + 48) & 8) != 0 )
                {
                  v30 = MiCheckSecuredVad(v19, v6, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                  if ( v30 < 0 )
                    goto LABEL_90;
                  v8 |= 4u;
                }
                v68[1] = v55;
                v68[0] = v6;
                v30 = MiCommitVadCfgBits(v19, (__int64)v68, (char *)&v52);
                if ( v30 < 0 )
                  goto LABEL_90;
                v53 = 1;
              }
            }
            v26 = *(_DWORD *)(v19 + 48);
            v27 = *(_DWORD *)(a1 + 44);
            if ( (v26 & 0x100000) != 0 )
            {
              if ( (v27 & 0x88) != 0 || (v26 & 0x70) == 0x40 && (v27 & 0xFFFFF9F9) != 0 )
                goto LABEL_59;
              if ( (v26 & 8) == 0 )
              {
LABEL_31:
                v28 = *(_DWORD *)(a1 + 44);
                v29 = *(_QWORD *)(a1 + 24);
                v51 = *(_BYTE *)(a1 + 56);
                v50 = *(_QWORD *)(a1 + 120);
                v48 = *(_DWORD *)(a1 + 48);
                v56 = 0;
                v30 = MiCommitExistingVad(v19, v6, v29, v28, v48, v50, v51, (__int64)v57, &v56);
                if ( v30 >= 0 )
                {
                  MiUnlockAndDereferenceVad((char *)v19);
                  if ( v56 == 1 )
                  {
                    v66 = *(_QWORD *)(a1 + 24);
                    v37 = *(_DWORD *)(a1 + 44);
                    v67 = v6;
                    if ( v53 && !v52 )
                      v37 |= 0x40000000u;
                    MmProtectVirtualMemory(
                      *(_QWORD *)(a1 + 96),
                      *(_QWORD *)(a1 + 88),
                      (unsigned int)&v67,
                      (unsigned int)&v66,
                      v37,
                      (__int64)v62);
                  }
                  goto LABEL_33;
                }
LABEL_90:
                MiUnlockAndDereferenceVad((char *)v19);
                goto LABEL_91;
              }
              if ( !MiLocateVadEvent(v19, 64LL) )
              {
                v30 = MiCheckSecuredVad(v38, v6, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
                if ( v30 < 0 )
                  goto LABEL_90;
                goto LABEL_31;
              }
LABEL_59:
              v30 = -1073741755;
              goto LABEL_90;
            }
            if ( (v27 & 0x600) != 0 )
              goto LABEL_59;
            if ( (v26 & 8) != 0 && (v8 & 4) == 0 )
            {
              v30 = MiCheckSecuredVad(v19, v6, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104));
              if ( v30 < 0 )
                goto LABEL_90;
            }
            v33 = **(_QWORD **)(v19 + 72);
            v57 = (_QWORD *)v33;
            if ( *(_QWORD *)(v33 + 64) )
            {
              if ( *(__int64 *)(v19 + 120) >= 0 )
              {
                v30 = -1073741791;
              }
              else
              {
                v39 = v55;
                v63 = ((unsigned __int64)(*(_DWORD *)(v19 + 64) & 0xFFFFFF) << 16)
                    - ((*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12)
                    + v55
                    + 1;
                if ( (unsigned int)MiFlushAcquire(v33, 0LL, 0LL) )
                {
                  v40 = 0LL;
                  if ( (*(_DWORD *)(v19 + 48) & 0x100000) == 0 && *(_QWORD *)(v19 + 128) )
                  {
                    v40 = *(_QWORD *)(v19 + 128);
                    ObfReferenceObject((PVOID)v40);
                  }
                  MiUnlockVad((__int64)v61, v19);
                  v41 = *(_DWORD *)(v33 + 56);
                  v69[0] = 0LL;
                  v69[1] = 0LL;
                  v70 = 0LL;
                  v71 = 0LL;
                  v73 = 0LL;
                  if ( v40 )
                  {
                    if ( (v41 & 0x20) != 0 )
                      v72 = v40 | 1;
                    else
                      v72 = v40 | 2;
                  }
                  else
                  {
                    v72 = v33;
                  }
                  v74 = v41;
                  v75 = 4;
                  v30 = MmExtendSection(v69, &v63, 0LL);
                  if ( v40 )
                    ObfDereferenceObject((PVOID)v40);
                  MiLockVad((__int64)v61, v19);
                  MiFlushRelease((__int64)v57, 0LL, 0LL);
                  if ( v30 >= 0
                    && (unsigned int)MiVadDeleted(v19) != 1
                    && v64 >= v44
                    && v64 <= v42
                    && v65 <= v42
                    && v65 >= v44 )
                  {
                    v6 = v54;
                    if ( ((*(_DWORD *)(v19 + 48) & 8) == 0
                       || (int)MiCheckSecuredVad(v43, v54, *(_QWORD *)(a1 + 24), ProtectionMask, *(_BYTE *)(a1 + 104)) >= 0)
                      && *(__int64 *)(v19 + 120) < 0 )
                    {
                      v30 = MiSetProtectionOnSection(
                              *(_QWORD *)(a1 + 88),
                              v19,
                              v6,
                              v39,
                              *(_DWORD *)(a1 + 44),
                              0,
                              &v60,
                              (__int64)v59);
                    }
                    goto LABEL_90;
                  }
                }
                else
                {
                  v30 = -1073741670;
                }
                v6 = v54;
              }
              goto LABEL_90;
            }
            v34 = MiCommitPagefileBackedSection(*(_QWORD *)(a1 + 88), v19, v6, v55, *(_DWORD *)(a1 + 44), v49);
          }
          goto LABEL_46;
        }
        v35 = *(_DWORD *)(a1 + 44) & 0xFFFFF9FF;
        *(_DWORD *)(a1 + 44) = v35;
        v36 = *(_DWORD *)(v19 + 48) & 0xC00;
        if ( (*(_DWORD *)(v19 + 48) & 0x380) != 0 && v36 == 3072 )
        {
          v35 |= 0x400u;
        }
        else
        {
          if ( v36 != 1024 )
          {
LABEL_58:
            ProtectionMask = MiMakeProtectionMask(v35);
            if ( ProtectionMask == -1 )
              goto LABEL_59;
            goto LABEL_25;
          }
          v35 |= 0x200u;
        }
        *(_DWORD *)(a1 + 44) = v35;
        goto LABEL_58;
      }
      v30 = -1073741811;
    }
LABEL_91:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && (*(_DWORD *)(a1 + 40) & 0x1000000) != 0 && v30 == -1073740748 )
      MiLogMemResetInfo(v6, *(_QWORD *)(a1 + 24), 0LL);
    if ( (v8 & 1) != 0 )
      KiUnstackDetachProcess((struct _KTHREAD *)v76, 0);
    return (unsigned int)v30;
  }
  return 3221225541LL;
}
