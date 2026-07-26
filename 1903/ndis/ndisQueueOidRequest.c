/*
 * XREFs of ndisQueueOidRequest @ 0x1C0004470
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     NdisFOidRequest @ 0x1C0007DB0 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C0015410 (ndisMOidRequest.c)
 *     ndisLegacyRequest @ 0x1C006ADD0 (ndisLegacyRequest.c)
 *     ndisProcessRequestAsync @ 0x1C006F0A0 (ndisProcessRequestAsync.c)
 * Callees:
 *     ndisOidTranslateBetweenOids @ 0x1C0002D80 (ndisOidTranslateBetweenOids.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C003F040 (WPP_RECORDER_SF_Dq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00903E8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C77F8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7978 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7B10 (NdisFreeRefCount.c)
 */

__int64 __fastcall ndisQueueOidRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  _BYTE *v7; // r15
  int v9; // r8d
  unsigned int v10; // ecx
  _UNKNOWN **v11; // rdx
  KSPIN_LOCK *v12; // r13
  KIRQL v13; // al
  _BYTE *v14; // rsi
  int v15; // r14d
  KIRQL v16; // r15
  unsigned __int16 v17; // cx
  KSPIN_LOCK *v18; // r14
  KIRQL v19; // al
  struct _NDIS_REFCOUNT_BLOCK *v20; // rcx
  KIRQL v21; // bl
  KIRQL v22; // al
  KSPIN_LOCK *v23; // r15
  KIRQL v24; // bl
  _QWORD *v25; // rdx
  _QWORD *v26; // r12
  unsigned int v27; // esi
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  KIRQL v31; // al
  ULONG_PTR v32; // r8
  KIRQL v33; // bl
  __int64 v34; // r10
  unsigned __int8 v35; // r9
  unsigned __int8 v36; // al
  _BYTE *v37; // rdx
  bool v38; // zf
  char v40; // cl
  char v41; // si
  int v42; // edx
  KIRQL v43; // r14
  struct _NDIS_REFCOUNT_BLOCK *v44; // rcx
  int v45; // ecx
  KIRQL v46; // al
  _QWORD *v47; // rdx
  KIRQL v48; // r8
  _QWORD *v49; // rax
  _QWORD *v50; // rcx
  _QWORD *v51; // rcx
  int v52; // edx
  char v53; // r14
  KIRQL v54; // al
  _BYTE *v55; // rdx
  ULONG_PTR v56; // r8
  KIRQL v57; // r15
  int v58; // ecx
  __int64 v59; // r10
  unsigned __int8 v60; // r9
  int v61; // edx
  __int64 v62; // rbx
  int v63; // r15d
  KIRQL v64; // r12
  unsigned __int16 v65; // cx
  KIRQL v66; // al
  ULONG_PTR v67; // r8
  KIRQL v68; // r14
  int v69; // ecx
  __int64 v70; // r9
  unsigned __int8 v71; // dl
  _BYTE *v72; // r10
  char v73; // al
  ULONG_PTR v74; // r15
  unsigned int v75; // edx
  int v76; // ecx
  char v77; // al
  KIRQL v78; // al
  KIRQL v79; // bl
  ULONG_PTR v80; // rdi
  unsigned int v81; // edx
  int v82; // ecx
  ULONG_PTR v83; // r13
  unsigned int v84; // edx
  int v85; // ecx
  struct _KEVENT *v86; // rcx
  KIRQL v87; // [rsp+40h] [rbp-C0h]
  _QWORD *Parameter; // [rsp+48h] [rbp-B8h]
  int v89; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v90; // [rsp+58h] [rbp-A8h]
  _QWORD v91[31]; // [rsp+60h] [rbp-A0h] BYREF

  v90 = a1;
  v6 = a1;
  v7 = 0LL;
  Parameter = 0LL;
  memset(v91, 0, sizeof(v91));
  v10 = *(_DWORD *)(v6 + 32);
  v11 = &WPP_RECORDER_INITIALIZED;
  v89 = 0;
  if ( v10 > 0x10207 || v10 < 0x10106 )
    goto LABEL_2;
  if ( v10 <= 0x10107 || v10 == 65812 )
    goto LABEL_109;
  if ( v10 != 66055 )
  {
LABEL_2:
    if ( (*(_DWORD *)(v6 + 88) & 0x100000) == 0 )
      goto LABEL_3;
LABEL_109:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)&WPP_RECORDER_INITIALIZED, v9, 233);
    v14 = (_BYTE *)a2;
    v12 = (KSPIN_LOCK *)(a2 + 96);
    goto LABEL_14;
  }
  if ( *(_BYTE *)(a2 + 32) < 6u )
  {
    memset(v91, 0, sizeof(v91));
    LODWORD(v91[11]) |= 8u;
    LODWORD(v91[0]) = 15466902;
    v91[13] = &ndisIntReqNsi;
    LODWORD(v91[4]) = 65799;
    *(_QWORD *)((char *)v91 + 4) = 2LL;
    v91[5] = &v89;
    LODWORD(v91[6]) = 4;
    ndisQuerySetMiniport(a2, 0, (unsigned int)v91, 0, 0);
    memset(v91, 0, sizeof(v91));
    LODWORD(v91[11]) |= 8u;
    v91[5] = &v89;
    v91[13] = &ndisIntReqNsi;
    LODWORD(v91[0]) = 15466902;
    LODWORD(v91[4]) = 65812;
    *(_QWORD *)((char *)v91 + 4) = 2LL;
    LODWORD(v91[6]) = 4;
    ndisQuerySetMiniport(a2, 0, (unsigned int)v91, 0, 0);
  }
