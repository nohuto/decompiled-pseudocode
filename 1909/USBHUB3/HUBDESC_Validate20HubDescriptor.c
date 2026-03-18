/*
 * XREFs of HUBDESC_Validate20HubDescriptor @ 0x1C003922C
 * Callers:
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x1C00090E0 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C00317D4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_Validate20HubDescriptor(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rbx
  int v8; // eax
  unsigned int v9; // eax
  unsigned __int8 v10; // al
  unsigned __int16 v11; // bx
  unsigned int v12; // r8d
  unsigned __int8 v13; // dl
  unsigned int i; // ebx
  char v15; // di
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  unsigned int v19; // [rsp+40h] [rbp-48h]
  unsigned int v20; // [rsp+90h] [rbp+8h]
  unsigned int v21; // [rsp+98h] [rbp+10h]

  v4 = 0;
  v5 = a4;
  if ( a1 )
  {
    if ( !a1[2] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, 0);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 7LL);
      v4 = 2;
    }
    v8 = a1[2];
    v21 = (unsigned int)(v8 + 8) >> 3;
    v19 = (unsigned int)(v8 + 7) >> 3;
    v9 = v21 + 7 + v19;
    v20 = v9;
    if ( *a1 < v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = *a1;
        WPP_RECORDER_SF_dD(v5, 2u, 5u, 0x12Bu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17, v9);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 1LL);
      if ( *(_WORD *)a3 > 0x200u || *(_BYTE *)(a3 + 12) )
        v4 = 2;
      v9 = v20;
    }
    if ( *a1 > v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v9;
        LODWORD(v17) = *a1;
        WPP_RECORDER_SF_dD(v5, 2u, 5u, 0x12Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17, v18);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(a3 + 24))(*(_QWORD *)(a3 + 40), 0LL);
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        v4 = 2;
    }
    v10 = a1[1];
    if ( v10 != 41 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v10;
        WPP_RECORDER_SF_d(v5, 2u, 5u, 0x12Du, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 6LL);
      if ( *(_WORD *)a3 > 0x200u || *(_BYTE *)(a3 + 12) )
        v4 = 2;
    }
    v11 = *(_WORD *)(a1 + 3);
    if ( (v11 & 2) != 0 )
    {
      if ( *(_BYTE *)(a3 + 15) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v11;
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Eu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
    }
    if ( (v11 & 0xFF00) != 0 )
    {
      if ( *(_BYTE *)(a3 + 15) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v11;
        WPP_RECORDER_SF_d(a4, 2u, 5u, 0x12Fu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 9LL);
    }
    if ( (a1[7] & 1) != 0 )
    {
      if ( *(_BYTE *)(a3 + 15) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(a4, 2u, 5u, 0x130u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 5LL);
    }
    v12 = v21;
    v13 = -1 << ((a1[2] + 1) & 7);
    if ( v13 != 0xFF && (v13 & a1[v21 + 6]) != 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(a4, 2u, 5u, 0x131u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 4LL);
      v12 = v21;
    }
    for ( i = 0; i < v19; ++i )
    {
      if ( a1[i + 7 + v12] != 0xFF )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
          v4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a4, 2u, 5u, 0x132u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 8LL);
        v12 = v21;
      }
    }
    if ( !v4 )
      return 1;
    v5 = a4;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x128u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 2LL);
  }
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v5, 2u, 5u, 0x133u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v15;
}
