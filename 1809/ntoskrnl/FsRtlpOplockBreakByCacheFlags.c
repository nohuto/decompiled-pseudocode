/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x140018CB0
 * Callers:
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14026F9E0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x1405864A0 (FsRtlCheckUpperOplock.c)
 *     FsRtlOplockBreakH @ 0x1406C5F30 (FsRtlOplockBreakH.c)
 * Callees:
 *     IoReleaseCancelSpinLock @ 0x140017DC0 (IoReleaseCancelSpinLock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140018750 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockKeysEqual @ 0x1400199A0 (FsRtlpOplockKeysEqual.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x140107E20 (FsRtlpModifyThreadPriorities.c)
 *     IoAcquireCancelSpinLock @ 0x140111DE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwner @ 0x14012180C (FsRtlpClearOwner.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140133360 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140134DD0 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B37D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1402701BC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402702C0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140270360 (FsRtlpWaitOnIrp.c)
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
  unsigned int v10; // r10d
  __int64 v11; // r9
  unsigned int v13; // r14d
  char v14; // bl
  char v15; // si
  int v16; // r13d
  int v19; // eax
  int v20; // eax
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  bool v25; // zf
  __int64 v26; // rsi
  UCHAR *v27; // rbx
  __int64 v28; // rcx
  PIRP v29; // rsi
  UCHAR *v30; // rbx
  struct _IRP *MasterIrp; // rcx
  char v32; // r15
  int v33; // eax
  __int64 *v34; // rsi
  char v35; // al
  __int64 *v36; // rsi
  __int64 *v37; // rsi
  __int64 v38; // rdx
  __int64 **v39; // rsi
  __int64 *v40; // rax
  __int64 *v41; // rsi
  int v42; // edx
  int v43; // eax
  __int16 v44; // cx
  __int64 *v45; // rsi
  char v46; // al
  __int64 *v47; // rsi
  char v48; // al
  PVOID *v49; // rsi
  char v50; // al
  __int64 *v51; // rsi
  PIRP v52; // rsi
  UCHAR *v53; // rbx
  struct _IRP *v54; // rcx
  PIRP v55; // rsi
  UCHAR *v56; // rbx
  struct _IRP *v57; // rdx
  int v58; // eax
  PIRP v59; // rsi
  UCHAR *v60; // rbx
  PIRP v61; // rax
  void *v62; // rcx
  struct _IRP *v63; // rcx
  int v64; // eax
  __int64 *v65; // rsi
  int v66; // [rsp+30h] [rbp-88h]
  __int64 v67; // [rsp+40h] [rbp-78h]
  __int64 *v68; // [rsp+48h] [rbp-70h]
  char v69; // [rsp+50h] [rbp-68h]
  int v70; // [rsp+58h] [rbp-60h]
  char v71[88]; // [rsp+60h] [rbp-58h] BYREF
  IRP *v73; // [rsp+D0h] [rbp+18h]
  int v75; // [rsp+E0h] [rbp+28h]

  v73 = a3;
  v10 = a4;
  v11 = a2;
  v13 = 0;
  v67 = 0x10000LL;
  v14 = 0;
  v15 = 0;
  v16 = v10 & 8;
  if ( a5 == 28672 || a5 == 20480 || a5 == 0x4000 || a5 == 0x2000 )
  {
    if ( !a1 )
      return v13;
    v19 = *(_DWORD *)(a1 + 144);
    if ( v19 == 1 || (v19 & a5) == 0 )
      return v13;
    if ( (v10 & 8) == 0 )
    {
      if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), v10) )
        return v13;
      v11 = a2;
      v10 = a4;
    }
    v20 = *(_DWORD *)(a1 + 144);
    v21 = v10 & 0x10010000;
    v75 = v10 & 0x10010000;
    if ( (v20 & 0x40) != 0 && v21 )
      return (unsigned int)-1073739511;
    v22 = v20 & 0x1F0FFDF;
    if ( (v20 & 0x1F0FFDFu) <= 0x105040 )
    {
      if ( v22 != 1069120 )
      {
        if ( v22 <= 0x5040 )
        {
          if ( v22 != 20544 )
          {
            v23 = v22 - 4096;
            if ( v23 )
            {
              v24 = v23 - 16;
              if ( v24 )
              {
                if ( v24 == 8176 )
                  goto LABEL_64;
                v25 = (v20 & 0x1000000) == 0;
LABEL_139:
                if ( v25 )
                  goto LABEL_141;
                goto LABEL_140;
              }
            }
            goto LABEL_51;
          }
          if ( (a5 & 0x5000) == 0x5000 )
          {
            v26 = *(_QWORD *)a1;
            v27 = (UCHAR *)(*(_QWORD *)a1 + 69LL);
            IoAcquireCancelSpinLock(v27);
            _InterlockedExchange64((volatile __int64 *)(v26 + 104), 0LL);
            IoReleaseCancelSpinLock(*v27);
            if ( !*(_BYTE *)(v26 + 68) )
            {
              v28 = *(_QWORD *)(v26 + 24);
              *(_QWORD *)v28 = 0LL;
              *(_QWORD *)(v28 + 8) = 0LL;
              *(_QWORD *)(v28 + 16) = 0LL;
              *(_DWORD *)v28 = 1572865;
              *(_DWORD *)(v28 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              *(_DWORD *)(v28 + 8) = 0;
              *(_DWORD *)(v28 + 12) |= 1u;
              *(_QWORD *)(v26 + 56) = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
              v14 = 1;
              LOBYTE(v67) = 1;
              v13 = 0;
              goto LABEL_141;
            }
          }
          else
          {
            if ( (a5 & 0x4000) == 0 )
              goto LABEL_141;
            v29 = *(PIRP *)a1;
            v30 = (UCHAR *)(*(_QWORD *)a1 + 69LL);
            IoAcquireCancelSpinLock(v30);
            _InterlockedExchange64((volatile __int64 *)&v29->CancelRoutine, 0LL);
            IoReleaseCancelSpinLock(*v30);
            if ( !v29->Cancel )
            {
              MasterIrp = v29->AssociatedIrp.MasterIrp;
              *(_QWORD *)&MasterIrp->Type = 0LL;
              MasterIrp->MdlAddress = 0LL;
              *(_QWORD *)&MasterIrp->Flags = 0LL;
              *(_DWORD *)&MasterIrp->Type = 1572865;
              *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(MasterIrp->MdlAddress) = 1;
              HIDWORD(MasterIrp->MdlAddress) |= 1u;
              v29->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
              v14 = 1;
              LOBYTE(v67) = 1;
              v13 = 0;
              goto LABEL_141;
            }
          }
          goto LABEL_130;
        }
        switch ( v22 )
        {
          case 0x7040u:
            if ( a5 == 0x4000 )
            {
              v52 = *(PIRP *)a1;
              v53 = (UCHAR *)(*(_QWORD *)a1 + 69LL);
              IoAcquireCancelSpinLock(v53);
              _InterlockedExchange64((volatile __int64 *)&v52->CancelRoutine, 0LL);
              IoReleaseCancelSpinLock(*v53);
              if ( !v52->Cancel )
              {
                v54 = v52->AssociatedIrp.MasterIrp;
                *(_QWORD *)&v54->Type = 0LL;
                v54->MdlAddress = 0LL;
                *(_QWORD *)&v54->Flags = 0LL;
                *(_DWORD *)&v54->Type = 1572865;
                *(_DWORD *)(&v54->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v54->MdlAddress) = 3;
                HIDWORD(v54->MdlAddress) |= 1u;
                v52->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
                v14 = 1;
                LOBYTE(v67) = 1;
LABEL_122:
                v13 = 0;
                goto LABEL_141;
              }
            }
            else if ( a5 == 0x2000 )
            {
              v55 = *(PIRP *)a1;
              v56 = (UCHAR *)(*(_QWORD *)a1 + 69LL);
              IoAcquireCancelSpinLock(v56);
              _InterlockedExchange64((volatile __int64 *)&v55->CancelRoutine, 0LL);
              IoReleaseCancelSpinLock(*v56);
              if ( !v55->Cancel )
              {
                v57 = v55->AssociatedIrp.MasterIrp;
                *(_QWORD *)&v57->Type = 0LL;
                v57->MdlAddress = 0LL;
                *(_QWORD *)&v57->Flags = 0LL;
                *(_DWORD *)&v57->Type = 1572865;
                *(_DWORD *)(&v57->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v57->MdlAddress) = 5;
                v58 = HIDWORD(v57->MdlAddress) | 1;
                HIDWORD(v57->MdlAddress) = v58;
                if ( !*(_BYTE *)a2 )
                {
                  HIDWORD(v57->MdlAddress) = v58 | 2;
                  v57->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                  *((_WORD *)&v57->Flags + 2) = *(_WORD *)(a2 + 26);
                }
                v55->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
                v14 = 1;
                LOBYTE(v67) = 1;
                v13 = 0;
                goto LABEL_141;
              }
            }
            else
            {
              if ( (a5 & 0x5000) != 0x5000 )
                goto LABEL_141;
              v59 = *(PIRP *)a1;
              v60 = (UCHAR *)(*(_QWORD *)a1 + 69LL);
              IoAcquireCancelSpinLock(v60);
              _InterlockedExchange64((volatile __int64 *)&v59->CancelRoutine, 0LL);
              IoReleaseCancelSpinLock(*v60);
              if ( !v59->Cancel )
              {
                v63 = v59->AssociatedIrp.MasterIrp;
                *(_QWORD *)&v63->Type = 0LL;
                v63->MdlAddress = 0LL;
                *(_QWORD *)&v63->Flags = 0LL;
                *(_DWORD *)&v63->Type = 1572865;
                *(_DWORD *)(&v63->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v63->MdlAddress) = 0;
                HIDWORD(v63->MdlAddress) |= 1u;
                v59->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                IofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
                v14 = 1;
                LOBYTE(v67) = 1;
                v13 = 0;
                goto LABEL_141;
              }
            }
LABEL_130:
            FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
            FsRtlpClearOwner(a1, 0LL);
            *(_BYTE *)(a1 + 32) = 0;
            v61 = *(PIRP *)a1;
            if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
            {
              v61->IoStatus.Information = 0LL;
              v61 = *(PIRP *)a1;
            }
            v61->IoStatus.Status = -1073741536;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
            *(_QWORD *)(a1 + 8) = 0LL;
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
            while ( 1 )
            {
              v62 = *(void **)(a1 + 88);
              v14 = 0;
              WORD1(v67) = 1;
              if ( v62 == (void *)(a1 + 88) )
                break;
              FsRtlpRemoveAndCompleteWaitingIrp(v62);
            }
            goto LABEL_122;
          case 0xB000u:
LABEL_51:
            if ( (a5 & 0x1000) == 0 )
              goto LABEL_63;
            v37 = *(__int64 **)(a1 + 40);
            v68 = v37;
            while ( v37 != (__int64 *)(a1 + 40) )
            {
              v38 = v37[2];
              if ( *(_DWORD *)(v38 + 24) == 590400 )
              {
                if ( v16 )
                  goto LABEL_59;
                if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), *(_QWORD *)(v38 + 48), v10) )
                {
                  v10 = a4;
                  v37 = (__int64 *)*v37;
                  v68 = v37;
                  v11 = a2;
                }
                else
                {
                  v10 = a4;
LABEL_59:
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  v39 = (__int64 **)v37[1];
                  FsRtlpRemoveAndCompleteReadOnlyIrp(*v39, 0LL, 0LL);
                  v10 = a4;
                  v37 = *v39;
                  v68 = v37;
                  v11 = a2;
                }
              }
              else
              {
                v37 = (__int64 *)*v37;
                v68 = v37;
                v11 = a2;
              }
            }
            v21 = v75;
            v15 = 0;
LABEL_63:
            if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0xB000 )
            {
LABEL_64:
              if ( a5 == 0x2000 )
              {
                v40 = (__int64 *)(a1 + 56);
                v41 = *(__int64 **)(a1 + 56);
                v68 = v41;
                while ( 1 )
                {
                  if ( v41 == v40 )
                    goto LABEL_106;
                  if ( !v16 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v41[3], 0LL) )
                      goto LABEL_78;
                    v21 = v75;
                  }
                  if ( v21 )
                    return (unsigned int)-1073739511;
                  if ( v41[7] )
                  {
                    v14 = 1;
                    LOBYTE(v67) = 1;
                    v41 = (__int64 *)*v41;
                    v68 = v41;
                    v40 = (__int64 *)(a1 + 56);
                    v11 = a2;
                  }
                  else
                  {
                    v41 = (__int64 *)v41[1];
                    v42 = 1;
                    v70 = 1;
                    v43 = 0;
                    v44 = 0;
                    if ( !*(_BYTE *)a2 )
                    {
                      v42 = 3;
                      v70 = 3;
                      v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                      v44 = *(_WORD *)(a2 + 26);
                    }
                    if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp((PVOID)*v41, v42, v43, v44) )
                    {
                      BYTE2(v67) = 0;
                      v14 = 1;
                      LOBYTE(v67) = 1;
                      BYTE3(v67) = v16 != 0;
                    }
                    else
                    {
                      BYTE1(v67) = 1;
                    }
LABEL_78:
                    v21 = v75;
                    v41 = (__int64 *)*v41;
                    v68 = v41;
                    v40 = (__int64 *)(a1 + 56);
                    v11 = a2;
                  }
                }
              }
              if ( (a5 & 0x5000) == 0x5000 )
              {
                v45 = *(__int64 **)(a1 + 72);
                while ( v45 != (__int64 *)(a1 + 72) )
                {
                  if ( v16 || (v46 = FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v45[3], v10), v10 = a4, !v46) )
                  {
                    if ( (v10 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    *((_DWORD *)v45 + 12) &= 0xFF0FFFFF;
                    *((_DWORD *)v45 + 12) |= 0x800000u;
                    if ( (a5 & 0x2000) != 0 )
                      v14 = 1;
                    LOBYTE(v67) = v14;
                  }
                  v45 = (__int64 *)*v45;
                  v11 = a2;
                }
                v47 = *(__int64 **)(a1 + 56);
                v68 = v47;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    if ( v47 == (__int64 *)(a1 + 56) )
                    {
LABEL_106:
                      v15 = BYTE1(v67);
                      goto LABEL_107;
                    }
                    if ( !v16 )
                      break;
LABEL_95:
                    if ( (v10 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    if ( v47[7] )
                    {
                      v48 = v14;
                      if ( (a5 & 0x2000) != 0 )
                        v48 = 1;
                      v14 = v48;
                      LOBYTE(v67) = v48;
                      v47 = (__int64 *)*v47;
                      v68 = v47;
                      v11 = a2;
                    }
                    else
                    {
                      v49 = (PVOID *)v47[1];
                      if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp(*v49, 1, 0, 0) )
                      {
                        BYTE2(v67) = 0;
                        v50 = v14;
                        if ( (a5 & 0x2000) != 0 )
                          v50 = 1;
                        v14 = v50;
                        LOBYTE(v67) = v50;
                        BYTE3(v67) = v16 != 0;
                      }
                      else
                      {
                        BYTE1(v67) = 1;
                      }
                      v10 = a4;
                      v47 = (__int64 *)*v49;
                      v68 = v47;
                      v11 = a2;
                    }
                  }
                  if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v47[3], v10) )
                  {
                    v10 = a4;
                    goto LABEL_95;
                  }
                  v10 = a4;
                  v47 = (__int64 *)*v47;
                  v68 = v47;
                  v11 = a2;
                }
              }
