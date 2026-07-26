/*
 * XREFs of ndisQueueOidRequest @ 0x1C000C300
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000AC50 (ndisQuerySetMiniportEx.c)
 *     NdisFOidRequest @ 0x1C000B090 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C0016B50 (ndisMOidRequest.c)
 *     ndisLegacyRequest @ 0x1C0045430 (ndisLegacyRequest.c)
 *     ndisProcessRequestAsync @ 0x1C0048150 (ndisProcessRequestAsync.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 *     ndisOidTranslateBetweenOids @ 0x1C000E564 (ndisOidTranslateBetweenOids.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ndisQueueRequestWorkItem @ 0x1C0020FA4 (ndisQueueRequestWorkItem.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqqq @ 0x1C00420DC (WPP_SF_qqqq.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005C6F4 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

__int64 __fastcall ndisQueueOidRequest(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, __int64 a3, __int64 a4)
{
  char *v4; // r12
  __int64 v8; // r15
  char v9; // bl
  __int64 v10; // rdx
  unsigned int v11; // eax
  KSPIN_LOCK *p_Lock; // r13
  KIRQL v13; // r12
  _BYTE *p_Type; // rsi
  int v15; // r14d
  KIRQL v16; // r15
  unsigned __int16 v17; // cx
  KIRQL v18; // al
  struct _NDIS_REFCOUNT_BLOCK *v19; // rcx
  KIRQL v20; // bl
  KIRQL v21; // bl
  unsigned int v22; // esi
  char *v23; // rdx
  char *v24; // rax
  char *v25; // rcx
  char **v26; // r8
  KIRQL v27; // al
  ULONG_PTR v28; // r8
  KIRQL v29; // bl
  int v30; // ecx
  __int64 v31; // r10
  unsigned __int8 v32; // r9
  _BYTE *v33; // rdx
  bool v34; // zf
  char v36; // al
  char v37; // si
  KIRQL v38; // r14
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v41; // al
  __int64 v42; // rdx
  KIRQL v43; // r15
  _LIST_ENTRY *v44; // r14
  _LIST_ENTRY *p_OidRequestList; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rcx
  char v48; // r14
  KIRQL v49; // al
  ULONG_PTR v50; // r8
  KIRQL v51; // r15
  __int64 v52; // r10
  unsigned __int8 v53; // r9
  unsigned __int8 v54; // al
  _BYTE *v55; // rdx
  __int64 v56; // rbx
  int v57; // r15d
  KIRQL v58; // r12
  unsigned __int16 v59; // cx
  KIRQL v60; // al
  ULONG_PTR v61; // r8
  KIRQL v62; // r14
  int v63; // ecx
  __int64 v64; // r9
  unsigned __int8 v65; // dl
  _BYTE *v66; // r10
  char v67; // cl
  ULONG_PTR v68; // r15
  unsigned int v69; // edx
  int v70; // ecx
  char v71; // al
  KIRQL v72; // bl
  ULONG_PTR v73; // r15
  unsigned int v74; // edx
  int v75; // ecx
  ULONG_PTR v76; // r13
  unsigned int v77; // edx
  int v78; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx
  KIRQL v80; // [rsp+30h] [rbp-D0h]
  int v82; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Parameter; // [rsp+48h] [rbp-B8h]
  _BYTE v84[248]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0LL;
  Parameter = 0LL;
  v8 = a1;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqq(61LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, a3, a4);
  v9 = 0;
  memset(v84, 0, sizeof(v84));
  v82 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(254LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v8);
  v11 = *(_DWORD *)(v8 + 32);
  if ( v11 > 0x10207 || v11 < 0x10106 )
    goto LABEL_6;
  if ( v11 <= 0x10107 || v11 == 65812 )
  {
LABEL_121:
    v9 = 1;
    goto LABEL_7;
  }
  if ( v11 != 66055 )
  {
LABEL_6:
    if ( (*(_DWORD *)(v8 + 88) & 0x100000) == 0 )
      goto LABEL_7;
    goto LABEL_121;
  }
  if ( a2->MajorNdisVersion < 6u )
  {
    memset(v84, 0, sizeof(v84));
    *(_DWORD *)&v84[88] |= 8u;
    *(_QWORD *)&v84[40] = &v82;
    *(_QWORD *)&v84[104] = &ndisIntReqNsi;
    *(_DWORD *)v84 = 15466902;
    *(_DWORD *)&v84[32] = 65799;
    *(_QWORD *)&v84[4] = 2LL;
    *(_DWORD *)&v84[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v84, 0LL, 0LL);
    memset(v84, 0, sizeof(v84));
    *(_DWORD *)&v84[88] |= 8u;
    *(_QWORD *)&v84[40] = &v82;
    *(_QWORD *)&v84[104] = &ndisIntReqNsi;
    *(_DWORD *)v84 = 15466902;
    *(_DWORD *)&v84[32] = 65812;
    *(_QWORD *)&v84[4] = 2LL;
    *(_DWORD *)&v84[48] = 4;
    ndisQuerySetMiniport(a2, 0LL, (struct _NDIS_OID_REQUEST *)v84, 0LL, 0LL);
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(255LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v8);
  p_Lock = &a2->Lock;
  if ( v9 )
  {
    p_Type = &a2->Header.Type;
    goto LABEL_20;
  }
  v13 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  v80 = v13;
  a2->LockDbg = 2298129;
  if ( a3 )
    p_Type = *(_BYTE **)(a3 + 424);
  else
    p_Type = a2->Next.RequestHandle;
  if ( a4 )
  {
    v56 = a4 + 320;
    v57 = 1;
    v58 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 320));
    if ( !*(_BYTE *)(a4 + 330) )
    {
      v59 = *(_WORD *)(a4 + 328);
      if ( v59 >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v57 = 2;
      }
      else
      {
        *(_WORD *)(a4 + 328) = v59 + 1;
        NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a4 + 336));
        v57 = 0;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 320), v58);
    if ( v57 )
      goto LABEL_107;
    if ( *(_QWORD *)(*(_QWORD *)(a4 + 16) + 248LL) )
    {
      p_Type = (_BYTE *)a4;
    }
    else if ( *(_QWORD *)(a4 + 424) )
    {
      p_Type = *(_BYTE **)(a4 + 424);
    }
    v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 320));
    v61 = *(_QWORD *)(a4 + 336);
    v62 = v60;
    if ( v61 - 2 <= 1 )
      goto LABEL_105;
    if ( v61 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v61, 0LL);
    if ( *(_BYTE *)(v61 + 2) <= 0x11u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v61, 0x11uLL);
    v63 = *(unsigned __int8 *)(v61 + 1);
    if ( *(_BYTE *)(v61 + 1) )
    {
      if ( v63 != 1 )
        goto LABEL_105;
      v68 = v61 + 1096;
      v69 = *(_DWORD *)(v61 + 1152);
      v70 = (unsigned __int16)v69 >> 1;
      if ( v69 >> 17 < 0x3FFE && v70 == (v69 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v61 + 1096));
        *(_DWORD *)(v68 + 56) &= 0x10001u;
        goto LABEL_105;
      }
      if ( v70 != 0 || (v69 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v61 + 1096), 0);
        goto LABEL_105;
      }
    }
    else
    {
      v64 = *(_QWORD *)(v61 + 8);
      if ( v64 )
      {
        v65 = *(_BYTE *)(v61 + 3);
        if ( v65 )
        {
          while ( 1 )
          {
            v66 = (_BYTE *)(v64 + 2LL * (unsigned __int8)v63);
            if ( *v66 == 17 )
            {
              v71 = v66[1];
              if ( v71 )
                break;
            }
            LOBYTE(v63) = v63 + 1;
            if ( (unsigned __int8)v63 >= v65 )
              goto LABEL_104;
          }
          v66[1] = v71 - 1;
          goto LABEL_105;
        }
      }
LABEL_104:
      if ( _bittestandreset((signed __int32 *)(v61 + 16), 0x11u) )
      {
LABEL_105:
        v34 = (*(_WORD *)(v56 + 8))-- == 1;
        if ( v34 && !*(_BYTE *)(v56 + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(v56 + 16));
          *(_QWORD *)(v56 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v56, v62);
LABEL_107:
        v8 = a1;
        v13 = v80;
        goto LABEL_13;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v61, 0x11uLL);
  }
LABEL_13:
  if ( *p_Type == 5 )
  {
    do
    {
      Parameter = p_Type;
      v15 = 1;
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Type + 40);
      if ( !p_Type[330] )
      {
        v17 = *((_WORD *)p_Type + 164);
        if ( v17 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v15 = 2;
        }
        else
        {
          *((_WORD *)p_Type + 164) = v17 + 1;
          NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)p_Type + 42));
          v15 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)p_Type + 40, v16);
      if ( !v15 )
        break;
      p_Type = (_BYTE *)*((_QWORD *)p_Type + 53);
      Parameter = 0LL;
    }
    while ( *p_Type == 5 );
    v8 = a1;
    p_Lock = &a2->Lock;
  }
  a2->MiniportThread = 0LL;
  a2->LockDbg = 0;
  KeReleaseSpinLock(p_Lock, v13);
  v4 = (char *)Parameter;
LABEL_20:
  if ( *p_Type == 17 )
    ndisOidTranslateBetweenOids(a2, v10, v8);
  if ( KeGetCurrentIrql() )
  {
    v22 = ndisQueueRequestWorkItem(p_Type, v8, (unsigned __int8)*p_Type);
    goto LABEL_46;
  }
  if ( !v4 )
  {
    v37 = 1;
    v38 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    if ( !a2->Ref.Closing )
    {
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)a2->RefCountTracker;
      if ( RefCountTracker )
        NdisReferenceWithTag(RefCountTracker);
      ReferenceCount = a2->Ref.ReferenceCount;
      a2->Ref.ReferenceCount = ReferenceCount + 1;
      if ( ReferenceCount != -1 )
      {
LABEL_57:
        if ( (unsigned __int8)byte_1C00A0263 >= 4u )
          WPP_SF_qD(12LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a2, a2->Ref.ReferenceCount);
        KeReleaseSpinLock(&a2->Ref.SpinLock, v38);
        if ( !v37 )
        {
          v22 = -1073741823;
          goto LABEL_47;
        }
        v41 = KeAcquireSpinLockRaiseToDpc(p_Lock);
        v22 = -1073741823;
        v42 = a1;
        v43 = v41;
        a2->MiniportThread = KeGetCurrentThread();
        a2->LockDbg = 2298228;
        v44 = (_LIST_ENTRY *)(a1 + 72);
        if ( (unsigned __int8)byte_1C00A025A >= 4u )
        {
          WPP_SF_qq(21LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a2, a1);
          v42 = a1;
        }
        v44->Flink = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        if ( (a2->PnPFlags & 0x100) == 0 )
        {
          p_OidRequestList = &a2->OidRequestList;
          Flink = a2->OidRequestList.Flink;
          if ( Flink == &a2->OidRequestList )
          {
LABEL_64:
            Blink = a2->OidRequestList.Blink;
            v22 = 0;
            if ( Blink->Flink != p_OidRequestList )
              goto LABEL_155;
            v44->Flink = p_OidRequestList;
            *(_QWORD *)(a1 + 80) = Blink;
            Blink->Flink = v44;
            a2->OidRequestList.Blink = v44;
          }
          else
          {
            while ( Flink != v44 )
            {
              Flink = Flink->Flink;
              if ( Flink == p_OidRequestList )
                goto LABEL_64;
            }
          }
        }
        if ( (unsigned __int8)byte_1C00A025A >= 4u )
          WPP_SF_qqd(22LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a2, v42, v22);
        a2->MiniportThread = 0LL;
        a2->LockDbg = 0;
        KeReleaseSpinLock(p_Lock, v43);
        if ( !v22 )
        {
          ndisMDoOidRequest(a2);
          v22 = 259;
        }
        if ( (unsigned __int8)byte_1C00A0263 >= 4u )
          WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a2);
        v48 = 0;
        v49 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
        v50 = (ULONG_PTR)a2->RefCountTracker;
        v51 = v49;
        if ( !v50 || v50 - 2 <= 1 )
          goto LABEL_82;
        if ( v50 == 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
        if ( *(_BYTE *)(v50 + 2) <= 0x48u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v50, 0x48uLL);
        if ( *(_BYTE *)(v50 + 1) )
        {
          if ( *(_BYTE *)(v50 + 1) != 1 )
            goto LABEL_82;
          v76 = v50 + 4616;
          v77 = *(_DWORD *)(v50 + 4672);
          v78 = (unsigned __int16)v77 >> 1;
          if ( v77 >> 17 < 0x3FFE && v78 == (v77 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v50 + 4616));
            *(_DWORD *)(v76 + 56) &= 0x10001u;
            goto LABEL_82;
          }
          if ( v78 != 0 || (v77 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v50 + 4616), 0);
            goto LABEL_82;
          }
        }
        else
        {
          v52 = *(_QWORD *)(v50 + 8);
          if ( v52 )
          {
            v53 = *(_BYTE *)(v50 + 3);
            v54 = 0;
            if ( v53 )
            {
              while ( 1 )
              {
                v55 = (_BYTE *)(v52 + 2LL * v54);
                if ( *v55 == 72 )
                {
                  v67 = v55[1];
                  if ( v67 )
                    break;
                }
                if ( ++v54 >= v53 )
                  goto LABEL_81;
              }
              v55[1] = v67 - 1;
              goto LABEL_82;
            }
          }
LABEL_81:
          if ( _bittestandreset((signed __int32 *)(v50 + 24), 8u) )
          {
LABEL_82:
            v34 = a2->Ref.ReferenceCount-- == 1;
            if ( v34 )
              v48 = 1;
            if ( (unsigned __int8)byte_1C00A0263 >= 4u )
              WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a2, a2->Ref.ReferenceCount);
            KeReleaseSpinLock(&a2->Ref.SpinLock, v51);
            if ( v48 )
            {
              RemoveReadyEvent = a2->RemoveReadyEvent;
              if ( RemoveReadyEvent )
                KeSetEvent(RemoveReadyEvent, 0, 0);
            }
            if ( (unsigned __int8)byte_1C00A0263 >= 4u )
              WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a2);
            goto LABEL_45;
          }
        }
        ndisBugCheckEx(0x1EuLL, 0LL, v50, 0x48uLL);
      }
      a2->Ref.ReferenceCount = -1;
    }
    v37 = 0;
    goto LABEL_57;
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 40);
  v19 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v4 + 42);
  ++*((_WORD *)v4 + 164);
  v20 = v18;
  NdisReferenceWithTag(v19);
  KeReleaseSpinLock((PKSPIN_LOCK)v4 + 40, v20);
  v21 = KeAcquireSpinLockRaiseToDpc(p_Lock);
  a2->MiniportThread = KeGetCurrentThread();
  a2->LockDbg = 2298206;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v4 + 18);
  v22 = -1073741823;
  v23 = (char *)(a1 + 72);
  *((_QWORD *)v4 + 19) = KeGetCurrentThread();
  *((_DWORD *)v4 + 40) = 2298207;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)v4 + 4) + 124LL) & 0x100) != 0 )
    goto LABEL_28;
  v24 = v4 + 168;
  v25 = (char *)*((_QWORD *)v4 + 21);
  if ( v25 == v4 + 168 )
  {
LABEL_26:
    v26 = (char **)*((_QWORD *)v4 + 22);
    v22 = 0;
    if ( *v26 == v24 )
    {
      *(_QWORD *)v23 = v24;
      *(_QWORD *)(a1 + 80) = v26;
      *v26 = v23;
      *((_QWORD *)v4 + 22) = v23;
      goto LABEL_28;
    }
LABEL_155:
    __fastfail(3u);
  }
  while ( v25 != v23 )
  {
    v25 = *(char **)v25;
    if ( v25 == v24 )
      goto LABEL_26;
  }
LABEL_28:
  *((_QWORD *)v4 + 19) = 0LL;
  *((_DWORD *)v4 + 40) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4 + 18);
  a2->MiniportThread = 0LL;
  a2->LockDbg = 0;
  KeReleaseSpinLock(p_Lock, v21);
  if ( !v22 )
  {
    if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, v4, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 18);
      *((_QWORD *)v4 + 19) = KeGetCurrentThread();
      *((_DWORD *)v4 + 40) = 2297817;
      v4[240] = 1;
      ndisQueueStackExpansionFallbackWorkItem(v4);
      *((_QWORD *)v4 + 19) = 0LL;
      *((_DWORD *)v4 + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v4 + 18, v72);
    }
    v22 = 259;
  }
  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 40);
  v28 = *((_QWORD *)v4 + 42);
  v29 = v27;
  if ( v28 - 2 <= 1 )
    goto LABEL_41;
  if ( v28 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v28, 0LL);
  if ( *(_BYTE *)(v28 + 2) <= 0xDu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v28, 0xDuLL);
  v30 = *(unsigned __int8 *)(v28 + 1);
  if ( *(_BYTE *)(v28 + 1) )
  {
    if ( v30 != 1 )
      goto LABEL_41;
    v73 = v28 + 840;
    v74 = *(_DWORD *)(v28 + 896);
    v75 = (unsigned __int16)v74 >> 1;
    if ( v74 >> 17 < 0x3FFE && v75 == (v74 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 840));
      *(_DWORD *)(v73 + 56) &= 0x10001u;
      goto LABEL_41;
    }
    if ( v75 != 0 || (v74 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 840), 0);
      goto LABEL_41;
    }
LABEL_148:
    ndisBugCheckEx(0x1EuLL, 0LL, v28, 0xDuLL);
  }
  v31 = *(_QWORD *)(v28 + 8);
  if ( v31 )
  {
    v32 = *(_BYTE *)(v28 + 3);
    if ( v32 )
    {
      while ( 1 )
      {
        v33 = (_BYTE *)(v31 + 2LL * (unsigned __int8)v30);
        if ( *v33 == 13 )
        {
          v36 = v33[1];
          if ( v36 )
            break;
        }
        LOBYTE(v30) = v30 + 1;
        if ( (unsigned __int8)v30 >= v32 )
          goto LABEL_40;
      }
      v33[1] = v36 - 1;
      goto LABEL_41;
    }
  }
LABEL_40:
  if ( !_bittestandreset((signed __int32 *)(v28 + 16), 0xDu) )
    goto LABEL_148;
LABEL_41:
  v34 = (*((_WORD *)v4 + 164))-- == 1;
  if ( v34 && !v4[331] )
  {
    NdisFreeRefCount(*((_QWORD *)v4 + 42));
    *((_QWORD *)v4 + 42) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v4 + 40, v29);
LABEL_45:
  v8 = a1;
LABEL_46:
  if ( v22 != 259 && v4 )
    ndisDereferenceRef((PKSPIN_LOCK)v4 + 40);
LABEL_47:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(62LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v8, a2, v22);
  return v22;
}
