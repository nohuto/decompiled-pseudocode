/*
 * XREFs of MiResolveMappedFileFault @ 0x14002BE50
 * Callers:
 *     MiIssueFlowThroughFault @ 0x140003D9C (MiIssueFlowThroughFault.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x14001B7BC (MiGetSubsectionDriverProtos.c)
 *     MiGetSessionIdForVa @ 0x14001BC8C (MiGetSessionIdForVa.c)
 *     MiPickClusterForMappedFileFault @ 0x14002A2B0 (MiPickClusterForMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x14002ADD0 (MiBuildMdlForMappedFileFault.c)
 *     MiComputeFaultCluster @ 0x14002B4B8 (MiComputeFaultCluster.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiAllocateInPageSupport @ 0x14002C548 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x14002C918 (MiComputeFaultNode.c)
 *     MiFinishMdlForMappedFileFault @ 0x14002CB18 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140030FC4 (MiGetAvailablePagesBelowPriority.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 *     MiUseSlabAllocator @ 0x140065C80 (MiUseSlabAllocator.c)
 *     MiSanitizePfnProtection @ 0x140074040 (MiSanitizePfnProtection.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiSetInPagePrefetchPriority @ 0x140113C24 (MiSetInPagePrefetchPriority.c)
 *     KeInvalidAccessAllowed @ 0x140117D7C (KeInvalidAccessAllowed.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 */

