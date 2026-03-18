/*
 * XREFs of HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C0035E18
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C00373C0 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        _BYTE *a5,
        _BYTE *a6,
        __int64 a7)
{
  int *v7; // rdi
  __int64 v10; // r12
  int v11; // r15d
  unsigned int v12; // r13d
  __int64 result; // rax
  unsigned int *v14; // rax
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  int v19; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+10h]
  unsigned int *v21; // [rsp+A0h] [rbp+18h]

  v21 = (unsigned int *)a3;
  v7 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v19 = 0;
    v7 = &v19;
  }
  v10 = a7;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 72) - v11;
  v20 = v12;
  if ( *a1 < 8u )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 262LL);
    if ( v12 < 8 )
    {
      *v7 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return result;
      result = WPP_RECORDER_SF_DDD(
                 v10,
                 2u,
                 a3,
                 0xA6u,
                 (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                 v11,
                 *a1,
                 8);
      goto LABEL_44;
    }
    v14 = v21;
    *v7 = 2;
    *v14 = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v10, 8LL, a3, 0xA5u, v16);
  }
  if ( *a1 > 8u )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
      *v7 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDD(v10, 2u, a3, 0xA7u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v11, *a1, 8);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 264LL);
  }
  if ( *v21 <= v20 )
  {
    if ( a1[3] )
    {
      if ( *((_DWORD *)a1 + 1) >= 4u )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v7 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = *((_DWORD *)a1 + 1);
          WPP_RECORDER_SF_d(v10, 2u, 5u, 0xAAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 265LL);
      }
      result = *((unsigned int *)a1 + 1);
      if ( (result & 1) != 0 && a5 )
      {
        *a5 = 1;
        result = *((unsigned int *)a1 + 1);
      }
      if ( (result & 2) != 0 )
      {
        result = (__int64)a6;
        if ( a6 )
          *a6 = 1;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = (*((_DWORD *)a1 + 1) >> 1) & 1;
        LODWORD(v17) = *((_DWORD *)a1 + 1) & 1;
        result = WPP_RECORDER_SF_dD(
                   v10,
                   4u,
                   5u,
                   0xABu,
                   (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                   v17,
                   v18);
      }
      goto LABEL_44;
    }
    *v7 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = a1[3];
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA9u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17);
    }
    v15 = 265LL;
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v7 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v11;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0xA8u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v17);
    }
    v15 = 261LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
LABEL_44:
  if ( *v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(v10, 2u, 5u, 0xACu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return result;
}
