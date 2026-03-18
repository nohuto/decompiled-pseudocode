/*
 * XREFs of MiResolveDemandZeroFault @ 0x1400CCE70
 * Callers:
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiCheckVirtualAddress @ 0x14005DBF0 (MiCheckVirtualAddress.c)
 *     MiCheckUserVirtualAddress @ 0x14005DDB0 (MiCheckUserVirtualAddress.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiExpandSharedZeroCluster @ 0x140075E70 (MiExpandSharedZeroCluster.c)
 *     MiResolvePrivateZeroFault @ 0x1400CD460 (MiResolvePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiCreateSharedZeroPages @ 0x1400EFE70 (MiCreateSharedZeroPages.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(unsigned __int64 *a1, unsigned __int64 a2, ULONG_PTR a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  int v8; // r10d
  char v9; // r15
  char v10; // r15
  unsigned __int64 v11; // r11
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  _KPROCESS *Process; // r13
  unsigned __int64 v16; // r10
  __int64 v17; // r14
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  ULONG_PTR v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  char v27; // r13
  char v28; // r15
  unsigned int v29; // ecx
  __int64 v30; // rdx
  int v31; // eax
  ULONG_PTR v32; // r14
  int v33; // r13d
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // r12
  __int64 v37; // r12
  int v38; // esi
  unsigned __int64 v39; // rdx
  int v40; // eax
  unsigned __int64 Address; // rax
  unsigned int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // r8
  __int64 v52; // rax
  unsigned __int64 v53; // [rsp+30h] [rbp-59h]
  unsigned __int64 v54; // [rsp+30h] [rbp-59h]
  unsigned __int64 v55; // [rsp+38h] [rbp-51h] BYREF
  _KPROCESS *v56; // [rsp+40h] [rbp-49h]
  unsigned __int64 v57; // [rsp+48h] [rbp-41h] BYREF
  int v58[4]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v59[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v60; // [rsp+70h] [rbp-19h]
  unsigned __int64 v61; // [rsp+78h] [rbp-11h]
  int v62; // [rsp+80h] [rbp-9h]
  int v63; // [rsp+84h] [rbp-5h]
  __int64 v64; // [rsp+88h] [rbp-1h]
  int v65; // [rsp+90h] [rbp+7h]
  int v66; // [rsp+94h] [rbp+Bh]
  unsigned __int64 v67; // [rsp+98h] [rbp+Fh]
  __int64 v68; // [rsp+A0h] [rbp+17h]
  __int64 v69; // [rsp+A8h] [rbp+1Fh]
  int v70; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR v71; // [rsp+100h] [rbp+77h]
  __int64 v72; // [rsp+108h] [rbp+7Fh]

  v72 = a4;
  v71 = a3;
  v4 = a1[7];
  v5 = 0LL;
  v59[0] = 0LL;
  v64 = 0LL;
  v66 = 0;
  v8 = 0;
  v9 = *(_BYTE *)(v4 + 184);
  v69 = 0LL;
  v10 = v9 & 7;
  if ( !v10 )
  {
    v8 = 64;
    LODWORD(v59[0]) = 64;
  }
  v11 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL;
  v12 = a1[2] & 1;
  if ( v12 && *(_BYTE *)v11 == 2 )
  {
    v8 |= 1u;
    goto LABEL_64;
  }
  if ( v12 )
  {
    if ( *(_BYTE *)v11 == 1 )
    {
      v8 |= 2u;
    }
    else
    {
      if ( *(_BYTE *)v11 != 5 )
      {
LABEL_67:
        if ( *(_BYTE *)v11 == 4 )
          goto LABEL_68;
        goto LABEL_5;
      }
      v8 |= 8u;
    }
LABEL_64:
    LODWORD(v59[0]) = v8;
    goto LABEL_67;
  }
LABEL_5:
  if ( (v8 & 0xB) == 0 )
  {
    v13 = 0LL;
    goto LABEL_7;
  }
LABEL_68:
  v13 = v11;
  if ( v12 && *(_BYTE *)v11 == 4 )
    v69 = *(_QWORD *)(v11 + 40);
  if ( (v8 & 2) != 0 && (*(_DWORD *)(v11 + 80) & 0x4000) != 0 )
  {
    v8 |= 4u;
    LODWORD(v59[0]) = v8;
  }
  if ( (v8 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) > 0x1000uLL )
  {
    v8 |= 0x10u;
    LODWORD(v59[0]) = v8;
  }
LABEL_7:
  v67 = v13;
  if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
  {
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return 0LL;
  }
  if ( (v8 & 8) != 0 && (*(_DWORD *)(v13 + 56) & 8) != 0 )
  {
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return 3221225495LL;
  }
  v14 = *a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = a1[1] >> 57;
  v17 = 0LL;
  v56 = Process;
  v53 = v14;
  v55 = 0LL;
  if ( (_DWORD)v16 )
    goto LABEL_20;
  if ( !v12 )
  {
    v11 = 0LL;
    goto LABEL_12;
  }
  if ( *(_BYTE *)v11 == 4 )
  {
    LODWORD(v16) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v11 + 40) + 588LL)]
                                                   + 192)
                                       + 146LL)
                 + 1;
  }
  else
  {
    if ( *(_BYTE *)v11 != 2 )
      goto LABEL_12;
    LODWORD(v16) = *(_DWORD *)(v11 + 40);
  }
  if ( (_DWORD)v16 )
    goto LABEL_20;
LABEL_12:
  if ( !v10 )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = CurrentThread->ApcState.Process;
    v20 = *(_QWORD *)&v19[1].IdealNode[14];
    if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v17 = v55;
LABEL_59:
      if ( v11 && CurrentThread->ApcStateIndex == 1 )
        LODWORD(v16) = v19->IdealNode[CurrentThread->Affinity.Group] + 1;
      goto LABEL_19;
    }
    if ( v11 || *(_QWORD *)(v20 + 424) || *(_QWORD *)(v20 + 432) || *(_BYTE *)(v20 + 352) == 1 )
    {
      Address = MiLocateAddress(v14);
      v55 = Address;
      v17 = Address;
      if ( !Address
        || (v42 = *(_DWORD *)(Address + 48), LODWORD(v16) = (v42 >> 12) & 0x3F, !(_DWORD)v16)
        && ((v42 & 0x100000) != 0
         || (v43 = **(_QWORD **)(Address + 72)) == 0
         || (LODWORD(v16) = (*(_DWORD *)(v43 + 56) >> 20) & 0x3F, !(_DWORD)v16)) )
      {
        v14 = v53;
        goto LABEL_59;
      }
      v14 = v53;
    }
    else
    {
      v17 = v55;
    }
LABEL_19:
    Process = v56;
  }
LABEL_20:
  v65 = v16;
  v60 = v14;
  v59[1] = a1;
  if ( !v17 && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL )
  {
    v21 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
    if ( *(_DWORD *)(v21 + 1144) )
    {
      if ( *(_KPROCESS **)(v21 + 1264) == Process )
      {
        v45 = MiLocateAddress(v14);
        v14 = v53;
        v17 = v45;
        v55 = v45;
      }
    }
  }
  v22 = *(_QWORD *)a2;
  v68 = v17;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v47 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
        v48 = v22 | 0x20;
        if ( (v47 & 0x20) == 0 )
          v48 = v22;
        v22 = v48;
        if ( (v47 & 0x42) != 0 )
          v22 = v48 | 0x42;
      }
    }
    v17 = v55;
  }
  v23 = v71;
  if ( !v71 )
  {
    v24 = a1[2];
    v25 = (v22 >> 5) & 0x1F;
    if ( (v24 & 1) != 0 && (v24 &= ~1uLL, *(_BYTE *)v24 == 4) || (v22 & 0x400) != 0 )
      LODWORD(v25) = 4;
    v62 = v25;
    v63 = v25;
    v61 = 0LL;
    return MiResolvePrivateZeroFault(v59, v24, 0LL, v14);
  }
  v27 = v59[0];
  v28 = 0;
  v61 = a2;
  v29 = 24;
  v57 = 1LL;
  v30 = 0LL;
  v70 = 24;
  if ( (v59[0] & 0x15) != 0 && (v59[0] & 0x40) != 0 )
  {
    v44 = MiCheckVirtualAddress(v14, &v70, &v55);
    v29 = v70;
    v30 = v44;
    v17 = v55;
    v23 = v71;
    v62 = v70;
    v63 = v70;
LABEL_93:
    if ( (v27 & 4) != 0 && v29 >> 3 != 1 && (v29 >> 3 != 3 || (v29 & 7) == 0) )
    {
      MiUnlockProtoPoolPage(v23, 0x11u);
      return 0LL;
    }
    if ( v30 && v17 && v29 != 24 && (v29 & 0xFFFFFFF8) != 0x10 )
      v57 = MiExpandSharedZeroCluster((__int64)v59);
    goto LABEL_39;
  }
  if ( v17 )
  {
    v49 = *(unsigned int *)(v17 + 48);
    if ( (v49 & 0x100000) == 0 && MiVadPageSizes[(v49 >> 18) & 3] == 16 )
    {
      v28 = 1;
      v50 = MiCheckUserVirtualAddress(v14, &v70, v17);
      v29 = v70;
      v30 = v50;
      v23 = v71;
    }
  }
  v62 = v29;
  v63 = v29;
  if ( v28 == 1 )
    goto LABEL_93;
LABEL_39:
  v31 = MiCreateSharedZeroPages(v59, &v57);
  v32 = v71;
  v33 = v31;
  v58[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v58);
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  *(_BYTE *)(v32 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v32) )
    MiPfnReferenceCountIsZero(v32, (__int64)(v32 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v33 >= 0 && (v59[0] & 4) == 0 )
  {
    v34 = v60;
    v56 = 0LL;
    v35 = a2 - 8LL * (unsigned int)((v53 - v60) >> 12);
    v36 = *a1;
    v54 = *a1;
    if ( (v59[0] & 8) != 0 )
      v56 = (_KPROCESS *)v13;
    if ( v57 )
    {
      v37 = (__int64)v56;
      v38 = v72;
      do
      {
        v39 = *(_QWORD *)v35;
        if ( v35 >= 0xFFFFF6FB7DBED000uLL
          && v35 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v39 & 1) != 0
          && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
        {
          v51 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v51 )
          {
            v52 = *(_QWORD *)(v51 + 8 * ((v35 >> 3) & 0x1FF));
            LODWORD(v51) = v39 | 0x20;
            if ( (v52 & 0x20) == 0 )
              v51 = *(_QWORD *)v35;
            LODWORD(v39) = v51;
            if ( (v52 & 0x42) != 0 )
              LODWORD(v39) = v51 | 0x42;
          }
        }
        *a1 = v34;
        v40 = MiCompleteProtoPteFault((_DWORD)a1, v39, v38, 1, v37);
        v34 += 4096LL;
        if ( !v5 && v40 < 0 )
          v33 = v40;
        __incgsdword(0x2E9Cu);
        ++v5;
        v35 += 8LL;
      }
      while ( v5 < v57 );
      v36 = v54;
    }
    *a1 = v36;
  }
  return (unsigned int)v33;
}
