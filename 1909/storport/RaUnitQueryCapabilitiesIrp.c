/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1C006C240
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C00065D8 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0009458 (RaidUnitPoFxActivateComponent.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0049A30 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C006C5FC (PortWdmGetDeviceCapabilities.c)
 *     PortGetDeviceType @ 0x1C006CB7C (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, IRP *a2)
{
  bool v4; // zf
  int v5; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 DeviceType; // rbx
  SIZE_T v10; // r15
  _DWORD *PoolWithTag; // r14
  int v12; // eax
  char v13; // r8
  unsigned int v14; // r8d
  int v16; // ecx
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
  int SecurityQos_high; // r8d
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  _BYTE v40[16]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v41[4]; // [rsp+40h] [rbp-78h] BYREF

  memset(v41, 0, sizeof(v41));
  v4 = *(_QWORD *)(a1 + 24) == 0LL;
  v40[0] = 0;
  if ( v4 || (v5 = *(_DWORD *)(a1 + 48)) == 0 || (unsigned int)(v5 - 5) <= 1 )
  {
    a2->IoStatus.Information = 0LL;
    v14 = -1073741810;
  }
  else
  {
    RaidUnitPoFxActivateComponent(a1, 0, 1LL, v40);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F, v7, v8);
    v10 = 4 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4 | 2u);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72536152u);
    PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v41);
    *(_OWORD *)&SecurityContext->SecurityQos = v41[0];
    *(_OWORD *)&SecurityContext->DesiredAccess = v41[1];
    *(_OWORD *)&SecurityContext[1].AccessState = v41[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = v41[3];
    v12 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v12;
    if ( *(_BYTE *)(DeviceType + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v12 | 0x80;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96));
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
      {
        v16 = PoolWithTag[1];
        *PoolWithTag = 1572865;
        PoolWithTag[1] ^= (HIDWORD(SecurityContext->SecurityQos) ^ v16) & 1;
        v17 = PoolWithTag[1] ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 2;
        PoolWithTag[1] = v17;
        v18 = v17 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v17) & 4;
        PoolWithTag[1] = v18;
        v19 = v18 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v18) & 8;
        PoolWithTag[1] = v19;
        v20 = v19 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v19) & 0x10;
        PoolWithTag[1] = v20;
        v21 = v20 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v20) & 0x20;
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
        if ( *(_BYTE *)(v26 + 4827) == 1 && *(_BYTE *)(v26 + 4826) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 96) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        PoolWithTag[2] = AccessState;
        PoolWithTag[1] &= ~0x800u;
      }
      if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9LL, v13, (__int64)PoolWithTag, v10) >= 0 )
      {
        SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
        v29 = SecurityQos_high ^ PoolWithTag[1];
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
        {
          v30 = SecurityQos_high ^ v29 & 1;
          HIDWORD(SecurityContext->SecurityQos) = v30;
          v31 = (PoolWithTag[1] ^ v30) & 2 ^ v30;
          HIDWORD(SecurityContext->SecurityQos) = v31;
          v32 = (PoolWithTag[1] ^ v31) & 4 ^ v31;
          HIDWORD(SecurityContext->SecurityQos) = v32;
          v33 = (PoolWithTag[1] ^ v32) & 8 ^ v32;
          HIDWORD(SecurityContext->SecurityQos) = v33;
          v34 = (PoolWithTag[1] ^ v33) & 0x10 ^ v33;
          HIDWORD(SecurityContext->SecurityQos) = v34;
          v35 = (PoolWithTag[1] ^ v34) & 0x20 ^ v34;
          HIDWORD(SecurityContext->SecurityQos) = v35;
          v36 = (PoolWithTag[1] ^ v35) & 0x40 ^ v35;
          HIDWORD(SecurityContext->SecurityQos) = v36;
          v37 = (PoolWithTag[1] ^ v36) & 0x80 ^ v36;
          HIDWORD(SecurityContext->SecurityQos) = v37;
          v38 = (PoolWithTag[1] ^ v37) & 0x100 ^ v37;
          HIDWORD(SecurityContext->SecurityQos) = v38;
          v39 = (PoolWithTag[1] ^ v38) & 0x200 ^ v38;
          HIDWORD(SecurityContext->SecurityQos) = v39;
          HIDWORD(SecurityContext->SecurityQos) = v39 ^ (v39 ^ (PoolWithTag[1] << 7)) & 0x20000;
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
          HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high ^ v29 & 0x10;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x72536152u);
    }
    if ( (**(_BYTE **)(a1 + 104) & 0x1F) == 0x14 && !IsSMREnabled )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    RaidUnitPoFxIdleComponent(a1, 0, 0, v40);
    v14 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v14);
}
