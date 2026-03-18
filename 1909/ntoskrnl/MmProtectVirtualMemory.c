/*
 * XREFs of MmProtectVirtualMemory @ 0x140605BE0
 * Callers:
 *     KiTpWriteUmMemory @ 0x1402ADAB4 (KiTpWriteUmMemory.c)
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140605410 (NtProtectVirtualMemory.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14001CC70 (MiIsProcessCfgEnabled.c)
 *     MiProtectPrivateMemory @ 0x140021350 (MiProtectPrivateMemory.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiReadPteShadow @ 0x14004B4D0 (MiReadPteShadow.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x140053940 (MiVadMapsLargeImage.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     MiAllowProtectionChange @ 0x1400E53B0 (MiAllowProtectionChange.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     xHalUnmaskInterrupt @ 0x14013E6E0 (xHalUnmaskInterrupt.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiGetVadPageSize @ 0x1402E5380 (MiGetVadPageSize.c)
 *     MiCommitVadCfgBits @ 0x1405EB568 (MiCommitVadCfgBits.c)
 *     MiCheckSecuredVad @ 0x14065FD5C (MiCheckSecuredVad.c)
 */

__int64 __fastcall MmProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  char v7; // r11
  _QWORD *v8; // r10
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  unsigned int v12; // r12d
  unsigned int v13; // edi
  int ProtectionMask; // r15d
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rsi
  int v19; // r9d
  unsigned int v20; // edx
  int v21; // r8d
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  int v26; // ecx
  char *v27; // rcx
  __int64 *ProtoPteAddress; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v30; // r15
  signed __int64 *v31; // r15
  __int64 v32; // r10
  __int64 v33; // r11
  unsigned __int64 v34; // r9
  __int64 PteShadow; // rax
  int v36; // ebx
  __int64 v37; // rcx
  bool v38; // zf
  int v39; // r15d
  __int64 result; // rax
  unsigned int v41; // ebx
  char v42; // r8
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // rcx
  __int16 v47; // cx
  __int64 VadPageSize; // rax
  int v49; // ebx
  int v50; // edx
  int v51; // [rsp+28h] [rbp-120h]
  int v52; // [rsp+60h] [rbp-E8h]
  int v53; // [rsp+64h] [rbp-E4h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-E0h]
  int v55; // [rsp+6Ch] [rbp-DCh]
  int v56; // [rsp+70h] [rbp-D8h] BYREF
  int v57; // [rsp+74h] [rbp-D4h] BYREF
  _QWORD *v58; // [rsp+78h] [rbp-D0h]
  _QWORD *v59; // [rsp+80h] [rbp-C8h]
  int v60; // [rsp+88h] [rbp-C0h]
  int v61; // [rsp+8Ch] [rbp-BCh]
  __int64 v62; // [rsp+90h] [rbp-B8h]
  PVOID P; // [rsp+98h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+A0h] [rbp-A8h]
  unsigned __int64 v65; // [rsp+A8h] [rbp-A0h]
  int v66; // [rsp+B0h] [rbp-98h]
  __int64 v67; // [rsp+B8h] [rbp-90h]
  _QWORD *Teb; // [rsp+C0h] [rbp-88h]
  _QWORD v69[4]; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v70; // [rsp+E8h] [rbp-60h] BYREF
  _QWORD v71[11]; // [rsp+F0h] [rbp-58h] BYREF
  int v76; // [rsp+170h] [rbp+28h]

  v7 = 1;
  v55 = 1;
  *a6 = 1;
  v8 = 0LL;
  v57 = 0;
  v61 = 1;
  v9 = *a3;
  v65 = v9;
  v69[3] = v9;
  v10 = *a4;
  v67 = v10;
  v62 = v10;
  v11 = a5 & 0x3F800;
  v66 = a5 & 0x3F800;
  if ( (a5 & 0x3F800) != 0 )
  {
    result = xHalUnmaskInterrupt();
    v53 = result;
    if ( (int)result < 0 )
      return result;
  }
  v54 = a5 >> 31;
  LODWORD(v64) = a5 >> 31;
  v12 = a5 & 0xB0000000;
  LODWORD(P) = a5 & 0xB0000000;
  v13 = a5 & 0x4FFC07FF;
  if ( (a5 & 0x40000000) != 0 )
  {
    v13 = a5 & 0xFFC07FF;
    if ( (a5 & 0xFFC070F) != 0 )
      return 3221225714LL;
    v61 = (int)v8;
  }
  if ( v13 )
  {
    ProtectionMask = MiMakeProtectionMask(v13);
    v52 = ProtectionMask;
    v60 = ProtectionMask;
    if ( ProtectionMask != -1 )
      goto LABEL_5;
    return 3221225541LL;
  }
  if ( v12 != 0x80000000 && v12 != 0x10000000 )
    return 3221225541LL;
  ProtectionMask = 24;
  v52 = 24;
  v60 = 24;
