/*
 * XREFs of ndisFOidRequestCompleteInternal @ 0x1C0003030
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0090B40 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisCancelOidRequestOnFilter @ 0x1C0069F84 (ndisCancelOidRequestOnFilter.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C77F8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7978 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7B10 (NdisFreeRefCount.c)
 */

void __fastcall ndisFOidRequestCompleteInternal(_QWORD *Parameter)
{
  __int64 v1; // rax
  char *v2; // rdi
  int v4; // edx
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *v6; // rcx
  KIRQL v7; // bl
  KIRQL v8; // al
  KIRQL v9; // al
  ULONG_PTR v10; // r8
  KIRQL v11; // bl
  __int64 v12; // r10
  unsigned __int8 v13; // r9
  unsigned __int8 v14; // al
  _BYTE *v15; // rdx
  bool v16; // zf
  char v17; // cl
  ULONG_PTR v18; // rsi
  unsigned int v19; // edx
  int v20; // ecx
  _QWORD v21[5]; // [rsp+20h] [rbp-38h] BYREF
  int v22; // [rsp+48h] [rbp-10h]
  int v23; // [rsp+4Ch] [rbp-Ch]

  v1 = Parameter[22];
  v2 = (char *)(Parameter + 39);
  v4 = *(_DWORD *)(v1 + 80);
  v21[0] = 0LL;
  v21[1] = 0LL;
  v21[3] = 0LL;
  v23 = 0;
  v21[2] = Parameter;
  v21[4] = v1;
  v22 = v4;
  v5 = KeAcquireSpinLockRaiseToDpc(Parameter + 39);
  v6 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v2 + 2);
  ++*((_WORD *)v2 + 4);
  v7 = v5;
  NdisReferenceWithTag(v6);
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
  ndisOidRequestComplete(v21);
  v8 = KeAcquireSpinLockRaiseToDpc(Parameter + 18);
  Parameter[19] = KeGetCurrentThread();
  if ( (_QWORD *)Parameter[20] != Parameter + 20 )
  {
    Parameter[19] = 0LL;
    KeReleaseSpinLock(Parameter + 18, v8);
    if ( (unsigned int)ndisQueueRequestWorkItem((char)Parameter, 0, 5) != 259 )
      ndisCancelOidRequestOnFilter((char)Parameter);
    v8 = KeAcquireSpinLockRaiseToDpc(Parameter + 18);
  }
  Parameter[19] = 0LL;
  KeReleaseSpinLock(Parameter + 18, v8);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  v10 = *((_QWORD *)v2 + 2);
  v11 = v9;
  if ( v10 - 2 <= 1 )
    goto LABEL_11;
  if ( v10 <= 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v10, 0LL);
  if ( *(_BYTE *)(v10 + 2) <= 0x13u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v10, 0x13uLL);
  if ( *(_BYTE *)(v10 + 1) )
  {
    if ( *(_BYTE *)(v10 + 1) != 1 )
      goto LABEL_11;
    v18 = v10 + 1224;
    v19 = *(_DWORD *)(v10 + 1280);
    v20 = (unsigned __int16)v19 >> 1;
    if ( v19 >> 17 < 0x3FFE && v20 == (v19 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v10 + 1224));
      *(_DWORD *)(v18 + 56) &= 0x10001u;
      goto LABEL_11;
    }
    if ( v20 != 0 || (v19 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 1224), 0);
      goto LABEL_11;
    }
    goto LABEL_26;
  }
  v12 = *(_QWORD *)(v10 + 8);
  if ( !v12 || (v13 = *(_BYTE *)(v10 + 3), v14 = 0, !v13) )
  {
LABEL_10:
    if ( _bittestandreset((signed __int32 *)(v10 + 16), 0x13u) )
      goto LABEL_11;
LABEL_26:
    ndisBugCheckEx(0x1EuLL, 0LL, v10, 0x13uLL);
  }
  while ( 1 )
  {
    v15 = (_BYTE *)(v12 + 2LL * v14);
    if ( *v15 == 19 )
    {
      v17 = v15[1];
      if ( v17 )
        break;
    }
    if ( ++v14 >= v13 )
      goto LABEL_10;
  }
  v15[1] = v17 - 1;
LABEL_11:
  v16 = (*((_WORD *)v2 + 4))-- == 1;
  if ( v16 && !v2[11] )
  {
    NdisFreeRefCount(*((_QWORD *)v2 + 2));
    *((_QWORD *)v2 + 2) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v11);
}
