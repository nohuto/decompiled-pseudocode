/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor @ 0x1C0033E50
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0034BA4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_Dddd @ 0x1C003151C (WPP_RECORDER_SF_Dddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C00317D4 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusIsochEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  __int64 v7; // r9
  int v10; // r15d
  bool v11; // zf
  unsigned int v12; // eax
  __int64 v13; // r12
  __int64 result; // rax
  unsigned int v15; // ecx
  __int64 v16; // r8
  int v17; // eax
  int v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+38h] [rbp-50h]
  unsigned int v28; // [rsp+90h] [rbp+8h]
  int v29; // [rsp+98h] [rbp+10h] BYREF
  unsigned int *v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v7 = 0LL;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    a4 = &v29;
    v29 = 0;
  }
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = *(_DWORD *)(a2 + 4) == 3;
  v28 = *(_DWORD *)(a2 + 72) - v10;
  v12 = *a1;
  *a3 = v12;
  if ( !v11 || !*(_DWORD *)(a2 + 16) )
  {
    v13 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = v10;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x5Fu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v22);
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
               *(_QWORD *)(a2 + 40),
               205LL,
               a3,
               v7);
    *a4 = 2;
    goto LABEL_48;
  }
  v13 = a5;
  if ( (unsigned __int8)v12 < 8u )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, _QWORD))(a2 + 24))(
               *(_QWORD *)(a2 + 40),
               208LL,
               a3,
               0LL);
    if ( v28 < 8 )
    {
      v15 = *a3;
    }
    else
    {
      *a3 = 8;
      v15 = 8;
    }
    *a4 = 2;
    if ( v15 < 8 )
    {
      *a4 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      v26 = 8;
      v24 = v10;
      v20 = *a1;
      result = WPP_RECORDER_SF_DDD(
                 v13,
                 2u,
                 (__int64)a3,
                 0x60u,
                 (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                 v20,
                 v24,
                 v26);
LABEL_48:
      if ( !*a4 )
        return result;
      goto LABEL_49;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v13, a2, (__int64)a3, 0x61u, v18);
  }
  if ( *a1 > 8u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *a4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = 8;
      v25 = v10;
      v21 = *a1;
      WPP_RECORDER_SF_DDD(v13, 2u, v16, 0x62u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v21, v25, v27);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 207LL);
  }
  v17 = *(_DWORD *)(a2 + 256);
  if ( (v17 & 8) != 0 )
  {
    *(_DWORD *)(a2 + 256) = v17 & 0xFFFFFFD7 | 0x20;
    if ( *v30 <= v28 )
    {
      if ( *((_WORD *)a1 + 1) )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *a4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = *((unsigned __int16 *)a1 + 1);
          LODWORD(v19) = v10;
          WPP_RECORDER_SF_dD(v13, 2u, 5u, 0x65u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v19, v23);
        }
        (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
          *(_QWORD *)(a2 + 40),
          210LL,
          a3,
          v7);
      }
      result = (unsigned int)(*((_DWORD *)a1 + 1) - 49153);
      if ( (unsigned int)result > 0xFF3FFE )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *a4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dddd(v13, a2, (__int64)a3, v7, v18);
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
                   *(_QWORD *)(a2 + 40),
                   211LL,
                   a3,
                   v7);
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *a4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = v10;
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0x64u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v19);
      }
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
                 *(_QWORD *)(a2 + 40),
                 209LL,
                 a3,
                 v7);
    }
    goto LABEL_48;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v10;
    WPP_RECORDER_SF_d(v13, 2u, 5u, 0x63u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v19);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(a2 + 24))(
             *(_QWORD *)(a2 + 40),
             206LL,
             a3,
             v7);
  *a4 = 2;
LABEL_49:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_(v13, 2u, 5u, 0x67u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return result;
}
