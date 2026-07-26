/*
 * XREFs of NdisMSetVirtualFunctionBusData @ 0x1C006F120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall NdisMSetVirtualFunctionBusData(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, int); // r10
  __int64 v11; // rcx

  v9 = 0;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(0x71u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, a1);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 4816);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 4856);
    if ( v11 )
      v9 = v10(v11, a2, a3, a4, a5);
  }
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0x72u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, a1, v9);
  return v9;
}
