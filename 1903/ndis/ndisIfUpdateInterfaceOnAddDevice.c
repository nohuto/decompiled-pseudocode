/*
 * XREFs of ndisIfUpdateInterfaceOnAddDevice @ 0x1C003DAF8
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     NdisAllocateRefCount @ 0x1C00252F0 (NdisAllocateRefCount.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     NdisFreeRefCount @ 0x1C00C7B10 (NdisFreeRefCount.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00FF438 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C011423C (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  char v4; // r15
  ULONG_PTR RefCount; // r12
  KIRQL v7; // al
  struct _NDIS_REFCOUNT_BLOCK *v8; // rcx
  int v9; // edx
  unsigned __int16 v11; // ax
  char v12; // [rsp+30h] [rbp-40h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+64h] [rbp-Ch]
  KIRQL NewIrql; // [rsp+A0h] [rbp+30h]

  v2 = 0;
  v3 = a2;
  v4 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      176,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      a1,
      v12);
  }
  if ( !*(_WORD *)(a1 + 8)
    || (RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 10)),
        RtlCompareUnicodeString(&DestinationString, *(PCUNICODE_STRING *)(v3 + 3856), 1u)) )
  {
    v4 = 1;
  }
  RefCount = NdisAllocateRefCount(0x1Cu, 2);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NewIrql = v7;
  if ( *(_BYTE *)(a1 + 1395) )
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
      memset((void *)(a1 + 8), 0, 0x204uLL);
      v11 = 512;
      if ( **(_WORD **)(v3 + 3856) <= 0x200u )
        v11 = **(_WORD **)(v3 + 3856);
      *(_WORD *)(a1 + 8) = v11;
      if ( v11 )
        memmove((void *)(a1 + 10), *(const void **)(*(_QWORD *)(v3 + 3856) + 8LL), v11);
    }
    v8 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 1432);
    *(_DWORD *)(a1 + 1192) = *(_DWORD *)(v3 + 4060);
    *(_QWORD *)(a1 + 1112) = 2LL;
    NdisReferenceWithTag(v8, 0xCu);
    ++*(_DWORD *)(a1 + 1304);
    *(_WORD *)(a1 + 1452) = 0;
    KeAcquireSpinLockAtDpcLevel(&ndisIfBlockMiniportLinkLock);
    *(_BYTE *)(a1 + 1395) = 1;
    *(_DWORD *)(a1 + 1396) = 1;
    *(_QWORD *)(a1 + 1408) = v3;
    *(_QWORD *)(a1 + 1440) = RefCount;
    *(_QWORD *)(v3 + 4040) = a1;
    *(_BYTE *)(v3 + 4032) = 1;
    KeReleaseSpinLockFromDpcLevel(&ndisIfBlockMiniportLinkLock);
    *(_DWORD *)(v3 + 4056) = *(_DWORD *)(a1 + 4);
    *(_QWORD *)(v3 + 4024) = *(_QWORD *)(a1 + 1312);
    *(_DWORD *)(v3 + 4064) = *(_DWORD *)(a1 + 1112);
    *(_DWORD *)(v3 + 4068) = 0;
    KeReleaseSpinLock(&ndisIfListLock, NewIrql);
    if ( v4 )
    {
      ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)(a1 + 1312), 0x204u, 0x208u, (unsigned __int8 *)(a1 + 8));
      v14 = 2LL;
      v15 = a1 + 8;
      v16 = 516;
      v17 = 4;
      ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v14);
    }
    v14 = 0LL;
    v15 = a1 + 1192;
    v16 = 4;
    v17 = 16;
    ndisNsiNotifyClientInterfaceChange(a1, 0LL, &v14);
    ndisNsiSyncMiniportOperStatusNotification(v3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      22,
      177,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      a1,
      v3,
      v2);
  }
  return v2;
}
