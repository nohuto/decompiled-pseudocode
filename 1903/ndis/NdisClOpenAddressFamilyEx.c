/*
 * XREFs of NdisClOpenAddressFamilyEx @ 0x1C00829C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C0083BC0 (NdisCmOpenAddressFamilyComplete.c)
 */

NDIS_STATUS __stdcall NdisClOpenAddressFamilyEx(
        NDIS_HANDLE NdisBindingHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        NDIS_HANDLE ClientAfContext,
        PNDIS_HANDLE NdisAfHandle)
{
  __int64 v4; // rbp
  char v6; // r13
  __int64 v7; // rsi
  char v8; // r15
  __int64 v9; // rdi
  KIRQL v10; // al
  KIRQL v11; // r12
  NDIS_STATUS v12; // edi
  KIRQL v13; // r13
  __int64 *v14; // rdi
  char *PoolWithTag; // rax
  char *v16; // rbx
  bool v17; // zf
  KIRQL v18; // al
  __int64 (__fastcall *v19)(__int64, PCO_ADDRESS_FAMILY, char *, char *); // rax
  __int64 v20; // rcx
  NDIS_STATUS v21; // eax
  KIRQL v22; // al
  KIRQL v23; // bl
  KIRQL v24; // al
  KIRQL v25; // bl
  __int64 v27; // [rsp+30h] [rbp-58h]
  char v28; // [rsp+90h] [rbp+8h]
  char v31; // [rsp+A8h] [rbp+20h]

  v4 = 0LL;
  *NdisAfHandle = 0LL;
  v6 = 0;
  v7 = *((_QWORD *)NdisBindingHandle + 2);
  v8 = 0;
  v9 = *((_QWORD *)NdisBindingHandle + 3);
  v31 = 0;
  v28 = 0;
  ndisReferencePackage((__int64)&ndisPkgs);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 29);
  v11 = v10;
  *((_DWORD *)NdisBindingHandle + 56) |= 0x40000u;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v10);
    v12 = -1073676286;
    goto LABEL_34;
  }
  ndisMReferenceOpen((__int64)NdisBindingHandle, 0xFu);
  v8 = 1;
  _InterlockedAdd((volatile signed __int32 *)NdisBindingHandle + 94, 1u);
  KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v11);
  if ( *(_BYTE *)(v7 + 32) >= 5u
    && (*(_DWORD *)(v7 + 120) & 0x20000) != 0
    && *(_BYTE *)(v9 + 56) >= 6u
    && (v27 = v9 + 472, *(_BYTE *)(v9 + 472) == 0xA6) )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    v14 = *(__int64 **)(v7 + 512);
    *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
    if ( !v14 )
    {
LABEL_10:
      *(_QWORD *)(v7 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
      v12 = -1073741823;
      v6 = 0;
      goto LABEL_34;
    }
    while ( *((_DWORD *)v14 + 4) != AddressFamily->AddressFamily )
    {
      v14 = (__int64 *)*v14;
      if ( !v14 )
        goto LABEL_10;
    }
    v4 = v14[1];
    if ( v4 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 232));
      if ( (*(_DWORD *)(v4 + 224) & 0x18000) != 0 )
      {
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 232));
        *(_QWORD *)(v7 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
        v12 = -1073676286;
LABEL_14:
        v6 = v28;
        goto LABEL_34;
      }
      ndisMReferenceOpen(v4, 0x10u);
      _InterlockedAdd((volatile signed __int32 *)(v4 + 376), 1u);
      v31 = 1;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 232));
    }
    else
    {
      if ( (*(_DWORD *)(v7 + 124) & 0x4000) != 0 )
      {
        *(_QWORD *)(v7 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
        v12 = -1073741823;
        goto LABEL_14;
      }
      ndisReferenceMiniportNoCheck(v7, 0x51u);
      v28 = 1;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x258uLL, 0x6F63444Eu);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_QWORD *)(v7 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
      v12 = -1073741670;
      goto LABEL_14;
    }
    memset(PoolWithTag, 0, 0x258uLL);
    *((_DWORD *)v16 + 3) = 1;
    v17 = v14[1] == 0;
    *((_QWORD *)v16 + 2) = v7;
    *((_QWORD *)v16 + 46) = NdisBindingHandle;
    *((_DWORD *)v16 + 2) = v17;
    v4 = v14[1];
    *((_QWORD *)v16 + 5) = v4;
    *((_QWORD *)v16 + 47) = ClientAfContext;
    *((_DWORD *)v16 + 98) = *((_DWORD *)v14 + 78);
    *((_DWORD *)v16 + 99) = 6;
    *(_QWORD *)(v7 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v13);
    KeInitializeSpinLock((PKSPIN_LOCK)v16 + 48);
    if ( *((_DWORD *)v16 + 98) >= 6u )
      *((_QWORD *)v16 + 4) = v14 + 21;
    else
      *((_QWORD *)v16 + 3) = v14 + 4;
    *((_OWORD *)v16 + 13) = *(_OWORD *)v27;
    *((_OWORD *)v16 + 14) = *(_OWORD *)(v27 + 16);
    *((_OWORD *)v16 + 15) = *(_OWORD *)(v27 + 32);
    *((_OWORD *)v16 + 16) = *(_OWORD *)(v27 + 48);
    *((_OWORD *)v16 + 17) = *(_OWORD *)(v27 + 64);
    *((_OWORD *)v16 + 18) = *(_OWORD *)(v27 + 80);
    *((_OWORD *)v16 + 19) = *(_OWORD *)(v27 + 96);
    *((_OWORD *)v16 + 20) = *(_OWORD *)(v27 + 112);
    *((_OWORD *)v16 + 21) = *(_OWORD *)(v27 + 128);
    *((_OWORD *)v16 + 22) = *(_OWORD *)(v27 + 144);
    *((_QWORD *)NdisBindingHandle + 123) = *(_QWORD *)(v27 + 8);
    *((_QWORD *)NdisBindingHandle + 124) = *(_QWORD *)(v27 + 16);
    *((_QWORD *)NdisBindingHandle + 136) = *(_QWORD *)(v27 + 32);
    *((_QWORD *)NdisBindingHandle + 137) = *(_QWORD *)(v27 + 24);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16 + 48);
    *((_DWORD *)v16 + 2) |= 0x40000000u;
    KeReleaseSpinLock((PKSPIN_LOCK)v16 + 48, v18);
    if ( *((_DWORD *)v14 + 78) >= 6u )
      v19 = (__int64 (__fastcall *)(__int64, PCO_ADDRESS_FAMILY, char *, char *))v14[24];
    else
      v19 = (__int64 (__fastcall *)(__int64, PCO_ADDRESS_FAMILY, char *, char *))v14[7];
    if ( v4 )
      v20 = *(_QWORD *)(v4 + 32);
    else
      v20 = *(_QWORD *)(v7 + 24);
    v21 = v19(v20, AddressFamily, v16, v16 + 48);
    v12 = v21;
    if ( v21 != 259 )
    {
      NdisCmOpenAddressFamilyComplete(v21, v16, *((NDIS_HANDLE *)v16 + 6));
      v12 = 259;
    }
    v6 = 0;
    v31 = 0;
    v8 = 0;
  }
  else
  {
    v12 = -1073676284;
  }
LABEL_34:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v8 )
  {
    v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
    v23 = v22;
    _InterlockedDecrement((volatile signed __int32 *)NdisBindingHandle + 94);
    ndisMDereferenceOpenLocked((__int64)NdisBindingHandle, 0xFu);
    *(_QWORD *)(v7 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v23);
  }
  if ( v4 && v31 )
  {
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
    *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 376));
    v25 = v24;
    ndisMDereferenceOpenLocked(v4, 0x10u);
    *(_QWORD *)(v7 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v25);
  }
  if ( v6 )
    ndisDereferenceMiniport(v7, 0x51u);
  return v12;
}