LABEL_3:
  v12 = (KSPIN_LOCK *)(a2 + 96);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  v87 = v13;
  if ( a3 )
    v14 = *(_BYTE **)(a3 + 416);
  else
    v14 = *(_BYTE **)(a2 + 2600);
  if ( !a4 )
    goto LABEL_6;
  v62 = a4 + 312;
  v63 = 1;
  v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 312));
  if ( !*(_BYTE *)(a4 + 322) )
  {
    v65 = *(_WORD *)(a4 + 320);
    if ( v65 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v63 = 2;
    }
    else
    {
      *(_WORD *)(a4 + 320) = v65 + 1;
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a4 + 328));
      v63 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 312), v64);
  if ( !v63 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a4 + 16) + 248LL) )
    {
      v14 = (_BYTE *)a4;
    }
    else if ( *(_QWORD *)(a4 + 416) )
    {
      v14 = *(_BYTE **)(a4 + 416);
    }
    v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 312));
    v67 = *(_QWORD *)(a4 + 328);
    v68 = v66;
    if ( v67 - 2 <= 1 )
      goto LABEL_93;
    if ( v67 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v67, 0LL);
    if ( *(_BYTE *)(v67 + 2) <= 0x11u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v67, 0x11uLL);
    v69 = *(unsigned __int8 *)(v67 + 1);
    if ( *(_BYTE *)(v67 + 1) )
    {
      if ( v69 != 1 )
        goto LABEL_93;
      v74 = v67 + 1096;
      v75 = *(_DWORD *)(v67 + 1152);
      v76 = (unsigned __int16)v75 >> 1;
      if ( v75 >> 17 < 0x3FFE && v76 == (v75 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v67 + 1096));
        *(_DWORD *)(v74 + 56) &= 0x10001u;
        goto LABEL_93;
      }
      if ( v76 != 0 || (v75 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v67 + 1096), 0);
        goto LABEL_93;
      }
    }
    else
    {
      v70 = *(_QWORD *)(v67 + 8);
      if ( v70 )
      {
        v71 = *(_BYTE *)(v67 + 3);
        if ( v71 )
        {
          while ( 1 )
          {
            v72 = (_BYTE *)(v70 + 2LL * (unsigned __int8)v69);
            if ( *v72 == 17 )
            {
              v77 = v72[1];
              if ( v77 )
                break;
            }
            LOBYTE(v69) = v69 + 1;
            if ( (unsigned __int8)v69 >= v71 )
              goto LABEL_92;
          }
          v72[1] = v77 - 1;
          goto LABEL_93;
        }
      }
LABEL_92:
      if ( _bittestandreset((signed __int32 *)(v67 + 16), 0x11u) )
      {
LABEL_93:
        v38 = (*(_WORD *)(v62 + 8))-- == 1;
        if ( v38 && !*(_BYTE *)(v62 + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(v62 + 16));
          *(_QWORD *)(v62 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v62, v68);
        goto LABEL_95;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v67, 0x11uLL);
  }
LABEL_95:
  v7 = 0LL;
  v13 = v87;
  v6 = v90;
LABEL_6:
  if ( *v14 == 5 )
  {
    while ( 1 )
    {
      Parameter = v14;
      v15 = 1;
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14 + 39);
      if ( !v14[322] )
      {
        v17 = *((_WORD *)v14 + 160);
        if ( v17 >= 0xFFEBu )
        {
          ndisRefCountReferenceCountOverflow = 1;
          v15 = 2;
        }
        else
        {
          *((_WORD *)v14 + 160) = v17 + 1;
          NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v14 + 41));
          v15 = 0;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v14 + 39, v16);
      if ( !v15 )
        break;
      v14 = (_BYTE *)*((_QWORD *)v14 + 52);
      v7 = 0LL;
      Parameter = 0LL;
      if ( *v14 != 5 )
        goto LABEL_12;
    }
    v7 = v14;
