/*
 * XREFs of ndisMTimerObjectDpc @ 0x1C0011B90
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

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  __int64 Clock; // r15
  __int64 v7; // r13
  int v8; // ebp
  KIRQL v9; // r14
  unsigned __int16 v10; // ax
  struct _NDIS_REFCOUNT_BLOCK *v11; // rcx
  __int64 v12; // r8
  KIRQL v13; // al
  ULONG_PTR v14; // r8
  KIRQL v15; // si
  __int64 v16; // r10
  unsigned __int8 v17; // r9
  unsigned __int8 v18; // al
  _BYTE *v19; // rdx
  char v21; // di
  char v22; // cl
  __int64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  ULONG_PTR v27; // rdi
  unsigned int v28; // edx
  int v29; // ecx
  KIRQL v30; // al
  struct _NDIS_M_DRIVER_BLOCK *v31; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  KIRQL v33; // bl
  PVOID v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  _QWORD *v37; // rcx
  _QWORD *v38; // rbx

  v4 = DeferredContext[3];
  Clock = 0LL;
  if ( *(_BYTE *)v4 != 17 )
    return;
  v7 = *(_QWORD *)(v4 + 3792);
  v8 = 1;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
  if ( !*(_BYTE *)(v7 + 402) )
  {
    v10 = *(_WORD *)(v7 + 400);
    if ( v10 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v8 = 2;
    }
    else
    {
      v11 = *(struct _NDIS_REFCOUNT_BLOCK **)(v7 + 408);
      *(_WORD *)(v7 + 400) = v10 + 1;
      NdisReferenceWithTag(v11, 0xAu);
      v8 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v9);
  if ( v8 )
    return;
  if ( HIBYTE(dword_1C00A2098) )
  {
    LOBYTE(v8) = 1;
    ndisTraceDpcStart(v4, 2LL);
    Clock = WmiGetClock(0LL, 0LL, v23);
  }
  if ( (*(_BYTE *)(v7 + 26) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1888));
    v24 = (_QWORD *)(v4 + 560);
    v25 = *(_QWORD **)(v4 + 560);
    if ( v25 )
    {
      while ( v25 != DeferredContext )
      {
        v24 = v25;
        v25 = (_QWORD *)*v25;
        if ( !v25 )
          goto LABEL_35;
      }
      if ( !*((_DWORD *)DeferredContext + 23) )
        *v24 = *DeferredContext;
    }
LABEL_35:
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 1888));
  }
  if ( (*(_DWORD *)(v4 + 124) & 0x1000000) == 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DeferredContext[21])(0LL, DeferredContext[23], 0LL, 0LL);
  if ( (_BYTE)v8 )
  {
    v26 = WmiGetClock(0LL, 0LL, v12);
    ndisTraceDpcEnd(v4, 2LL, v26 - Clock);
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
  v14 = *(_QWORD *)(v7 + 408);
  v15 = v13;
  if ( v14 - 2 <= 1 )
    goto LABEL_22;
  if ( v14 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v14, 0LL);
  if ( *(_BYTE *)(v14 + 2) <= 0xAu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v14, 0xAuLL);
  if ( *(_BYTE *)(v14 + 1) )
  {
    if ( *(_BYTE *)(v14 + 1) != 1 )
      goto LABEL_22;
    v27 = v14 + 648;
    v28 = *(_DWORD *)(v14 + 704);
    v29 = (unsigned __int16)v28 >> 1;
    if ( v28 >> 17 < 0x3FFE && v29 == (v28 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 648));
      *(_DWORD *)(v27 + 56) &= 0x10001u;
      goto LABEL_22;
    }
    if ( v29 != 0 || (v28 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 648), 0);
      goto LABEL_22;
    }
LABEL_44:
    ndisBugCheckEx(0x1EuLL, 0LL, v14, 0xAuLL);
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
        v19 = (_BYTE *)(v16 + 2LL * v18);
        if ( *v19 == 10 )
        {
          v22 = v19[1];
          if ( v22 )
            break;
        }
        if ( ++v18 >= v17 )
          goto LABEL_21;
      }
      v19[1] = v22 - 1;
      goto LABEL_22;
    }
  }
LABEL_21:
  if ( !_bittestandreset((signed __int32 *)(v14 + 16), 0xAu) )
    goto LABEL_44;
LABEL_22:
  if ( (*(_WORD *)(v7 + 400))-- == 1 )
  {
    v21 = 1;
    if ( !*(_BYTE *)(v7 + 403) )
    {
      NdisFreeRefCount(*(_QWORD *)(v7 + 408));
      *(_QWORD *)(v7 + 408) = 1LL;
    }
  }
  else
  {
    v21 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v15);
  if ( v21 )
  {
    if ( (unsigned __int8)byte_1C00A0263 >= 4u )
      WPP_SF_q(23LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v7);
    v30 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v31 = ndisMiniDriverList;
    p_NextDriver = &ndisMiniDriverList;
    v33 = v30;
    if ( ndisMiniDriverList )
    {
      while ( v31 != (struct _NDIS_M_DRIVER_BLOCK *)v7 )
      {
        p_NextDriver = &v31->NextDriver;
        v31 = v31->NextDriver;
        if ( !v31 )
          goto LABEL_54;
      }
      v34 = ndisDriverObject;
      *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v7 + 8);
      ObfDereferenceObject(v34);
    }
LABEL_54:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v33);
    v35 = *(void **)(v7 + 888);
    if ( v35 )
    {
      ExFreePoolWithTag(v35, 0);
      *(_QWORD *)(v7 + 888) = 0LL;
    }
    v36 = *(void **)(v7 + 32);
    if ( v36 )
    {
      ExFreePoolWithTag(v36, 0);
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    if ( (*(_BYTE *)(v7 + 26) & 1) != 0 )
    {
      v37 = *(_QWORD **)(v7 + 96);
      if ( v37 )
      {
        do
        {
          v38 = (_QWORD *)*v37;
          ExFreePoolWithTag(v37, 0);
          v37 = v38;
        }
        while ( v38 );
      }
    }
    KeSetEvent((PRKEVENT)(v7 + 368), 0, 0);
    if ( (unsigned __int8)byte_1C00A0263 >= 4u )
      WPP_SF_q(24LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v7);
  }
}
