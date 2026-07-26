/*
 * XREFs of ndisMTimerDpcX @ 0x1C000F540
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C0050E24 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F0C (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

void __fastcall ndisMTimerDpcX(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 Clock; // r12
  __int64 v5; // rdi
  KIRQL v6; // r15
  int v7; // ebp
  unsigned __int16 v8; // ax
  struct _NDIS_REFCOUNT_BLOCK *v9; // rcx
  __int64 v10; // r8
  char v11; // bp
  __int64 v12; // rdx
  KIRQL v13; // al
  ULONG_PTR v14; // r8
  KIRQL v15; // bp
  __int64 v16; // rcx
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // dl
  __int16 v19; // si
  char v20; // al
  __int64 v21; // r8
  __int64 *i; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  ULONG_PTR v25; // rsi
  unsigned int v26; // edx
  int v27; // ecx
  KIRQL v28; // al
  struct _NDIS_M_DRIVER_BLOCK *v29; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  KIRQL v31; // bl
  PVOID v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rbx

  v2 = *(_QWORD *)(a2 + 144);
  Clock = 0LL;
  v5 = *(_QWORD *)(v2 + 3792);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 392));
  v7 = 1;
  if ( !*(_BYTE *)(v5 + 402) )
  {
    v8 = *(_WORD *)(v5 + 400);
    if ( v8 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v7 = 2;
    }
    else
    {
      v9 = *(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 408);
      *(_WORD *)(v5 + 400) = v8 + 1;
      NdisReferenceWithTag(v9, 0xBu);
      v7 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v6);
  if ( v7 )
    return;
  if ( HIBYTE(dword_1C00A2098) )
  {
    v11 = 1;
    ndisTraceDpcStart(v2, 2LL);
    Clock = WmiGetClock(0LL, 0LL, v21);
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)(a2 + 144);
  if ( (*(_BYTE *)(*(_QWORD *)(v12 + 3792) + 26LL) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 1888));
    for ( i = (__int64 *)(v2 + 560); ; i = (__int64 *)(v23 + 152) )
    {
      v23 = *i;
      if ( !*i )
        break;
      if ( v23 == a2 )
      {
        if ( !*(_DWORD *)(a2 + 60) )
          *i = *(_QWORD *)(a2 + 152);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a2 + 144) + 1888LL));
  }
  if ( (*(_DWORD *)(v2 + 124) & 0x1000000) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a2 + 128))(0LL, *(_QWORD *)(a2 + 136), 0LL, 0LL);
  if ( v11 )
  {
    v24 = WmiGetClock(0LL, 0LL, v10);
    ndisTraceDpcEnd(v2, 2LL, v24 - Clock);
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 392));
  v14 = *(_QWORD *)(v5 + 408);
  v15 = v13;
  if ( v14 - 2 <= 1 )
  {
    v14 = 0LL;
  }
  else if ( v14 < 2 )
  {
    ndisBugCheckEx(0x1EuLL, 3uLL, v14, 0LL);
  }
  if ( !v14 )
    goto LABEL_22;
  if ( *(_BYTE *)(v14 + 2) <= 0xBu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v14, 0xBuLL);
  if ( *(_BYTE *)(v14 + 1) )
  {
    if ( *(_BYTE *)(v14 + 1) != 1 )
      goto LABEL_22;
    v25 = v14 + 712;
    v26 = *(_DWORD *)(v14 + 768);
    v27 = (unsigned __int16)v26 >> 1;
    if ( v26 >> 17 < 0x3FFE && v27 == (v26 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 712));
      *(_DWORD *)(v25 + 56) &= 0x10001u;
      goto LABEL_22;
    }
    if ( v27 != 0 || (v26 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 712), 0);
      goto LABEL_22;
    }
LABEL_46:
    ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xBuLL);
  }
  v16 = *(_QWORD *)(v14 + 8);
  if ( v16 )
  {
    v17 = *(_BYTE *)(v14 + 3);
    v18 = 0;
    if ( v17 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v16 + 2LL * v18) == 11 )
        {
          v20 = *(_BYTE *)(v16 + 2LL * v18 + 1);
          if ( v20 )
            break;
        }
        if ( ++v18 >= v17 )
          goto LABEL_21;
      }
      *(_BYTE *)(v16 + 2LL * v18 + 1) = v20 - 1;
      goto LABEL_22;
    }
  }
LABEL_21:
  if ( !_bittestandreset((signed __int32 *)(v14 + 16), 0xBu) )
    goto LABEL_46;
LABEL_22:
  v19 = *(_WORD *)(v5 + 400) - 1;
  *(_WORD *)(v5 + 400) = v19;
  if ( !v19 && !*(_BYTE *)(v5 + 403) )
  {
    NdisFreeRefCount(*(_QWORD *)(v5 + 408));
    *(_QWORD *)(v5 + 408) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v15);
  if ( !v19 )
  {
    if ( (unsigned __int8)byte_1C00A0263 >= 4u )
      WPP_SF_q(23LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v5);
    v28 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v29 = ndisMiniDriverList;
    p_NextDriver = &ndisMiniDriverList;
    v31 = v28;
    while ( v29 )
    {
      if ( v29 == (struct _NDIS_M_DRIVER_BLOCK *)v5 )
      {
        v32 = ndisDriverObject;
        *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v5 + 8);
        ObfDereferenceObject(v32);
        break;
      }
      p_NextDriver = &v29->NextDriver;
      v29 = v29->NextDriver;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v31);
    v33 = *(void **)(v5 + 888);
    if ( v33 )
    {
      ExFreePoolWithTag(v33, 0);
      *(_QWORD *)(v5 + 888) = 0LL;
    }
    v34 = *(void **)(v5 + 32);
    if ( v34 )
    {
      ExFreePoolWithTag(v34, 0);
      *(_QWORD *)(v5 + 32) = 0LL;
    }
    if ( (*(_BYTE *)(v5 + 26) & 1) != 0 )
    {
      v35 = *(_QWORD **)(v5 + 96);
      if ( v35 )
      {
        do
        {
          v36 = (_QWORD *)*v35;
          ExFreePoolWithTag(v35, 0);
          v35 = v36;
        }
        while ( v36 );
      }
    }
    KeSetEvent((PRKEVENT)(v5 + 368), 0, 0);
    if ( (unsigned __int8)byte_1C00A0263 >= 4u )
      WPP_SF_q(24LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v5);
  }
}