LABEL_12:
    v6 = v90;
    v13 = v87;
  }
  *(_QWORD *)(a2 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v13);
LABEL_14:
  if ( *v14 == 17 )
    ndisOidTranslateBetweenOids(a2, (__int64)v11, v6);
  if ( !KeGetCurrentIrql() )
  {
    if ( v7 )
    {
      v18 = (KSPIN_LOCK *)(v7 + 312);
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 39);
      v20 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v7 + 41);
      ++*((_WORD *)v7 + 160);
      v21 = v19;
      NdisReferenceWithTag(v20);
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 39, v21);
      v22 = KeAcquireSpinLockRaiseToDpc(v12);
      v23 = (KSPIN_LOCK *)(v7 + 144);
      *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
      v24 = v22;
      KeAcquireSpinLockAtDpcLevel(v23);
      v25 = (_QWORD *)(v6 + 72);
      v26 = Parameter;
      v27 = -1073741823;
      Parameter[19] = KeGetCurrentThread();
      *v25 = 0LL;
      v25[1] = 0LL;
      if ( (*(_DWORD *)(Parameter[4] + 124LL) & 0x100) != 0 )
        goto LABEL_22;
      v28 = Parameter + 20;
      v29 = (_QWORD *)Parameter[20];
      if ( v29 != Parameter + 20 )
      {
        while ( v29 != v25 )
        {
          v29 = (_QWORD *)*v29;
          if ( v29 == v28 )
            goto LABEL_20;
        }
LABEL_22:
        Parameter[19] = 0LL;
        KeReleaseSpinLockFromDpcLevel(v23);
        *(_QWORD *)(a2 + 520) = 0LL;
        KeReleaseSpinLock(v12, v24);
        if ( !v27 )
        {
          if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
          {
            v78 = KeAcquireSpinLockRaiseToDpc(v23);
            Parameter[19] = KeGetCurrentThread();
            v79 = v78;
            *((_BYTE *)Parameter + 232) = 1;
            ndisQueueStackExpansionFallbackWorkItem(Parameter);
            Parameter[19] = 0LL;
            KeReleaseSpinLock(v23, v79);
          }
          v27 = 259;
        }
        v31 = KeAcquireSpinLockRaiseToDpc(v18);
        v32 = v18[2];
        v33 = v31;
        if ( v32 - 2 <= 1 )
          goto LABEL_35;
        if ( v32 <= 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v32, 0LL);
        if ( *(_BYTE *)(v32 + 2) <= 0xDu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v32, 0xDuLL);
        if ( *(_BYTE *)(v32 + 1) )
        {
          if ( *(_BYTE *)(v32 + 1) != 1 )
            goto LABEL_35;
          v80 = v32 + 840;
          v81 = *(_DWORD *)(v32 + 896);
          v82 = (unsigned __int16)v81 >> 1;
          if ( v81 >> 17 < 0x3FFE && v82 == (v81 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v32 + 840));
            *(_DWORD *)(v80 + 56) &= 0x10001u;
            goto LABEL_35;
          }
          if ( v82 != 0 || (v81 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v32 + 840), 0);
            goto LABEL_35;
          }
        }
        else
        {
          v34 = *(_QWORD *)(v32 + 8);
          if ( v34 )
          {
            v35 = *(_BYTE *)(v32 + 3);
            v36 = 0;
            if ( v35 )
            {
              while ( 1 )
              {
                v37 = (_BYTE *)(v34 + 2LL * v36);
                if ( *v37 == 13 )
                {
                  v40 = v37[1];
                  if ( v40 )
                    break;
                }
                if ( ++v36 >= v35 )
                  goto LABEL_34;
              }
              v37[1] = v40 - 1;
              goto LABEL_35;
            }
          }
LABEL_34:
          if ( _bittestandreset((signed __int32 *)(v32 + 16), 0xDu) )
          {
LABEL_35:
            v38 = (*((_WORD *)v18 + 4))-- == 1;
            if ( v38 && !*((_BYTE *)v18 + 11) )
            {
              NdisFreeRefCount(v18[2]);
              v18[2] = 1LL;
            }
            KeReleaseSpinLock(v18, v33);
            goto LABEL_39;
          }
        }
        ndisBugCheckEx(0x1EuLL, 0LL, v32, 0xDuLL);
      }
LABEL_20:
      v30 = (_QWORD *)Parameter[21];
      v27 = 0;
      if ( (_QWORD *)*v30 == v28 )
      {
        *v25 = v28;
        v25[1] = v30;
        *v30 = v25;
        Parameter[21] = v25;
        goto LABEL_22;
      }
