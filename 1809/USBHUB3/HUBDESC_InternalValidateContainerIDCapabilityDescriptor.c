/*
 * XREFs of HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C0031CB0
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0033BDC (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002EB30 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateContainerIDCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  int v9; // r14d
  __int64 v10; // r15
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  char v15; // bl
  unsigned __int8 v16; // al
  int v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+28h] [rbp-50h]
  int v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v21; // [rsp+90h] [rbp+18h]

  v21 = a3;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v20 = 0;
    v5 = &v20;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  if ( *a1 < 0x14u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 64LL);
    if ( v11 < 0x14 )
    {
      v15 = 1;
      *v5 = 1;
      WPP_RECORDER_SF_DDD(v10, 2u, v13, 0x7Fu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v9, *a1, 20);
      goto LABEL_26;
    }
    *v5 = 2;
    *a3 = 20;
    WPP_RECORDER_SF_DDDD(v10, v12, v13, 0x7Eu, v18);
  }
  if ( *a1 > 0x14u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    WPP_RECORDER_SF_DDD(v10, 2u, v14, 0x80u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v9, *a1, 20);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 63LL);
  }
  if ( *v21 <= v11 )
  {
    v16 = a1[3];
    if ( v16 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v5 = 2;
        v16 = a1[3];
      }
      LODWORD(v19) = v16;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x82u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v19);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 66LL);
    }
    if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(a1 + 12) == *(_QWORD *)GUID_NULL.Data4 )
    {
      *(_BYTE *)(*(_QWORD *)(a2 + 80) + 41LL) = 1;
      WPP_RECORDER_SF_(v10, 2u, 5u, 0x83u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 153LL);
    }
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v5 = 2;
    LODWORD(v19) = v9;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0x81u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 65LL);
  }
  v15 = 1;
LABEL_26:
  if ( *v5 )
  {
    v15 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x84u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v15;
}
