/*
 * XREFs of MmProtectVirtualMemory @ 0x1405EEFD0
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405EED70 (NtProtectVirtualMemory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiReadPteShadow @ 0x14006C540 (MiReadPteShadow.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     MiIsProcessCfgEnabled @ 0x1400884AC (MiIsProcessCfgEnabled.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     MiAllowProtectionChange @ 0x1400F1668 (MiAllowProtectionChange.c)
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 *     MiCommitVadCfgBits @ 0x1405F55BC (MiCommitVadCfgBits.c)
 *     MiCheckSecuredVad @ 0x140619974 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MmProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned int a5,
        int *a6)
{
  _QWORD *v7; // r10
  int v8; // r12d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned int v11; // r15d
  unsigned int v12; // edi
  int ProtectionMask; // r13d
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // rsi
  int v18; // r12d
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // r8d
  unsigned __int64 v22; // r15
  unsigned int v23; // eax
  int v24; // ecx
  char *v25; // rcx
  __int64 *ProtoPteAddress; // rbx
  __int64 v27; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v29; // r15
  signed __int64 *v30; // r15
  __int64 v31; // r10
  __int64 v32; // r11
  unsigned __int64 v33; // r9
  __int64 PteShadow; // rax
  int v35; // ebx
  __int64 v36; // rcx
  bool v37; // zf
  int v38; // ebx
  int v40; // r8d
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r15
  unsigned __int64 v44; // rcx
  __int16 v45; // cx
  char *v46; // rcx
  int v47; // edi
  int v48; // ecx
  int v49; // edx
  unsigned __int64 v50; // [rsp+60h] [rbp-D8h]
  int v51; // [rsp+68h] [rbp-D0h] BYREF
  int v52; // [rsp+6Ch] [rbp-CCh]
  unsigned int v53; // [rsp+70h] [rbp-C8h]
  _DWORD v54[3]; // [rsp+74h] [rbp-C4h] BYREF
  unsigned __int64 v55; // [rsp+80h] [rbp-B8h]
  int v56; // [rsp+88h] [rbp-B0h]
  int v57; // [rsp+8Ch] [rbp-ACh]
  __int64 v58; // [rsp+90h] [rbp-A8h] BYREF
  PVOID P; // [rsp+98h] [rbp-A0h]
  unsigned __int64 v60; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v61; // [rsp+A8h] [rbp-90h]
  int v62; // [rsp+B0h] [rbp-88h] BYREF
  unsigned __int64 v63; // [rsp+B8h] [rbp-80h]
  _QWORD *Teb; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v65; // [rsp+C8h] [rbp-70h]
  _QWORD v66[2]; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v67[2]; // [rsp+E0h] [rbp-58h] BYREF
  _QWORD v68[9]; // [rsp+F0h] [rbp-48h] BYREF
  int v69; // [rsp+140h] [rbp+8h]
  __int64 v70; // [rsp+148h] [rbp+10h]
  int v73; // [rsp+160h] [rbp+28h]

  v70 = a2;
  v69 = a1;
  v52 = 1;
  *a6 = 1;
  v7 = 0LL;
  v54[0] = 0;
  v8 = 1;
  v56 = 1;
  v9 = *a3;
  v61 = v9;
  v67[1] = v9;
  v10 = *a4;
  v63 = v10;
  v65 = v10;
  v53 = a5 >> 31;
  LODWORD(v60) = a5 >> 31;
  v11 = a5 & 0xB0000000;
  LODWORD(P) = a5 & 0xB0000000;
  v12 = a5 & 0x4FFFFFFF;
  if ( (a5 & 0x40000000) != 0 )
  {
    v12 = a5 & 0xFFFFFFF;
    if ( (a5 & 0xFFFFF0F) != 0 )
      return 3221225714LL;
    v8 = 0;
    v56 = 0;
  }
  if ( v12 )
  {
    ProtectionMask = MiMakeProtectionMask(v12);
    v57 = ProtectionMask;
    if ( ProtectionMask != -1 )
    {
      a2 = v70;
      goto LABEL_5;
    }
    return 3221225541LL;
  }
  if ( v11 != 0x80000000 && v11 != 0x10000000 )
    return 3221225541LL;
  ProtectionMask = 24;
  v57 = 24;
LABEL_5:
  v14 = (v10 + v9 - 1) | 0xFFF;
  v66[1] = v14;
  v15 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v50 = v9 & 0xFFFFFFFFFFFFF000uLL;
  Teb = v7;
  *(_QWORD *)&v54[1] = v7;
  v55 = (unsigned __int64)v7;
  if ( (ProtectionMask & 0xFFFFFFF8) != 0x10 )
    goto LABEL_6;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    goto LABEL_79;
  v41 = *(_QWORD *)(a2 + 1064);
  if ( v41 )
  {
    v45 = *(_WORD *)(v41 + 8);
    if ( v45 == 332 )
    {
      v15 = v9 & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v37 = v45 == 452;
      v15 = v9 & 0xFFFFFFFFFFFFF000uLL;
      if ( !v37 )
        goto LABEL_71;
    }
LABEL_79:
    v42 = v55;
    goto LABEL_72;
  }
LABEL_71:
  Teb = KeGetCurrentThread()->Teb;
  *(_QWORD *)&v54[1] = Teb;
  v42 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
  v55 = v42;
LABEL_72:
  *(_QWORD *)&v54[1] = v42;
LABEL_6:
  P = v7;
  v60 = v14 >> 12;
  v16 = MiObtainReferencedVadEx(v15, 0, &v51);
  v17 = v16;
  v65 = v16;
  if ( !v16 )
  {
    v38 = v51;
    if ( v51 != -1073741664 )
      goto LABEL_83;
    goto LABEL_94;
  }
  P = (PVOID)v16;
  if ( v60 > (*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) )
  {
LABEL_94:
    v38 = -1073741800;
    goto LABEL_83;
  }
  v73 = 0;
  if ( (ProtectionMask & 2) == 0 )
    goto LABEL_9;
  v38 = MiAllowProtectionChange(v70, a1, v16, ProtectionMask, v50, v14);
  v51 = v38;
  if ( v38 < 0 )
    goto LABEL_83;
  if ( (*(_DWORD *)(v17 + 48) & 0x10) == 0 && MiIsProcessCfgEnabled() && v8 == 1 )
  {
    v18 = v61;
    if ( (v40 & 0x8000000) != 0 )
    {
      v38 = MiCheckSecuredVad(v17, v61, v63, ProtectionMask, KeGetCurrentThread()->PreviousMode);
      if ( v38 < 0 )
        goto LABEL_83;
      v73 = 1;
      *(_QWORD *)&v54[1] = v55;
    }
    v68[0] = v50;
    v68[1] = v14;
    v38 = MiCommitVadCfgBits(v17, v68, 0LL);
    v51 = v38;
    if ( v38 < 0 )
    {
LABEL_83:
      v46 = (char *)P;
      if ( !P )
        return (unsigned int)v38;
LABEL_85:
      MiUnlockAndDereferenceVad(v46);
      return (unsigned int)v38;
    }
  }
  else
  {
LABEL_9:
    v18 = v61;
  }
  v19 = *(_DWORD *)(v17 + 48);
  v20 = v19 & 7;
  if ( ((v20 - 5) & 0xFFFFFFFD) == 0 )
  {
    if ( ProtectionMask == (unsigned __int8)v19 >> 3 )
    {
      MiUnlockAndDereferenceVad((char *)v17);
      *a4 = v14 - v50 + 1;
      *a3 = v50;
      *a6 = MmProtectToValue[ProtectionMask];
      return 0LL;
    }
    goto LABEL_94;
  }
  if ( (v19 & 0x20000) != 0 )
  {
    v38 = MiProtectEnclavePages(v70, v69, v17, v50, v14, v12, ProtectionMask, v11, a6, a3, a4);
    v46 = (char *)v17;
    goto LABEL_85;
  }
  if ( (v11 & 0x5FFFFFFF) != 0 )
  {
    v38 = -1073741755;
    goto LABEL_83;
  }
  if ( !v12 )
  {
    v38 = -1073741755;
    goto LABEL_83;
  }
  if ( v20 == 3 )
  {
    v47 = MiProtectAweRegion(v50, v14, ProtectionMask, &v62);
    if ( v47 >= 0 )
    {
      MiUnlockAndDereferenceVad((char *)v17);
      v48 = MmProtectToValue[v62];
      *a4 = v14 - v50 + 1;
      *a3 = v50;
      *a6 = v48;
      return (unsigned int)v47;
    }
    goto LABEL_94;
  }
  if ( v20 == 1 )
    goto LABEL_94;
  v21 = v53;
  if ( v53 == 1 && ((v19 & 0x4000) != 0 || (*(_DWORD *)(**(_QWORD **)(v17 + 72) + 56LL) & 0x20) != 0) )
    goto LABEL_102;
  if ( (v19 & 0x8000000) == 0 || v73 )
  {
    v22 = *(_QWORD *)&v54[1];
  }
  else
  {
    v38 = MiCheckSecuredVad(v17, v18, v63, ProtectionMask, KeGetCurrentThread()->PreviousMode);
    v51 = v38;
    if ( v38 < 0 )
      goto LABEL_83;
    v22 = v55;
    v21 = v53;
  }
  v23 = *(_DWORD *)(v17 + 48);
  if ( (v23 & 0x4000) != 0 )
  {
    if ( (v12 & 0x88) != 0 || v21 == 1 )
    {
LABEL_102:
      v38 = -1073741582;
      goto LABEL_83;
    }
    if ( (v23 & 7) == 6 )
    {
      if ( (v12 & 0xFFFFF9F9) != 0 )
      {
        v38 = -1073741755;
        goto LABEL_83;
      }
      v12 &= 0xFFFFF9FF;
      v49 = v23 & 0xC0;
      if ( (v23 & 0x38) != 0 && v49 == 192 )
      {
        v12 |= 0x400u;
      }
      else if ( v49 == 64 )
      {
        v12 |= 0x200u;
      }
      ProtectionMask = MiMakeProtectionMask(v12);
    }
    v38 = MiProtectPrivateMemory(v17, v50, v14, ProtectionMask, v12, &v58, v54);
    if ( v38 < 0 )
      goto LABEL_83;
    if ( v22 )
    {
      if ( v22 < v14 )
      {
        v43 = v22 >> 12;
        if ( v43 >= (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) )
        {
          v44 = *(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32);
          if ( v43 <= v44 && (v14 + 1) >> 12 <= v44 )
            Teb[2] = v14 + 1;
        }
      }
    }
  }
  else
  {
    if ( (v12 & 0x600) != 0 )
    {
      v38 = -1073741582;
      goto LABEL_83;
    }
    if ( (v23 & 7) == 2 )
    {
      if ( (v12 & 4) != 0 )
        v12 = v12 & 0xFFFFFFF3 | 8;
      if ( (v12 & 0x40) != 0 )
        v12 = v12 & 0xFFFFFF3F | 0x80;
    }
    v24 = MmCompatibleProtectionMask[((unsigned __int64)v23 >> 3) & 7] | 0x700;
    if ( (v12 | v24) != v24 )
    {
      v38 = -1073741746;
      goto LABEL_83;
    }
    if ( (*(_DWORD *)(**(_QWORD **)(v17 + 72) + 56LL) & 0xA0) != 0x80 )
    {
      if ( MiVadMapsLargeImage(v17) )
      {
        if ( v12 != 128 && v12 != 8 )
        {
          v38 = -1073741746;
          goto LABEL_83;
        }
        MiUnlockAndDereferenceVad(v25);
        *a4 = v14 - v50 + 1;
        *a3 = v50;
        *a6 = MmProtectToValue[ProtectionMask];
        return 0LL;
      }
      ProtoPteAddress = (__int64 *)MiGetProtoPteAddress((__int64)v25, v50 >> 12, 2, v66);
      if ( !ProtoPteAddress )
        goto LABEL_115;
      v27 = MiGetProtoPteAddress(v17, v60, 2, v67);
      if ( !v27 )
        goto LABEL_115;
      CurrentThread = KeGetCurrentThread();
      v29 = ***(_QWORD ***)(v17 + 72);
      --CurrentThread->SpecialApcDisable;
      v30 = (signed __int64 *)(v29 + 40);
      ExAcquirePushLockSharedEx((ULONG_PTR)v30, 0LL);
      v31 = v66[0];
      v32 = v67[0];
      while ( 1 )
      {
        v33 = v31 == v32 ? v27 : *(_QWORD *)(v31 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v31 + 44) - 1);
        if ( (unsigned __int64)ProtoPteAddress > v33 )
        {
LABEL_38:
          v35 = v52;
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
            if ( (unsigned __int64)++ProtoPteAddress > v33 )
              goto LABEL_38;
          }
          v35 = 0;
          v52 = 0;
        }
        if ( v31 == v32 )
          break;
        v31 = *(_QWORD *)(v31 + 16);
        v66[0] = v31;
        ProtoPteAddress = *(__int64 **)(v31 + 8);
        if ( !ProtoPteAddress )
        {
          v35 = 0;
          break;
        }
      }
      if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v30);
      KeAbPostRelease((ULONG_PTR)v30);
      v37 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v37
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v36);
      }
      if ( !v35 )
      {
LABEL_115:
        v38 = -1073741779;
        goto LABEL_83;
      }
      v21 = v53;
    }
    v38 = MiSetProtectionOnSection(v70, v17, v50, v14, v12, v21, &v58, v54);
    if ( v38 < 0 )
      goto LABEL_83;
  }
  MiUnlockAndDereferenceVad((char *)v17);
  *a4 = v14 - v50 + 1;
  *a3 = v50;
  *a6 = v58;
  if ( v54[0] != 1 )
    return 0LL;
  return 1073741847LL;
}
