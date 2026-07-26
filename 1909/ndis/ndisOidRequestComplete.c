/*
 * XREFs of ndisOidRequestComplete @ 0x1C00076F0
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C0003030 (ndisFOidRequestCompleteInternal.c)
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     ndisFDoOidRequestInternal @ 0x1C00072E0 (ndisFDoOidRequestInternal.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C001DCEC (ndisMOidRequestCompleteInternal.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C006A154 (ndisCancelOidRequestOnFilter.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C006A314 (ndisCancelOidRequestOnMiniport.c)
 *     ndisPMAddRemoveAsync @ 0x1C0074F60 (ndisPMAddRemoveAsync.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C008E5F0 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisMAbortRequests @ 0x1C0099BD4 (ndisMAbortRequests.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqqqqd @ 0x1C0007F40 (WPP_RECORDER_SF_Dqqqqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00084B0 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C0008570 (WPP_RECORDER_SF_qDd.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqdq @ 0x1C0068D18 (McTemplateK0jqxqdq.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C008EE3C (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C00939CC (ndisInvokeDirectOidRequestComplete.c)
 *     ndisMResetCompleteStage2 @ 0x1C009BCF4 (ndisMResetCompleteStage2.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 *     ndisMFinishClose @ 0x1C0137820 (ndisMFinishClose.c)
 */

__int64 __fastcall ndisOidRequestComplete(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rsi
  _BYTE *v5; // r12
  _BYTE *v7; // r13
  _BYTE *v8; // rdi
  _DWORD *v9; // r15
  int v10; // ebp
  ULONG_PTR v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  void (__fastcall *v14)(__int64); // rax
  ULONG_PTR v15; // r14
  int v16; // r14d
  bool v17; // cl
  _DWORD *v18; // r8
  int v19; // r14d
  int v20; // edi
  ULONG_PTR v21; // rdi
  __int64 v22; // rdi
  KIRQL v23; // al
  __int64 v24; // rdi
  KIRQL v25; // al
  ULONG_PTR v26; // r8
  KIRQL v27; // r15
  int v28; // ecx
  __int64 v29; // r9
  unsigned __int8 v30; // dl
  _BYTE *v31; // r10
  bool v32; // zf
  unsigned int v33; // r14d
  __int64 v34; // rdi
  __int64 v35; // rbp
  int v36; // esi
  int v37; // edx
  int v38; // r8d
  __int64 result; // rax
  char v40; // al
  KIRQL v41; // r12
  unsigned int v42; // edx
  int v43; // ecx
  int v44; // ecx
  unsigned __int8 v45; // al
  int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // ecx
  __int64 v49; // rcx
  unsigned __int8 v50; // al
  int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rsi
  KIRQL v57; // al
  ULONG_PTR v58; // r8
  int v59; // ecx
  __int64 v60; // r9
  unsigned __int8 v61; // r10
  _BYTE *v62; // rdx
  char v63; // al
  char v64; // di
  KIRQL v65; // al
  __int64 v66; // rax
  __int64 *v67; // rsi
  __int64 v68; // rsi
  KIRQL v69; // al
  int v70; // edx
  int v71; // r8d
  int v72; // ecx
  ULONG_PTR v73; // rsi
  unsigned int v74; // edx
  int v75; // ecx
  ULONG_PTR v76; // rdi
  unsigned int v77; // edx
  int v78; // ecx
  char v79; // [rsp+A0h] [rbp+8h]
  KIRQL v80; // [rsp+A0h] [rbp+8h]
  KIRQL v81; // [rsp+A8h] [rbp+10h]
  _BYTE *v82; // [rsp+B0h] [rbp+18h]

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0LL;
  v82 = 0LL;
  v79 = 0;
  v7 = 0LL;
  v8 = *(_BYTE **)(v4 + 104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dqqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
  *(_DWORD *)(v4 + 88) |= 1u;
  v9 = *(_DWORD **)(a1 + 32);
  v10 = *(_DWORD *)(v4 + 88) & 0x200000;
  if ( (*(_DWORD *)(v4 + 88) & 0x220) != 0 )
  {
    *(_QWORD *)(a1 + 24) = v8;
    v5 = v8;
    v82 = v8;
    if ( (*(_DWORD *)(v4 + 88) & 0x200) == 0 )
      goto LABEL_6;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( *v8 == 5 )
    {
      v7 = v8;
      *(_QWORD *)(a1 + 8) = v8;
      goto LABEL_6;
    }
  }
  v79 = 1;
LABEL_6:
  v11 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v45 = *(_BYTE *)(v11 + 32);
    if ( (v45 > 6u || v45 == 6 && *(_BYTE *)(v11 + 33) >= 0x28u) && !*(_DWORD *)(a1 + 40) )
    {
      v46 = v9[1];
      if ( (v46 & 0xFFFFFFFD) != 0 )
      {
        if ( v46 != 12 )
          goto LABEL_11;
        v47 = v9[13];
        v48 = v9[15];
      }
      else
      {
        v47 = v9[12];
        v48 = v9[13];
      }
      if ( v48 > v47 )
        ndisBugCheckEx(0x1DuLL, v11, (ULONG_PTR)v9, 0LL);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 16);
      v13 = *(_BYTE *)(v12 + 100);
      if ( v13 > 6u || v13 == 6 && *(_BYTE *)(v12 + 101) >= 0x28u )
      {
        v49 = *(_QWORD *)(v11 + 32);
        v50 = *(_BYTE *)(v49 + 32);
        if ( (v50 > 6u || v50 == 6 && *(_BYTE *)(v49 + 33) >= 0x28u) && !*(_DWORD *)(a1 + 40) )
        {
          v51 = v9[1];
          if ( (v51 & 0xFFFFFFFD) != 0 )
          {
            if ( v51 != 12 )
              goto LABEL_11;
            v52 = v9[13];
            v53 = v9[15];
          }
          else
          {
            v52 = v9[12];
            v53 = v9[13];
          }
          if ( v53 > v52 )
            ndisBugCheckEx(0x1DuLL, v11, (ULONG_PTR)v9, 0LL);
        }
      }
    }
  }
