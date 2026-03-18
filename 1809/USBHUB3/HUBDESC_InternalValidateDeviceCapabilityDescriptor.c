/*
 * XREFs of HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0033BDC
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0034394 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C0031CB0 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C0031F14 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C0032194 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C00326A8 (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C0032908 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C0032BCC (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C003334C (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0033818 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        int *a8,
        _BYTE *a9,
        _BYTE *a10,
        __int64 a11)
{
  int *v11; // rdi
  _WORD *v15; // rdx
  unsigned __int16 *v16; // r8
  unsigned int v17; // eax
  int v18; // ecx
  char v19; // r12
  __int64 v20; // rbp
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int8 **v29; // rax
  int v31; // [rsp+20h] [rbp-68h]
  int v32; // [rsp+90h] [rbp+8h]
  unsigned int v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h] BYREF

  v11 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v11 = &v34;
    v34 = 0;
  }
  v15 = a5;
  if ( a5 )
    *a5 = 0;
  v16 = a6;
  if ( a6 )
    *a6 = 0;
  v17 = *a1;
  v18 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v19 = 1;
  v20 = a11;
  v21 = *(_DWORD *)(a2 + 72) - v18;
  *a3 = v17;
  v32 = v18;
  v33 = v21;
  if ( (unsigned __int8)v17 < 3u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 72LL);
    if ( v33 < 3 )
    {
      *v11 = 1;
      WPP_RECORDER_SF_DDD(v20, 2u, v23, 0xD8u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v32, *a1, 3);
      goto LABEL_51;
    }
    *v11 = 2;
    *a3 = 3;
    WPP_RECORDER_SF_DDDD(v20, v22, v23, 0xD7u, v31);
    v15 = a5;
    v16 = a6;
    v18 = v32;
    v21 = v33;
  }
  if ( v21 < 3 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v11 = 2;
    WPP_RECORDER_SF_d(v20, 2u, 5u, 0xD9u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 73LL);
    goto LABEL_51;
  }
  if ( a1[2] == 2 )
  {
    HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(a1, a2, a3, v11, a8, v20);
    if ( *v11 == 1 )
      goto LABEL_51;
    v29 = *(unsigned __int8 ***)(a2 + 80);
    if ( !*v29 )
    {
      *v29 = a1;
      goto LABEL_51;
    }
    WPP_RECORDER_SF_(v20, 2u, 5u, 0xDAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v25 = 76LL;
    goto LABEL_30;
  }
  if ( a1[2] == 3 )
  {
    HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2, (__int64)a3, v11, v15, v16, a7, v20);
    if ( *v11 == 1 )
      goto LABEL_51;
    v28 = *(_QWORD *)(a2 + 80);
    if ( !*(_QWORD *)(v28 + 8) )
    {
      *(_QWORD *)(v28 + 8) = a1;
      goto LABEL_51;
    }
    WPP_RECORDER_SF_(v20, 2u, 5u, 0xDBu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v25 = 75LL;
    goto LABEL_30;
  }
  if ( a1[2] != 4 )
  {
    if ( a1[2] == 5 )
    {
      HUBDESC_InternalValidatePlatformCapabilityDescriptor(a1, a2, a3, v11, v20);
      goto LABEL_51;
    }
    if ( a1[2] == 6 )
    {
      HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(a1, a2, a3, v11, v20);
      goto LABEL_51;
    }
    if ( a1[2] == 10 )
    {
      HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(a1, a2, a3, v11, v20);
      if ( *v11 == 1 )
        goto LABEL_51;
      v26 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v26 + 16) )
      {
        *(_QWORD *)(v26 + 16) = a1;
        goto LABEL_51;
      }
      WPP_RECORDER_SF_(v20, 2u, 5u, 0xDCu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      v25 = 203LL;
    }
    else
    {
      if ( a1[2] != 13 )
      {
        if ( a1[2] == 17 )
          HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(a1, a2, a3, v11, a9, a10, v20);
        goto LABEL_51;
      }
      HUBDESC_InternalValidateBillboardCapabilityDescriptor(a1, a2, a3, v11, v20);
      if ( *v11 == 1 )
        goto LABEL_51;
      v24 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v24 + 32) )
      {
        *(_QWORD *)(v24 + 32) = a1;
        goto LABEL_51;
      }
      WPP_RECORDER_SF_(v20, 2u, 5u, 0xDEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      v25 = 245LL;
    }
LABEL_30:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v25);
    *v11 = 2;
LABEL_52:
    v19 = 0;
    WPP_RECORDER_SF_(v20, 2u, 5u, 0xDFu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    return v19;
  }
  HUBDESC_InternalValidateContainerIDCapabilityDescriptor(a1, a2, a3, v11, v20);
  if ( *v11 == 1 )
    goto LABEL_51;
  v27 = *(_QWORD *)(a2 + 80);
  if ( *(_QWORD *)(v27 + 24) )
  {
    WPP_RECORDER_SF_(v20, 2u, 5u, 0xDDu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v25 = 74LL;
    goto LABEL_30;
  }
  if ( !*(_BYTE *)(v27 + 41) )
    *(_QWORD *)(v27 + 24) = a1;
LABEL_51:
  if ( *v11 )
    goto LABEL_52;
  return v19;
}
