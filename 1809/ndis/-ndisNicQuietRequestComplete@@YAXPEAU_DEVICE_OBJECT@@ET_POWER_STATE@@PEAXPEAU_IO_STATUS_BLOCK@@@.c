/*
 * XREFs of ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0078A90
 * Callers:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007E874 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisNicQuietRequestComplete(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        union _POWER_STATE a3,
        struct _NDIS_MINIPORT_BLOCK *a4,
        struct _IO_STATUS_BLOCK *a5)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  int v7; // ebp
  int Status; // esi
  KIRQL v9; // r14
  _NDIS_MINIPORT_AOAC *v10; // rbx

  AoAc = a4->AoAc;
  v7 = a4->Flags & 0x80;
  if ( v7 )
    Status = 0;
  else
    Status = a5->Status;
  v9 = KeAcquireSpinLockRaiseToDpc(&a4->AoAc->Lock);
  if ( v7 )
  {
    if ( AoAc->ActiveState == NdisNicSuspending )
      AoAc->ActiveState = NdisNicQuiet;
  }
  else
  {
    AoAc->ActiveState = ((Status >> 31) & 2) + 2;
    KeSetEvent(&AoAc->PowerSuspendCompleteEvent, 0, 0);
  }
  if ( AoAc->CurrentCsResiliencyStartTime )
  {
    AoAc->TotalCsResiliencyTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentCsResiliencyStartTime;
    AoAc->CurrentCsResiliencyStartTime = 0LL;
  }
  KeReleaseSpinLock(&AoAc->Lock, v9);
  if ( Status >= 0 )
  {
    if ( (unsigned __int8)byte_1C00A0258 >= 4u )
      WPP_SF_qZ(0x28u, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, (__int64)a4, &a4->pAdapterInstanceName->Length);
  }
  else
  {
    v10 = a4->AoAc;
    NdisTraceLoggingUnexpectedAoAcError(a4, 0x8D2u, Status);
    v10->LastUnexpectedFailureLine[1] = v10->LastUnexpectedFailureLine[0];
    v10->LastUnexpectedFailureLine[0] = 2258;
    if ( (unsigned __int8)byte_1C00A025D >= 2u )
      WPP_SF_dq(0x27u, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, Status, a4);
  }
}
