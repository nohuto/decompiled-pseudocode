/*
 * XREFs of ndisMInvokeFilterResourceRequirements @ 0x1C00D1334
 * Callers:
 *     ndisPnPIrpFilterResourceRequirements @ 0x1C00D12A8 (ndisPnPIrpFilterResourceRequirements.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeFilterResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 3792);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 800) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_q(0xDCu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
      v2 = *(_QWORD *)(a1 + 3792);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 800))(*(_QWORD *)(a1 + 4144), a2);
    v3 = v6;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xDDu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v6);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0xDEu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  }
  return v3;
}