LABEL_11:
  if ( (*(_DWORD *)(v4 + 88) & 0x40004) == 4 && !v10 && (*(_DWORD *)(v4 + 88) & 0x1000000) == 0 )
  {
    v14 = (void (__fastcall *)(__int64))*((_QWORD *)&unk_1C00CA310 + 3 * *(unsigned int *)(v4 + 92));
    if ( v14 )
      v14(a1);
  }
  v15 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL) == -50265855 && *(_DWORD *)(a1 + 40) )
  {
    v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 3872));
    *(_DWORD *)(v15 + 3880) = *(_DWORD *)(v15 + 3884);
    *(_DWORD *)(v15 + 3884) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 3872), v65);
  }
  v16 = *(_DWORD *)(v4 + 88);
  v17 = (v16 & 2) != 0;
  LOBYTE(v11) = (v16 & 0x100) != 0;
  v18 = *(_DWORD **)(a1 + 32);
  v19 = v16 & 0x2000000;
  v20 = v18[1];
  if ( (*(_DWORD *)(v4 + 88) & 8) != 0 )
  {
    *(_DWORD *)(v4 + 80) = *(_DWORD *)(a1 + 40);
    KeSetEvent((PRKEVENT)(v4 + 112), 0, 0);
  }
  else
  {
    if ( !v17 )
      goto LABEL_19;
    if ( (*(_DWORD *)(v4 + 88) & 0x100) != 0 )
    {
      v66 = *(_QWORD *)(a1 + 16);
      v67 = (__int64 *)(v66 + 32);
      if ( !v66 )
        v67 = (__int64 *)a1;
      v68 = *v67;
      v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v68 + 96));
      *(_QWORD *)(v68 + 520) = KeGetCurrentThread();
      v81 = v69;
      if ( v20 == 1 && (*(_DWORD *)(v68 + 120) & 0x200000) != 0 )
      {
        v72 = *(_DWORD *)(a1 + 40);
        if ( v72 && v72 != -1073676276 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v70) = 3;
          WPP_RECORDER_SF_qDd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v70,
            v71,
            37,
            (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
            v68,
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL),
            v72);
        }
        ndisMResetCompleteStage2(v68);
        v69 = v81;
      }
      *(_DWORD *)(v68 + 120) &= ~0x1000000u;
      *(_QWORD *)(v68 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v68 + 96), v69);
      v18 = *(_DWORD **)(a1 + 32);
      v5 = v82;
    }
    ExFreePoolWithTag(v18, 0);
  }
  *(_QWORD *)(a1 + 32) = 0LL;
