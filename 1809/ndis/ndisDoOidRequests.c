/*
 * XREFs of ndisDoOidRequests @ 0x1C0020D80
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005C6F4 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *P)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  ULONG_PTR v4; // r8
  KIRQL v5; // r14
  __int64 v6; // rcx
  unsigned __int8 v7; // r10
  unsigned __int8 v8; // dl
  bool v9; // zf
  char v10; // al
  KIRQL v11; // al
  KIRQL v12; // bl
  ULONG_PTR v13; // rdi
  unsigned int v14; // edx
  int v15; // ecx

  v1 = P[7];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(23LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, P, v1);
  if ( *(_BYTE *)v1 == 17 )
  {
    ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1);
    ndisDereferenceMiniport(v1, 0x47u);
    goto LABEL_19;
  }
  if ( *(_BYTE *)v1 != 5 )
    goto LABEL_19;
  if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal, (PVOID)v1, 0x4CCCuLL, 0, 0LL) < 0 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
    *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
    v12 = v11;
    *(_DWORD *)(v1 + 160) = 2297817;
    *(_BYTE *)(v1 + 240) = 1;
    ndisQueueStackExpansionFallbackWorkItem(v1);
    *(_QWORD *)(v1 + 152) = 0LL;
    *(_DWORD *)(v1 + 160) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v12);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 320));
  v4 = *(_QWORD *)(v1 + 336);
  v5 = v3;
  if ( v4 - 2 <= 1 )
  {
    v4 = 0LL;
  }
  else if ( v4 < 2 )
  {
    ndisBugCheckEx(0x1EuLL, 3uLL, v4, 0LL);
  }
  if ( !v4 )
    goto LABEL_17;
  if ( *(_BYTE *)(v4 + 2) <= 0xCu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v4, 0xCuLL);
  if ( *(_BYTE *)(v4 + 1) )
  {
    if ( *(_BYTE *)(v4 + 1) != 1 )
      goto LABEL_17;
    v13 = v4 + 776;
    v14 = *(_DWORD *)(v4 + 832);
    v15 = (unsigned __int16)v14 >> 1;
    if ( v14 >> 17 < 0x3FFE && v15 == (v14 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v4 + 776));
      *(_DWORD *)(v13 + 56) &= 0x10001u;
      goto LABEL_17;
    }
    if ( v15 != 0 || (v14 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v4 + 776), 0);
      goto LABEL_17;
    }
LABEL_35:
    ndisBugCheckEx(0x1EuLL, 0LL, v4, 0xCuLL);
  }
  v6 = *(_QWORD *)(v4 + 8);
  if ( v6 )
  {
    v7 = *(_BYTE *)(v4 + 3);
    v8 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v6 + 2LL * v8) == 12 )
        {
          v10 = *(_BYTE *)(v6 + 2LL * v8 + 1);
          if ( v10 )
            break;
        }
        if ( ++v8 >= v7 )
          goto LABEL_16;
      }
      *(_BYTE *)(v6 + 2LL * v8 + 1) = v10 - 1;
      goto LABEL_17;
    }
  }
LABEL_16:
  if ( !_bittestandreset((signed __int32 *)(v4 + 16), 0xCu) )
    goto LABEL_35;
LABEL_17:
  v9 = (*(_WORD *)(v1 + 328))-- == 1;
  if ( v9 && !*(_BYTE *)(v1 + 331) )
  {
    NdisFreeRefCount(*(_QWORD *)(v1 + 336));
    *(_QWORD *)(v1 + 336) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 320), v5);
LABEL_19:
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(24LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, 0LL, v1);
}
