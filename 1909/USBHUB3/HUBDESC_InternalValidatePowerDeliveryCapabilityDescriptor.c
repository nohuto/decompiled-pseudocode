/*
 * XREFs of HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C003524C
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C00373C0 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C00317D4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v8; // r12
  char v9; // r15
  int v10; // r14d
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int *v14; // rax
  __int64 v15; // r8
  int v16; // r10d
  __int64 v17; // r11
  unsigned int v18; // eax
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v23; // [rsp+A0h] [rbp+18h]

  v23 = a3;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v22 = 0;
    v5 = &v22;
  }
  v8 = a5;
  v9 = 1;
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 >= 0x12u )
    goto LABEL_9;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 230LL);
  if ( v11 >= 0x12 )
  {
    v14 = v23;
    *v5 = 2;
    *v14 = 18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v8, v12, v13, 0x85u, v20);
LABEL_9:
    if ( *a1 > 0x12u )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(v8, 2u, v15, 0x87u, v17, v10, *a1, v16);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 229LL);
    }
    if ( *v23 <= v11 )
    {
      if ( a1[3] || (v18 = *((_DWORD *)a1 + 1), (v18 & 0x81) != 0) || v18 >= 0x8000 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v5 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDD(v8, *((_DWORD *)a1 + 1) >> 15, *((_DWORD *)a1 + 1) & 1, 0x89u, v20);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 232LL);
      }
      if ( (a1[4] & 0x20) != 0 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 80) + 42LL) = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v8, 4u, 5u, 0x8Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v10;
        WPP_RECORDER_SF_d(v8, 2u, 5u, 0x88u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v21);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 231LL);
    }
LABEL_35:
    if ( !*v5 )
      return v9;
    goto LABEL_36;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v8, 2u, v13, 0x86u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v10, *a1, 18);
    goto LABEL_35;
  }
LABEL_36:
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v8, 2u, 5u, 0x8Bu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v9;
}