LABEL_107:
              if ( v15 )
                FsRtlpReleaseIrpsWaitingForRH(a1);
              if ( !v14 )
              {
                v51 = *(__int64 **)(a1 + 72);
                if ( v51 != (__int64 *)(a1 + 72) && (a5 & 0x2000) != 0 )
                {
                  if ( v16 )
                  {
LABEL_117:
                    v14 = 1;
                    LOBYTE(v67) = 1;
                  }
                  else
                  {
                    v68 = *(__int64 **)(a1 + 72);
                    while ( v51 != (__int64 *)(a1 + 72) )
                    {
                      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(v51[3], *(_QWORD *)(a2 + 48), 0LL) )
                        goto LABEL_117;
                      v51 = (__int64 *)*v51;
                      v68 = v51;
                    }
                  }
                }
              }
            }
            FsRtlpComputeShareableOplockState(a1);
            goto LABEL_141;
          case 0x103000u:
            v32 = 0;
            v69 = 0;
            v33 = a5 & 0x1000;
            if ( (a5 & 0x1000) != 0 )
            {
              v34 = *(__int64 **)(a1 + 72);
              v68 = v34;
              while ( v34 != (__int64 *)(a1 + 72) )
              {
                if ( v16 || (v35 = FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v34[3], v10), v10 = a4, !v35) )
                {
                  v32 = 1;
                  v69 = 1;
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  *((_DWORD *)v34 + 12) &= 0xFF0FFFFF;
                  *((_DWORD *)v34 + 12) |= 0x800000u;
                }
                v34 = (__int64 *)*v34;
                v68 = v34;
                v11 = a2;
              }
              FsRtlpComputeShareableOplockState(a1);
              v33 = a5 & 0x1000;
            }
            if ( (a5 & 0x2000) == 0 )
              goto LABEL_141;
            if ( !v32 )
            {
              if ( !v33 )
              {
                v36 = *(__int64 **)(a1 + 72);
                v68 = v36;
                while ( v36 != (__int64 *)(a1 + 72) )
                {
                  if ( v16 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v36[3], 0LL) )
                    goto LABEL_140;
                  v36 = (__int64 *)*v36;
                  v68 = v36;
                }
              }
              goto LABEL_141;
            }
            goto LABEL_140;
        }
