/*
 * XREFs of ndisOidRequestComplete @ 0x1C000D320
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C000AE50 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C000D050 (ndisFDoOidRequestInternal.c)
 *     ndisPreProcessOid @ 0x1C000D970 (ndisPreProcessOid.c)
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C00442C8 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C0044464 (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C005B200 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisMAbortRequests @ 0x1C0062084 (ndisMAbortRequests.c)
 *     ndisPMAddRemoveAsync @ 0x1C00E7430 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     WPP_SF_qDqL @ 0x1C0041FBC (WPP_SF_qDqL.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     WPP_SF_qLq @ 0x1C0043DA4 (WPP_SF_qLq.c)
 *     WPP_SF_qqqqDL @ 0x1C00440F8 (WPP_SF_qqqqDL.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C005B8E4 (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C005EA14 (ndisInvokeDirectOidRequestComplete.c)
 *     ndisMResetCompleteStage2 @ 0x1C0063DD4 (ndisMResetCompleteStage2.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 *     ndisMFinishClose @ 0x1C01168D0 (ndisMFinishClose.c)
 */

void __fastcall ndisOidRequestComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _BYTE *v4; // r15
  _BYTE *v5; // rdi
  int v6; // eax
  bool v7; // r13
  _DWORD *v8; // r12
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned __int8 v18; // al
  void (__fastcall *v19)(__int64); // rax
  ULONG_PTR v20; // rbp
  int v21; // ebp
  bool v22; // cl
  _DWORD *v23; // r8
  int v24; // ebp
  int v25; // edi
  ULONG_PTR v26; // rdi
  __int64 v27; // rdi
  KIRQL v28; // al
  __int64 v29; // rdi
  KIRQL v30; // al
  ULONG_PTR v31; // r8
  KIRQL v32; // r14
  int v33; // ecx
  __int64 v34; // r9
  unsigned __int8 v35; // dl
  _BYTE *v36; // r10
  bool v37; // zf
  _BYTE *v38; // rsi
  unsigned int v39; // esi
  __int64 v40; // rdi
  __int64 v41; // rbp
  unsigned int v42; // r14d
  char v43; // al
  KIRQL v44; // r14
  int v45; // ecx
  int v46; // ecx
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rdi
  KIRQL v53; // al
  KIRQL v54; // r12
  ULONG_PTR v55; // r8
  int v56; // ecx
  __int64 v57; // rdx
  unsigned __int8 v58; // r10
  _BYTE *v59; // r9
  char v60; // al
  char v61; // si
  KIRQL v62; // al
  __int64 v63; // rax
  __int64 *v64; // rsi
  __int64 v65; // rsi
  KIRQL v66; // r15
  int v67; // edx
  ULONG_PTR v68; // rsi
  unsigned int v69; // edx
  int v70; // ecx
  ULONG_PTR v71; // rsi
  unsigned int v72; // edx
  int v73; // ecx
  ULONG_PTR v74; // r8
  char v75; // [rsp+A0h] [rbp+8h]
  _BYTE *v76; // [rsp+A8h] [rbp+10h]
  _BYTE *v77; // [rsp+B0h] [rbp+18h]
  _DWORD *v78; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v76 = 0LL;
  v4 = 0LL;
  v77 = 0LL;
  v75 = 0;
  v5 = *(_BYTE **)(v2 + 104);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqqDL(
      a1,
      a2,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 24),
      v2,
      *(_DWORD *)(v2 + 32),
      *(_DWORD *)(a1 + 40));
  *(_DWORD *)(v2 + 88) |= 1u;
  v6 = *(_DWORD *)(v2 + 88);
  v7 = (v6 & 0x200000) != 0;
  v8 = *(_DWORD **)(a1 + 32);
  v78 = v8;
  if ( (v6 & 0x220) != 0 )
  {
    *(_QWORD *)(a1 + 24) = v5;
    v76 = v5;
    if ( (*(_DWORD *)(v2 + 88) & 0x200) == 0 )
      goto LABEL_6;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( *v5 == 5 )
    {
      v4 = v5;
      v77 = v5;
      *(_QWORD *)(a1 + 8) = v5;
      goto LABEL_6;
    }
  }
  v75 = 1;
