/*
 * XREFs of ndisMTimerDpcX @ 0x1C00026B0
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

void __fastcall ndisMTimerDpcX(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 Clock; // r15
  __int64 v5; // r13
  int v6; // edi
  KIRQL v7; // bp
  unsigned __int16 v8; // ax
  struct _NDIS_REFCOUNT_BLOCK *v9; // rcx
  __int64 v10; // rdx
  KIRQL v11; // al
  ULONG_PTR v12; // r8
  KIRQL v13; // si
  __int64 v14; // r10
  unsigned __int8 v15; // r9
  unsigned __int8 v16; // al
  _BYTE *v17; // rdx
  char v19; // di
  int v20; // edx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  ULONG_PTR v24; // rdi
  unsigned int v25; // edx
  int v26; // ecx
  char v27; // cl
  KIRQL v28; // al
  struct _NDIS_M_DRIVER_BLOCK *v29; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  KIRQL v31; // bl
  PVOID v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rbx
  int v37; // edx

  v2 = *(_QWORD *)(a2 + 144);
  Clock = 0LL;
  v5 = *(_QWORD *)(v2 + 3760);
  v6 = 1;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 392));
  if ( !*(_BYTE *)(v5 + 402) )
  {
    v8 = *(_WORD *)(v5 + 400);
    if ( v8 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v6 = 2;
    }
    else
    {
      v9 = *(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 408);
      *(_WORD *)(v5 + 400) = v8 + 1;
      NdisReferenceWithTag(v9);
      v6 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v7);
  if ( v6 )
    return;
  if ( HIBYTE(dword_1C00E8058) )
  {
    LOBYTE(v6) = 1;
    ndisTraceDpcStart(v2, 2LL);
    Clock = WmiGetClock(0LL, 0LL);
  }
  v10 = *(_QWORD *)(a2 + 144);
  if ( (*(_BYTE *)(*(_QWORD *)(v10 + 3760) + 26LL) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 1880));
    v21 = (_QWORD *)(v2 + 560);
    v22 = *(_QWORD *)(v2 + 560);
    if ( v22 )
    {
      while ( v22 != a2 )
      {
        v21 = (_QWORD *)(v22 + 152);
        v22 = *(_QWORD *)(v22 + 152);
        if ( !v22 )
          goto LABEL_32;
      }
      if ( !*(_DWORD *)(a2 + 60) )
        *v21 = *(_QWORD *)(a2 + 152);
    }
LABEL_32:
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a2 + 144) + 1880LL));
  }
  if ( (*(_DWORD *)(v2 + 124) & 0x1000000) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a2 + 128))(0LL, *(_QWORD *)(a2 + 136), 0LL, 0LL);
  if ( (_BYTE)v6 )
  {
    v23 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v2, 2LL, v23 - Clock);
  }
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 392));
  v12 = *(_QWORD *)(v5 + 408);
  v13 = v11;
  if ( v12 - 2 <= 1 )
    goto LABEL_21;
  if ( v12 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v12, 0LL);
  if ( *(_BYTE *)(v12 + 2) <= 0xBu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v12, 0xBuLL);
  if ( *(_BYTE *)(v12 + 1) )
  {
    if ( *(_BYTE *)(v12 + 1) != 1 )
      goto LABEL_21;
    v24 = v12 + 712;
    v25 = *(_DWORD *)(v12 + 768);
    v26 = (unsigned __int16)v25 >> 1;
    if ( v25 >> 17 < 0x3FFE && v26 == (v25 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v12 + 712));
      *(_DWORD *)(v24 + 56) &= 0x10001u;
      goto LABEL_21;
    }
    if ( v26 != 0 || (v25 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v12 + 712), 0);
      goto LABEL_21;
    }
LABEL_43:
    ndisBugCheckEx(0x1EuLL, 0LL, v12, 0xBuLL);
  }
  v14 = *(_QWORD *)(v12 + 8);
  if ( v14 )
  {
    v15 = *(_BYTE *)(v12 + 3);
    v16 = 0;
    if ( v15 )
    {
      while ( 1 )
      {
        v17 = (_BYTE *)(v14 + 2LL * v16);
        if ( *v17 == 11 )
        {
          v27 = v17[1];
          if ( v27 )
            break;
        }
        if ( ++v16 >= v15 )
          goto LABEL_20;
      }
      v17[1] = v27 - 1;
      goto LABEL_21;
    }
  }
LABEL_20:
  if ( !_bittestandreset((signed __int32 *)(v12 + 16), 0xBu) )
    goto LABEL_43;
LABEL_21:
  if ( (*(_WORD *)(v5 + 400))-- == 1 )
  {
    v19 = 1;
    if ( !*(_BYTE *)(v5 + 403) )
    {
      NdisFreeRefCount(*(_QWORD *)(v5 + 408));
      *(_QWORD *)(v5 + 408) = 1LL;
    }
  }
  else
  {
    v19 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 392), v13);
  if ( v19 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v20,
        20,
        23,
        (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
        v5);
    }
    v28 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v29 = ndisMiniDriverList;
    p_NextDriver = &ndisMiniDriverList;
    v31 = v28;
    if ( ndisMiniDriverList )
    {
      while ( v29 != (struct _NDIS_M_DRIVER_BLOCK *)v5 )
      {
        p_NextDriver = &v29->NextDriver;
        v29 = v29->NextDriver;
        if ( !v29 )
          goto LABEL_53;
      }
      v32 = ndisDriverObject;
      *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v5 + 8);
      ObfDereferenceObject(v32);
    }
LABEL_53:
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v37,
        20,
        24,
        (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
        v5);
    }
  }
}
