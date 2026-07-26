/*
 * XREFs of ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007BCB4
 * Callers:
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5B8 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_LDD @ 0x1C007DD1C (WPP_RECORDER_SF_LDD.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C007DE50 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zd @ 0x1C007DF0C (WPP_RECORDER_SF_Zd.c)
 */

void __fastcall ndisAoAcTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  KIRQL v6; // r14
  _LIST_ENTRY *i; // rbx
  int v8; // edx
  KIRQL v9; // si
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  unsigned int AoAcReferences; // ecx
  int v12; // [rsp+20h] [rbp-38h]

  AoAc = a1->AoAc;
  v6 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 1;
    WPP_RECORDER_SF_LDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      2,
      81,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      AoAc->ActiveState,
      AoAc->ActiveRef,
      AoAc->StopFlags.Value);
  }
  if ( AoAc->TempRefReason && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 1;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      2,
      82,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      AoAc->TempRefReason);
  }
  for ( i = AoAc->HandleList.Flink; i != &AoAc->HandleList; i = i->Flink )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 8), v3, v4, v5, v12, (char)i[1].Flink, HIDWORD(i[1].Flink));
  }
  KeReleaseSpinLock(&AoAc->Lock, v6);
  v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  OpenQueue = a1->OpenQueue;
  a1->MiniportThread = KeGetCurrentThread();
  while ( OpenQueue )
  {
    AoAcReferences = OpenQueue->AoAcReferences;
    if ( AoAcReferences && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 1;
      WPP_RECORDER_SF_Zd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        2,
        84,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        (__int64)&OpenQueue->ProtocolHandle->Name,
        AoAcReferences);
    }
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v9);
}