LABEL_6:
  v9 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v18 = *(_BYTE *)(v9 + 32);
    if ( (v18 > 6u || v18 == 6 && *(_BYTE *)(v9 + 33) >= 0x28u) && !*(_DWORD *)(a1 + 40) )
    {
      v47 = v8[1];
      if ( (v47 & 0xFFFFFFFD) != 0 )
      {
        if ( v47 != 12 )
          goto LABEL_22;
        v48 = v8[13];
        v49 = v8[15];
      }
      else
      {
        v48 = v8[12];
        v49 = v8[13];
      }
      if ( v49 > v48 )
        ndisBugCheckEx(0x1DuLL, v9, (ULONG_PTR)v8, 0LL);
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = *(_BYTE *)(v11 + 100);
      if ( v12 > 6u || v12 == 6 && *(_BYTE *)(v11 + 101) >= 0x28u )
      {
        v13 = *(_QWORD *)(v10 + 32);
        v14 = *(_BYTE *)(v13 + 32);
        if ( (v14 > 6u || v14 == 6 && *(_BYTE *)(v13 + 33) >= 0x28u) && !*(_DWORD *)(a1 + 40) )
        {
          v15 = v8[1];
          if ( (v15 & 0xFFFFFFFD) != 0 )
          {
            if ( v15 != 12 )
              goto LABEL_22;
            v16 = v8[13];
            v17 = v8[15];
          }
          else
          {
            v16 = v8[12];
            v17 = v8[13];
          }
          if ( v17 > v16 )
            ndisBugCheckEx(0x1DuLL, v10, (ULONG_PTR)v8, 0LL);
        }
      }
    }
  }
LABEL_22:
  if ( (*(_DWORD *)(v2 + 88) & 0x40004) == 4 && !v7 && (*(_DWORD *)(v2 + 88) & 0x1000000) == 0 )
  {
    v19 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_1C0085350 + 3 * *(unsigned int *)(v2 + 92));
    if ( v19 )
      v19(a1);
  }
  v20 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL) == -50265855 && *(_DWORD *)(a1 + 40) )
  {
    v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 3904));
    *(_DWORD *)(v20 + 3912) = *(_DWORD *)(v20 + 3916);
    *(_DWORD *)(v20 + 3916) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 3904), v62);
  }
  v21 = *(_DWORD *)(v2 + 88);
  v22 = (v21 & 2) != 0;
  v23 = *(_DWORD **)(a1 + 32);
  v24 = v21 & 0x2000000;
  v25 = v23[1];
  if ( (*(_DWORD *)(v2 + 88) & 8) != 0 )
  {
    *(_DWORD *)(v2 + 80) = *(_DWORD *)(a1 + 40);
    KeSetEvent((PRKEVENT)(v2 + 112), 0, 0);
  }
  else
  {
    if ( !v22 )
      goto LABEL_30;
    if ( (*(_DWORD *)(v2 + 88) & 0x100) != 0 )
    {
      v63 = *(_QWORD *)(a1 + 16);
      v64 = (__int64 *)(v63 + 32);
      if ( !v63 )
        v64 = (__int64 *)a1;
      v65 = *v64;
      v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v65 + 96));
      *(_QWORD *)(v65 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v65 + 1864) = 2297325;
      if ( v25 == 1 && (*(_DWORD *)(v65 + 120) & 0x200000) != 0 )
      {
        v67 = *(_DWORD *)(a1 + 40);
        if ( v67 && v67 != -1073676276 && (unsigned __int8)byte_1C00A025A >= 3u )
          WPP_SF_qdD(
            48LL,
            &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids,
            v65,
            *(unsigned int *)(*(_QWORD *)(a1 + 32) + 32LL),
            v67);
        ndisMResetCompleteStage2((NDIS_HANDLE)v65);
      }
      *(_DWORD *)(v65 + 120) &= ~0x1000000u;
      *(_QWORD *)(v65 + 520) = 0LL;
      *(_DWORD *)(v65 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v65 + 96), v66);
      v23 = *(_DWORD **)(a1 + 32);
      v4 = v77;
    }
    ExFreePoolWithTag(v23, 0);
  }
  *(_QWORD *)(a1 + 32) = 0LL;
