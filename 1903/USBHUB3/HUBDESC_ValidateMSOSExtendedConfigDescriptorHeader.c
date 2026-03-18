/*
 * XREFs of HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x1C0038C24
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C001EA50 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v7; // bl
  __int64 v8; // rdx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]

  v7 = 1;
  if ( a2 != 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x113u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, a2, 16);
    v8 = 122LL;
LABEL_5:
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v8);
    v7 = 0;
LABEL_23:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x118u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    return v7;
  }
  v9 = *(_WORD *)(a1 + 4);
  if ( v9 != 256 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x114u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v9, 256);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 120LL);
    v7 = 0;
  }
  v10 = *(_WORD *)(a1 + 6);
  if ( v10 != 4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = 4;
      LODWORD(v12) = v10;
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x115u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v12, v13);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 125LL);
    v7 = 0;
  }
  if ( *(_BYTE *)(a1 + 8) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x116u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v8 = 121LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)a1 != 40 )
  {
    v7 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = 40;
      LODWORD(v12) = *(_DWORD *)a1;
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x117u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v12, v13);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 127LL);
  }
  if ( !v7 )
    goto LABEL_23;
  return v7;
}
