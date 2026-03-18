/*
 * XREFs of MiResolveMappedFileFault @ 0x1400931C0
 * Callers:
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x140109814 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetSessionIdForVa @ 0x140007144 (MiGetSessionIdForVa.c)
 *     MiBuildMdlForMappedFileFault @ 0x14002E2E0 (MiBuildMdlForMappedFileFault.c)
 *     MiSanitizePfnProtection @ 0x140050010 (MiSanitizePfnProtection.c)
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiComputeFaultNode @ 0x14005A6C0 (MiComputeFaultNode.c)
 *     MiControlAreaUsingExtents @ 0x14006EFE0 (MiControlAreaUsingExtents.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiAllocateInPageSupport @ 0x140093954 (MiAllocateInPageSupport.c)
 *     MiFinishMdlForMappedFileFault @ 0x140093AC0 (MiFinishMdlForMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140093ED0 (MiPickClusterForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiGetSubsectionDriverProtos @ 0x1400960CC (MiGetSubsectionDriverProtos.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiUseSlabAllocator @ 0x1400BAD50 (MiUseSlabAllocator.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400BADEC (MiGetAvailablePagesBelowPriority.c)
 *     MiFreeInPageSupportBlock @ 0x1400CEFD0 (MiFreeInPageSupportBlock.c)
 *     KeInvalidAccessAllowed @ 0x140116B60 (KeInvalidAccessAllowed.c)
 *     MiComputeFaultCluster @ 0x14012443C (MiComputeFaultCluster.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 *     MiSetInPagePrefetchPriority @ 0x14013B03C (MiSetInPagePrefetchPriority.c)
 *     MiGetSharedProtos @ 0x14015CC6C (MiGetSharedProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CABE0 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CAF9C (MiCopyImageExtentContents.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 */

