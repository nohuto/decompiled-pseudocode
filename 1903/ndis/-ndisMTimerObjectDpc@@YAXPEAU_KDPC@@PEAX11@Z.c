/*
 * XREFs of ?ndisMTimerObjectDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C001E7F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C007E800 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C007E8E8 (ndisTraceDpcStart.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C77F8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7978 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7B10 (NdisFreeRefCount.c)
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
  KIRQL v12; // al
  ULONG_PTR v13; // r8
  KIRQL v14; // si
  __int64 v15; // r10
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // al
  _BYTE *v18; // rdx
  char v20; // di
  int v21; // edx
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  ULONG_PTR v25; // rdi
  unsigned int v26; // edx
  int v27; // ecx
  char v28; // cl
  KIRQL v29; // al
  struct _NDIS_M_DRIVER_BLOCK *v30; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  KIRQL v32; // bl
  PVOID v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rbx
  int v38; // edx

  v4 = DeferredContext[3];
  Clock = 0LL;
  if ( *(_BYTE *)v4 != 17 )
    return;
  v7 = *(_QWORD *)(v4 + 3760);
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
  if ( HIBYTE(dword_1C00E8058) )
  {
    LOBYTE(v8) = 1;
    ndisTraceDpcStart(v4, 2LL);
    Clock = WmiGetClock(0LL, 0LL);
  }
  if ( (*(_BYTE *)(v7 + 26) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1880));
    v22 = (_QWORD *)(v4 + 560);
    v23 = *(_QWORD **)(v4 + 560);
    if ( v23 )
    {
      while ( v23 != DeferredContext )
      {
        v22 = v23;
        v23 = (_QWORD *)*v23;
        if ( !v23 )
          goto LABEL_33;
      }
      if ( !*((_DWORD *)DeferredContext + 23) )
        *v22 = *DeferredContext;
    }
LABEL_33:
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 1880));
  }
  if ( (*(_DWORD *)(v4 + 124) & 0x1000000) == 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DeferredContext[21])(0LL, DeferredContext[23], 0LL, 0LL);
  if ( (_BYTE)v8 )
  {
    v24 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 2LL, v24 - Clock);
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
  v13 = *(_QWORD *)(v7 + 408);
  v14 = v12;
  if ( v13 - 2 <= 1 )
    goto LABEL_22;
  if ( v13 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v13, 0LL);
  if ( *(_BYTE *)(v13 + 2) <= 0xAu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v13, 0xAuLL);
  if ( *(_BYTE *)(v13 + 1) )
  {
    if ( *(_BYTE *)(v13 + 1) != 1 )
      goto LABEL_22;
    v25 = v13 + 648;
    v26 = *(_DWORD *)(v13 + 704);
    v27 = (unsigned __int16)v26 >> 1;
    if ( v26 >> 17 < 0x3FFE && v27 == (v26 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 648));
      *(_DWORD *)(v25 + 56) &= 0x10001u;
      goto LABEL_22;
    }
    if ( v27 != 0 || (v26 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 648), 0);
      goto LABEL_22;
    }
LABEL_44:
    ndisBugCheckEx(0x1EuLL, 0LL, v13, 0xAuLL);
  }
  v15 = *(_QWORD *)(v13 + 8);
  if ( v15 )
  {
    v16 = *(_BYTE *)(v13 + 3);
    v17 = 0;
    if ( v16 )
    {
      while ( 1 )
      {
        v18 = (_BYTE *)(v15 + 2LL * v17);
        if ( *v18 == 10 )
        {
          v28 = v18[1];
          if ( v28 )
            break;
        }
        if ( ++v17 >= v16 )
          goto LABEL_21;
      }
      v18[1] = v28 - 1;
      goto LABEL_22;
    }
  }
LABEL_21:
  if ( !_bittestandreset((signed __int32 *)(v13 + 16), 0xAu) )
    goto LABEL_44;
LABEL_22:
  if ( (*(_WORD *)(v7 + 400))-- == 1 )
  {
    v20 = 1;
    if ( !*(_BYTE *)(v7 + 403) )
    {
      NdisFreeRefCount(*(_QWORD *)(v7 + 408));
      *(_QWORD *)(v7 + 408) = 1LL;
    }
  }
  else
  {
    v20 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v14);
  if ( v20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v21,
        20,
        23,
        (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
        v7);
    }
    v29 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v30 = ndisMiniDriverList;
    p_NextDriver = &ndisMiniDriverList;
    v32 = v29;
    if ( ndisMiniDriverList )
    {
      while ( v30 != (struct _NDIS_M_DRIVER_BLOCK *)v7 )
      {
        p_NextDriver = &v30->NextDriver;
        v30 = v30->NextDriver;
        if ( !v30 )
          goto LABEL_54;
      }
      v33 = ndisDriverObject;
      *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v7 + 8);
      ObfDereferenceObject(v33);
    }
LABEL_54:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v32);
    v34 = *(void **)(v7 + 888);
    if ( v34 )
    {
      ExFreePoolWithTag(v34, 0);
      *(_QWORD *)(v7 + 888) = 0LL;
    }
    v35 = *(void **)(v7 + 32);
    if ( v35 )
    {
      ExFreePoolWithTag(v35, 0);
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    if ( (*(_BYTE *)(v7 + 26) & 1) != 0 )
    {
      v36 = *(_QWORD **)(v7 + 96);
      if ( v36 )
      {
        do
        {
          v37 = (_QWORD *)*v36;
          ExFreePoolWithTag(v36, 0);
          v36 = v37;
        }
        while ( v37 );
      }
    }
    KeSetEvent((PRKEVENT)(v7 + 368), 0, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v38) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v38,
        20,
        24,
        (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
        v7);
    }
  }
}