LABEL_144:
      __fastfail(3u);
    }
    v41 = 1;
    v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4432));
    if ( !*(_BYTE *)(a2 + 4444) )
    {
      v44 = *(struct _NDIS_REFCOUNT_BLOCK **)(a2 + 4888);
      if ( v44 )
        NdisReferenceWithTag(v44);
      v45 = *(_DWORD *)(a2 + 4440);
      *(_DWORD *)(a2 + 4440) = v45 + 1;
      if ( v45 != -1 )
      {
LABEL_48:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v42) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v42,
            20,
            12,
            (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
            a2,
            *(_DWORD *)(a2 + 4440));
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4432), v43);
        if ( !v41 )
          return (unsigned int)-1073741823;
        v46 = KeAcquireSpinLockRaiseToDpc(v12);
        v47 = (_QWORD *)(v6 + 72);
        *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
        *(_QWORD *)(v6 + 72) = 0LL;
        v48 = v46;
        *(_QWORD *)(v6 + 80) = 0LL;
        v27 = -1073741823;
        if ( (*(_DWORD *)(a2 + 124) & 0x100) == 0 )
        {
          v49 = (_QWORD *)(a2 + 2192);
          v50 = *(_QWORD **)(a2 + 2192);
          if ( v50 == (_QWORD *)(a2 + 2192) )
          {
LABEL_53:
            v51 = *(_QWORD **)(a2 + 2200);
            v27 = 0;
            if ( (_QWORD *)*v51 != v49 )
              goto LABEL_144;
            *v47 = v49;
            *(_QWORD *)(v6 + 80) = v51;
            *v51 = v47;
            *(_QWORD *)(a2 + 2200) = v47;
          }
          else
          {
            while ( v50 != v47 )
            {
              v50 = (_QWORD *)*v50;
              if ( v50 == v49 )
                goto LABEL_53;
            }
          }
        }
        *(_QWORD *)(a2 + 520) = 0LL;
        KeReleaseSpinLock(v12, v48);
        if ( !v27 )
        {
          ndisMDoOidRequest(a2);
          v27 = 259;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v52) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v52,
            20,
            25,
            (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
            a2);
        }
        v53 = 0;
        v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 4432));
        v56 = *(_QWORD *)(a2 + 4888);
        v57 = v54;
        if ( !v56 || v56 - 2 <= 1 )
          goto LABEL_69;
        if ( v56 == 1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
        if ( *(_BYTE *)(v56 + 2) <= 0x48u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v56, 0x48uLL);
        v58 = *(unsigned __int8 *)(v56 + 1);
        if ( *(_BYTE *)(v56 + 1) )
        {
          if ( v58 != 1 )
            goto LABEL_69;
          v83 = v56 + 4616;
          v84 = *(_DWORD *)(v56 + 4672);
          v85 = (unsigned __int16)v84 >> 1;
          if ( v84 >> 17 < 0x3FFE && v85 == (v84 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v56 + 4616));
            *(_DWORD *)(v83 + 56) &= 0x10001u;
            goto LABEL_69;
          }
          if ( v85 != 0 || (v84 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v56 + 4616), 0);
            goto LABEL_69;
          }
        }
        else
        {
          v59 = *(_QWORD *)(v56 + 8);
          if ( v59 )
          {
            v60 = *(_BYTE *)(v56 + 3);
            if ( v60 )
            {
              while ( 1 )
              {
                v55 = (_BYTE *)(v59 + 2LL * (unsigned __int8)v58);
                if ( *v55 == 72 )
                {
                  v73 = v55[1];
                  if ( v73 )
                    break;
                }
                LOBYTE(v58) = v58 + 1;
                if ( (unsigned __int8)v58 >= v60 )
                  goto LABEL_68;
              }
              v55[1] = v73 - 1;
              goto LABEL_69;
            }
          }
LABEL_68:
          if ( _bittestandreset((signed __int32 *)(v56 + 24), 8u) )
          {
LABEL_69:
            v38 = (*(_DWORD *)(a2 + 4440))-- == 1;
            if ( v38 )
              v53 = 1;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v55) = 4;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v55,
                20,
                14,
                (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
                a2,
                *(_DWORD *)(a2 + 4440));
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 4432), v57);
            if ( v53 )
            {
              v86 = *(struct _KEVENT **)(a2 + 1608);
              if ( v86 )
                KeSetEvent(v86, 0, 0);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v61) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v61,
                20,
                26,
                (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
                a2);
            }
            goto LABEL_76;
          }
        }
        ndisBugCheckEx(0x1EuLL, 0LL, v56, 0x48uLL);
      }
      *(_DWORD *)(a2 + 4440) = -1;
    }
    v41 = 0;
    goto LABEL_48;
  }
  v27 = ndisQueueRequestWorkItem((char)v14, v6, *v14);
LABEL_76:
  v26 = Parameter;
LABEL_39:
  if ( v27 != 259 && v26 )
    ndisDereferenceRef(v26 + 39);
  return v27;
}