LABEL_5:
  v15 = (v10 + v9 - 1) | 0xFFF;
  v69[1] = v15;
  v16 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v69[2] = v9 & 0xFFFFFFFFFFFFF000uLL;
  Teb = v8;
  v58 = v8;
  v59 = v8;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == v7
      || (v43 = *(_QWORD *)(a2 + 1064)) != 0 && ((v47 = *(_WORD *)(v43 + 8), v47 == 332) || v47 == 452) )
    {
      v44 = (unsigned __int64)v59;
    }
    else
    {
      Teb = KeGetCurrentThread()->Teb;
      v58 = Teb;
      v44 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
      v59 = (_QWORD *)v44;
    }
    v58 = (_QWORD *)v44;
  }
  P = v8;
  v64 = v15 >> 12;
  v17 = MiObtainReferencedVadEx(v16, 0, &v53);
  v18 = v17;
  v62 = v17;
  if ( !v17 )
  {
    v39 = v53;
    if ( v53 != -1073741664 )
      goto LABEL_137;
    goto LABEL_99;
  }
  P = (PVOID)v17;
  if ( v64 > (*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) )
  {
    v39 = -1073741800;
    goto LABEL_137;
  }
  if ( (*(_DWORD *)(v17 + 48) & 0x1100000) == 0x1100000 )
  {
    if ( !v11 )
    {
      v39 = -1073741755;
      goto LABEL_137;
    }
  }
  else if ( v11 )
  {
    v39 = -1073741755;
    goto LABEL_137;
  }
  v19 = 0;
  v76 = 0;
  if ( (ProtectionMask & 2) == 0 )
  {
LABEL_11:
    v20 = *(_DWORD *)(v18 + 48);
    v21 = v20 & 0x100000;
    if ( ((v20 & 0x100000) == 0 || (v20 & 0x400000) == 0 && (v20 & 0xC0000) < 0x80000) && (v20 & 0x70) != 0x50 )
      goto LABEL_13;
    if ( (v20 & 0x500000) == 0x500000 )
    {
      VadPageSize = MiGetVadPageSize(v18);
      if ( ((v65 | (v15 + 1)) & ((VadPageSize << 12) - 1)) != 0 )
      {
        v39 = -1073741800;
        goto LABEL_137;
      }
LABEL_13:
      if ( (v20 & 0x3100000) == 0x2100000 )
      {
        v41 = MiProtectEnclavePages(a2, a1, v18, v16, v15, v13, ProtectionMask, v12, a6, a3, a4);
        MiUnlockAndDereferenceVad((char *)v18);
        return v41;
      }
      if ( (v12 & 0x5FFFFFFF) != 0 )
      {
        v39 = -1073741755;
        goto LABEL_137;
      }
      if ( !v13 )
      {
        v39 = -1073741755;
        goto LABEL_137;
      }
      v22 = v20 & 0x70;
      if ( v22 == 48 )
      {
        v49 = MiProtectAweRegion(v16, v15, ProtectionMask, v11, &v56);
        if ( v49 >= 0 )
        {
          MiUnlockAndDereferenceVad((char *)v18);
          *a4 = v15 - v16 + 1;
          *a3 = v16;
          *a6 = v56;
          return (unsigned int)v49;
        }
        v39 = -1073741800;
        goto LABEL_137;
      }
      if ( v22 == 16 )
      {
        v39 = -1073741800;
        goto LABEL_137;
      }
      v23 = v54;
      if ( v54 == 1 )
      {
        if ( v21 || (*(_DWORD *)(**(_QWORD **)(v18 + 72) + 56LL) & 0x20) != 0 )
          goto LABEL_136;
        v23 = v54;
      }
      if ( (v20 & 8) == 0 || v19 )
      {
        v24 = (unsigned __int64)v58;
      }
      else
      {
        v39 = MiCheckSecuredVad(v18, v65, v67, ProtectionMask, KeGetCurrentThread()->PreviousMode);
        v53 = v39;
        if ( v39 < 0 )
          goto LABEL_137;
        v24 = (unsigned __int64)v59;
        ProtectionMask = v52;
        v23 = v54;
      }
      v25 = *(unsigned int *)(v18 + 48);
      if ( (v25 & 0x100000) != 0 )
      {
        if ( (v13 & 0x88) == 0 && v23 != 1 )
        {
          if ( (v25 & 0x70) == 0x40 )
          {
            if ( (v13 & 0xFFFFF9F9) != 0 )
            {
              v39 = -1073741755;
              goto LABEL_137;
            }
            v13 &= 0x7FFFF9FFu;
            v50 = *(_DWORD *)(v18 + 48) & 0xC00;
            if ( (*(_DWORD *)(v18 + 48) & 0x380) != 0 && v50 == 3072 )
            {
              v13 |= 0x400u;
            }
            else if ( v50 == 1024 )
            {
              v13 |= 0x200u;
            }
            ProtectionMask = MiMakeProtectionMask(v13);
          }
          v39 = MiProtectPrivateMemory(v18, v16, v15, ProtectionMask, v13, v51, &v56, (__int64)&v57);
          if ( v39 >= 0 )
          {
            if ( v24 )
            {
              if ( v24 < v15 )
              {
                v45 = v24 >> 12;
                if ( v45 >= (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) )
                {
                  v46 = *(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32);
                  if ( v45 <= v46 && (v15 + 1) >> 12 <= v46 )
                    Teb[2] = v15 + 1;
                }
              }
            }
LABEL_49:
            MiUnlockAndDereferenceVad((char *)v18);
            *a4 = v15 - v16 + 1;
            *a3 = v16;
            *a6 = v56;
            if ( v57 == 1 )
              return 1073741847LL;
            return 0LL;
          }
          goto LABEL_137;
        }
      }
      else if ( (v13 & 0x600) == 0 )
      {
        if ( (v25 & 0x70) == 0x20 )
        {
          if ( (v13 & 4) != 0 )
            v13 = v13 & 0xFFFFFFF3 | 8;
          if ( (v13 & 0x40) != 0 )
            v13 = v13 & 0xFFFFFF3F | 0x80;
        }
        v26 = MmCompatibleProtectionMask[(v25 >> 7) & 7] | 0x700;
        if ( (v13 | v26) == v26 )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v18 + 72) + 56LL) & 0xA0) == 0x80 )
            goto LABEL_48;
          if ( MiVadMapsLargeImage(v18) )
          {
            if ( v13 == 128 || v13 == 8 )
            {
              MiUnlockAndDereferenceVad(v27);
              *a4 = v15 - v16 + 1;
              *a3 = v16;
              *a6 = MmProtectToValue[ProtectionMask];
              return 0LL;
            }
            v39 = -1073741746;
          }
          else
          {
            ProtoPteAddress = (__int64 *)MiGetProtoPteAddress((__int64)v27, v16 >> 12, 2, v69);
            if ( ProtoPteAddress )
            {
              v62 = MiGetProtoPteAddress(v18, v64, 2, &v70);
              if ( v62 )
              {
                CurrentThread = KeGetCurrentThread();
                v30 = ***(_QWORD ***)(v18 + 72);
                --CurrentThread->SpecialApcDisable;
                v31 = (signed __int64 *)(v30 + 40);
                ExAcquirePushLockSharedEx((ULONG_PTR)v31, 0LL);
                v32 = v69[0];
                v33 = v70;
                while ( 1 )
                {
                  v34 = v32 == v33 ? v62 : *(_QWORD *)(v32 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v32 + 44) - 1);
                  if ( (unsigned __int64)ProtoPteAddress > v34 )
                  {
LABEL_42:
                    v36 = v55;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      PteShadow = *ProtoPteAddress;
                      if ( (unsigned __int64)ProtoPteAddress >= 0xFFFFF6FB7DBED000uLL
                        && (unsigned __int64)ProtoPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
                      {
                        PteShadow = MiReadPteShadow((unsigned __int64)ProtoPteAddress, *ProtoPteAddress);
                      }
                      if ( !PteShadow )
                        break;
                      if ( (unsigned __int64)++ProtoPteAddress > v34 )
                        goto LABEL_42;
                    }
                    v36 = 0;
                    v55 = 0;
                  }
                  if ( v32 == v33 )
                    break;
                  v32 = *(_QWORD *)(v32 + 16);
                  v69[0] = v32;
                  ProtoPteAddress = *(__int64 **)(v32 + 8);
                  if ( !ProtoPteAddress )
                  {
                    v36 = 0;
                    break;
                  }
                }
                if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v31);
                KeAbPostRelease((ULONG_PTR)v31);
                v38 = CurrentThread->SpecialApcDisable++ == -1;
                if ( v38
                  && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
                {
                  KiCheckForKernelApcDelivery(v37);
                }
                if ( v36 )
                {
LABEL_48:
                  v39 = MiSetProtectionOnSection(a2, v18, v16, v15, v13, v54, &v56, (__int64)&v57);
                  if ( v39 >= 0 )
                    goto LABEL_49;
                  goto LABEL_137;
                }
              }
            }
            v39 = -1073741779;
          }
        }
        else
        {
          v39 = -1073741746;
        }
        goto LABEL_137;
      }
