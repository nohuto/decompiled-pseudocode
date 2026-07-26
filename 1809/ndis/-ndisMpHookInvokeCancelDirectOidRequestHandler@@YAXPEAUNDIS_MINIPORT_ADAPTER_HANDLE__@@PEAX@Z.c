/*
 * XREFs of ?ndisMpHookInvokeCancelDirectOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C0081FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisMpHookInvokeCancelDirectOidRequestHandler(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, void *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)a1 + 474);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x10Du, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, void *))(v2 + 256))(*((_QWORD *)a1 + 3), a2);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x10Eu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)a1);
}
