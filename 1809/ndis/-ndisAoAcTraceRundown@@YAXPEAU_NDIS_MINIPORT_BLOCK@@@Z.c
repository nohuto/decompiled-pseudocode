/*
 * XREFs of ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004EEEC
 * Callers:
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004F12C (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_DDD @ 0x1C0043B48 (WPP_SF_DDD.c)
 *     WPP_SF_Ld @ 0x1C004F76C (WPP_SF_Ld.c)
 *     WPP_SF_Zd @ 0x1C004F7B4 (WPP_SF_Zd.c)
 */

void __fastcall ndisAoAcTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  KIRQL v5; // bp
  int TempRefReason; // r8d
  _LIST_ENTRY *i; // rbx
  KIRQL v8; // bp
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  unsigned int Value; // [rsp+20h] [rbp-18h]

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( byte_1C00A0251 )
  {
    Value = AoAc->StopFlags.Value;
    WPP_SF_DDD(0x53u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, AoAc->ActiveState, AoAc->ActiveRef);
  }
  TempRefReason = AoAc->TempRefReason;
  if ( TempRefReason && byte_1C00A0251 )
    WPP_SF_D(0x54u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, TempRefReason);
  for ( i = AoAc->HandleList.Flink; i != &AoAc->HandleList; i = i->Flink )
  {
    if ( byte_1C00A0251 )
      WPP_SF_Ld(v4, v3, LODWORD(i[1].Flink), HIDWORD(i[1].Flink), Value);
  }
  KeReleaseSpinLock(&AoAc->Lock, v5);
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  OpenQueue = a1->OpenQueue;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 74590;
  while ( OpenQueue )
  {
    if ( OpenQueue->AoAcReferences && byte_1C00A0251 )
      WPP_SF_Zd(86LL, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, &OpenQueue->ProtocolHandle->Name);
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v8);
}
