/*
 * XREFs of HUBDESC_Validate20HubDescriptor @ 0x1C0035308
 * Callers:
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C00088C0 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002EB30 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_Validate20HubDescriptor(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned __int8 v8; // al
  unsigned int v9; // eax
  unsigned __int8 v10; // al
  unsigned __int16 v11; // bx
  unsigned int v12; // r8d
  unsigned __int8 v13; // dl
  unsigned int i; // ebx
  __int64 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h]
  unsigned int v18; // [rsp+40h] [rbp-48h]
  char v19; // [rsp+44h] [rbp-44h]
  unsigned int v20; // [rsp+90h] [rbp+8h]
  unsigned int v21; // [rsp+98h] [rbp+10h]

  v4 = 0;
  if ( !a1 )
  {
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x128u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 2LL);
LABEL_41:
    v19 = 0;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x133u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    return v19;
  }
  v8 = a1[2];
  if ( !v8 )
  {
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, 0);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 7LL);
    v8 = a1[2];
    v4 = 2;
  }
  v19 = 1;
  v21 = ((unsigned int)v8 + 8) >> 3;
  v18 = ((unsigned int)v8 + 7) >> 3;
  v9 = v21 + 7 + v18;
  v20 = v9;
  if ( *a1 < v9 )
  {
    LODWORD(v16) = *a1;
    WPP_RECORDER_SF_dD(
      a4,
      2u,
      5u,
      0x12Bu,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      v16,
      v21 + 7 + v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 1LL);
    if ( *(_WORD *)a3 > 0x200u || *(_BYTE *)(a3 + 12) )
      v4 = 2;
    v9 = v20;
  }
  if ( *a1 > v9 )
  {
    LODWORD(v17) = v9;
    LODWORD(v16) = *a1;
    WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x12Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v16, v17);
    (*(void (__fastcall **)(_QWORD, _QWORD))(a3 + 24))(*(_QWORD *)(a3 + 40), 0LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  v10 = a1[1];
  if ( v10 != 41 )
  {
    LODWORD(v16) = v10;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Du, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 6LL);
    if ( *(_WORD *)a3 > 0x200u || *(_BYTE *)(a3 + 12) )
      v4 = 2;
  }
  v11 = *(_WORD *)(a1 + 3);
  if ( (v11 & 2) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    LODWORD(v16) = v11;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Eu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
  }
  if ( (v11 & 0xFF00) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    LODWORD(v16) = v11;
    WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Fu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
  }
  if ( (a1[7] & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x130u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 5LL);
  }
  v12 = v21;
  v13 = -1 << ((a1[2] + 1) & 7);
  if ( v13 != 0xFF && (v13 & a1[v21 + 6]) != 0 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x131u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 4LL);
    v12 = v21;
  }
  for ( i = 0; i < v18; ++i )
  {
    if ( a1[i + 7 + v12] != 0xFF )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        v4 = 2;
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x132u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 8LL);
      v12 = v21;
    }
  }
  if ( v4 )
    goto LABEL_41;
  return v19;
}
