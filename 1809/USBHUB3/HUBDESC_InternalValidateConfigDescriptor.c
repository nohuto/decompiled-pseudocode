/*
 * XREFs of HUBDESC_InternalValidateConfigDescriptor @ 0x1C002EF38
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0031920 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // r14
  void *v11; // r8
  char v12; // bp
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  unsigned int v15; // eax
  unsigned __int16 v17; // dx
  __int64 v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  __int64 v22; // [rsp+38h] [rbp-30h]
  int v23; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v23;
    v23 = 0;
  }
  v9 = *a1;
  v10 = a5;
  *a3 = 9;
  v11 = &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids;
  v12 = 1;
  if ( v9 < 9u )
  {
    *v5 = 1;
    WPP_RECORDER_SF_DDD(
      v10,
      2u,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      0x11u,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      *a1,
      9,
      9);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 55LL);
    v9 = *a1;
    v11 = &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids;
  }
  if ( v9 > 9u )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
    {
      *v5 = 2;
      v9 = *a1;
    }
    LODWORD(v22) = 9;
    LODWORD(v21) = 9;
    LODWORD(v20) = v9;
    WPP_RECORDER_SF_DDD(
      v10,
      2u,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      0x12u,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      v20,
      v21,
      v22);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 54LL);
  }
  if ( a1[1] != 2 )
  {
    *v5 = 1;
    LODWORD(v22) = 2;
    LODWORD(v21) = 2;
    LODWORD(v20) = a1[1];
    WPP_RECORDER_SF_DDD(
      v10,
      2u,
      (__int64)v11,
      0x13u,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      v20,
      v21,
      v22);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 58LL);
  }
  v13 = *(_DWORD *)(a2 + 72);
  if ( *a3 <= v13 )
  {
    v14 = 9 * (a1[4] + 1);
    if ( v14 > v13 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      {
        *v5 = 2;
        v13 = *(_DWORD *)(a2 + 72);
      }
      LODWORD(v21) = v14;
      LODWORD(v20) = v13;
      WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x15u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v20, v21);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 57LL);
      v13 = *(_DWORD *)(a2 + 72);
    }
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *((unsigned __int16 *)a1 + 1);
    v15 = *((unsigned __int16 *)a1 + 1);
    if ( v15 > v13 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) != 0 )
      {
        *v5 = 2;
        v13 = *(_DWORD *)(a2 + 72);
        LOWORD(v15) = *((_WORD *)a1 + 1);
      }
      LODWORD(v22) = v13;
      LODWORD(v21) = v13;
      LODWORD(v20) = (unsigned __int16)v15;
      WPP_RECORDER_SF_DDD(
        v10,
        2u,
        (__int64)v11,
        0x16u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v20,
        v21,
        v22);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 61LL);
      v13 = *(_DWORD *)(a2 + 72);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + v13;
      LOWORD(v15) = *((_WORD *)a1 + 1);
    }
    v17 = v15;
    if ( (unsigned __int16)v15 < v14 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) != 0 )
      {
        *v5 = 2;
        v13 = *(_DWORD *)(a2 + 72);
        v17 = *((_WORD *)a1 + 1);
      }
      LODWORD(v22) = v13;
      LODWORD(v21) = v14;
      LODWORD(v20) = v17;
      WPP_RECORDER_SF_DDD(
        v10,
        2u,
        (__int64)v11,
        0x17u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v20,
        v21,
        v22);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 62LL);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    }
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v5 = 2;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x14u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 56LL);
  }
  if ( *v5 )
  {
    v12 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x18u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v12;
}
