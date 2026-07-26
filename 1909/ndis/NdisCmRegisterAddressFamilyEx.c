/*
 * XREFs of NdisCmRegisterAddressFamilyEx @ 0x1C0083FC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F2C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisCreateNotifyQueue @ 0x1C01380B8 (ndisCreateNotifyQueue.c)
 */

NDIS_STATUS __stdcall NdisCmRegisterAddressFamilyEx(NDIS_HANDLE NdisBindingHandle, PCO_ADDRESS_FAMILY AddressFamily)
{
  PCO_ADDRESS_FAMILY v2; // r15
  __int64 v3; // rsi
  __int64 v5; // rbp
  KIRQL v6; // al
  KIRQL v7; // r14
  NDIS_STATUS NotifyQueue; // ebx
  __int64 **i; // rcx
  unsigned __int64 v10; // rdx
  _QWORD *PoolWithTag; // r14
  __int128 v12; // xmm1
  int v13; // edx
  KIRQL v15; // [rsp+90h] [rbp+8h]

  v2 = AddressFamily;
  v3 = *((_QWORD *)NdisBindingHandle + 2);
  v5 = *((_QWORD *)NdisBindingHandle + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(AddressFamily) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)AddressFamily,
      19,
      64,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      v3,
      v5,
      (char)NdisBindingHandle);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  v7 = v6;
  v15 = v6;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x20000u;
  if ( *(_BYTE *)(v5 + 632) == 0xA5 )
  {
    if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      NotifyQueue = -1073676286;
    }
    else
    {
      ndisMReferenceOpen((__int64)NdisBindingHandle, 0xDu);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      if ( (*(_DWORD *)(v3 + 120) & 0x20000) != 0 )
      {
        if ( *(_BYTE *)(v5 + 56) >= 5u )
        {
          for ( i = *(__int64 ***)(v3 + 512); i; i = (__int64 **)*i )
          {
            v10 = (unsigned __int64)i[2] - *(_QWORD *)&v2->AddressFamily;
            if ( !v10 )
              v10 = *((unsigned int *)i + 6) - (unsigned __int64)v2->MinorVersion;
            if ( !v10 )
            {
              NotifyQueue = -1073741823;
              goto LABEL_25;
            }
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6F63444Eu);
          if ( PoolWithTag )
          {
            NotifyQueue = ndisCreateNotifyQueue(v3, 0);
            if ( NotifyQueue )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
            }
            else
            {
              PoolWithTag[2] = *(_QWORD *)&v2->AddressFamily;
              *((_DWORD *)PoolWithTag + 6) = v2->MinorVersion;
              *(_OWORD *)(PoolWithTag + 21) = *(_OWORD *)(v5 + 632);
              *(_OWORD *)(PoolWithTag + 23) = *(_OWORD *)(v5 + 648);
              *(_OWORD *)(PoolWithTag + 25) = *(_OWORD *)(v5 + 664);
              *(_OWORD *)(PoolWithTag + 27) = *(_OWORD *)(v5 + 680);
              *(_OWORD *)(PoolWithTag + 29) = *(_OWORD *)(v5 + 696);
              *(_OWORD *)(PoolWithTag + 31) = *(_OWORD *)(v5 + 712);
              *(_OWORD *)(PoolWithTag + 33) = *(_OWORD *)(v5 + 728);
              *(_OWORD *)(PoolWithTag + 35) = *(_OWORD *)(v5 + 744);
              v12 = *(_OWORD *)(v5 + 760);
              PoolWithTag[1] = NdisBindingHandle;
              *(_OWORD *)(PoolWithTag + 37) = v12;
              *PoolWithTag = *(_QWORD *)(v3 + 512);
              *((_DWORD *)PoolWithTag + 78) = 6;
              *(_QWORD *)(v3 + 512) = PoolWithTag;
              *((_QWORD *)NdisBindingHandle + 123) = *(_QWORD *)(v5 + 640);
              *((_QWORD *)NdisBindingHandle + 124) = *(_QWORD *)(v5 + 648);
              *((_QWORD *)NdisBindingHandle + 125) = *(_QWORD *)(v5 + 728);
              *((_QWORD *)NdisBindingHandle + 126) = *(_QWORD *)(v5 + 736);
              *((_QWORD *)NdisBindingHandle + 136) = *(_QWORD *)(v5 + 760);
              *((_QWORD *)NdisBindingHandle + 137) = *(_QWORD *)(v5 + 752);
            }
          }
          else
          {
            NotifyQueue = -1073741670;
          }
          v7 = v15;
        }
        else
        {
          NotifyQueue = -1073676284;
        }
      }
      else
      {
        NotifyQueue = -1073676283;
      }
LABEL_25:
      ndisMDereferenceOpenLocked((__int64)NdisBindingHandle, 0xDu);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
    NotifyQueue = -1073676283;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v7);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      0x13u,
      0x41u,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      v3,
      v5,
      (char)NdisBindingHandle,
      NotifyQueue);
  return NotifyQueue;
}
