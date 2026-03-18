/*
 * XREFs of HUBDESC_ValidateBOSDescriptorSet @ 0x1C0034394
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024DFC (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C002AA80 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002E788 (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_InternalValidateCommonDescriptorHeader @ 0x1C002ED14 (HUBDESC_InternalValidateCommonDescriptorHeader.c)
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0033BDC (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBOSDescriptor @ 0x1C0034078 (HUBDESC_InternalValidateBOSDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

bool __fastcall HUBDESC_ValidateBOSDescriptorSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int128 *a5,
        char *a6,
        _WORD *a7,
        unsigned __int16 *a8,
        _BYTE *a9,
        int *a10,
        _DWORD *a11,
        _BYTE *a12,
        _BYTE *a13,
        __int64 a14)
{
  __int64 v14; // rsi
  char *v15; // rbx
  int v16; // r12d
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // xmm1_8
  _BYTE *v22; // r13
  __int64 v23; // r14
  bool v24; // bl
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int8 *v28; // rdi
  bool v29; // al
  unsigned __int8 v30; // al
  char *v31; // r15
  _DWORD *v32; // rdi
  int v34; // [rsp+20h] [rbp-D9h]
  __int64 v35; // [rsp+28h] [rbp-D1h]
  __int64 v36; // [rsp+30h] [rbp-C9h]
  _OWORD v37[3]; // [rsp+60h] [rbp-99h] BYREF
  __int64 v38; // [rsp+90h] [rbp-69h]
  __int64 v39; // [rsp+98h] [rbp-61h]
  unsigned __int64 v40; // [rsp+A0h] [rbp-59h]
  unsigned int v41; // [rsp+A8h] [rbp-51h]
  char *v42; // [rsp+B0h] [rbp-49h]
  __int64 v43; // [rsp+B8h] [rbp-41h]
  char v44; // [rsp+C0h] [rbp-39h] BYREF
  int v46; // [rsp+158h] [rbp+5Fh] BYREF

  v14 = (__int64)a5;
  v15 = &v44;
  v16 = 0;
  v40 = a2 + a4;
  v19 = *a5;
  v41 = a4;
  v20 = a5[1];
  if ( a6 )
    v15 = a6;
  v37[0] = v19;
  v37[1] = v20;
  v21 = *((_QWORD *)a5 + 6);
  v39 = a2;
  v38 = v21;
  v43 = a3;
  v37[2] = a5[2];
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  v22 = a12;
  if ( a12 )
    *a12 = 0;
  if ( a13 )
    *a13 = 0;
  memset(v15, 0, 0x40uLL);
  v42 = v15;
  if ( a4 < 5 )
  {
    v23 = a14;
    WPP_RECORDER_SF_dD(a14, 2u, 5u, 0xEAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, a4, 5);
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 23LL);
LABEL_13:
    v24 = 0;
    goto LABEL_44;
  }
  v23 = a14;
  v46 = 0;
  HUBDESC_InternalValidateBOSDescriptor((unsigned __int8 *)a2, (__int64)v37, &a5, &v46, a14);
  if ( v46 == 1 )
    goto LABEL_13;
  v25 = *(unsigned __int16 *)(a2 + 2);
  v24 = v46 != 2;
  if ( a4 < v25 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 23LL);
    WPP_RECORDER_SF_ddd(v23, v26, v27, 0xEBu, v34);
    LOWORD(v25) = *(_WORD *)(a2 + 2);
    v24 = 0;
  }
  if ( a4 > (unsigned __int16)v25 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 32))(*(_QWORD *)(v14 + 40), 22LL);
    WPP_RECORDER_SF_dD(
      v23,
      2u,
      5u,
      0xECu,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      a4,
      *(unsigned __int16 *)(a2 + 2));
  }
  v28 = (unsigned __int8 *)(a2 + (unsigned int)a5);
  if ( (unsigned __int64)v28 < v40 )
  {
    while ( 1 )
    {
      v46 = 0;
      HUBDESC_InternalValidateCommonDescriptorHeader(v28, (__int64)v37, (unsigned int *)&a5, &v46, v23);
      if ( v46 == 1 )
        break;
      v29 = v24;
      if ( v46 == 2 )
        v29 = 0;
      v46 = 0;
      v24 = v29;
      v30 = v28[1];
      if ( v30 == 16 )
      {
        HUBDESC_InternalValidateDeviceCapabilityDescriptor(
          v28,
          (__int64)v37,
          (unsigned int *)&a5,
          &v46,
          a7,
          a8,
          a9,
          a10,
          v22,
          a13,
          v23);
        if ( v46 == 1 )
        {
          v24 = 0;
          goto LABEL_44;
        }
        if ( v46 == 2 )
          v24 = 0;
      }
      else
      {
        LODWORD(v36) = v30;
        LODWORD(v35) = (_DWORD)v28 - a2;
        WPP_RECORDER_SF_dD(v23, 2u, 5u, 0xEDu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v35, v36);
        (*(void (__fastcall **)(_QWORD, __int64))(v14 + 32))(*(_QWORD *)(v14 + 40), 28LL);
      }
      ++v16;
      v28 += (unsigned int)a5;
      if ( (unsigned __int64)v28 >= v40 )
        goto LABEL_29;
    }
    v24 = 0;
    goto LABEL_44;
  }
LABEL_29:
  if ( *(unsigned __int8 *)(a2 + 4) != v16 )
  {
    LODWORD(v36) = *(unsigned __int8 *)(a2 + 4);
    LODWORD(v35) = v16;
    WPP_RECORDER_SF_dD(v23, 2u, 5u, 0xEEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v35, v36);
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 25LL);
    v24 = 0;
  }
  v31 = v42;
  v32 = a11;
  if ( *((_QWORD *)v42 + 1) )
  {
    if ( a11 )
      *a11 |= 0x800u;
  }
  else if ( DWORD1(v37[0]) == 3 )
  {
    WPP_RECORDER_SF_(v23, 2u, 5u, 0xEFu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(v14 + 24))(*(_QWORD *)(v14 + 40), 26LL);
    v24 = 0;
  }
  HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(a1);
  if ( v32 )
  {
    if ( *((_QWORD *)v31 + 2) )
      *v32 |= 0x1000u;
    if ( v31[42] )
      *v32 |= 0x10000u;
  }
  if ( !v24 )
LABEL_44:
    WPP_RECORDER_SF_(v23, 2u, 5u, 0xF0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v24;
}
