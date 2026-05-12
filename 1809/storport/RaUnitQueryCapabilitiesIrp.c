/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1C006A9D0
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00082C0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0007094 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00076A8 (RaidUnitPoFxIdleComponent.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaUnitIsSMRDisabled @ 0x1C00144B8 (RaUnitIsSMRDisabled.c)
 *     RaidPnPPassToMiniPort @ 0x1C00144F4 (RaidPnPPassToMiniPort.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C004B084 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C006ADAC (PortWdmGetDeviceCapabilities.c)
 *     PortGetDeviceType @ 0x1C006B318 (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, IRP *a2)
{
  int v4; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 DeviceType; // rbx
  SIZE_T v9; // r15
  _DWORD *PoolWithTag; // r14
  int v11; // eax
  char v12; // r8
  int SecurityQos_high; // r8d
  int v14; // edx
  unsigned int v15; // r8d
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rax
  int AccessState; // eax
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

  if ( *(_QWORD *)(a1 + 24) && (v4 = *(_DWORD *)(a1 + 48)) != 0 && (unsigned int)(v4 - 5) > 1 )
  {
    RaidUnitPoFxActivateComponent(a1, 0, 1u, v38);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F, v6, v7);
    v9 = 4 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL) + 184LL) & 4 | 2u);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72536152u);
    PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v39);
    *(_OWORD *)&SecurityContext->SecurityQos = v39[0];
    *(_OWORD *)&SecurityContext->DesiredAccess = v39[1];
    *(_OWORD *)&SecurityContext[1].AccessState = v39[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = v39[3];
    v11 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v11;
    if ( *(_BYTE *)(DeviceType + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v11 | 0x80;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96));
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL) + 184LL) & 4) != 0 )
      {
        *PoolWithTag = 1572865;
        PoolWithTag[1] ^= (PoolWithTag[1] ^ HIDWORD(SecurityContext->SecurityQos)) & 1;
        v17 = PoolWithTag[1] ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 2;
        PoolWithTag[1] = v17;
        v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 4;
        PoolWithTag[1] = v18;
        v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 8;
        PoolWithTag[1] = v19;
        v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x10;
        PoolWithTag[1] = v20;
        v21 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x20;
        PoolWithTag[1] = v21;
        v22 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x40;
        PoolWithTag[1] = v22;
        v23 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)HIDWORD(SecurityContext->SecurityQos)) & 0x80;
        PoolWithTag[1] = v23;
        v24 = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)HIDWORD(SecurityContext->SecurityQos)) & 0x100;
        PoolWithTag[1] = v24;
        v25 = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)HIDWORD(SecurityContext->SecurityQos)) & 0x200;
        PoolWithTag[1] = v25;
        PoolWithTag[1] = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)(HIDWORD(SecurityContext->SecurityQos) >> 7)) & 0x400;
        PoolWithTag[3] = HIDWORD(SecurityContext->AccessState);
        v26 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v26 + 4903) == 1 && *(_BYTE *)(v26 + 4902) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 96) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        PoolWithTag[2] = AccessState;
        PoolWithTag[1] &= ~0x800u;
      }
      if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9LL, v12, (__int64)PoolWithTag, v9) >= 0 )
      {
        SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
        v14 = SecurityQos_high ^ PoolWithTag[1];
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 544LL) + 184LL) & 4) != 0 )
        {
          v28 = SecurityQos_high ^ v14 & 1;
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
            *(_DWORD *)(a1 + 1824) |= 0x10u;
            RaidUnitSetDefaultWriteCachePolicy(a1);
          }
        }
        else
        {
          HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high ^ v14 & 0x10;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x72536152u);
    }
    *(_BYTE *)(a1 + 450) ^= (*(_BYTE *)(a1 + 450) ^ ((unsigned __int8)(HIDWORD(SecurityContext->SecurityQos) >> 4) << 6)) & 0x40;
    *(_BYTE *)(a1 + 450) = *(_BYTE *)(a1 + 450) & 0x7F | ((unsigned __int8)(HIDWORD(SecurityContext->SecurityQos) >> 9) << 7);
    if ( (unsigned int)RaUnitIsSMRDisabled(a1) )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    RaidUnitPoFxIdleComponent(a1, 0, 0, v38);
    v15 = 0;
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    v15 = -1073741810;
  }
  return RaidCompleteRequestEx(a2, 0, v15);
}
