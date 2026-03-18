/*
 * XREFs of HUBDESC_InternalValidateBOSDescriptor @ 0x1C0034078
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0025260 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0034394 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002E788 (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002EB30 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateBOSDescriptor(unsigned __int8 *a1, __int64 a2, _DWORD *a3, int *a4, __int64 a5)
{
  int *v5; // rsi
  char v9; // r13
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v21;
    v21 = 0;
  }
  if ( a3 )
    *a3 = 5;
  v9 = 1;
  if ( !a1 )
  {
    *v5 = 1;
    v10 = a5;
    WPP_RECORDER_SF_(a5, 2u, 5u, 0xE0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v11 = 27LL;
LABEL_28:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v11);
    goto LABEL_29;
  }
  v10 = a5;
  if ( *(_DWORD *)(a2 + 72) < 5u )
  {
    *v5 = 1;
    WPP_RECORDER_SF_dD(
      v10,
      2u,
      5u,
      0xE1u,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      *(_DWORD *)(a2 + 72),
      5);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 23LL);
  }
  if ( a1[1] != 15 )
  {
    *v5 = 2;
    LODWORD(v20) = 15;
    LODWORD(v19) = a1[1];
    WPP_RECORDER_SF_dD(v10, 2u, 5u, 0xE2u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v19, v20);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 24LL);
  }
  if ( *a1 < 5u )
  {
    *v5 = 2;
    WPP_RECORDER_SF_ddd(v10, a2, (__int64)a3, 0xE3u, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 21LL);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *((unsigned __int16 *)a1 + 1);
  if ( *a1 > 5u )
  {
    WPP_RECORDER_SF_ddd(v10, a2, (__int64)a3, 0xE4u, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 20LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    if ( a3 )
      *a3 = *a1;
  }
  v12 = *((unsigned __int16 *)a1 + 1);
  if ( (unsigned __int16)v12 < 5u )
  {
    LODWORD(v19) = (unsigned __int16)v12;
    WPP_RECORDER_SF_d(v10, 2u, 5u, 0xE5u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
    v12 = *((unsigned __int16 *)a1 + 1);
  }
  v13 = a1[4];
  if ( (unsigned __int16)v12 < (unsigned int)*a1 + 2 * v13 )
  {
    WPP_RECORDER_SF_ddd(v10, v12, (__int64)a3, 0xE6u, v17);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
    LOBYTE(v13) = a1[4];
  }
  if ( !(_BYTE)v13 )
  {
    WPP_RECORDER_SF_(v10, 2u, 5u, 0xE7u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    WPP_RECORDER_SF_ddd(v10, v14, v15, 0xE8u, v18);
    v11 = 29LL;
    goto LABEL_28;
  }
LABEL_29:
  if ( *v5 )
  {
    v9 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0xE9u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v9;
}
