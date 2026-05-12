/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1C006B340
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006588 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0009408 (RaidUnitPoFxActivateComponent.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidPnPPassToMiniPort @ 0x1C00169C8 (RaidPnPPassToMiniPort.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C00488C0 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C006B6FC (PortWdmGetDeviceCapabilities.c)
 *     PortGetDeviceType @ 0x1C006BC7C (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, IRP *a2)
{
  bool v4; // zf
  int v5; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  __int64 DeviceType; // rbx
  SIZE_T v8; // r15
  _DWORD *PoolWithTag; // r14
  int v10; // eax
  char v11; // r8
  unsigned int v12; // r8d
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  int AccessState; // eax
  int SecurityQos_high; // r8d
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  _BYTE v38[16]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v39[4]; // [rsp+40h] [rbp-78h] BYREF

  memset(v39, 0, sizeof(v39));
  v4 = *(_QWORD *)(a1 + 24) == 0LL;
  v38[0] = 0;
  if ( v4 || (v5 = *(_DWORD *)(a1 + 48)) == 0 || (unsigned int)(v5 - 5) <= 1 )
  {
    a2->IoStatus.Information = 0LL;
    v12 = -1073741810;
  }
  else
  {
    RaidUnitPoFxActivateComponent(a1, 0, 1LL, v38);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
    v8 = 4 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4 | 2u);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72536152u);
    PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v39);
    *(_OWORD *)&SecurityContext->SecurityQos = v39[0];
    *(_OWORD *)&SecurityContext->DesiredAccess = v39[1];
    *(_OWORD *)&SecurityContext[1].AccessState = v39[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = v39[3];
    v10 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v10;
    if ( *(_BYTE *)(DeviceType + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v10 | 0x80;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96));
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v8);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
      {
        v14 = PoolWithTag[1];
        *PoolWithTag = 1572865;
        PoolWithTag[1] ^= (HIDWORD(SecurityContext->SecurityQos) ^ v14) & 1;
        v15 = PoolWithTag[1] ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 2;
        PoolWithTag[1] = v15;
        v16 = v15 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v15) & 4;
        PoolWithTag[1] = v16;
        v17 = v16 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v16) & 8;
        PoolWithTag[1] = v17;
        v18 = v17 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v17) & 0x10;
        PoolWithTag[1] = v18;
        v19 = v18 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v18) & 0x20;
        PoolWithTag[1] = v19;
        v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x40;
        PoolWithTag[1] = v20;
        v21 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x80;
        PoolWithTag[1] = v21;
        v22 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)HIDWORD(SecurityContext->SecurityQos)) & 0x100;
        PoolWithTag[1] = v22;
        v23 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)HIDWORD(SecurityContext->SecurityQos)) & 0x200;
        PoolWithTag[1] = v23;
        PoolWithTag[1] = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)(HIDWORD(SecurityContext->SecurityQos) >> 7)) & 0x400;
        PoolWithTag[3] = HIDWORD(SecurityContext->AccessState);
        v24 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v24 + 4827) == 1 && *(_BYTE *)(v24 + 4826) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 96) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        PoolWithTag[2] = AccessState;
        PoolWithTag[1] &= ~0x800u;
      }
      if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9LL, v11, (__int64)PoolWithTag, v8) >= 0 )
      {
        SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
        v27 = SecurityQos_high ^ PoolWithTag[1];
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
        {
          v28 = SecurityQos_high ^ v27 & 1;
          HIDWORD(SecurityContext->SecurityQos) = v28;
          v29 = (PoolWithTag[1] ^ v28) & 2 ^ v28;
          HIDWORD(SecurityContext->SecurityQos) = v29;
          v30 = (PoolWithTag[1] ^ v29) & 4 ^ v29;
          HIDWORD(SecurityContext->SecurityQos) = v30;
          v31 = (PoolWithTag[1] ^ v30) & 8 ^ v30;
          HIDWORD(SecurityContext->SecurityQos) = v31;
          v32 = (PoolWithTag[1] ^ v31) & 0x10 ^ v31;
          HIDWORD(SecurityContext->SecurityQos) = v32;
          v33 = (PoolWithTag[1] ^ v32) & 0x20 ^ v32;
          HIDWORD(SecurityContext->SecurityQos) = v33;
          v34 = (PoolWithTag[1] ^ v33) & 0x40 ^ v33;
          HIDWORD(SecurityContext->SecurityQos) = v34;
          v35 = (PoolWithTag[1] ^ v34) & 0x80 ^ v34;
          HIDWORD(SecurityContext->SecurityQos) = v35;
          v36 = (PoolWithTag[1] ^ v35) & 0x100 ^ v35;
          HIDWORD(SecurityContext->SecurityQos) = v36;
          v37 = (PoolWithTag[1] ^ v36) & 0x200 ^ v36;
          HIDWORD(SecurityContext->SecurityQos) = v37;
          HIDWORD(SecurityContext->SecurityQos) = v37 ^ (v37 ^ (PoolWithTag[1] << 7)) & 0x20000;
          HIDWORD(SecurityContext->AccessState) = PoolWithTag[3];
          LODWORD(SecurityContext->AccessState) = PoolWithTag[2];
          if ( (PoolWithTag[1] & 0x800) != 0 )
          {
            *(_DWORD *)(a1 + 1568) |= 0x10u;
            RaidUnitSetDefaultWriteCachePolicy(a1);
          }
        }
        else
        {
          HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high ^ v27 & 0x10;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x72536152u);
    }
    if ( (**(_BYTE **)(a1 + 104) & 0x1F) == 0x14 && !IsSMREnabled )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    RaidUnitPoFxIdleComponent(a1, 0, 0, v38);
    v12 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v12);
}
