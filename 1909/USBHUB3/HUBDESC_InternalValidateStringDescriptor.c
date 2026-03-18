/*
 * XREFs of HUBDESC_InternalValidateStringDescriptor @ 0x1C0038130
 * Callers:
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C001F510 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001F690 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0028794 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C0028AD4 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0028CAC (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C003142C (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateStringDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // ebx
  __int64 v9; // rbp
  char v10; // bl
  unsigned int v12; // eax
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  unsigned int v15; // ecx
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+78h] [rbp+10h]

  v19 = 0;
  v7 = a2;
  if ( (unsigned int)a2 >= 2 )
  {
    v12 = *a1;
    v9 = a5;
    *a3 = v12;
    if ( v12 > (unsigned int)a2 )
    {
      v19 = 2;
      *a3 = a2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddd(a5, a2, (__int64)a3, 0xF2u, v16);
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 129LL);
    }
    if ( *a1 <= 2u )
    {
      v19 = 2;
      *a3 = v7;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF3u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v7);
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 130LL);
    }
    v13 = a1[1];
    if ( v13 != 3 )
    {
      v19 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v13;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xF4u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17, 3);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 133LL);
    }
    v14 = *a1;
    if ( (*a1 & 1) != 0 )
    {
      v15 = *a3 & 0xFFFFFFFE;
      v19 = 2;
      *a3 = v15;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v15;
        LODWORD(v17) = v14;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xF5u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17, v18);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 128LL);
    }
    if ( *a1 != v7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v7;
        LODWORD(v17) = *a1;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xF6u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17, v18);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 134LL);
    }
    if ( !v19 )
      return 1;
  }
  else
  {
    *a3 = 0;
    v9 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xF1u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, a2);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 131LL);
  }
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v9, 2u, 5u, 0xF7u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v10;
}
