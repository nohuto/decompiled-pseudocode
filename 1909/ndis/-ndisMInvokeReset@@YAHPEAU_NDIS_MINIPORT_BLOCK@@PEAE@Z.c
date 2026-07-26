/*
 * XREFs of ?ndisMInvokeReset@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C009764C
 * Callers:
 *     ndisMResetMiniportInternal @ 0x1C009BE9C (ndisMResetMiniportInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeReset(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  unsigned __int8 *v3; // rdi
  int v5; // eax
  int v6; // edx
  unsigned int v7; // edi

  DriverHandle = a1->DriverHandle;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      17,
      249,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  }
  v5 = DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx(a1->MiniportAdapterContext, v3);
  v7 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      17,
      250,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v5);
  }
  return v7;
}
