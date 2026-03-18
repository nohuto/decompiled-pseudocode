/*
 * XREFs of HUBDESC_InternalValidateBOSDescriptor @ 0x1C00378E4
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0027724 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0037C88 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C003142C (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C00317D4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateBOSDescriptor(unsigned __int8 *a1, __int64 a2, _DWORD *a3, int *a4, __int64 a5)
{
  int *v5; // rsi
  __int64 v9; // rdx
  char v10; // r13
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+80h] [rbp+18h]

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v22;
    v22 = 0;
  }
  v9 = 5LL;
  if ( a3 )
    *a3 = 5;
  v10 = 1;
  if ( !a1 )
  {
    *v5 = 1;
    v11 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a5, 2u, 5u, 0xE0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v12 = 27LL;
LABEL_46:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v12);
    goto LABEL_47;
  }
  v11 = a5;
  if ( *(_DWORD *)(a2 + 72) < 5u )
  {
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        v11,
        2u,
        5u,
        0xE1u,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        *(_DWORD *)(a2 + 72),
        5);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 23LL);
    v9 = 5LL;
  }
  if ( a1[1] != 15 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = 15;
      LODWORD(v20) = a1[1];
      WPP_RECORDER_SF_dD(v11, 2u, 5u, 0xE2u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v20, v21);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 24LL);
  }
  if ( *a1 < 5u )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(v11, v9, (__int64)a3, 0xE3u, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 21LL);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *((unsigned __int16 *)a1 + 1);
  if ( *a1 > 5u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(v11, v9, (__int64)a3, 0xE4u, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 20LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    if ( a3 )
      *a3 = *a1;
  }
  v13 = *((_WORD *)a1 + 1);
  if ( v13 < 5u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v13;
      WPP_RECORDER_SF_d(v11, 2u, 5u, 0xE5u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v20);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
  }
  v14 = *a1 + 2 * (unsigned int)a1[4];
  v15 = *((unsigned __int16 *)a1 + 1);
  v23 = v14;
  if ( v15 < (unsigned int)v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(v11, v14, (__int64)a3, 0xE6u, v19);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
  }
  if ( !a1[4] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v11, 2u, 5u, 0xE7u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(v11, v16, v17, 0xE8u, v19);
    v12 = 29LL;
    goto LABEL_46;
  }
LABEL_47:
  if ( *v5 )
  {
    v10 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v11, 2u, 5u, 0xE9u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v10;
}