__int64 MiResolveMappedFileFault(__int64 a1, unsigned __int64 a2, ...)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // ecx
  bool v15; // zf
  __int64 v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rcx
  unsigned int v19; // r13d
  ULONG_PTR *v20; // r15
  __int64 v21; // r8
  unsigned __int64 *v22; // r9
  __int64 v23; // r11
  unsigned __int64 v24; // rdi
  _BYTE *v25; // r10
  __int64 v26; // r15
  __int64 v27; // r12
  unsigned __int64 v28; // rax
  __int64 v29; // r11
  int v30; // esi
  __int64 v31; // r13
  ULONG_PTR *v32; // r14
  signed __int32 v33; // ecx
  unsigned int v34; // r11d
  int v35; // r9d
  __int64 SlabPage; // rax
  int v37; // r9d
  unsigned __int64 v38; // r12
  ULONG_PTR v39; // rsi
  int v40; // r9d
  unsigned int v41; // r12d
  unsigned int v42; // edi
  int v43; // eax
  int v44; // ebx
  __int64 result; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r10
  __int64 v49; // r9
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  __int16 v52; // r9
  unsigned __int64 Address; // rax
  ULONG_PTR v54; // r14
  int v55; // eax
  unsigned int v56; // esi
  unsigned int v57; // eax
  __int64 *v58; // rax
  unsigned int v59; // [rsp+20h] [rbp-E0h]
  __int64 v60; // [rsp+28h] [rbp-D8h]
  int v61; // [rsp+50h] [rbp-B0h] BYREF
  int v62; // [rsp+54h] [rbp-ACh]
  unsigned int v63; // [rsp+58h] [rbp-A8h]
  _BYTE *v64; // [rsp+60h] [rbp-A0h]
  ULONG_PTR *v65; // [rsp+68h] [rbp-98h]
  unsigned int SessionIdForVa; // [rsp+70h] [rbp-90h]
  unsigned __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  unsigned int v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-58h]
  __int64 v74; // [rsp+B0h] [rbp-50h]
  volatile signed __int32 *v75; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-40h]
  __int64 v77; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v78; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v79; // [rsp+D8h] [rbp-28h] BYREF
  ULONG_PTR v82; // [rsp+140h] [rbp+40h] BYREF
  va_list va; // [rsp+140h] [rbp+40h]
  __int64 *v84; // [rsp+148h] [rbp+48h]
  va_list va1; // [rsp+150h] [rbp+50h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v82 = va_arg(va1, _QWORD);
  v84 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v75 = 0LL;
  v76 = 0LL;
  v77 = *(_QWORD *)(a1 + 56);
  v68 = v2;
  v70 = v3;
  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = 0;
  v72 = v5;
  v10 = v5;
  v64 = 0LL;
  v63 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    MiUnlockProtoPoolPage(v82, 0x11u);
    return 3221225633LL;
  }
  v11 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v3 & 1) != 0 )
  {
    if ( *(_BYTE *)v11 == 5 )
    {
      if ( (*(_DWORD *)(v11 + 56) & 4) != 0 )
      {
        MiUnlockProtoPoolPage(v82, 0x11u);
        return 3221225495LL;
      }
      v64 = 0LL;
    }
    else if ( (v3 & 1) != 0 )
    {
      if ( *(_BYTE *)v11 == 1 )
      {
        v15 = (*(_DWORD *)(v11 + 80) & 0x100) == 0;
        v64 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v15 )
        {
          MiUnlockProtoPoolPage(v82, 0x11u);
          return 0LL;
        }
        v63 = 0;
      }
      else if ( (v3 & 1) != 0 && *(_BYTE *)v11 == 2 )
      {
        v64 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
      }
    }
  }
  if ( (v5 & 0x400) != 0 )
  {
    if ( qword_140465800 && (v5 & 0x10) == 0 )
      v10 = ~qword_140465800 & v5;
    v74 = 0LL;
  }
  else
  {
    if ( qword_140465800 && (v5 & 0x10) == 0 )
      v10 = ~qword_140465800 & v5;
    v6 = 0xFFFFFA8000000000uLL;
    v74 = 48 * (((unsigned __int64)v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v10 = *(_QWORD *)(v74 + 16);
    if ( qword_140465800 && (v10 & 0x10) == 0 )
      v10 &= ~qword_140465800;
  }
  v12 = v10 >> 16;
  v13 = *(_QWORD *)v12;
  v14 = *(_DWORD *)(*(_QWORD *)v12 + 56LL);
  if ( (v14 & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v82, 0x11u);
    return 3221225478LL;
  }
  v15 = (*(_BYTE *)(v12 + 34) & 2) == 0;
  v16 = *(_QWORD *)(v12 + 8);
  SessionIdForVa = -1;
  v73 = 0LL;
  v69 = v16;
  if ( !v15 && (v14 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v8, v6, 0LL, v7);
    if ( v68 >= 0xFFFF800000000000uLL )
    {
      if ( (v3 & 1) != 0 )
      {
        if ( *(_BYTE *)v11 == 1 || *(_BYTE *)v11 == 3 )
          goto LABEL_101;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v3) == 1 )
      {
        goto LABEL_101;
      }
    }
    SharedProtos = MiGetSharedProtos(v13, SessionIdForVa, v12);
    v73 = SharedProtos;
    v9 = 0;
    goto LABEL_104;
  }
  if ( v8 >= 0xFFFF800000000000uLL && (v14 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos(v12);
    if ( SharedProtos )
LABEL_104:
      v69 = *(_QWORD *)(SharedProtos + 72);
  }
  if ( a2 >= v69 - 8LL * (*(_DWORD *)(v12 + 52) & 0x3FFFFFFF) + 8 * (unsigned __int64)*(unsigned int *)(v12 + 44) )
  {
LABEL_101:
    MiUnlockProtoPoolPage(v82, 0x11u);
    return 3221225477LL;
  }
  v17 = v9;
  v18 = *(_WORD *)(v13 + 60) & 0x3FF;
  v19 = v9;
  v62 = v9;
  v20 = *(ULONG_PTR **)(qword_140465E88 + 8 * v18);
  v65 = v20;
  v24 = v72;
  if ( MiControlAreaUsingExtents(v13) )
  {
    if ( v21 )
    {
      v19 = 2;
    }
    else
    {
      v19 = 3;
      v61 = 1;
    }
    v62 = v19;
    v63 = v23;
    if ( v19 > 2 )
      goto LABEL_20;
  }
  else if ( (*(_DWORD *)(v13 + 56) & 0x20) != 0
         && (*(_QWORD *)(*(_QWORD *)(v13 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v19 = 1;
    v62 = 1;
  }
  v67 = v23;
  v17 = MiComputeFaultNode(v22, v13, (__int64 *)&v67);
  v61 = 0;
  if ( v19 - 1 <= 1 )
  {
    v61 = 1;
  }
  else
  {
    v25 = v64;
    if ( v64 )
    {
      Address = v67;
      if ( !v67 )
      {
        Address = MiLocateAddress(v68);
        v67 = Address;
      }
      v61 = MiComputeFaultCluster(v20, v25, Address, 0LL);
    }
    else if ( (v24 & 0x400) != 0 && (*(_DWORD *)(v13 + 56) & 0x20) == 0 && (*(_BYTE *)(v77 + 184) & 7) == 0 )
    {
      v47 = v67;
      v48 = v68;
      if ( !v67 )
      {
        v47 = MiLocateAddress(v68);
        v67 = v47;
      }
      v49 = *(_QWORD *)(v47 + 120);
      if ( v49 >= 0 )
      {
        v50 = *(_QWORD *)(v47 + 120) & 0xFFFLL;
        if ( v50 >= 0x11 && (v48 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v49 >> 12) - 1 + v50) << 12 )
        {
          v51 = a2 + 8;
          if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
            && v51 < -8LL * (*(_DWORD *)(v12 + 52) & 0x3FFFFFFF)
                   + v69
                   + 8 * (unsigned __int64)*(unsigned int *)(v12 + 44)
            && MI_READ_PTE_LOCK_FREE(v51) == v24 )
          {
            v61 = (v52 & 0xFFF) - 1;
          }
        }
      }
    }
  }
LABEL_20:
  v26 = MiAllocateInPageSupport(a2, v63, &v61, (ULONG_PTR *)va);
  if ( !v26 )
  {
    result = 3221225626LL;
    goto LABEL_127;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) == v24 )
  {
    v27 = (v24 >> 10) & 1;
    if ( ((v24 >> 10) & 1) != 0
      || (*(_BYTE *)(v74 + 34) & 0x20) != 0 && (*(_DWORD *)(*(_QWORD *)v74 + 160LL) & 0x20) == 0 )
    {
      if ( v19 == 3 )
      {
        v54 = v82;
        v38 = a2;
        goto LABEL_125;
      }
      if ( v64 && *v64 == 1 )
        MiSetInPagePrefetchPriority(v64, v26);
      if ( v27 )
        v28 = MI_READ_PTE_LOCK_FREE(&v72);
      else
        v28 = v24;
      v63 = (*(unsigned __int16 *)(v12 + 32) >> 1) & 0x1F;
      v71 = MiSanitizePfnProtection(0LL, v63, (v28 >> 5) & 0x1F);
      MiInitializePageColorBase(v77, v17, &v75);
      v30 = v62;
      v31 = -1LL;
      if ( (unsigned int)(v62 - 1) <= 1 )
        goto LABEL_32;
      if ( (*(_DWORD *)(v13 + 56) & 0x40020) == 0x20 && v27 && !dword_140466524 )
      {
        if ( !v29 )
        {
LABEL_32:
          v32 = v65;
          goto LABEL_33;
        }
        v32 = v65;
        if ( *(_BYTE *)v29 != 1 || MiGetAvailablePagesBelowPriority(v65, ((*(_DWORD *)(v29 + 80) >> 3) & 7u) + 1) )
        {
LABEL_33:
          if ( (unsigned int)MiObtainFaultCharges(v32, 1u, 1) )
          {
            v33 = _InterlockedExchangeAdd(v75, 1u);
            v24 = v72;
            v34 = HIDWORD(v76) | v33 & v76;
            if ( v27 && (unsigned int)MiUseSlabAllocator(v32, v12, v72, 0LL) )
              SlabPage = MiGetSlabPage((_DWORD)v32, v63, 0, v35, v35);
            else
              SlabPage = MiGetPage(v32, v34, 0LL);
            v31 = SlabPage;
            if ( SlabPage != -1 )
            {
              v37 = v70;
              if ( v30 == 1 )
              {
                MiCopyImageExtentContents(v26, v12, a2, v70, SlabPage, v82, v73);
                *v84 = v26;
                return 3221435187LL;
              }
              v38 = a2;
              if ( v30 != 2 )
              {
                v39 = v82;
                v60 = v82;
                *(_QWORD *)(v26 + 224) = v68;
                if ( (unsigned int)MiCopyDataPageToImagePage(v26, v12, a2, v37, SlabPage, v60) != 1 )
                {
LABEL_41:
                  if ( (unsigned int)(v62 - 1) <= 1 )
                    goto LABEL_123;
                  LODWORD(v29) = (_DWORD)v64;
LABEL_45:
                  v40 = v69;
                  *(_DWORD *)(v26 + 184) = v61;
                  *(_QWORD *)(v26 + 232) = v38;
                  v41 = SessionIdForVa;
                  v59 = SessionIdForVa;
                  *(_QWORD *)(v26 + 160) = v39;
                  *(_QWORD *)(v26 + 168) = v24;
                  *(_QWORD *)(v26 + 208) = v12;
                  v42 = MiPickClusterForMappedFileFault(
                          (_DWORD)v32,
                          v26,
                          v29,
                          v40,
                          v59,
                          v31,
                          (__int64)&v79,
                          (__int64)&v78);
                  v43 = MiBuildMdlForMappedFileFault(v26, v79, v78, (int)v32, v42, v31, v71, (__int64)v64, a1, &v75);
                  v44 = v43;
                  if ( v43 != v42 )
                    MiReturnFaultCharges(v32, v42 - v43, 1LL);
                  if ( v44 )
                  {
                    MiFinishMdlForMappedFileFault(v26, v70, v44, v74, v41);
                    *v84 = v26;
                    return 3221435187LL;
                  }
LABEL_123:
                  MiUnlockProtoPoolPage(v39, 0x11u);
                  MiFreeInPageSupportBlock((PVOID)v26);
                  return 3221225495LL;
                }
LABEL_52:
                *v84 = v26;
                return 3221435187LL;
              }
              v54 = v82;
              v55 = MiCopyFileOnlyGlobalSubsectionPage(v26, v12, a2, v70, SlabPage, v82, v73);
              v56 = v55;
              if ( v55 >= 0 )
                goto LABEL_52;
              if ( v55 == -1073741739 )
              {
                v56 = 0;
LABEL_122:
                MiUnlockProtoPoolPage(v54, 0x11u);
                MiFreeInPageSupportBlock((PVOID)v26);
                return v56;
              }
              if ( v55 != -1073740748 )
              {
                if ( v55 == -1073532109 )
                {
                  v56 = -1073741802;
                  *(_DWORD *)(a1 + 80) |= 0x100u;
                }
                goto LABEL_122;
              }
LABEL_125:
              MiUnlockProtoPoolPage(v54, 0x11u);
              v57 = *(_DWORD *)(v26 + 192) & 0xFFFBFFFF;
              *(_DWORD *)(v26 + 312) = 0;
              *(_QWORD *)(v26 + 208) = v12;
              *(_DWORD *)(v26 + 192) = v57 | 1;
              v58 = v84;
              *(_DWORD *)(v26 + 184) = 0;
              *(_QWORD *)(v26 + 168) = v24;
              *(_QWORD *)(v26 + 232) = v38;
              *v58 = v26;
              result = 3221435187LL;
              *(_QWORD *)(v26 + 160) = 0LL;
              *(_QWORD *)(v26 + 256) = 0LL;
              *(_DWORD *)(v26 + 80) = 0;
              return result;
            }
            MiReturnFaultCharges(v32, 1LL, 1LL);
          }
          v38 = a2;
          v39 = v82;
          goto LABEL_41;
        }
      }
      else
      {
        v32 = v65;
      }
      v39 = v82;
      v38 = a2;
      goto LABEL_45;
    }
  }
  MiUnlockProtoPoolPage(v82, 0x11u);
  MiFreeInPageSupportBlock((PVOID)v26);
  result = 3221226548LL;
LABEL_127:
  if ( v64 )
    v64[1] = ((_DWORD)result == -1073741670) + 1;
  return result;
}
