/*
 * XREFs of MiResolveDemandZeroFault @ 0x140046D50
 * Callers:
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1400304A0 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiCheckVirtualAddress @ 0x140098C30 (MiCheckVirtualAddress.c)
 *     MiCheckUserVirtualAddress @ 0x140098DE0 (MiCheckUserVirtualAddress.c)
 *     MiCreateSharedZeroPages @ 0x140109240 (MiCreateSharedZeroPages.c)
 *     MiExpandSharedZeroCluster @ 0x14010F790 (MiExpandSharedZeroCluster.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(unsigned __int64 *a1, unsigned __int64 a2, ULONG_PTR a3, int a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r11
  unsigned __int64 *v8; // r9
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r14
  char v11; // si
  _BYTE *v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // r10
  _KPROCESS *Process; // r12
  unsigned __int64 v19; // r11
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *v21; // r14
  __int64 v22; // rcx
  __int64 Address; // rax
  unsigned int v24; // ecx
  __int64 v25; // rcx
  unsigned __int64 *v26; // r10
  __int64 v27; // rdx
  bool v28; // zf
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  char v34; // si
  unsigned int v35; // eax
  __int64 v36; // rdx
  char v37; // r14
  __int64 v38; // rax
  int v39; // ecx
  int v40; // eax
  int v41; // edi
  __int64 v42; // rcx
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  unsigned __int64 *v45; // r12
  __int64 v46; // rax
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r14
  __int64 v49; // rdx
  unsigned __int64 v50; // r8
  __int64 v51; // rax
  int v52; // r8d
  int v53; // eax
  int v54; // [rsp+30h] [rbp-59h] BYREF
  __int64 v55; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v56; // [rsp+40h] [rbp-49h]
  unsigned __int64 v57; // [rsp+48h] [rbp-41h] BYREF
  int v58[4]; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 *v60; // [rsp+68h] [rbp-21h]
  unsigned __int64 v61; // [rsp+70h] [rbp-19h]
  unsigned __int64 v62; // [rsp+78h] [rbp-11h]
  int v63; // [rsp+80h] [rbp-9h]
  int v64; // [rsp+84h] [rbp-5h]
  int v65; // [rsp+90h] [rbp+7h]
  unsigned __int64 v66; // [rsp+98h] [rbp+Fh]
  __int64 v67; // [rsp+A0h] [rbp+17h]
  __int64 v68; // [rsp+A8h] [rbp+1Fh]
  unsigned __int64 v70; // [rsp+F0h] [rbp+67h]

  v4 = a1[7];
  v5 = 0LL;
  v6 = a1[2];
  v8 = a1;
  v68 = 0LL;
  v9 = 0LL;
  v10 = a2;
  v11 = *(_BYTE *)(v4 + 184) & 7;
  if ( !v11 )
    v9 = 64LL;
  v12 = (_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
  v59 = v9;
  if ( (v6 & 1) == 0 )
    goto LABEL_9;
  if ( *v12 == 2 )
  {
    v9 = (unsigned int)v9 | 1;
    goto LABEL_13;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( *v12 == 1 )
    {
      v9 = (unsigned int)v9 | 2;
      goto LABEL_13;
    }
  }
  else
  {
LABEL_9:
    v12 = (_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  if ( (v6 & 1) == 0 || *v12 != 5 )
    goto LABEL_14;
  v9 = (unsigned int)v9 | 8;
LABEL_13:
  v59 = v9;
LABEL_14:
  v13 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v6 & 1) != 0 && *(_BYTE *)v13 == 4 || (v9 & 0xB) != 0 )
  {
    if ( (v6 & 1) != 0 && *(_BYTE *)v13 == 4 )
      v68 = *(_QWORD *)(v13 + 40);
    if ( (v9 & 2) != 0 && (*(_DWORD *)(v13 + 80) & 0x4000) != 0 )
    {
      v9 = (unsigned int)v9 | 4;
      v59 = v9;
    }
    if ( (v9 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) > 0x1000uLL )
    {
      v9 = (unsigned int)v9 | 0x10;
      v59 = v9;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v66 = v13;
  v60 = a1;
  if ( (v9 & 6) == 2 )
  {
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return 0LL;
  }
  if ( (v9 & 8) != 0 && (*(_DWORD *)(v13 + 56) & 8) != 0 )
  {
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    return 3221225495LL;
  }
  v15 = *a1;
  v16 = 0LL;
  v17 = a1[1] >> 57;
  Process = KeGetCurrentThread()->ApcState.Process;
  v56 = *a1;
  v55 = 0LL;
  if ( (_DWORD)v17 )
    goto LABEL_62;
  if ( (v6 & 1) != 0 )
  {
    v19 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v19 == 4 )
    {
      LODWORD(v17) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v19 + 40) + 588LL)]
                                                     + 192)
                                         + 146LL);
      goto LABEL_42;
    }
    if ( *(_BYTE *)v19 == 2 )
    {
      LODWORD(v17) = *(_DWORD *)(v19 + 40);
LABEL_42:
      if ( (_DWORD)v17 )
        goto LABEL_62;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v11 )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = CurrentThread->ApcState.Process;
    v22 = *(_QWORD *)&v21[1].IdealGlobalNode;
    if ( v15 >= 0xFFFFF68000000000uLL && v15 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v16 = v55;
      goto LABEL_58;
    }
    if ( v19 || *(_QWORD *)(v22 + 376) || *(_QWORD *)(v22 + 384) || *(_BYTE *)(v22 + 304) == 1 )
    {
      Address = MiLocateAddress(v15);
      v55 = Address;
      v16 = Address;
      if ( !Address
        || (v24 = *(_DWORD *)(Address + 48), LODWORD(v17) = (v24 >> 8) & 0x3F, !(_DWORD)v17)
        && ((v24 & 0x4000) != 0
         || (v25 = **(_QWORD **)(Address + 72)) == 0
         || (LODWORD(v17) = (*(_DWORD *)(v25 + 56) >> 20) & 0x3F, !(_DWORD)v17)) )
      {
LABEL_58:
        if ( v19 && CurrentThread->ApcStateIndex == 1 )
          LODWORD(v17) = v21->IdealNode[CurrentThread->Affinity.Group] + 1;
      }
    }
    else
    {
      v16 = v55;
    }
    v10 = a2;
  }
LABEL_62:
  v65 = v17;
  v26 = a1;
  v60 = a1;
  v61 = v56;
  if ( v16
    || v10 > 0xFFFFF6BFFFFFFF78uLL
    || v10 < 0xFFFFF68000000000uLL
    || (v27 = *(_QWORD *)(qword_14043B808 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3)),
        !*(_DWORD *)(v27 + 1144)) )
  {
    v29 = v56;
  }
  else
  {
    v28 = *(_QWORD *)(v27 + 1264) == (_QWORD)Process;
    v29 = v56;
    if ( v28 )
    {
      v16 = MiLocateAddress(v56);
      v55 = v16;
    }
  }
  v30 = *(_QWORD *)v10;
  v67 = v16;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL
    && v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v30)
    && (v30 & 1) != 0
    && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v9 )
    {
      v31 = *(_QWORD *)(v9 + 8 * ((v10 >> 3) & 0x1FF));
      v9 = v30 | 0x20;
      if ( (v31 & 0x20) == 0 )
        v9 = v30;
      v30 = v9;
      if ( (v31 & 0x42) != 0 )
        v30 = v9 | 0x42;
    }
    v16 = v55;
  }
  if ( !a3 )
  {
    v32 = v26[2];
    v33 = (v30 >> 5) & 0x1F;
    if ( (v32 & 1) != 0 && *(_BYTE *)(v32 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v30 & 0x400) != 0 )
      LODWORD(v33) = 4;
    v63 = v33;
    v64 = v33;
    v62 = 0LL;
    return MiResolvePrivateZeroFault(&v59, v30, v9, v8);
  }
  v34 = v59;
  v35 = 24;
  v62 = v10;
  v36 = 0LL;
  v37 = 0;
  v66 = v13;
  v57 = 1LL;
  v54 = 24;
  if ( (v59 & 0x15) != 0 && (v59 & 0x40) != 0 )
  {
    v38 = MiCheckVirtualAddress(v29, &v54, &v55);
    v16 = v55;
    v36 = v38;
    v35 = v54;
    v63 = v54;
    v64 = v54;
LABEL_95:
    if ( (v34 & 4) != 0 && v35 >> 3 != 1 && (v35 >> 3 != 3 || (v35 & 7) == 0) )
    {
      MiUnlockProtoPoolPage(a3, 0x11u);
      return 0LL;
    }
    if ( v36 && v16 && v35 != 24 && (v35 & 0xFFFFFFF8) != 0x10 )
      v57 = MiExpandSharedZeroCluster(&v59);
    goto LABEL_105;
  }
  if ( v16 )
  {
    v39 = *(_DWORD *)(v16 + 48);
    if ( (v39 & 0x4000) == 0 && (v39 & 0x40000) != 0 )
    {
      v37 = 1;
      v36 = MiCheckUserVirtualAddress(v29, &v54, v16);
      v35 = v54;
    }
  }
  v63 = v35;
  v64 = v35;
  if ( v37 == 1 )
    goto LABEL_95;
LABEL_105:
  v40 = MiCreateSharedZeroPages(&v59, &v57);
  v58[0] = 0;
  v41 = v40;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v58);
    while ( *(__int64 *)(a3 + 24) < 0 );
  }
  *(_BYTE *)(a3 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(a3) )
    MiPfnReferenceCountIsZero(a3, (__int64)(a3 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v41 >= 0 )
  {
    v42 = v59;
    if ( (v59 & 4) == 0 )
    {
      v43 = v61;
      v44 = (unsigned int)((v29 - v61) >> 12);
      v45 = a1;
      v46 = -v44;
      if ( (v59 & 8) == 0 )
        v13 = 0LL;
      v47 = a2 + 8 * v46;
      v48 = *a1;
      v70 = *a1;
      if ( v57 )
      {
        do
        {
          v49 = *(_QWORD *)v47;
          if ( v47 >= 0xFFFFF6FB7DBED000uLL
            && v47 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v42, v49)
            && (v49 & 1) != 0
            && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
          {
            v50 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v50 )
            {
              v51 = *(_QWORD *)(v50 + 8 * ((v47 >> 3) & 0x1FF));
              v52 = v49 | 0x20;
              if ( (v51 & 0x20) == 0 )
                v52 = v49;
              LODWORD(v49) = v52;
              if ( (v51 & 0x42) != 0 )
                LODWORD(v49) = v52 | 0x42;
            }
          }
          *v45 = v43;
          v53 = MiCompleteProtoPteFault((_DWORD)v45, v49, a4, 1, v13);
          v43 += 4096LL;
          if ( !v5 && v53 < 0 )
            v41 = v53;
          __incgsdword(0x2E9Cu);
          ++v5;
          v47 += 8LL;
        }
        while ( v5 < v57 );
        v48 = v70;
      }
      *v45 = v48;
    }
  }
  return (unsigned int)v41;
}
