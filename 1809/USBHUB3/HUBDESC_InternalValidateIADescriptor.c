/*
 * XREFs of HUBDESC_InternalValidateIADescriptor @ 0x1C003156C
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0031920 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateIADescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v6; // rdi
  int v9; // r14d
  __int64 v10; // rbp
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // bl
  __int64 v17; // r13
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  int v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  int v26; // [rsp+90h] [rbp+8h] BYREF
  __int64 v27; // [rsp+98h] [rbp+10h]

  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v26;
    v26 = 0;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  v27 = *(_QWORD *)(a2 + 56);
  v12 = *a1;
  *a3 = v12;
  if ( (unsigned __int8)v12 < 8u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 93LL);
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v6 = 2;
    if ( v11 < 8 )
    {
      v16 = 1;
      *v6 = 1;
      WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x73u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v9, *a1, 8);
      goto LABEL_52;
    }
    *a3 = 8;
    WPP_RECORDER_SF_DDDD(v10, v13, v14, 0x72u, v22);
  }
  if ( *a1 > 8u )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v6 = 2;
    WPP_RECORDER_SF_DDD(
      v10,
      2u,
      (__int64)a3,
      0x74u,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      v9,
      *a1,
      8);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 92LL);
  }
  if ( *a3 <= v11 )
  {
    if ( 256 - a1[2] < a1[3] )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v6 = 2;
      LODWORD(v25) = a1[3];
      LODWORD(v24) = a1[2];
      LODWORD(v23) = v9;
      WPP_RECORDER_SF_DDD(
        v10,
        2u,
        (__int64)a3,
        0x76u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v23,
        v24,
        v25);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 97LL);
    }
    v17 = v27;
    v18 = *(_BYTE *)(v27 + 4);
    if ( a1[3] > v18 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      {
        *v6 = 2;
        v18 = *(_BYTE *)(v17 + 4);
      }
      LODWORD(v25) = v18;
      LODWORD(v24) = a1[3];
      LODWORD(v23) = v9;
      WPP_RECORDER_SF_DDD(
        v10,
        2u,
        (__int64)a3,
        0x77u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v23,
        v24,
        v25);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL);
      v18 = *(_BYTE *)(v17 + 4);
    }
    v19 = a1[3];
    if ( (unsigned int)v19 + *(unsigned __int16 *)(a2 + 202) > v18 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) != 0 )
      {
        *v6 = 2;
        LOBYTE(v19) = a1[3];
      }
      WPP_RECORDER_SF_DDDD(v10, v19, (unsigned __int8)v19, 0x78u, v22);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL);
    }
    if ( a1[3] )
      goto LABEL_51;
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v6 = 2;
    LODWORD(v23) = v9;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x79u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v23);
    v15 = 96LL;
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
      *v6 = 2;
    LODWORD(v23) = v9;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x75u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v23);
    v15 = 94LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
LABEL_51:
  v16 = 1;
LABEL_52:
  if ( *v6 )
  {
    v16 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x7Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v16;
}