LABEL_30:
  v26 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v27 = *(_QWORD *)(a1 + 16);
    if ( !v27 )
      goto LABEL_48;
    if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v27 + 144));
      *(_QWORD *)(v27 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v27 + 160) = 2297454;
      if ( v7 )
      {
        --*(_DWORD *)(v27 + 720);
      }
      else
      {
        *(_DWORD *)(v27 + 56) &= ~0x800u;
        *(_QWORD *)(v27 + 184) = 0LL;
      }
      *(_QWORD *)(v27 + 152) = 0LL;
      *(_DWORD *)(v27 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v27 + 144), v28);
    }
    v29 = v27 + 320;
    if ( v7 )
    {
      ndisDereferenceRef((PKSPIN_LOCK)v29);
      goto LABEL_48;
    }
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v29);
    v31 = *(_QWORD *)(v29 + 16);
    v32 = v30;
    if ( v31 - 2 <= 1 )
      goto LABEL_46;
    if ( v31 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v31, 0LL);
    if ( *(_BYTE *)(v31 + 2) <= 0xFu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v31, 0xFuLL);
    v33 = *(unsigned __int8 *)(v31 + 1);
    if ( *(_BYTE *)(v31 + 1) )
    {
      if ( v33 != 1 )
        goto LABEL_46;
      v68 = v31 + 968;
      v69 = *(_DWORD *)(v31 + 1024);
      v70 = (unsigned __int16)v69 >> 1;
      if ( v69 >> 17 < 0x3FFE && v70 == (v69 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v31 + 968));
        *(_DWORD *)(v68 + 56) &= 0x10001u;
        goto LABEL_46;
      }
      if ( v70 != 0 || (v69 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v31 + 968), 0);
        goto LABEL_46;
      }
    }
    else
    {
      v34 = *(_QWORD *)(v31 + 8);
      if ( v34 )
      {
        v35 = *(_BYTE *)(v31 + 3);
        if ( v35 )
        {
          while ( 1 )
          {
            v36 = (_BYTE *)(v34 + 2LL * (unsigned __int8)v33);
            if ( *v36 == 15 )
            {
              v43 = v36[1];
              if ( v43 )
                break;
            }
            LOBYTE(v33) = v33 + 1;
            if ( (unsigned __int8)v33 >= v35 )
              goto LABEL_45;
          }
          v36[1] = v43 - 1;
          goto LABEL_46;
        }
      }
LABEL_45:
      if ( _bittestandreset((signed __int32 *)(v31 + 16), 0xFu) )
      {
LABEL_46:
        v37 = (*(_WORD *)(v29 + 8))-- == 1;
        if ( v37 && !*(_BYTE *)(v29 + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(v29 + 16));
          *(_QWORD *)(v29 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v29, v32);
        goto LABEL_48;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v31, 0xFuLL);
  }
  v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 96));
  *(_QWORD *)(v26 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v26 + 1864) = 2297382;
  if ( !v7 )
  {
    *(_DWORD *)(v26 + 4460) &= ~2u;
    v45 = *(_DWORD *)(a1 + 44);
    if ( (v45 & 1) == 0 )
    {
      if ( (unsigned __int8)byte_1C00A025A >= 4u )
        WPP_SF_q(49LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v26);
      if ( (byte_1C00A2081 & 0x40) != 0 )
        McTemplateK0jqxq(
          v45,
          (unsigned int)&ClearingOidRequest,
          v26 + 4040,
          v26 + 4040,
          *(_DWORD *)(v26 + 4088),
          *(_QWORD *)(v26 + 4056),
          60);
      *(_DWORD *)(v26 + 4460) &= ~1u;
      *(_QWORD *)(v26 + 2232) = 0LL;
    }
    v46 = *(_DWORD *)(a1 + 44);
    if ( (v46 & 3) == 2 && *(_DWORD **)(v26 + 2224) != v8 )
      ndisBugCheckEx(0x26uLL, v26, (ULONG_PTR)v8, 0LL);
    if ( (v46 & 1) == 0 && *(_QWORD *)(v26 + 2224) )
      *(_QWORD *)(v26 + 2224) = 0LL;
  }
  *(_QWORD *)(v26 + 520) = 0LL;
  *(_DWORD *)(v26 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 96), v44);
  *(_WORD *)(v26 + 1822) = 0;
