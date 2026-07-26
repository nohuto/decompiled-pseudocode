/*
 * XREFs of ndisIfUpdateInterfaceOnAddDevice @ 0x1C0016028
 * Callers:
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AB90 (NdisDereferenceWithTag.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00BD698 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C4184 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     NdisAllocateRefCount @ 0x1C00C42B0 (NdisAllocateRefCount.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00E2894 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  char v4; // r15
  __int64 v5; // rdi
  ULONG_PTR RefCount; // r12
  KIRQL v7; // al
  KIRQL v8; // r13
  struct _NDIS_REFCOUNT_BLOCK *v9; // rcx
  unsigned __int16 v11; // ax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v2 = 0;
  v3 = a2;
  v4 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v5 = a1;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qq(175LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a2);
  if ( !*(_WORD *)(v5 + 8)
    || (RtlInitUnicodeString(&DestinationString, (PCWSTR)(v5 + 10)),
        RtlCompareUnicodeString(&DestinationString, *(PCUNICODE_STRING *)(v3 + 3888), 1u)) )
  {
    v4 = 1;
  }
  LOBYTE(a2) = 2;
  LOBYTE(a1) = 28;
  RefCount = NdisAllocateRefCount(a1, a2);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = v7;
  if ( *(_BYTE *)(v5 + 1403) )
  {
    v2 = -1073741823;
    KeReleaseSpinLock(&ndisIfListLock, v7);
    NdisDereferenceWithTag(RefCount, 0xFFu);
    NdisFreeRefCount(RefCount);
  }
  else
  {
    if ( v4 )
    {
      memset((void *)(v5 + 8), 0, 0x204uLL);
      v11 = 512;
      if ( **(_WORD **)(v3 + 3888) <= 0x200u )
        v11 = **(_WORD **)(v3 + 3888);
      *(_WORD *)(v5 + 8) = v11;
      if ( v11 )
        memmove((void *)(v5 + 10), *(const void **)(*(_QWORD *)(v3 + 3888) + 8LL), v11);
    }
    v9 = *(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 1440);
    *(_DWORD *)(v5 + 1192) = *(_DWORD *)(v3 + 4092);
    *(_QWORD *)(v5 + 1112) = 2LL;
    NdisReferenceWithTag(v9, 0xCu);
    ++*(_DWORD *)(v5 + 1304);
    *(_WORD *)(v5 + 1460) = 0;
    KeAcquireSpinLockAtDpcLevel(&ndisIfBlockMiniportLinkLock);
    *(_BYTE *)(v5 + 1403) = 1;
    *(_DWORD *)(v5 + 1404) = 1;
    *(_QWORD *)(v5 + 1416) = v3;
    *(_QWORD *)(v5 + 1448) = RefCount;
    *(_QWORD *)(v3 + 4072) = v5;
    *(_BYTE *)(v3 + 4064) = 1;
    KeReleaseSpinLockFromDpcLevel(&ndisIfBlockMiniportLinkLock);
    *(_DWORD *)(v3 + 4088) = *(_DWORD *)(v5 + 4);
    *(_QWORD *)(v3 + 4056) = *(_QWORD *)(v5 + 1312);
    *(_DWORD *)(v3 + 4096) = *(_DWORD *)(v5 + 1112);
    *(_DWORD *)(v3 + 4100) = 0;
    KeReleaseSpinLock(&ndisIfListLock, v8);
    if ( v4 )
    {
      ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)(v5 + 1312), 0x204u, 0x208u, (unsigned __int8 *)(v5 + 8));
      v14 = v5 + 8;
      v13 = 2LL;
      v15 = 0x400000204LL;
      ndisNsiNotifyClientInterfaceChange(v5, 0LL, &v13, 1LL);
    }
    v13 = 0LL;
    v14 = v5 + 1192;
    v15 = 0x1000000004LL;
    ndisNsiNotifyClientInterfaceChange(v5, 0LL, &v13, 0LL);
    ndisNsiSyncMiniportOperStatusNotification(v3);
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qqd(176LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v5, v3, v2);
  return v2;
}