__int64 MiResolveMappedFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // ecx
  bool v13; // zf
  unsigned __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // r8
  unsigned __int64 v17; // rdi
  char v18; // r13
  unsigned int v19; // eax
  _QWORD *v20; // r10
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r11
  unsigned __int64 v25; // rax
  unsigned int v26; // r13d
  __int64 v27; // r8
  __int64 v28; // r11
  int v29; // ecx
  __int16 v30; // cx
  int v31; // esi
  __int64 v32; // rcx
  unsigned int v33; // esi
  __int64 v34; // r10
  __int64 SlabPage; // rax
  __int64 v36; // rsi
  int v37; // r13d
  __int64 result; // rax
  unsigned __int64 v39; // r9
  unsigned int v40; // eax
  __int64 v41; // r15
  __int64 v42; // rbx
  __int64 v43; // r8
  unsigned int v44; // edi
  int v45; // eax
  __int64 v46; // rdx
  int v47; // ebx
  __int64 v48; // rax
  unsigned __int64 v49; // r10
  __int64 v50; // r9
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  __int16 v53; // r9
  __int64 SharedProtos; // rax
  __int64 Address; // rax
  unsigned int SessionIdForVa; // eax
  __int64 v57; // r8
  unsigned int v58; // r9d
  unsigned int v59; // eax
  int v60; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v61; // [rsp+58h] [rbp-51h]
  int v62; // [rsp+60h] [rbp-49h]
  unsigned __int64 v63; // [rsp+68h] [rbp-41h]
  __int64 v64; // [rsp+70h] [rbp-39h]
  unsigned int v65; // [rsp+78h] [rbp-31h]
  __int64 v66; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v67; // [rsp+88h] [rbp-21h]
  unsigned __int64 v68; // [rsp+90h] [rbp-19h]
  __int64 v69; // [rsp+98h] [rbp-11h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-9h]
  unsigned __int64 v71; // [rsp+A8h] [rbp-1h]
  volatile signed __int32 *v72; // [rsp+B0h] [rbp+7h] BYREF
  __int16 v73; // [rsp+B8h] [rbp+Fh]
  unsigned __int16 v74; // [rsp+BAh] [rbp+11h]
  unsigned __int64 v75; // [rsp+C0h] [rbp+17h] BYREF
  unsigned __int64 v76; // [rsp+C8h] [rbp+1Fh] BYREF
  unsigned int v77; // [rsp+110h] [rbp+67h]
  unsigned int v78; // [rsp+110h] [rbp+67h]
  __int64 v79; // [rsp+120h] [rbp+77h] BYREF
  va_list va; // [rsp+120h] [rbp+77h]
  __int64 *v81; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v79 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, __int64 *);
  v3 = a1[2];
  v5 = a1[7];
  v67 = *a1;
  v63 = v3;
  v71 = v5;
  v69 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v69;
  v61 = 0LL;
  v77 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    LOBYTE(v6) = 17;
    MiUnlockProtoPoolPage(v79, v6);
    return 3221225633LL;
  }
  v9 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v3 & 1) != 0 )
  {
    if ( *(_BYTE *)v9 == 5 )
    {
      if ( (*(_DWORD *)(v9 + 56) & 4) != 0 )
      {
        LOBYTE(v6) = 17;
        MiUnlockProtoPoolPage(v79, v6);
        return 3221225495LL;
      }
      v61 = 0LL;
    }
    else if ( (v3 & 1) != 0 )
    {
      if ( *(_BYTE *)v9 == 1 )
      {
        v13 = (*(_DWORD *)(v9 + 80) & 0x100) == 0;
        v61 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( !v13 )
        {
          LOBYTE(v6) = 17;
          MiUnlockProtoPoolPage(v79, v6);
          return 0LL;
        }
        v77 = 0;
      }
      else if ( (v3 & 1) != 0 && *(_BYTE *)v9 == 2 )
      {
        v61 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
      }
    }
  }
  if ( (v69 & 0x400) != 0 )
  {
    if ( qword_14043B180 && (v69 & 0x10) == 0 )
      v8 = ~qword_14043B180 & v69;
    v70 = 0LL;
  }
  else
  {
    if ( qword_14043B180 && (v69 & 0x10) == 0 )
      v8 = ~qword_14043B180 & v69;
    v6 = 0xFFFFFA8000000000uLL;
    v70 = 48 * (((unsigned __int64)v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v8 = *(_QWORD *)(v70 + 16);
    if ( qword_14043B180 && (v8 & 0x10) == 0 )
      v8 &= ~qword_14043B180;
  }
  v10 = v8 >> 16;
  v11 = *(_QWORD *)v10;
  v12 = *(_DWORD *)(*(_QWORD *)v10 + 56LL);
  if ( (v12 & 0x10) != 0 )
  {
    LOBYTE(v6) = 17;
    MiUnlockProtoPoolPage(v79, v6);
    return 3221225478LL;
  }
  v13 = (*(_BYTE *)(v10 + 34) & 2) == 0;
  v68 = *(_QWORD *)(v10 + 8);
  v62 = -1;
  if ( !v13 && (v12 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v7);
    v14 = 0xFFFF800000000000uLL;
    v62 = SessionIdForVa;
    v58 = SessionIdForVa;
    if ( v67 >= 0xFFFF800000000000uLL )
    {
      if ( (v3 & 1) != 0 )
      {
        if ( *(_BYTE *)v9 == 1 || *(_BYTE *)v9 == 3 )
          goto LABEL_92;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v3, 0xFFFF800000000000uLL, v57, SessionIdForVa) == 1 )
      {
        goto LABEL_92;
      }
    }
    SharedProtos = MiGetSharedProtos(v11, v58, v10);
    goto LABEL_95;
  }
  v14 = 0xFFFF800000000000uLL;
  if ( v7 >= 0xFFFF800000000000uLL && (v12 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v10);
    if ( SharedProtos )
LABEL_95:
      v68 = *(_QWORD *)(SharedProtos + 72);
  }
  if ( a2 >= v68 - 8LL * (*(_DWORD *)(v10 + 52) & 0x3FFFFFFF) + 8LL * *(unsigned int *)(v10 + 44) )
  {
LABEL_92:
    LOBYTE(v14) = 17;
    MiUnlockProtoPoolPage(v79, v14);
    return 3221225477LL;
  }
  v15 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v11 + 60) & 0x3FF));
  v64 = v15;
  v17 = v69;
  if ( (unsigned int)MiControlAreaUsingExtents(v11) )
  {
    v60 = 1;
    v18 = 1;
    v21 = (unsigned int)v16;
    v65 = v16;
  }
  else
  {
    v66 = v16;
    v18 = 0;
    v19 = MiComputeFaultNode(a1, v11, &v66);
    v20 = (_QWORD *)v61;
    v65 = v19;
    v60 = 0;
    if ( v61 )
    {
      Address = v66;
      if ( !v66 )
      {
        Address = MiLocateAddress(v67);
        v66 = Address;
      }
      v60 = MiComputeFaultCluster(v15, v20, Address, 0);
    }
    else if ( (v17 & 0x400) != 0 && (*(_DWORD *)(v11 + 56) & 0x20) == 0 && (*(_BYTE *)(v71 + 184) & 7) == 0 )
    {
      v48 = v66;
      v49 = v67;
      if ( !v66 )
      {
        v48 = MiLocateAddress(v67);
        v66 = v48;
      }
      v50 = *(_QWORD *)(v48 + 120);
      if ( v50 >= 0 )
      {
        v51 = *(_QWORD *)(v48 + 120) & 0xFFFLL;
        if ( v51 >= 0x11 && (v49 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v50 >> 12) - 1 + v51) << 12 )
        {
          v52 = a2 + 8;
          if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
            && v52 < -8LL * (*(_DWORD *)(v10 + 52) & 0x3FFFFFFF) + v68 + 8LL * *(unsigned int *)(v10 + 44)
            && MI_READ_PTE_LOCK_FREE(v52) == v17 )
          {
            v60 = (v53 & 0xFFF) - 1;
          }
        }
      }
    }
    v21 = v77;
  }
  v22 = MiAllocateInPageSupport(a2, v21, &v60, (__int64 *)va);
  if ( !v22 )
  {
    result = 3221225626LL;
    goto LABEL_104;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v17
    || (v24 = (v17 >> 10) & 1, ((v17 >> 10) & 1) == 0)
    && ((*(_BYTE *)(v70 + 34) & 0x20) == 0 || (*(_DWORD *)(*(_QWORD *)v70 + 160LL) & 0x20) != 0) )
  {
    LOBYTE(v23) = 17;
    MiUnlockProtoPoolPage(v79, v23);
    MiFreeInPageSupportBlock((PVOID)v22);
    result = 3221226548LL;
LABEL_104:
    if ( v61 )
      *(_BYTE *)(v61 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( v18 == 1 )
  {
    LOBYTE(v23) = 17;
    MiUnlockProtoPoolPage(v79, v23);
    *(_QWORD *)(v22 + 208) = v10;
    *(_DWORD *)(v22 + 312) = 0;
    *(_DWORD *)(v22 + 184) = 0;
    *(_QWORD *)(v22 + 160) = 0LL;
    *(_QWORD *)(v22 + 256) = 0LL;
    v59 = *(_DWORD *)(v22 + 192) & 0xFFFBFFFF;
    *(_QWORD *)(v22 + 168) = v17;
    *(_QWORD *)(v22 + 232) = a2;
    *(_DWORD *)(v22 + 192) = v59 | 1;
    *v81 = v22;
    return 3221435187LL;
  }
  if ( v61 && *(_BYTE *)v61 == 1 )
    MiSetInPagePrefetchPriority(v61, v22);
  if ( v24 )
    v25 = MI_READ_PTE_LOCK_FREE(&v69);
  else
    v25 = v17;
  v26 = (*(unsigned __int16 *)(v10 + 32) >> 1) & 0x1F;
  v78 = MiSanitizePfnProtection(0LL, v26, (v25 >> 5) & 0x1F);
  MiInitializePageColorBase(v71, v65, &v72);
  v29 = *(_DWORD *)(v11 + 56);
  if ( (v29 & 0x20) == 0 || (v29 & 0x40000) != 0 || !v28 || dword_14043BE64 )
    goto LABEL_35;
  v30 = _InterlockedExchangeAdd(v72, 1u);
  v31 = (unsigned __int16)(v30 & v73);
  v32 = v64;
  v33 = v74 | v31;
  if ( v61 && *(_BYTE *)v61 == 1 && !MiGetAvailablePagesBelowPriority(v64, ((*(_DWORD *)(v61 + 80) >> 3) & 7u) + 1, v27)
    || !(unsigned int)MiObtainFaultCharges(v32, 1LL, 1LL) )
  {
    v17 = v69;
LABEL_35:
    v36 = -1LL;
    goto LABEL_36;
  }
  v17 = v69;
  if ( (unsigned int)MiUseSlabAllocator(v64, v10, v69) )
    SlabPage = MiGetSlabPage(v34, v26, 0LL, 0LL);
  else
    SlabPage = MiGetPage(v34, v33, 0LL);
  v36 = SlabPage;
  if ( SlabPage != -1 )
  {
    v37 = v63;
    *(_QWORD *)(v22 + 224) = v67;
    if ( (unsigned int)MiCopyDataPageToImagePage(v22, v10, a2, v37, SlabPage, v79) == 1 )
    {
      *v81 = v22;
      return 3221435187LL;
    }
    goto LABEL_37;
  }
  MiReturnFaultCharges(v64, 1LL, 1LL);
LABEL_36:
  v37 = v63;
LABEL_37:
  v39 = v68;
  *(_QWORD *)(v22 + 160) = v79;
  *(_DWORD *)(v22 + 184) = v60;
  v40 = v62;
  *(_QWORD *)(v22 + 232) = a2;
  v41 = v64;
  *(_QWORD *)(v22 + 208) = v10;
  v42 = v61;
  v43 = v61;
  *(_QWORD *)(v22 + 168) = v17;
  v44 = MiPickClusterForMappedFileFault(v41, v22, v43, v39, v40, v36, &v76, &v75);
  v45 = MiBuildMdlForMappedFileFault(v22, v76, v75, v41, v44, v36, v78, v42, a1, (__int64)&v72);
  v47 = v45;
  if ( v45 != v44 )
    MiReturnFaultCharges(v41, v44 - v45, 1LL);
  if ( v47 )
  {
    MiFinishMdlForMappedFileFault(v22, v37, v47, v70, v62);
    *v81 = v22;
    return 3221435187LL;
  }
  else
  {
    LOBYTE(v46) = 17;
    MiUnlockProtoPoolPage(v79, v46);
    MiFreeInPageSupportBlock((PVOID)v22);
    return 3221225495LL;
  }
}