LABEL_19:
  v21 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v22 = *(_QWORD *)(a1 + 16);
    if ( !v22 )
      goto LABEL_37;
    if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
    {
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 144));
      if ( v10 )
      {
        --*(_DWORD *)(v22 + 712);
      }
      else
      {
        *(_DWORD *)(v22 + 56) &= ~0x800u;
        *(_QWORD *)(v22 + 176) = 0LL;
      }
      *(_QWORD *)(v22 + 152) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 144), v23);
    }
    v24 = v22 + 312;
    if ( v10 )
    {
      ndisDereferenceRef((PKSPIN_LOCK)v24);
      goto LABEL_37;
    }
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v24);
    v26 = *(_QWORD *)(v24 + 16);
    v27 = v25;
    if ( v26 - 2 <= 1 )
      goto LABEL_35;
    if ( v26 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v26, 0LL);
    if ( *(_BYTE *)(v26 + 2) <= 0xFu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v26, 0xFuLL);
    v28 = *(unsigned __int8 *)(v26 + 1);
    if ( *(_BYTE *)(v26 + 1) )
    {
      if ( v28 != 1 )
        goto LABEL_35;
      v73 = v26 + 968;
      v74 = *(_DWORD *)(v26 + 1024);
      v75 = (unsigned __int16)v74 >> 1;
      if ( v74 >> 17 < 0x3FFE && v75 == (v74 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v26 + 968));
        *(_DWORD *)(v73 + 56) &= 0x10001u;
        goto LABEL_35;
      }
      if ( v75 != 0 || (v74 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v26 + 968), 0);
        goto LABEL_35;
      }
    }
    else
    {
      v29 = *(_QWORD *)(v26 + 8);
      if ( v29 )
      {
        v30 = *(_BYTE *)(v26 + 3);
        if ( v30 )
        {
          while ( 1 )
          {
            v31 = (_BYTE *)(v29 + 2LL * (unsigned __int8)v28);
            if ( *v31 == 15 )
            {
              v40 = v31[1];
              if ( v40 )
                break;
            }
            LOBYTE(v28) = v28 + 1;
            if ( (unsigned __int8)v28 >= v30 )
              goto LABEL_34;
          }
          v31[1] = v40 - 1;
          goto LABEL_35;
        }
      }
LABEL_34:
      if ( _bittestandreset((signed __int32 *)(v26 + 16), 0xFu) )
      {
LABEL_35:
        v32 = (*(_WORD *)(v24 + 8))-- == 1;
        if ( v32 && !*(_BYTE *)(v24 + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(v24 + 16));
          *(_QWORD *)(v24 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v24, v27);
        goto LABEL_37;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v26, 0xFuLL);
  }
  v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 96));
  *(_QWORD *)(v21 + 520) = KeGetCurrentThread();
  if ( !v10 )
  {
    v42 = *(_DWORD *)(v21 + 4420) & 0xFFFFFFFD;
    *(_DWORD *)(v21 + 4420) = v42;
    v43 = *(_DWORD *)(a1 + 44);
    if ( (v43 & 1) == 0 )
    {
      if ( (byte_1C00E8081 & 0x40) != 0 )
      {
        McTemplateK0jqxq(
          v43,
          (unsigned int)&ClearingOidRequest,
          v21 + 4008,
          v21 + 4008,
          *(_DWORD *)(v21 + 4056),
          *(_QWORD *)(v21 + 4024),
          1);
        v42 = *(_DWORD *)(v21 + 4420);
      }
      *(_DWORD *)(v21 + 4420) = v42 & 0xFFFFFFFE;
      *(_QWORD *)(v21 + 2216) = 0LL;
    }
    v44 = *(_DWORD *)(a1 + 44);
    if ( (v44 & 3) == 2 && *(_DWORD **)(v21 + 2208) != v9 )
      ndisBugCheckEx(0x26uLL, v21, (ULONG_PTR)v9, 0LL);
    if ( (v44 & 1) == 0 && *(_QWORD *)(v21 + 2208) )
      *(_QWORD *)(v21 + 2208) = 0LL;
  }
  *(_QWORD *)(v21 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 96), v41);
  v5 = v82;
  *(_WORD *)(v21 + 1822) = 0;
