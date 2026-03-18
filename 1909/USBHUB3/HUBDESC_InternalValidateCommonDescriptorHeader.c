/*
 * XREFs of HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C00319C8
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0034BA4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0037C88 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateCommonDescriptorHeader(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  char v9; // r15
  int v10; // ebp
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // r13
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // ebp
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+90h] [rbp+8h]
  int v24; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+A0h] [rbp+18h]

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v24;
    v24 = 0;
  }
  v9 = 1;
  v10 = *(_DWORD *)(a2 + 72);
  v11 = *(_DWORD *)(a2 + 64) - (_DWORD)a1;
  *a3 = 0;
  v12 = (unsigned int)((_DWORD)a1 - *(_DWORD *)(a2 + 56));
  v13 = v10 - v12;
  v25 = v11;
  v23 = v12;
  if ( v13 < 2 )
  {
    *v5 = 1;
    v14 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xBu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v13, 2);
    v15 = 90LL;
LABEL_32:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
    goto LABEL_33;
  }
  v16 = *a1;
  v14 = a5;
  *a3 = v16;
  if ( v16 > v13 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v14, v12, (__int64)a3, 0xCu, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 87LL);
    v11 = v25;
    LODWORD(v12) = v23;
    *a3 = v13;
  }
  if ( *a1 > v11 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDD(
        v14,
        2u,
        (__int64)a3,
        0xDu,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        *a1,
        v12,
        v11);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 88LL);
  }
  if ( *a1 >= 2u )
  {
    v17 = v23;
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v5 = 2;
    v17 = v23;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = 2;
      LODWORD(v21) = v23;
      LODWORD(v20) = *a1;
      WPP_RECORDER_SF_DDD(
        v14,
        2u,
        (__int64)a3,
        0xEu,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v20,
        v21,
        v22);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 89LL);
  }
  if ( !*a1 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v17;
      WPP_RECORDER_SF_d(v14, 2u, 5u, 0xFu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v20);
    }
    v15 = 91LL;
    goto LABEL_32;
  }
LABEL_33:
  if ( *v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v14, 2u, 5u, 0x10u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    return 0;
  }
  return v9;
}
