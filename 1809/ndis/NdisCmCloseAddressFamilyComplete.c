/*
 * XREFs of NdisCmCloseAddressFamilyComplete @ 0x1C011B880
 * Callers:
 *     NdisClCloseAddressFamily @ 0x1C011B020 (NdisClCloseAddressFamily.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017490 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceMiniportRef @ 0x1C005FA54 (ndisDereferenceMiniportRef.c)
 *     ndisDereferenceAf @ 0x1C011E818 (ndisDereferenceAf.c)
 */

void __stdcall NdisCmCloseAddressFamilyComplete(NDIS_STATUS Status, NDIS_HANDLE NdisAfHandle)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  KIRQL v6; // bp
  __int64 v7; // rcx
  _QWORD **v8; // rcx
  _QWORD *v9; // rdx

  v4 = *((_QWORD *)NdisAfHandle + 47);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
    (*((void (__fastcall **)(NDIS_STATUS, __int64))NdisAfHandle + 32))(Status, v4);
  else
    (*((void (__fastcall **)(NDIS_STATUS, __int64))NdisAfHandle + 13))(Status, v4);
  if ( !Status )
  {
    v5 = *((_QWORD *)NdisAfHandle + 2);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v5 + 1864) = 1573677;
    v7 = *((_QWORD *)NdisAfHandle + 5);
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 376));
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniportRef(v5, 0x51u);
    }
    v8 = (_QWORD **)(*((_QWORD *)NdisAfHandle + 46) + 1016LL);
    v9 = *v8;
    if ( *v8 )
    {
      while ( v9 != NdisAfHandle )
      {
        v8 = (_QWORD **)v9;
        v9 = (_QWORD *)*v9;
        if ( !v9 )
          goto LABEL_13;
      }
      *v8 = *(_QWORD **)NdisAfHandle;
    }
LABEL_13:
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)NdisAfHandle + 46) + 376LL));
    ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 46), 0xFu);
    *(_QWORD *)(v5 + 520) = 0LL;
    *(_DWORD *)(v5 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v6);
    ndisDereferenceAf(NdisAfHandle);
  }
}