LABEL_169:
        v25 = (v20 & 0x1000000) == 0;
        goto LABEL_139;
      }
      if ( (a5 & 0x1000) != 0 )
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_138:
      v25 = (a5 & 0x5000) == 0;
      goto LABEL_139;
    }
    if ( v22 > 0x803000 )
    {
      if ( v22 == 8409152 )
        goto LABEL_138;
      if ( v22 != 8417344 )
        goto LABEL_169;
    }
    else
    {
      switch ( v22 )
      {
        case 0x803000u:
          if ( (a5 & 0x3000) != 0 )
          {
            if ( v21 )
              return (unsigned int)-1073739511;
            if ( (a5 & 0x2000) != 0 )
            {
              v65 = *(__int64 **)(a1 + 72);
              v68 = v65;
              while ( v65 != (__int64 *)(a1 + 72) )
              {
                if ( v16 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v65[3], 0LL) )
                  goto LABEL_140;
                v65 = (__int64 *)*v65;
                v68 = v65;
                v11 = a2;
              }
            }
          }
LABEL_141:
          if ( v14 )
          {
            if ( (a4 & 1) != 0 )
            {
              v64 = *(_DWORD *)(a1 + 144);
              if ( (v64 & 0x10000) != 0 )
                *(_DWORD *)(a1 + 144) = v64 | 0x20000;
              return 264;
            }
            else
            {
              if ( BYTE2(v67) )
              {
                LOBYTE(a3) = 1;
                FsRtlpModifyThreadPriorities(a1, 0LL, a3);
                FsRtlpOplockSendModernAppTermination(a1, 0LL);
              }
              *a9 = 0;
              LOBYTE(v66) = BYTE3(v67);
              return (unsigned int)FsRtlpWaitOnIrp(a1, v73, a6, a7, a8, v71, v66, a10, v67, v68, v69, v70);
            }
          }
          return v13;
        case 0x107040u:
          goto LABEL_153;
        case 0x307040u:
          if ( a5 == 0x4000 )
          {
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
          }
          else if ( (a5 & 0x5000) == 0x5000 )
          {
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
          }
          goto LABEL_140;
      }
      if ( v22 != 5271616 )
        goto LABEL_169;
      if ( a5 != 0x2000 )
      {
LABEL_153:
        if ( (a5 & 0x1000) != 0 )
          *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
      }
      else
      {
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
      }
    }
LABEL_140:
    v14 = 1;
    LOBYTE(v67) = 1;
    goto LABEL_141;
  }
  if ( a3 )
  {
    a3->IoStatus.Status = -1073741597;
    IofCompleteRequest(a3, 1);
  }
  return 3221225699LL;
}
