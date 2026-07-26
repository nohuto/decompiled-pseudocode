/*
 * XREFs of ndisMInvokeAddDevice @ 0x1C00CA338
 * Callers:
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeAddDevice(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  unsigned int v4; // esi
  int v6; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 3792);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xD7u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v1, a1);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v1 + 784))(a1, *(_QWORD *)(v1 + 64));
  v4 = v3;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v6 = v3;
    WPP_SF_qqd(0xD8u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v1, a1, v6);
  }
  return v4;
}
