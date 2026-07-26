/*
 * XREFs of ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C0109310
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C0037850 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeSetOptions(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a2)
{
  int (__fastcall *SetOptionsHandler)(void *, void *); // rax
  unsigned int v3; // edi
  struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *v4; // r14
  int v7; // eax
  int v8; // edx

  SetOptionsHandler = a2->SetOptionsHandler;
  v3 = 0;
  v4 = a2;
  if ( SetOptionsHandler )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        1,
        91,
        (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
        (char)a1);
      SetOptionsHandler = v4->SetOptionsHandler;
    }
    v7 = SetOptionsHandler(a1, a1->ProtocolDriverContext);
    v3 = v7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        1,
        92,
        (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
        (char)a1,
        v7);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      93,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)a1);
  }
  return v3;
}
