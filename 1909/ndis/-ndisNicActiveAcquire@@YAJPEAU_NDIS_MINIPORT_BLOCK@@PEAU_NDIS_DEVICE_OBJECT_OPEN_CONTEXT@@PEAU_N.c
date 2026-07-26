/*
 * XREFs of ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00BC184
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0015150 (WPP_RECORDER_SF_LqZ.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00BA8C0 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00BA9C4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BACB0 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BCDBC (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     McTemplateK0xqqq @ 0x1C00BE140 (McTemplateK0xqqq.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C00BE3F8 (WPP_RECORDER_SF_DDL.c)
 */

__int64 __fastcall ndisNicActiveAcquire(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        enum _NDIS_PM_COMPONENT_ID *a3,
        struct _IRP *a4)
{
  unsigned int v5; // edi
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v10; // al
  KIRQL v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  int ActiveRef; // r15d
  _LIST_ENTRY *p_ListEntry; // rdx
  _LIST_ENTRY *Blink; // r8
  unsigned int v18; // eax
  int v19; // edx
  char v21[8]; // [rsp+38h] [rbp-30h]

  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDL(*((_QWORD *)WPP_GLOBAL_Control + 8), *((unsigned __int16 *)a3 + 7), (_DWORD)a3, 12);
  AoAc = a1->AoAc;
  v10 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ++*((_DWORD *)a2 + 7);
  v11 = v10;
  ndisAoAcActiveRefIncrement(AoAc, a3[4]);
  if ( (unsigned int)(AoAc->TempRefReason - 3) <= 1 )
  {
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, 1);
    if ( KeCancelTimer(&AoAc->TempRefTimer.Timer) )
      ndisDereferenceMiniport((__int64)a1, 2u);
  }
  v14 = 0x346DC5D63886594BLL;
  if ( AoAc->TakeStartToRefTime )
  {
    AoAc->TakeStartToRefTime = 0;
    v13 = MEMORY[0xFFFFF78000000008] - AoAc->StartTime;
    v12 = v13 / 0x2710;
    if ( v13 / 0x2710 > ndisAoAcMaxStartToRefTime )
      ndisAoAcMaxStartToRefTime = v13 / 0x2710;
  }
  if ( AoAc->TakeWakeToRefTime )
  {
    AoAc->TakeWakeToRefTime = 0;
    v13 = MEMORY[0xFFFFF78000000014] - AoAc->LastWakeTime.QuadPart;
    v12 = (__int64)v13 / 10000;
    if ( (__int64)v13 / 10000 > ndisAoAcMaxWakeToRefTime )
      ndisAoAcMaxWakeToRefTime = (__int64)v13 / 10000;
  }
  ActiveRef = AoAc->ActiveRef;
  if ( (byte_1C00E8083 & 4) != 0 )
    McTemplateK0xqqq(
      v13,
      (unsigned int)&NicActiveAcquired,
      (_DWORD)a1 + 4008,
      *((_QWORD *)a3 + 1),
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      AoAc->ActiveRef);
  if ( AoAc->ActiveState == NdisNicActive || AoAc->StopFlags.Value )
  {
    KeReleaseSpinLock(&AoAc->Lock, v11);
  }
  else
  {
    if ( AoAc->ActiveRef == 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_LqZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        v14,
        0xDu,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        *((_DWORD *)a3 + 4),
        (char)a1,
        &a1->pAdapterInstanceName->Length);
    p_ListEntry = &a4->Tail.Overlay.ListEntry;
    a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    Blink = AoAc->PendingIrpList.Blink;
    if ( Blink->Flink != &AoAc->PendingIrpList )
      __fastfail(3u);
    p_ListEntry->Flink = &AoAc->PendingIrpList;
    a4->Tail.Overlay.ListEntry.Blink = Blink;
    Blink->Flink = p_ListEntry;
    AoAc->PendingIrpList.Blink = p_ListEntry;
    ++AoAc->PendingIrpListCount;
    KeReleaseSpinLock(&AoAc->Lock, v11);
    v18 = ndisRequestNicActive(a1, RunAsynchronous);
    v5 = v18;
    if ( v18 != 259 )
    {
      if ( v18 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0xEu,
          (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
          v18,
          a1);
      ndisAoAcCompleteQueuedIrps(a1, v5);
      v5 = 259;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v21 = v5;
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      0xEu,
      0xFu,
      (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
      (char)a1,
      ActiveRef,
      *(_QWORD *)v21);
  }
  return v5;
}
