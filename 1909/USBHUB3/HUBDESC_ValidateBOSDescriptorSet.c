/*
 * XREFs of HUBDESC_ValidateBOSDescriptorSet @ 0x1C0037C88
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002726C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C002CFA8 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C003142C (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C00319C8 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C00373C0 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C00378E4 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

bool __fastcall HUBDESC_ValidateBOSDescriptorSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int128 *a5,
        _BYTE *a6,
        _WORD *a7,
        unsigned __int16 *a8,
        _BYTE *a9,
        int *a10,
        _DWORD *a11,
        _BYTE *a12,
        _BYTE *a13,
        __int64 a14)
{
  __int64 v14; // rdi
  __int64 v17; // rsi
  int v18; // r12d
  __int128 v19; // xmm0
  _BYTE *v20; // rbx
  __int128 v21; // xmm1
  __int64 v22; // xmm1_8
  _BYTE *v23; // r13
  __int64 v24; // r14
  bool v25; // bl
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int8 *v29; // rdi
  bool v30; // al
  unsigned __int8 v31; // al
  _BYTE *v32; // r15
  _DWORD *v33; // rdi
  int v35; // [rsp+20h] [rbp-D9h]
  __int64 v36; // [rsp+28h] [rbp-D1h]
  __int64 v37; // [rsp+30h] [rbp-C9h]
  _OWORD v38[3]; // [rsp+60h] [rbp-99h] BYREF
  __int64 v39; // [rsp+90h] [rbp-69h]
  __int64 v40; // [rsp+98h] [rbp-61h]
  unsigned __int64 v41; // [rsp+A0h] [rbp-59h]
  int v42; // [rsp+A8h] [rbp-51h]
  int v43; // [rsp+ACh] [rbp-4Dh]
  _BYTE *v44; // [rsp+B0h] [rbp-49h]
  __int64 v45; // [rsp+B8h] [rbp-41h]
  _BYTE v46[112]; // [rsp+C0h] [rbp-39h] BYREF
  int v48; // [rsp+158h] [rbp+5Fh] BYREF

  v14 = a4;
  v43 = 0;
  memset(v46, 0, 0x40uLL);
  v17 = (__int64)a5;
  v41 = a2 + v14;
  v18 = 0;
  v45 = a3;
  v19 = *a5;
  v20 = v46;
  v42 = v14;
  v21 = a5[1];
  if ( a6 )
    v20 = a6;
  v38[0] = v19;
  v38[1] = v21;
  v22 = *((_QWORD *)a5 + 6);
  v40 = a2;
  v39 = v22;
  v38[2] = a5[2];
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a12 )
    *a12 = 0;
  v23 = a13;
  if ( a13 )
    *a13 = 0;
  memset(v20, 0, 0x40uLL);
  v44 = v20;
  if ( (unsigned int)v14 < 5 )
  {
    v24 = a14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a14, 2u, 5u, 0xEAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v14, 5);
    (*(void (__fastcall **)(_QWORD, __int64))(v17 + 24))(*(_QWORD *)(v17 + 40), 23LL);
    goto LABEL_15;
  }
  v24 = a14;
  v48 = 0;
  HUBDESC_InternalValidateBOSDescriptor((unsigned __int8 *)a2, (__int64)v38, &a5, &v48, a14);
  if ( v48 == 1 )
  {
LABEL_15:
    v25 = 0;
    goto LABEL_55;
  }
  v26 = *(unsigned __int16 *)(a2 + 2);
  v25 = v48 != 2;
  if ( (unsigned int)v14 < v26 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v17 + 24))(*(_QWORD *)(v17 + 40), 23LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(v24, v27, v28, 0xEBu, v35);
    LOWORD(v26) = *(_WORD *)(a2 + 2);
    v25 = 0;
  }
  if ( (unsigned int)v14 > (unsigned __int16)v26 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v17 + 32))(*(_QWORD *)(v17 + 40), 22LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        v24,
        2u,
        5u,
        0xECu,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v14,
        *(unsigned __int16 *)(a2 + 2));
  }
  v29 = (unsigned __int8 *)(a2 + (unsigned int)a5);
  if ( (unsigned __int64)v29 < v41 )
  {
    while ( 1 )
    {
      v48 = 0;
      HUBDESC_InternalValidateCommonDescriptorHeader(v29, (__int64)v38, (unsigned int *)&a5, &v48, v24);
      if ( v48 == 1 )
        break;
      v30 = v25;
      if ( v48 == 2 )
        v30 = 0;
      v48 = 0;
      v25 = v30;
      v31 = v29[1];
      if ( v31 == 16 )
      {
        HUBDESC_InternalValidateDeviceCapabilityDescriptor(
          v29,
          (__int64)v38,
          (unsigned int *)&a5,
          &v48,
          a7,
          a8,
          a9,
          a10,
          a12,
          v23,
          v24);
        if ( v48 == 1 )
        {
          v25 = 0;
          goto LABEL_55;
        }
        if ( v48 == 2 )
          v25 = 0;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v37) = v31;
          LODWORD(v36) = (_DWORD)v29 - a2;
          WPP_RECORDER_SF_dD(v24, 2u, 5u, 0xEDu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v36, v37);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v17 + 32))(*(_QWORD *)(v17 + 40), 28LL);
      }
      ++v18;
      v29 += (unsigned int)a5;
      if ( (unsigned __int64)v29 >= v41 )
        goto LABEL_36;
    }
    v25 = 0;
    goto LABEL_55;
  }
LABEL_36:
  if ( *(unsigned __int8 *)(a2 + 4) != v18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v37) = *(unsigned __int8 *)(a2 + 4);
      LODWORD(v36) = v18;
      WPP_RECORDER_SF_dD(v24, 2u, 5u, 0xEEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v36, v37);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v17 + 24))(*(_QWORD *)(v17 + 40), 25LL);
    v25 = 0;
  }
  v32 = v44;
  v33 = a11;
  if ( *((_QWORD *)v44 + 1) )
  {
    if ( a11 )
      *a11 |= 0x800u;
  }
  else if ( DWORD1(v38[0]) == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v24, 2u, 5u, 0xEFu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(v17 + 24))(*(_QWORD *)(v17 + 40), 26LL);
    v25 = 0;
  }
  HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(a1);
  if ( v33 )
  {
    if ( *((_QWORD *)v32 + 2) )
      *v33 |= 0x1000u;
    if ( v32[42] )
      *v33 |= 0x10000u;
  }
  if ( !v25 )
  {
LABEL_55:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v24, 2u, 5u, 0xF0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v25;
}
