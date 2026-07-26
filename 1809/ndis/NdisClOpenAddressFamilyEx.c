/*
 * XREFs of NdisClOpenAddressFamilyEx @ 0x1C0052C10
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017490 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C011C030 (NdisCmOpenAddressFamilyComplete.c)
 */

NDIS_STATUS __stdcall NdisClOpenAddressFamilyEx(
        NDIS_HANDLE NdisBindingHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        NDIS_HANDLE ClientAfContext,
        PNDIS_HANDLE NdisAfHandle)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  char v7; // r15
  __int64 v8; // r13
  KIRQL v9; // al
  KIRQL v10; // si
  NDIS_STATUS v11; // esi
  KIRQL v12; // r13
  __int64 *v13; // rsi
  char v14; // r13
  char *PoolWithTag; // rax
  char *v16; // rbx
  bool v17; // zf
  KIRQL v18; // al
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64, PCO_ADDRESS_FAMILY, char *, char *); // rax
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
  v6 = *((_QWORD *)NdisBindingHandle + 2);
  v7 = 0;
  v8 = *((_QWORD *)NdisBindingHandle + 3);
  v31 = 0;
  v28 = 0;
  ndisReferencePackage(&ndisPkgs);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 29);
  v10 = v9;
  *((_DWORD *)NdisBindingHandle + 56) |= 0x40000u;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v9);
    v11 = -1073676286;
LABEL_37:
    v14 = 0;
    goto LABEL_38;
  }
  ndisMReferenceOpen((__int64)NdisBindingHandle, 0xFu);
  v7 = 1;
  _InterlockedAdd((volatile signed __int32 *)NdisBindingHandle + 94, 1u);
  KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 29, v10);
  if ( *(_BYTE *)(v6 + 32) < 5u
    || (*(_DWORD *)(v6 + 120) & 0x20000) == 0
    || *(_BYTE *)(v8 + 56) < 6u
    || (v27 = v8 + 472, *(_BYTE *)(v8 + 472) != 0xA6) )
  {
    v11 = -1073676284;
    goto LABEL_37;
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
  v13 = *(__int64 **)(v6 + 512);
  *(_QWORD *)(v6 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v6 + 1864) = 1579145;
  if ( !v13 )
  {
LABEL_10:
    *(_QWORD *)(v6 + 520) = 0LL;
    *(_DWORD *)(v6 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v12);
    v11 = -1073741823;
    goto LABEL_37;
  }
  while ( *((_DWORD *)v13 + 4) != AddressFamily->AddressFamily )
  {
    v13 = (__int64 *)*v13;
    if ( !v13 )
      goto LABEL_10;
  }
  v4 = v13[1];
  if ( v4 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 232));
    if ( (*(_DWORD *)(v4 + 224) & 0x18000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 232));
      *(_QWORD *)(v6 + 520) = 0LL;
      *(_DWORD *)(v6 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v12);
      v11 = -1073676286;
LABEL_14:
      v14 = v28;
      goto LABEL_38;
    }
    ndisMReferenceOpen(v4, 0x10u);
    _InterlockedAdd((volatile signed __int32 *)(v4 + 376), 1u);
    v31 = 1;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 232));
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 124) & 0x4000) != 0 )
    {
      *(_QWORD *)(v6 + 520) = 0LL;
      *(_DWORD *)(v6 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v12);
      v11 = -1073741823;
      goto LABEL_14;
    }
    ndisReferenceMiniportNoCheck(v6, 0x51u);
    v28 = 1;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x258uLL, 0x6F63444Eu);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_QWORD *)(v6 + 520) = 0LL;
    *(_DWORD *)(v6 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v12);
    v11 = -1073741670;
    goto LABEL_14;
  }
  memset(PoolWithTag, 0, 0x258uLL);
  *((_DWORD *)v16 + 3) = 1;
  v17 = v13[1] == 0;
  *((_QWORD *)v16 + 2) = v6;
  *((_QWORD *)v16 + 46) = NdisBindingHandle;
  *((_DWORD *)v16 + 2) = v17;
  v4 = v13[1];
  *((_QWORD *)v16 + 5) = v4;
  *((_QWORD *)v16 + 47) = ClientAfContext;
  *((_DWORD *)v16 + 98) = *((_DWORD *)v13 + 78);
  *((_DWORD *)v16 + 99) = 6;
  *(_QWORD *)(v6 + 520) = 0LL;
  *(_DWORD *)(v6 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v12);
  KeInitializeSpinLock((PKSPIN_LOCK)v16 + 48);
  if ( *((_DWORD *)v16 + 98) >= 6u )
    *((_QWORD *)v16 + 4) = v13 + 21;
  else
    *((_QWORD *)v16 + 3) = v13 + 4;
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
  *((_QWORD *)NdisBindingHandle + 130) = *(_QWORD *)(v27 + 8);
  *((_QWORD *)NdisBindingHandle + 131) = *(_QWORD *)(v27 + 16);
  *((_QWORD *)NdisBindingHandle + 143) = *(_QWORD *)(v27 + 32);
  *((_QWORD *)NdisBindingHandle + 144) = *(_QWORD *)(v27 + 24);
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16 + 48);
  *((_DWORD *)v16 + 2) |= 0x40000000u;
  KeReleaseSpinLock((PKSPIN_LOCK)v16 + 48, v18);
  if ( *((_DWORD *)v13 + 78) >= 6u )
  {
    if ( v4 )
      v19 = *(_QWORD *)(v4 + 32);
    else
      v19 = *(_QWORD *)(v6 + 24);
    v20 = (__int64 (__fastcall *)(__int64, PCO_ADDRESS_FAMILY, char *, char *))v13[24];
  }
  else
  {
    if ( v4 )
      v19 = *(_QWORD *)(v4 + 32);
    else
      v19 = *(_QWORD *)(v6 + 24);
    v20 = (__int64 (__fastcall *)(__int64, PCO_ADDRESS_FAMILY, char *, char *))v13[7];
  }
  v21 = v20(v19, AddressFamily, v16, v16 + 48);
  v11 = v21;
  if ( v21 != 259 )
  {
    NdisCmOpenAddressFamilyComplete(v21, v16, *((NDIS_HANDLE *)v16 + 6));
    v11 = 259;
  }
  v14 = 0;
  v31 = 0;
  v7 = 0;
LABEL_38:
  ndisDereferencePackage(&ndisPkgs);
  if ( v7 )
  {
    v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
    *(_QWORD *)(v6 + 520) = KeGetCurrentThread();
    v23 = v22;
    *(_DWORD *)(v6 + 1864) = 1579317;
    _InterlockedDecrement((volatile signed __int32 *)NdisBindingHandle + 94);
    ndisMDereferenceOpenLocked((__int64)NdisBindingHandle, 0xFu);
    *(_QWORD *)(v6 + 520) = 0LL;
    *(_DWORD *)(v6 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v23);
  }
  if ( v4 && v31 )
  {
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
    *(_QWORD *)(v6 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v6 + 1864) = 1579325;
    v25 = v24;
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 376));
    ndisMDereferenceOpenLocked(v4, 0x10u);
    *(_QWORD *)(v6 + 520) = 0LL;
    *(_DWORD *)(v6 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v25);
  }
  if ( v14 )
    ndisDereferenceMiniport(v6, 0x51u);
  return v11;
}
