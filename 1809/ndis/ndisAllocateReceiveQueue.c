/*
 * XREFs of ndisAllocateReceiveQueue @ 0x1C003AA90
 * Callers:
 *     ndisOidPreRcvFilterAllocateQueue @ 0x1C00E1EE0 (ndisOidPreRcvFilterAllocateQueue.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C001BC04 (ndisReferenceOpenByHandle.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     ndisAddReceiveQueueToList @ 0x1C003AA20 (ndisAddReceiveQueueToList.c)
 */

char __fastcall ndisAllocateReceiveQueue(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // rbx
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // r13
  char v8; // si
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // dx
  char v12; // cl
  char v13; // al
  char v14; // r14
  struct _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  PVOID PoolWithTag; // rax
  char v17; // cl
  KIRQL v18; // cl
  int v19; // edx
  __int64 v20; // rax
  int v21; // r8d
  _BYTE *v22; // r12
  unsigned int v23; // r9d
  unsigned int v24; // edx
  _BYTE *v25; // rax
  int v26; // ecx
  _BYTE *v27; // r14
  __int64 v28; // r10
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  _QWORD *v33; // rdx
  __int64 v34; // r8
  _QWORD *v35; // rax
  int v36; // eax
  unsigned int Size; // [rsp+30h] [rbp-68h]
  unsigned int Size_4; // [rsp+34h] [rbp-64h]
  __int64 v40; // [rsp+38h] [rbp-60h]
  char v41; // [rsp+A0h] [rbp+8h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+18h]
  int v43; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0LL;
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v5 = 0LL;
  v40 = 0LL;
  v43 = 0;
  v6 = *(_QWORD *)(v1 + 40);
  v8 = 1;
  v41 = 0;
  if ( (unsigned __int8)byte_1C00A0268 >= 4u )
    WPP_SF_q(0xEu, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v3);
  v9 = 1096;
  *(_DWORD *)(a1 + 40) = -1073741637;
  v10 = 1096LL;
  v11 = *(_WORD *)(v6 + 2);
  if ( v11 < 0x448u )
    v10 = *(unsigned __int16 *)(v6 + 2);
  if ( v10 >= *(unsigned int *)(v1 + 48) )
  {
    v9 = *(_DWORD *)(v1 + 48);
  }
  else if ( v11 < 0x448u )
  {
    v9 = *(unsigned __int16 *)(v6 + 2);
  }
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = v9;
  v12 = 2;
  if ( *(_DWORD *)(v6 + 8) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v13 = 0;
    v14 = 0;
    goto LABEL_61;
  }
  if ( ndisReferenceMiniport(v3) )
  {
    OidSourceHandle = (struct _NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v1);
    if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
    {
      v40 = (__int64)OidSourceHandle;
      v2 = (__int64)OidSourceHandle;
      if ( !ndisReferenceOpenByHandle(OidSourceHandle, 0xAu) )
      {
        *(_DWORD *)(a1 + 40) = -1073676286;
        v13 = 0;
LABEL_18:
        v14 = 1;
        goto LABEL_60;
      }
      v41 = 1;
    }
    if ( *(_DWORD *)(v6 + 8) == 1 && !v2 )
      goto LABEL_22;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
    v5 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_25:
      *(_DWORD *)(a1 + 40) = -1073741670;
      goto LABEL_23;
    }
    memset(PoolWithTag, 0, 0x4C8uLL);
    *(_DWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 64) = v3;
    *(_QWORD *)(v5 + 72) = v2;
    *(_QWORD *)(v5 + 40) = v5 + 32;
    *(_QWORD *)(v5 + 32) = v5 + 32;
    *(_QWORD *)(v5 + 96) = v5 + 88;
    *(_QWORD *)(v5 + 88) = v5 + 88;
    *(_DWORD *)(v5 + 80) = 1;
    memmove((void *)(v5 + 128), (const void *)v6, *(unsigned int *)(v1 + 64));
    v17 = 2;
    *(_WORD *)(v5 + 130) = *(_WORD *)(v1 + 64);
    if ( *(_BYTE *)(v5 + 129) < 2u )
      v17 = *(_BYTE *)(v5 + 129);
    *(_BYTE *)(v5 + 129) = v17;
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    NewIrql = v18;
    v19 = *(_DWORD *)(v3 + 3516);
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1864) = 2687451;
    if ( (unsigned int)(v19 + 1) > 0x3BCBAD )
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1864) = 0;
LABEL_30:
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v18);
      goto LABEL_25;
    }
    v20 = *(_QWORD *)(v3 + 3568);
    v21 = 0;
    if ( !v20 )
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v18);
LABEL_22:
      *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_23:
      v13 = v41;
      goto LABEL_18;
    }
    if ( v19 == *(_DWORD *)(v20 + 16) )
    {
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1864) = 0;
      goto LABEL_30;
    }
    v22 = *(_BYTE **)(v3 + 3504);
    v23 = *(_DWORD *)(v3 + 3512);
    Size = v23;
    if ( v22 && (v24 = 0, v23) )
    {
      v25 = *(_BYTE **)(v3 + 3504);
      v26 = 0;
      while ( *v25 == 0xFF )
      {
        v26 += 8;
        ++v24;
        ++v25;
        v43 = v26;
        if ( v24 >= v23 )
          goto LABEL_40;
      }
      v28 = v24;
      v29 = 1;
      v30 = (unsigned __int8)v22[v24];
      while ( (v30 & v29) != 0 )
      {
        v29 *= 2;
        if ( (unsigned int)++v21 >= 8 )
          goto LABEL_40;
      }
      v31 = v21 + v26;
      v22[v28] = v30 | v29;
      v43 = v31;
    }
    else
    {
LABEL_40:
      Size_4 = v23 + 64;
      v27 = ExAllocatePoolWithTag(NonPagedPoolNx, v23 + 64, 0x7571444Eu);
      if ( !v27 )
      {
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1864) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
        *(_DWORD *)(a1 + 40) = -1073741670;
        goto LABEL_42;
      }
      memset(&v27[Size], 0, 0x40uLL);
      if ( v22 )
      {
        memmove(v27, v22, Size);
        v27[Size] = 1;
        ExFreePoolWithTag(v22, 0);
        v31 = v43;
      }
      else
      {
        v31 = 1;
        *v27 = 3;
        v43 = 1;
      }
      *(_QWORD *)(v3 + 3504) = v27;
      v2 = v40;
      *(_DWORD *)(v3 + 3512) = Size_4;
    }
    *(_DWORD *)(v6 + 12) = v31;
    *(_DWORD *)(v5 + 140) = v31;
    *(_DWORD *)(v5 + 48) = v31;
    v32 = ndisAddReceiveQueueToList(v3, v5);
    *(_DWORD *)(a1 + 40) = v32;
    if ( !v32 )
    {
      if ( v2 )
      {
        v33 = (_QWORD *)(v2 + 736);
        v34 = *(_QWORD *)(v2 + 736);
        v35 = (_QWORD *)(v5 + 16);
        if ( *(_QWORD *)(v34 + 8) != v2 + 736 )
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v5 + 24) = v33;
        *(_QWORD *)(v34 + 8) = v35;
        *v33 = v35;
        ++*(_DWORD *)(v2 + 752);
      }
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
      *(_DWORD *)(v5 + 52) = 1;
      v13 = 0;
      v8 = 0;
      v14 = 0;
      goto LABEL_59;
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
LABEL_42:
    v13 = v41;
    v14 = 1;
LABEL_59:
    v4 = v43;
    goto LABEL_60;
  }
  *(_DWORD *)(a1 + 40) = -1073676286;
  v13 = 0;
  v14 = 0;
LABEL_60:
  v12 = 2;
LABEL_61:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v13 )
      ndisMDereferenceOpenUnlocked(v40, 10);
    if ( v14 )
      ndisDereferenceMiniport(v3, 0x45u);
    if ( v5 )
      ExFreePoolWithTag((PVOID)v5, 0);
  }
  else
  {
    v36 = *(_DWORD *)(v1 + 64);
    *(_DWORD *)(v1 + 60) = v36;
    *(_WORD *)(v6 + 2) = v36;
    if ( *(_BYTE *)(v6 + 1) < 2u )
      v12 = *(_BYTE *)(v6 + 1);
    *(_BYTE *)(v6 + 1) = v12;
  }
  if ( (unsigned __int8)byte_1C00A0268 >= 4u )
    WPP_SF_qdD(0xFu, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v3, *(_DWORD *)(a1 + 40), v4);
  return v8;
}
