/*
 * XREFs of ?ndisGetSetBusConfigSpace@@YAKPEAU_NDIS_MINIPORT_BLOCK@@KPEAXKKE@Z @ 0x1C009FDE4
 * Callers:
 *     NdisReadPciSlotInformation @ 0x1C00A0060 (NdisReadPciSlotInformation.c)
 *     NdisReadPcmciaAttributeMemory @ 0x1C00A0130 (NdisReadPcmciaAttributeMemory.c)
 *     NdisWritePciSlotInformation @ 0x1C00A0210 (NdisWritePciSlotInformation.c)
 *     NdisWritePcmciaAttributeMemory @ 0x1C00A02E0 (NdisWritePcmciaAttributeMemory.c)
 *     NdisImmediateReadPciSlotInformation @ 0x1C013AE60 (NdisImmediateReadPciSlotInformation.c)
 *     NdisImmediateWritePciSlotInformation @ 0x1C013AF30 (NdisImmediateWritePciSlotInformation.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisGetSetBusConfigSpace(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v8; // r14d
  unsigned int v10; // edi
  unsigned int (__fastcall *SetBusData)(void *, unsigned int, void *, unsigned int, unsigned int); // rax
  void *BusDataContext; // rcx

  v8 = a2;
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      7,
      24,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)a1);
  }
  if ( a6 && (a1->DriverVerifyFlags & 0x40) != 0 || (a1->DriverVerifyFlags & 0x80u) != 0 )
    return 0LL;
  SetBusData = a1->SetBusData;
  if ( SetBusData )
  {
    BusDataContext = a1->BusDataContext;
    if ( BusDataContext )
    {
      if ( a6 )
        SetBusData = a1->GetBusData;
      v10 = SetBusData(BusDataContext, a5, a3, v8, a4);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      7,
      25,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)a1);
  }
  return v10;
}