LABEL_136:
      v39 = -1073741582;
      goto LABEL_137;
    }
    if ( ProtectionMask == ((v20 >> 7) & 0x1F) )
    {
      MiUnlockAndDereferenceVad((char *)v18);
      *a4 = v15 - v16 + 1;
      *a3 = v16;
      *a6 = MmProtectToValue[ProtectionMask];
      return 0LL;
    }
LABEL_99:
    v39 = -1073741800;
    goto LABEL_137;
  }
  v39 = MiAllowProtectionChange(a2, a1, v17, ProtectionMask, v16, v15);
  v53 = v39;
  if ( v39 >= 0 )
  {
    if ( (*(_DWORD *)(v18 + 48) & 0x100) != 0 || !MiIsProcessCfgEnabled() || v61 != 1 )
      goto LABEL_68;
    if ( (v42 & 8) != 0 )
    {
      v39 = MiCheckSecuredVad(v18, v65, v67, v52, KeGetCurrentThread()->PreviousMode);
      if ( v39 < 0 )
        goto LABEL_137;
      v76 = 1;
      v58 = v59;
    }
    v71[0] = v16;
    v71[1] = v15;
    v39 = MiCommitVadCfgBits(v18, (__int64)v71, 0LL);
    v53 = v39;
    if ( v39 >= 0 )
    {
LABEL_68:
      v19 = v76;
      ProtectionMask = v52;
      goto LABEL_11;
    }
  }
LABEL_137:
  if ( P )
    MiUnlockAndDereferenceVad((char *)P);
  return (unsigned int)v39;
}
