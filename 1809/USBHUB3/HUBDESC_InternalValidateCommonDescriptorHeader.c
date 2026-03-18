/*
 * XREFs of HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C002ED14
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0031920 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0034394 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateCommonDescriptorHeader(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v8; // r14d
  unsigned int v9; // r12d
  char v10; // r15
  unsigned int v11; // ebp
  __int64 v12; // r13
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  int v20; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v21; // [rsp+A0h] [rbp+18h]

  v21 = a3;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v20;
    v20 = 0;
  }
  v8 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 64) - (_DWORD)a1;
  v10 = 1;
  v11 = *(_DWORD *)(a2 + 72) - v8;
  *a3 = 0;
  if ( v11 < 2 )
  {
    *v5 = 1;
    v12 = a5;
    WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xBu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v11, 2);
    v13 = 90LL;
LABEL_21:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v13);
    goto LABEL_22;
  }
  v14 = *a1;
  v12 = a5;
  *a3 = v14;
  if ( v14 > v11 )
  {
    *v5 = 2;
    WPP_RECORDER_SF_DDDD(v12, a2, (__int64)a3, 0xCu, v16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 87LL);
    *v21 = v11;
  }
  if ( *a1 > v9 )
  {
    *v5 = 2;
    WPP_RECORDER_SF_DDD(
      v12,
      2u,
      (__int64)a3,
      0xDu,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      *a1,
      v8,
      v9);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 88LL);
  }
  if ( *a1 < 2u )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v5 = 2;
    LODWORD(v19) = 2;
    LODWORD(v18) = v8;
    LODWORD(v17) = *a1;
    WPP_RECORDER_SF_DDD(
      v12,
      2u,
      (__int64)a3,
      0xEu,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      v17,
      v18,
      v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 89LL);
  }
  if ( !*a1 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v5 = 1;
    LODWORD(v17) = v8;
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0xFu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17);
    v13 = 91LL;
    goto LABEL_21;
  }
LABEL_22:
  if ( *v5 )
  {
    WPP_RECORDER_SF_(v12, 2u, 5u, 0x10u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    return 0;
  }
  return v10;
}
