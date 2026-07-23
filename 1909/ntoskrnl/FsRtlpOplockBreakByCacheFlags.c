/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x140102780
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140283100 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockBreakH @ 0x1406B2730 (FsRtlOplockBreakH.c)
 *     FsRtlCheckUpperOplock @ 0x1406F1A90 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140010BD0 (FsRtlpComputeShareableOplockState.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     FsRtlOplockKeysEqual @ 0x140102760 (FsRtlOplockKeysEqual.c)
 *     FsRtlpOplockKeysEqual @ 0x1401034F0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1401038C8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpClearOwner @ 0x140103E9C (FsRtlpClearOwner.c)
 *     IoReleaseCancelSpinLock @ 0x140103EE0 (IoReleaseCancelSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140103F80 (IoAcquireCancelSpinLock.c)
 *     FsRtlpModifyThreadPriorities @ 0x140104020 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1401040E4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14010422C (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140283A1C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283B1C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140283BBC (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        IRP *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9,
        __int64 a10)
{
  unsigned int v13; // edi
  char v14; // r12
  int v15; // r14d
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 *v20; // rcx
  void **v21; // rcx
  void **v22; // rax
  UCHAR *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  int v26; // eax
  KIRQL *v27; // rdi
  void *v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rbx
  __int64 v31; // rcx
  PVOID *v32; // rax
  UCHAR *v33; // rcx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  PIRP v36; // rdi
  PIRP v37; // rax
  struct _IRP *v38; // rcx
  int v39; // eax
  PIRP v40; // rdi
  struct _IRP *v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rcx
  struct _IRP *MasterIrp; // rcx
  PIRP v45; // rdi
  struct _IRP *v46; // rdx
  int v47; // eax
  PIRP v48; // rdi
  void *v49; // rcx
  char v50; // dl
  int v51; // eax
  __int64 v52; // rax
  __int64 *v53; // rcx
  char v54; // al
  __int64 v55; // rax
  __int64 *v56; // rbx
  _QWORD *v57; // rcx
  _QWORD *i; // rax
  __int64 v59; // rdx
  int v60; // eax
  KIRQL *v61; // rdi
  int v62; // edx
  int v63; // eax
  __int16 v64; // cx
  char v65; // al
  int v67; // [rsp+30h] [rbp-98h]
  char v68; // [rsp+40h] [rbp-88h]
  char v69; // [rsp+41h] [rbp-87h]
  bool v70; // [rsp+42h] [rbp-86h]
  char v71; // [rsp+43h] [rbp-85h]
  __int64 *v72; // [rsp+48h] [rbp-80h]
  void **v73; // [rsp+48h] [rbp-80h]
  PVOID *v74; // [rsp+48h] [rbp-80h]
  __int64 *v75; // [rsp+48h] [rbp-80h]
  _QWORD *v76; // [rsp+48h] [rbp-80h]
  char v77; // [rsp+50h] [rbp-78h]
  void **v78; // [rsp+58h] [rbp-70h]
  _QWORD *v79; // [rsp+58h] [rbp-70h]
  PVOID *v80; // [rsp+58h] [rbp-70h]
  volatile __int64 *v81; // [rsp+60h] [rbp-68h]
  _QWORD *v82; // [rsp+60h] [rbp-68h]
  volatile __int64 *v83; // [rsp+60h] [rbp-68h]
  UCHAR *v84; // [rsp+70h] [rbp-58h]
  UCHAR *v85; // [rsp+70h] [rbp-58h]
  _BYTE v86[24]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v87; // [rsp+90h] [rbp-38h]
  IRP *v88; // [rsp+E0h] [rbp+18h]

  v88 = a3;
  v13 = 0;
  memset(v86, 0, sizeof(v86));
  v14 = 0;
  v68 = 0;
  v71 = 0;
  v70 = 0;
  v69 = 1;
  v15 = a4 & 8;
  if ( a5 == 0x4000 || a5 == 20480 || a5 == 0x2000 || a5 == 28672 )
  {
    if ( !a1 )
      return v13;
    v16 = *(_DWORD *)(a1 + 144);
    if ( v16 == 1 || (v16 & a5) == 0 )
      return 0;
    if ( (a4 & 8) == 0 && (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), a4) )
      return 0;
    v17 = *(_DWORD *)(a1 + 144);
    if ( (v17 & 0x40) != 0 && (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    v18 = v17 & 0x1F0FFDF;
    if ( (v17 & 0x1F0FFDF) == 0x3000 )
    {
LABEL_10:
      if ( a5 != 0x2000 )
      {
        if ( (a5 & 0x5000) == 0x5000 )
        {
          v19 = a1 + 72;
          v20 = *(__int64 **)(a1 + 72);
          while ( 1 )
          {
            v72 = v20;
            if ( v20 == (__int64 *)v19 )
              break;
            if ( v15 || (v65 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v20[3], a4), v20 = v72, !v65) )
            {
              if ( (a4 & 0x10010000) != 0 )
                return (unsigned int)-1073739511;
              *((_DWORD *)v20 + 12) &= 0xFF0FFFFF;
              *((_DWORD *)v20 + 12) |= 0x800000u;
              if ( (a5 & 0x2000) != 0 )
                v14 = 1;
              v68 = v14;
            }
            v20 = (__int64 *)*v20;
            v19 = a1 + 72;
          }
          v21 = (void **)(a1 + 56);
          v22 = *(void ***)(a1 + 56);
          while ( 1 )
          {
            v73 = v22;
            if ( v22 == v21 )
              break;
            v23 = (UCHAR *)v22[2];
            v81 = (volatile __int64 *)v23;
            v84 = v23;
            if ( !v15 )
            {
              if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v22[3], a4) )
                goto LABEL_18;
              v22 = v73;
              v23 = (UCHAR *)v81;
            }
            if ( (a4 & 0x10010000) != 0 )
              return (unsigned int)-1073739511;
            if ( v22[7] )
            {
              if ( (a5 & 0x2000) != 0 )
              {
                v14 = 1;
                v68 = 1;
              }
              v22 = (void **)*v22;
              v21 = (void **)(a1 + 56);
            }
            else
            {
              v78 = (void **)v22[1];
              v27 = v23 + 69;
              IoAcquireCancelSpinLock(v23 + 69);
              _InterlockedExchange64(v81 + 13, 0LL);
              IoReleaseCancelSpinLock(*v27);
              v73 = v78;
              v28 = *v78;
              if ( v84[68] )
              {
                FsRtlpRemoveAndBreakRHIrp(v28, 0, 0, 0, 0);
                v71 = 1;
                v14 = v68;
              }
              else
              {
                FsRtlpRemoveAndBreakRHIrp(v28, 0, 1, 0, 0);
                v69 = 0;
                if ( (a5 & 0x2000) != 0 )
                {
                  v14 = 1;
                  v68 = 1;
                }
                else
                {
                  v14 = v68;
                }
                v70 = v15 != 0;
              }
              v13 = 0;
LABEL_18:
              v22 = (void **)*v73;
              v21 = (void **)(a1 + 56);
            }
          }
        }
LABEL_19:
        if ( v71 )
          FsRtlpReleaseIrpsWaitingForRH(a1);
        if ( !v14 )
        {
          v24 = a1 + 72;
          v25 = *(_QWORD **)(a1 + 72);
          v82 = v25;
          if ( v25 != (_QWORD *)(a1 + 72) && (a5 & 0x2000) != 0 )
          {
            if ( v15 )
            {
LABEL_177:
              v14 = 1;
            }
            else
            {
              while ( v25 != (_QWORD *)v24 )
              {
                if ( !FsRtlOplockKeysEqual((PFILE_OBJECT)v25[3], *(PFILE_OBJECT *)(a2 + 48)) )
                  goto LABEL_177;
                v25 = (_QWORD *)*v82;
                v82 = (_QWORD *)*v82;
                v24 = a1 + 72;
              }
            }
          }
        }
        goto LABEL_23;
      }
      v31 = a1 + 56;
      v32 = *(PVOID **)(a1 + 56);
      while ( 1 )
      {
        v74 = v32;
        if ( v32 == (PVOID *)v31 )
          goto LABEL_19;
        v33 = (UCHAR *)v32[2];
        v83 = (volatile __int64 *)v33;
        v85 = v33;
        if ( !v15 )
        {
          if ( FsRtlOplockKeysEqual(*(PFILE_OBJECT *)(a2 + 48), (PFILE_OBJECT)v32[3]) )
            goto LABEL_166;
          v32 = v74;
          v33 = (UCHAR *)v83;
        }
        if ( (a4 & 0x10010000) != 0 )
          return (unsigned int)-1073739511;
        if ( v32[7] )
        {
          v14 = 1;
          v68 = 1;
          goto LABEL_167;
        }
        v80 = (PVOID *)v32[1];
        v61 = v33 + 69;
        IoAcquireCancelSpinLock(v33 + 69);
        _InterlockedExchange64(v83 + 13, 0LL);
        IoReleaseCancelSpinLock(*v61);
        if ( v85[68] )
        {
          v74 = v80;
          FsRtlpRemoveAndBreakRHIrp(*v80, 0, 0, 0, 0);
          v71 = 1;
          v14 = v68;
        }
        else
        {
          v62 = 1;
          v63 = 0;
          v64 = 0;
          if ( !*(_BYTE *)a2 )
          {
            v62 = 3;
            v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
            v64 = *(_WORD *)(a2 + 26);
          }
          v74 = v80;
          FsRtlpRemoveAndBreakRHIrp(*v80, 4096, v62, v63, v64);
          v69 = 0;
          v14 = 1;
          v68 = 1;
          v70 = v15 != 0;
        }
        v13 = 0;
LABEL_166:
        v32 = v74;
LABEL_167:
        v32 = (PVOID *)*v32;
        v31 = a1 + 56;
      }
    }
    if ( v18 > 0x105040 )
    {
      if ( v18 <= 0x803000 )
      {
        switch ( v18 )
        {
          case 0x803000u:
            if ( (a5 & 0x3000) != 0 )
            {
              if ( (a4 & 0x10010000) != 0 )
                return (unsigned int)-1073739511;
              if ( (a5 & 0x2000) != 0 )
              {
                v29 = a1 + 72;
                v30 = *(__int64 **)(a1 + 72);
                while ( v30 != (__int64 *)v29 )
                {
                  if ( v15 || !FsRtlOplockKeysEqual(*(PFILE_OBJECT *)(a2 + 48), (PFILE_OBJECT)v30[3]) )
                    goto LABEL_122;
                  v30 = (__int64 *)*v30;
                  v29 = a1 + 72;
                }
              }
            }
LABEL_24:
            if ( v14 )
            {
              if ( (a4 & 1) != 0 )
              {
                v26 = *(_DWORD *)(a1 + 144);
                if ( (v26 & 0x10000) != 0 )
                  *(_DWORD *)(a1 + 144) = v26 | 0x20000;
                return 264;
              }
              else
              {
                if ( v69 )
                {
                  LOBYTE(a3) = 1;
                  FsRtlpModifyThreadPriorities(a1, 0LL, a3);
                  FsRtlpOplockSendModernAppTermination(a1, 0LL);
                }
                *a9 = 0;
                LOBYTE(v67) = v70;
                return (unsigned int)FsRtlpWaitOnIrp(a1, v88, a6, a7, a8, v86, v67, a10);
              }
            }
            return v13;
          case 0x107040u:
LABEL_145:
            if ( (a5 & 0x1000) == 0 )
              goto LABEL_152;
            goto LABEL_150;
          case 0x307040u:
            if ( a5 == 0x4000 )
            {
              v60 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
              goto LABEL_151;
            }
            if ( (a5 & 0x5000) != 0x5000 )
            {
LABEL_152:
              v14 = 1;
              goto LABEL_24;
            }
LABEL_150:
            v60 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
            goto LABEL_151;
          case 0x507040u:
            if ( a5 == 0x2000 )
            {
              v60 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
LABEL_151:
              *(_DWORD *)(a1 + 144) = v60;
              goto LABEL_152;
            }
            goto LABEL_145;
        }
LABEL_155:
        if ( (v17 & 0x1000000) != 0 )
          v14 = 1;
        goto LABEL_24;
      }
      if ( v18 != 8409152 )
      {
        if ( v18 != 8417344 )
          goto LABEL_155;
LABEL_122:
        v14 = 1;
        goto LABEL_24;
      }
LABEL_138:
      if ( (a5 & 0x5000) != 0 )
        v14 = 1;
      goto LABEL_24;
    }
    if ( v18 == 1069120 )
    {
      if ( (a5 & 0x1000) != 0 )
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
      goto LABEL_138;
    }
    if ( v18 > 0x7040 )
    {
      if ( v18 != 45056 )
      {
        if ( v18 != 1060864 )
          goto LABEL_155;
        v50 = 0;
        v77 = 0;
        v51 = a5 & 0x1000;
        if ( (a5 & 0x1000) != 0 )
        {
          v52 = a1 + 72;
          v53 = *(__int64 **)(a1 + 72);
          while ( 1 )
          {
            v75 = v53;
            if ( v53 == (__int64 *)v52 )
              break;
            if ( v15 || (v54 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v53[3], a4), v53 = v75, !v54) )
            {
              v77 = 1;
              if ( (a4 & 0x10010000) != 0 )
                return (unsigned int)-1073739511;
              *((_DWORD *)v53 + 12) &= 0xFF0FFFFF;
              *((_DWORD *)v53 + 12) |= 0x800000u;
            }
            v53 = (__int64 *)*v53;
            v52 = a1 + 72;
          }
          FsRtlpComputeShareableOplockState(a1);
          v50 = v77;
          v51 = a5 & 0x1000;
        }
        if ( (a5 & 0x2000) == 0 )
          goto LABEL_24;
        if ( !v50 )
        {
          if ( !v51 )
          {
            v55 = a1 + 72;
            v56 = *(__int64 **)(a1 + 72);
            while ( v56 != (__int64 *)v55 )
            {
              if ( v15 || !FsRtlOplockKeysEqual(*(PFILE_OBJECT *)(a2 + 48), (PFILE_OBJECT)v56[3]) )
                goto LABEL_122;
              v56 = (__int64 *)*v56;
              v55 = a1 + 72;
            }
          }
          goto LABEL_24;
        }
        goto LABEL_122;
      }
    }
    else
    {
      if ( v18 == 28736 )
      {
        if ( a5 == 0x4000 )
        {
          v42 = *(_QWORD *)a1;
          IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
          _InterlockedExchange64((volatile __int64 *)(v42 + 104), 0LL);
          IoReleaseCancelSpinLock(*(_BYTE *)(v42 + 69));
          if ( !*(_BYTE *)(v42 + 68) )
          {
            v43 = *(_QWORD *)(v42 + 24);
            *(_QWORD *)v43 = 0LL;
            *(_QWORD *)(v43 + 8) = 0LL;
            *(_QWORD *)(v43 + 16) = 0LL;
            *(_DWORD *)v43 = 1572865;
            *(_DWORD *)(v43 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            *(_DWORD *)(v43 + 8) = 3;
            *(_DWORD *)(v43 + 12) |= 1u;
            *(_QWORD *)(v42 + 56) = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v39 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
            goto LABEL_88;
          }
          FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
          FsRtlpClearOwner(a1, 0LL);
          *(_BYTE *)(a1 + 32) = 0;
          v37 = *(PIRP *)a1;
          if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
            goto LABEL_98;
        }
        else
        {
          if ( a5 != 0x2000 )
          {
            v48 = *(PIRP *)a1;
            IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
            _InterlockedExchange64((volatile __int64 *)&v48->CancelRoutine, 0LL);
            IoReleaseCancelSpinLock(v48->CancelIrql);
            if ( v48->Cancel )
            {
              FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
              FsRtlpClearOwner(a1, 0LL);
              *(_BYTE *)(a1 + 32) = 0;
              v37 = *(PIRP *)a1;
              if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) != a1 )
                goto LABEL_99;
              goto LABEL_98;
            }
            MasterIrp = v48->AssociatedIrp.MasterIrp;
            *(_QWORD *)&MasterIrp->Type = 0LL;
            MasterIrp->MdlAddress = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            HIDWORD(MasterIrp->MdlAddress) |= 1u;
            v48->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v39 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
            goto LABEL_88;
          }
          v45 = *(PIRP *)a1;
          IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
          _InterlockedExchange64((volatile __int64 *)&v45->CancelRoutine, 0LL);
          IoReleaseCancelSpinLock(v45->CancelIrql);
          if ( !v45->Cancel )
          {
            v46 = v45->AssociatedIrp.MasterIrp;
            *(_QWORD *)&v46->Type = 0LL;
            v46->MdlAddress = 0LL;
            *(_QWORD *)&v46->Flags = 0LL;
            *(_DWORD *)&v46->Type = 1572865;
            *(_DWORD *)(&v46->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            LODWORD(v46->MdlAddress) = 5;
            v47 = HIDWORD(v46->MdlAddress) | 1;
            HIDWORD(v46->MdlAddress) = v47;
            if ( !*(_BYTE *)a2 )
            {
              HIDWORD(v46->MdlAddress) = v47 | 2;
              v46->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
              *((_WORD *)&v46->Flags + 2) = *(_WORD *)(a2 + 26);
            }
            v45->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v39 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
            goto LABEL_88;
          }
          FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
          FsRtlpClearOwner(a1, 0LL);
          *(_BYTE *)(a1 + 32) = 0;
          v37 = *(PIRP *)a1;
          if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
            goto LABEL_98;
        }
LABEL_99:
        v37->IoStatus.Status = -1073741536;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        ObfDereferenceObject(*(PVOID *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
        while ( 1 )
        {
          v49 = *(void **)(a1 + 88);
          if ( v49 == (void *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v49);
        }
        v70 = 0;
        v69 = 1;
        v13 = 0;
        goto LABEL_24;
      }
      v34 = v18 - 4096;
      if ( v34 )
      {
        v35 = v34 - 16;
        if ( v35 )
        {
          if ( v35 != 16432 )
            goto LABEL_155;
          if ( (a5 & 0x5000) == 0x5000 )
          {
            v36 = *(PIRP *)a1;
            IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
            _InterlockedExchange64((volatile __int64 *)&v36->CancelRoutine, 0LL);
            IoReleaseCancelSpinLock(v36->CancelIrql);
            if ( v36->Cancel )
            {
              FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
              FsRtlpClearOwner(a1, 0LL);
              *(_BYTE *)(a1 + 32) = 0;
              v37 = *(PIRP *)a1;
              if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) != a1 )
                goto LABEL_99;
LABEL_98:
              v37->IoStatus.Information = 0LL;
              v37 = *(PIRP *)a1;
              goto LABEL_99;
            }
            v38 = v36->AssociatedIrp.MasterIrp;
            *(_QWORD *)&v38->Type = 0LL;
            v38->MdlAddress = 0LL;
            *(_QWORD *)&v38->Flags = 0LL;
            *(_DWORD *)&v38->Type = 1572865;
            *(_DWORD *)(&v38->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            HIDWORD(v38->MdlAddress) |= 1u;
            v36->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v39 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_88:
            *(_DWORD *)(a1 + 144) = v39;
            v14 = 1;
            v13 = 0;
            goto LABEL_24;
          }
          if ( (a5 & 0x4000) == 0 )
            goto LABEL_24;
          v40 = *(PIRP *)a1;
          IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
          _InterlockedExchange64((volatile __int64 *)&v40->CancelRoutine, 0LL);
          IoReleaseCancelSpinLock(v40->CancelIrql);
          if ( !v40->Cancel )
          {
            v41 = v40->AssociatedIrp.MasterIrp;
            *(_QWORD *)&v41->Type = 0LL;
            v41->MdlAddress = 0LL;
            *(_QWORD *)&v41->Flags = 0LL;
            *(_DWORD *)&v41->Type = 1572865;
            *(_DWORD *)(&v41->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            LODWORD(v41->MdlAddress) = 1;
            HIDWORD(v41->MdlAddress) |= 1u;
            v40->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            v39 = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
            goto LABEL_88;
          }
          FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
          FsRtlpClearOwner(a1, 0LL);
          *(_BYTE *)(a1 + 32) = 0;
          v37 = *(PIRP *)a1;
          if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
            goto LABEL_98;
          goto LABEL_99;
        }
      }
    }
    if ( (a5 & 0x1000) == 0 )
    {
LABEL_134:
      if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) != 0xB000 )
      {
LABEL_23:
        FsRtlpComputeShareableOplockState(a1);
        goto LABEL_24;
      }
      goto LABEL_10;
    }
    v57 = (_QWORD *)(a1 + 40);
    for ( i = *(_QWORD **)(a1 + 40); ; i = (_QWORD *)*i )
    {
      v76 = i;
      if ( i == v57 )
        goto LABEL_134;
      v59 = i[2];
      v87 = v59;
      if ( *(_DWORD *)(v59 + 24) == 590400 )
      {
        if ( !v15 )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v59 + 48), a4) )
          {
            i = v76;
            v57 = (_QWORD *)(a1 + 40);
            continue;
          }
          i = v76;
        }
        if ( (a4 & 0x10010000) != 0 )
          return (unsigned int)-1073739511;
        v79 = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp(*v79, 0LL, 0LL);
        i = v79;
        v57 = (_QWORD *)(a1 + 40);
      }
    }
  }
  if ( a3 )
  {
    a3->IoStatus.Status = -1073741597;
    IofCompleteRequest(a3, 1);
  }
  return 3221225699LL;
}