LABEL_37:
  if ( !v5 || v19 )
    goto LABEL_38;
  if ( !v79 )
  {
    v54 = *(unsigned int *)(a1 + 40);
    v55 = *(_QWORD *)(a1 + 32);
    if ( v10 )
      ndisInvokeDirectOidRequestComplete((char)v5, v55, v54);
    else
      (*((void (__fastcall **)(_BYTE *, __int64, __int64))v5 + 86))(v5, v55, v54);
  }
  v56 = *((_QWORD *)v5 + 2);
  v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v56 + 96));
  *(_QWORD *)(v56 + 520) = KeGetCurrentThread();
  v80 = v57;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 75);
  v58 = *((_QWORD *)v82 + 74);
  if ( v58 - 2 <= 1 )
    goto LABEL_95;
  if ( v58 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v58, 0LL);
  if ( *(_BYTE *)(v58 + 2) <= 6u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v58, 6uLL);
  v59 = *(unsigned __int8 *)(v58 + 1);
  if ( *(_BYTE *)(v58 + 1) )
  {
    if ( v59 != 1 )
      goto LABEL_95;
    v76 = v58 + 392;
    v77 = *(_DWORD *)(v58 + 448);
    v78 = (unsigned __int16)v77 >> 1;
    if ( v77 >> 17 < 0x3FFE && v78 == (v77 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v58 + 392));
      *(_DWORD *)(v76 + 56) &= 0x10001u;
      goto LABEL_95;
    }
    if ( v78 != 0 || (v77 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v58 + 392), 0);
      goto LABEL_95;
    }
LABEL_144:
    ndisBugCheckEx(0x1EuLL, 0LL, v58, 6uLL);
  }
  v60 = *(_QWORD *)(v58 + 8);
  if ( v60 )
  {
    v61 = *(_BYTE *)(v58 + 3);
    if ( v61 )
    {
      while ( 1 )
      {
        v62 = (_BYTE *)(v60 + 2LL * (unsigned __int8)v59);
        if ( *v62 == 6 )
        {
          v63 = v62[1];
          if ( v63 )
            break;
        }
        LOBYTE(v59) = v59 + 1;
        if ( (unsigned __int8)v59 >= v61 )
          goto LABEL_94;
      }
      v62[1] = v63 - 1;
      goto LABEL_95;
    }
  }
LABEL_94:
  if ( !_bittestandreset((signed __int32 *)(v58 + 16), 6u) )
    goto LABEL_144;
LABEL_95:
  v32 = (*((_DWORD *)v82 + 57))-- == 1;
  v64 = v32;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 75);
  if ( v64 )
    ndisMFinishClose((char)v82);
  *(_QWORD *)(v56 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v56 + 96), v80);
LABEL_38:
  if ( v7 && !v19 )
  {
    if ( (byte_1C00E8081 & 0x40) != 0 )
      McTemplateK0jqxqdq(
        *(_QWORD *)(a1 + 32),
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v7 + 672,
        (_DWORD)v7 + 672,
        *((_DWORD *)v7 + 172),
        *(_QWORD *)(*((_QWORD *)v7 + 87) + 1312LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 32LL),
        *(_DWORD *)(a1 + 40));
    v33 = *(_DWORD *)(a1 + 40);
    v34 = *(_QWORD *)(a1 + 32);
    if ( v10 )
    {
      ndisFInvokeDirectOidRequestComplete((char)v7, *(_QWORD *)(a1 + 32));
    }
    else
    {
      v35 = *((_QWORD *)v7 + 2);
      v36 = *(_DWORD *)(v34 + 32);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          (int)v18,
          115,
          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
          (char)v7,
          v36,
          v34,
          *(_DWORD *)(a1 + 40));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v35 + 256))(*((_QWORD *)v7 + 3), v34, v33);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = 4;
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v37,
          v38,
          116,
          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
          (char)v7,
          v36,
          v34);
      }
    }
  }
  result = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
