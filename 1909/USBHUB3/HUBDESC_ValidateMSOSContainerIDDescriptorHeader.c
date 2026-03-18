/*
 * XREFs of HUBDESC_ValidateMSOSContainerIDDescriptorHeader @ 0x1C00388A0
 * Callers:
 *     HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x1C001E670 (HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMSOSContainerIDDescriptorHeader(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v7; // bl
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  v7 = 1;
  if ( a2 != 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x106u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, a2);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 117LL);
    v7 = 0;
LABEL_18:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x10Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    return v7;
  }
  v8 = *(_WORD *)(a1 + 4);
  if ( v8 != 256 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x107u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v8, 256);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 115LL);
    v7 = 0;
  }
  v9 = *(_WORD *)(a1 + 6);
  if ( v9 != 6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = 6;
      LODWORD(v11) = v9;
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x108u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v11, v12);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 116LL);
    v7 = 0;
  }
  if ( *(_DWORD *)a1 != 24 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = 24;
      LODWORD(v11) = *(_DWORD *)a1;
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x109u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v11, v12);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 118LL);
    v7 = 0;
  }
  if ( !v7 )
    goto LABEL_18;
  return v7;
}
