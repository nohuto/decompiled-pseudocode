/*
 * XREFs of NdisCmOpenAddressFamilyComplete @ 0x1C0083BC0
 * Callers:
 *     NdisClOpenAddressFamilyEx @ 0x1C00829C0 (NdisClOpenAddressFamilyEx.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     NdisClNotifyCloseAddressFamilyComplete @ 0x1C0082940 (NdisClNotifyCloseAddressFamilyComplete.c)
 *     NdisCoRequestComplete @ 0x1C0085A30 (NdisCoRequestComplete.c)
 */

void __stdcall NdisCmOpenAddressFamilyComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE CallMgrAfContext)
{
  __int64 v3; // r14
  __int64 v5; // rbp
  KIRQL v8; // al
  KIRQL v9; // r12
  __int64 v10; // rcx
  NDIS_HANDLE v11; // r8
  NDIS_HANDLE v12; // rdx
  KIRQL v13; // al
  KSPIN_LOCK *v14; // rcx
  void *v15; // rbp
  unsigned int v16; // eax
  __int64 v17; // rcx
  NDIS_STATUS v18; // eax

  v3 = *((_QWORD *)NdisAfHandle + 2);
  v5 = *((_QWORD *)NdisAfHandle + 46);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  v9 = v8;
  *((_QWORD *)NdisAfHandle + 6) = CallMgrAfContext;
  if ( Status )
  {
    v10 = *((_QWORD *)NdisAfHandle + 5);
    if ( v10 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 376));
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniport(v3, 0x51u);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 376));
    ndisMDereferenceOpenLocked(v5, 0xFu);
  }
  else
  {
    *(_QWORD *)NdisAfHandle = *(_QWORD *)(v5 + 960);
    *(_QWORD *)(v5 + 960) = NdisAfHandle;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v9);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    v12 = NdisAfHandle;
    if ( Status )
      v12 = 0LL;
    (*((void (__fastcall **)(_QWORD, NDIS_HANDLE, _QWORD))NdisAfHandle + 31))(
      *((_QWORD *)NdisAfHandle + 47),
      v12,
      (unsigned int)Status);
  }
  else
  {
    v11 = NdisAfHandle;
    if ( Status )
      v11 = 0LL;
    (*((void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE))NdisAfHandle + 12))(
      (unsigned int)Status,
      *((_QWORD *)NdisAfHandle + 47),
      v11);
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisAfHandle + 48);
  *((_DWORD *)NdisAfHandle + 2) &= ~0x40000000u;
  v14 = (KSPIN_LOCK *)((char *)NdisAfHandle + 384);
  if ( *((_BYTE *)NdisAfHandle + 592) )
  {
    v15 = (void *)*((_QWORD *)NdisAfHandle + 73);
    *((_BYTE *)NdisAfHandle + 592) = 0;
    KeReleaseSpinLock(v14, v13);
    v16 = *((_DWORD *)NdisAfHandle + 99);
    if ( !Status )
    {
      v17 = *((_QWORD *)NdisAfHandle + 47);
      if ( v16 >= 6 )
        v18 = (*((__int64 (__fastcall **)(__int64))NdisAfHandle + 45))(v17);
      else
        v18 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *))NdisAfHandle + 10))(v17, 0LL, 0LL, v15);
      if ( v18 != 259 )
      {
        if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
          NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, v18);
        else
          NdisCoRequestComplete(v18, NdisAfHandle, 0LL, 0LL, *((PVOID *)NdisAfHandle + 73));
      }
      return;
    }
    if ( v16 >= 6 )
      NdisClNotifyCloseAddressFamilyComplete(NdisAfHandle, Status);
    else
      NdisCoRequestComplete(Status, NdisAfHandle, 0LL, 0LL, v15);
  }
  else
  {
    KeReleaseSpinLock(v14, v13);
  }
  if ( Status )
    ExFreePoolWithTag(NdisAfHandle, 0);
}
