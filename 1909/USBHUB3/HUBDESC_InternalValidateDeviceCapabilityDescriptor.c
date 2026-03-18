/*
 * XREFs of HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C00373C0
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0037C88 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x1C0034F5C (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x1C003524C (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C0035540 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1C0035B5C (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C0035E18 (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C003613C (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C00369AC (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0036F54 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
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
  int *v12; // rdi
  __int64 v13; // r8
  _WORD *v16; // r13
  unsigned __int16 *v17; // rdx
  unsigned int v18; // eax
  int v19; // ecx
  char v20; // r12
  unsigned int v21; // ebp
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int8 **v30; // rax
  int v32; // [rsp+20h] [rbp-68h]
  unsigned int v33; // [rsp+90h] [rbp+8h]
  int v34; // [rsp+98h] [rbp+10h] BYREF

  v12 = a4;
  v13 = 0LL;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v12 = &v34;
    v34 = 0;
  }
  v16 = a5;
  if ( a5 )
    *a5 = 0;
  v17 = a6;
  if ( a6 )
    *a6 = 0;
  v18 = *a1;
  v19 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v20 = 1;
  v21 = *(_DWORD *)(a2 + 72) - v19;
  *a3 = v18;
  v33 = v21;
  v22 = a11;
  LODWORD(a5) = v19;
  if ( (unsigned __int8)v18 < 3u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 24))(*(_QWORD *)(a2 + 40), 72LL, 0LL);
    if ( v33 < 3 )
    {
      *v12 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_DDD(
          v22,
          2u,
          v24,
          0xD8u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          (_DWORD)a5,
          *a1,
          3);
        goto LABEL_66;
      }
      goto LABEL_67;
    }
    *v12 = 2;
    *a3 = 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v22, v23, v24, 0xD7u, v32);
    v19 = (int)a5;
    v17 = a6;
    v13 = 0LL;
  }
  if ( v33 < 3 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v12 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v22, 2u, 5u, 0xD9u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v19);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 73LL, v13);
    goto LABEL_66;
  }
  if ( a1[2] == 2 )
  {
    HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(a1, a2, a3, v12, a8, v22);
    if ( *v12 == 1 )
      goto LABEL_66;
    v30 = *(unsigned __int8 ***)(a2 + 80);
    if ( !*v30 )
    {
      *v30 = a1;
      goto LABEL_66;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v22, 2u, 5u, 0xDAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v26 = 76LL;
  }
  else if ( a1[2] == 3 )
  {
    HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(a1, a2, a3, v12, v16, v17, a7, v22);
    if ( *v12 == 1 )
      goto LABEL_66;
    v29 = *(_QWORD *)(a2 + 80);
    if ( !*(_QWORD *)(v29 + 8) )
    {
      *(_QWORD *)(v29 + 8) = a1;
      goto LABEL_66;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v22, 2u, 5u, 0xDBu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v26 = 75LL;
  }
  else if ( a1[2] == 4 )
  {
    HUBDESC_InternalValidateContainerIDCapabilityDescriptor(a1, a2, a3, v12, v22);
    if ( *v12 == 1 )
      goto LABEL_66;
    v28 = *(_QWORD *)(a2 + 80);
    if ( !*(_QWORD *)(v28 + 24) )
    {
      if ( !*(_BYTE *)(v28 + 41) )
        *(_QWORD *)(v28 + 24) = a1;
LABEL_66:
      if ( !*v12 )
        return v20;
      goto LABEL_67;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v22, 2u, 5u, 0xDDu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v26 = 74LL;
  }
  else
  {
    if ( a1[2] == 5 )
    {
      HUBDESC_InternalValidatePlatformCapabilityDescriptor(a1, a2, a3, v12, v22);
      goto LABEL_66;
    }
    if ( a1[2] == 6 )
    {
      HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor(a1, a2, a3, v12, v22);
      goto LABEL_66;
    }
    if ( a1[2] == 10 )
    {
      HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(a1, a2, a3, v12, v22);
      if ( *v12 == 1 )
        goto LABEL_66;
      v27 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v27 + 16) )
      {
        *(_QWORD *)(v27 + 16) = a1;
        goto LABEL_66;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v22, 2u, 5u, 0xDCu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      v26 = 203LL;
    }
    else
    {
      if ( a1[2] != 13 )
      {
        if ( a1[2] == 17 )
          HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(a1, a2, (__int64)a3, v12, a9, a10, v22);
        goto LABEL_66;
      }
      HUBDESC_InternalValidateBillboardCapabilityDescriptor(a1, a2, (__int64)a3, v12, v22);
      if ( *v12 == 1 )
        goto LABEL_66;
      v25 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v25 + 32) )
      {
        *(_QWORD *)(v25 + 32) = a1;
        goto LABEL_66;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v22, 2u, 5u, 0xDEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      v26 = 245LL;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v26);
  *v12 = 2;
LABEL_67:
  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v22, 2u, 5u, 0xDFu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v20;
}
