/*
 * XREFs of NdisMWriteConfigBlock @ 0x1C00F8A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall NdisMWriteConfigBlock(_QWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD); // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // edi

  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(0x7Du, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)a1);
  v8 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a1[611];
  if ( v8 && (v9 = a1[613]) != 0 && (v10 = a1[581]) != 0 && (*(_BYTE *)(v10 + 8) & 5) == 5 )
    v11 = v8(v9, a2, a3, a4);
  else
    v11 = -1073741637;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(0x7Eu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)a1);
  return v11;
}
