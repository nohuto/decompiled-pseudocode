/*
 * XREFs of HUBDESC_InternalValidateIADescriptor @ 0x1C003478C
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0034BA4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateIADescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v9; // rax
  int v10; // r15d
  int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // r13
  unsigned int v14; // r15d
  void *v15; // r8
  __int64 v16; // r8
  __int64 v17; // rdx
  char v18; // bl
  __int64 v19; // r14
  int v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h]

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v25 = 0;
    v5 = &v25;
  }
  v9 = *(_QWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72);
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = 512LL;
  v13 = a5;
  v14 = v10 - v11;
  v26 = v9;
  LODWORD(v9) = *a1;
  *a3 = v9;
  v15 = &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids;
  if ( (unsigned __int8)v9 >= 8u )
  {
LABEL_14:
    if ( *a1 > 8u )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(
          v13,
          2u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          0x74u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v11,
          *a1,
          8);
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 92LL, v15);
    }
    if ( *a3 <= v14 )
    {
      if ( 256 - a1[2] < a1[3] )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = a1[3];
          LODWORD(v23) = a1[2];
          LODWORD(v22) = v11;
          WPP_RECORDER_SF_DDD(
            v13,
            2u,
            (__int64)v15,
            0x76u,
            (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
            v22,
            v23,
            v24);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 97LL, v15);
      }
      v19 = v26;
      if ( a1[3] > *(_BYTE *)(v26 + 4) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v24) = *(unsigned __int8 *)(v19 + 4);
          LODWORD(v23) = a1[3];
          LODWORD(v22) = v11;
          WPP_RECORDER_SF_DDD(
            v13,
            2u,
            (__int64)v15,
            0x77u,
            (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
            v22,
            v23,
            v24);
        }
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL, v15);
      }
      if ( *(unsigned __int16 *)(a2 + 202) + (unsigned int)a1[3] > *(unsigned __int8 *)(v19 + 4) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDD(v13, v12, a1[3], 0x78u, v21);
        (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 95LL, v15);
      }
      if ( a1[3] )
        goto LABEL_64;
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v11;
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0x79u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v22);
      }
      v17 = 96LL;
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v11;
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0x75u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v22);
      }
      v17 = 94LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), v17, v15);
LABEL_64:
    v18 = 1;
LABEL_65:
    if ( !*v5 )
      return v18;
    goto LABEL_66;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    93LL,
    &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  v12 = 512LL;
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( v14 >= 8 )
  {
    *a3 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(v13, 512LL, v16, 0x72u, v21);
      v12 = 512LL;
    }
    v15 = &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids;
    goto LABEL_14;
  }
  v18 = 1;
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v13, 2u, v16, 0x73u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v11, *a1, 8);
    goto LABEL_65;
  }
LABEL_66:
  v18 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v13, 2u, 5u, 0x7Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v18;
}