LABEL_48:
  v38 = v76;
  if ( !v76 || v24 )
    goto LABEL_49;
  if ( !v75 )
  {
    v50 = *(unsigned int *)(a1 + 40);
    v51 = *(_QWORD *)(a1 + 32);
    if ( v7 )
      ndisInvokeDirectOidRequestComplete(v76, v51, v50);
    else
      (*((void (__fastcall **)(_BYTE *, __int64, __int64))v76 + 86))(v76, v51, v50);
  }
  v52 = *((_QWORD *)v76 + 2);
  v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v52 + 96));
  *(_QWORD *)(v52 + 520) = KeGetCurrentThread();
  v54 = v53;
  *(_DWORD *)(v52 + 1864) = 1442229;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v76 + 75);
  v55 = *((_QWORD *)v76 + 74);
  if ( v55 - 2 <= 1 )
    goto LABEL_100;
  if ( v55 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v55, 0LL);
  if ( *(_BYTE *)(v55 + 2) <= 6u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v55, 6uLL);
  v56 = *(unsigned __int8 *)(v55 + 1);
  if ( *(_BYTE *)(v55 + 1) )
  {
    if ( v56 != 1 )
      goto LABEL_100;
    v71 = v55 + 392;
    v72 = *(_DWORD *)(v55 + 448);
    v73 = (unsigned __int16)v72 >> 1;
    if ( v72 >> 17 < 0x3FFE && v73 == (v72 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v55 + 392));
      *(_DWORD *)(v71 + 56) &= 0x10001u;
    }
    else
    {
      if ( v73 == 0 && (v72 & 1) == 0 )
        goto LABEL_149;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v55 + 392), 0);
    }
    v38 = v76;
    goto LABEL_100;
  }
  v57 = *(_QWORD *)(v55 + 8);
  if ( v57 )
  {
    v58 = *(_BYTE *)(v55 + 3);
    if ( v58 )
    {
      while ( 1 )
      {
        v59 = (_BYTE *)(v57 + 2LL * (unsigned __int8)v56);
        if ( *v59 == 6 )
        {
          v60 = v59[1];
          if ( v60 )
            break;
        }
        LOBYTE(v56) = v56 + 1;
        if ( (unsigned __int8)v56 >= v58 )
          goto LABEL_99;
      }
      v59[1] = v60 - 1;
      goto LABEL_100;
    }
  }
LABEL_99:
  if ( !_bittestandreset((signed __int32 *)(v55 + 16), 6u) )
LABEL_149:
    ndisBugCheckEx(0x1EuLL, 0LL, v55, 6uLL);
LABEL_100:
  v37 = (*((_DWORD *)v38 + 57))-- == 1;
  v61 = v37;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v76 + 75);
  if ( v61 )
    ndisMFinishClose(v76);
  *(_QWORD *)(v52 + 520) = 0LL;
  *(_DWORD *)(v52 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v52 + 96), v54);
  v4 = v77;
  v8 = v78;
LABEL_49:
  if ( v4 && !v24 )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(50LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, *(_QWORD *)(a1 + 32), v4);
    if ( (byte_1C00A2081 & 0x40) != 0 )
      McTemplateK0jqxqdq(
        *(_QWORD *)(a1 + 32),
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v4 + 680,
        (_DWORD)v4 + 680,
        *((_DWORD *)v4 + 174),
        *(_QWORD *)(*((_QWORD *)v4 + 88) + 1312LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL),
        *(_DWORD *)(a1 + 40),
        178);
    v39 = *(_DWORD *)(a1 + 40);
    v40 = *(_QWORD *)(a1 + 32);
    if ( v7 )
    {
      ndisFInvokeDirectOidRequestComplete(v4, *(_QWORD *)(a1 + 32), v39);
    }
    else
    {
      v41 = *((_QWORD *)v4 + 2);
      v42 = *(_DWORD *)(v40 + 32);
      if ( (unsigned __int8)byte_1C00A025A >= 4u )
        WPP_SF_qDqL(119LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v4, v42, v40, *(_DWORD *)(a1 + 40));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v41 + 256))(*((_QWORD *)v4 + 3), v40, v39);
      if ( (unsigned __int8)byte_1C00A025A >= 4u )
        WPP_SF_qLq(120LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v4, v42, v40);
    }
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v74 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      v74 = *(_QWORD *)(a1 + 16);
    WPP_SF_qqq(51LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v74, v8, *(_QWORD *)(a1 + 24));
  }
}
