/*
 * XREFs of ndisMInvokeSetOptions @ 0x1C00CE5B0
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeSetOptions(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64, _QWORD); // rax
  unsigned int v2; // edi
  int v4; // eax

  v1 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 128);
  v2 = 0;
  if ( v1 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_q(0xE2u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 128))(a1, *(_QWORD *)(a1 + 64));
    }
    else
    {
      v4 = v1(a1, *(_QWORD *)(a1 + 64));
    }
    v2 = v4;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xE3u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v4);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xE4u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  }
  return v2;
}
