/*
 * XREFs of HUBDESC_InternalValidateConfigDescriptor @ 0x1C0031C4C
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0034BA4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateConfigDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  unsigned __int8 v9; // al
  __int64 v10; // rbp
  char v11; // r15
  __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int64 v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v19;
    v19 = 0;
  }
  v9 = *a1;
  v10 = a5;
  *a3 = 9;
  v11 = 1;
  if ( v9 < 9u )
  {
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDD(
        v10,
        2u,
        (__int64)a3,
        0x11u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        *a1,
        9,
        9);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 55LL);
    v9 = *a1;
  }
  v12 = 512LL;
  if ( v9 > 9u )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = 9;
      LODWORD(v17) = 9;
      LODWORD(v16) = *a1;
      WPP_RECORDER_SF_DDD(
        v10,
        2u,
        512LL,
        0x12u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v16,
        v17,
        v18);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 54LL, v12);
  }
  if ( a1[1] != 2 )
  {
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = 2;
      LODWORD(v17) = 2;
      LODWORD(v16) = a1[1];
      WPP_RECORDER_SF_DDD(v10, 2u, v12, 0x13u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v16, v17, v18);
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 58LL, v12);
  }
  v13 = *(_DWORD *)(a2 + 72);
  if ( *a3 <= v13 )
  {
    v14 = 9 * (a1[4] + 1);
    if ( v14 > v13 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v14;
        LODWORD(v16) = *(_DWORD *)(a2 + 72);
        WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x15u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v16, v17);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 57LL, v12);
    }
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *((unsigned __int16 *)a1 + 1);
    if ( (unsigned int)*((unsigned __int16 *)a1 + 1) > *(_DWORD *)(a2 + 72) )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = *(_DWORD *)(a2 + 72);
        LODWORD(v17) = v18;
        LODWORD(v16) = *((unsigned __int16 *)a1 + 1);
        WPP_RECORDER_SF_DDD(
          v10,
          2u,
          v12,
          0x16u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v16,
          v17,
          v18);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 61LL, v12);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    }
    if ( *((unsigned __int16 *)a1 + 1) < v14 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = *(_DWORD *)(a2 + 72);
        LODWORD(v17) = v14;
        LODWORD(v16) = *((unsigned __int16 *)a1 + 1);
        WPP_RECORDER_SF_DDD(
          v10,
          2u,
          v12,
          0x17u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v16,
          v17,
          v18);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 62LL, v12);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    }
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v10, 2u, 5u, 0x14u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 56LL, v12);
  }
  if ( *v5 )
  {
    v11 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v10, 2u, 5u, 0x18u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v11;
}
