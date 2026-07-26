/*
 * XREFs of ndisMInvokeRemoveDevice @ 0x1C00F09BC
 * Callers:
 *     ndisPnPCompleteRemoveDevice @ 0x1C00F2FE0 (ndisPnPCompleteRemoveDevice.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

void __fastcall ndisMInvokeRemoveDevice(__int64 a1)
{
  __int64 v1; // rdi
  void (__fastcall *v3)(_QWORD); // rax
  unsigned __int16 v4; // cx

  v1 = *(_QWORD *)(a1 + 3792);
  v3 = *(void (__fastcall **)(_QWORD))(v1 + 792);
  if ( !v3 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 4u )
      return;
    v4 = 219;
    goto LABEL_8;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_qq(0xD9u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v1, a1);
    v3 = *(void (__fastcall **)(_QWORD))(v1 + 792);
  }
  v3(*(_QWORD *)(a1 + 4144));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v4 = 218;
LABEL_8:
    WPP_SF_qq(v4, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v1, a1);
  }
}
