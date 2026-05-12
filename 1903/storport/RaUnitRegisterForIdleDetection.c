/*
 * XREFs of RaUnitRegisterForIdleDetection @ 0x1C006C1B4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidIsUnitControlSupported @ 0x1C0006860 (RaidIsUnitControlSupported.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00068E8 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C00069BC (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaCallMiniportUnitControl @ 0x1C0015214 (RaCallMiniportUnitControl.c)
 *     RaidSetD3Cold @ 0x1C001B7E0 (RaidSetD3Cold.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0021524 (RaidRegisterForRuntimePowerManagement.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     McTemplateK0pquuudttqqttq @ 0x1C003E710 (McTemplateK0pquuudttqqttq.c)
 */

__int64 __fastcall RaUnitRegisterForIdleDetection(unsigned __int8 *Context, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // r13d
  int v6; // edi
  unsigned __int8 v7; // al
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // r12d
  int v11; // esi
  __int64 v12; // r8
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  _QWORD *Pool; // rax
  _QWORD *v19; // rsi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 *v28; // rcx
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v30; // [rsp+48h] [rbp-51h]
  int v31; // [rsp+80h] [rbp-19h]
  int v32; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v3 = 0;
  v32 = 0;
  v31 = -1;
  v6 = 0;
  if ( !v2 || (*(_BYTE *)(v2 + 109) & 4) != 0 || *((_DWORD *)Context + 390) == 1 )
    goto LABEL_49;
  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
  {
    if ( (Context[161] & 0x80u) != 0 )
    {
      v6 = -1073741738;
      goto LABEL_15;
    }
    v7 = _interlockedbittestandset((volatile signed __int32 *)Context + 42, 0);
    v32 = v7;
    if ( !v7 )
    {
      Context[161] ^= (Context[161] ^ (4 * (*(_DWORD *)(a2 + 8) >> 1))) & 4;
      if ( RaidIsUnitControlSupported((__int64)Context, 4) )
        v6 = RaCallMiniportUnitControl(*((_QWORD *)Context + 3) + 296LL);
      if ( *((_QWORD *)Context + 186) )
        goto LABEL_12;
      if ( (*(_BYTE *)(v2 + 104) & 0x20) == 0 )
      {
        v6 = -1073741637;
LABEL_12:
        if ( v6 >= 0 )
        {
          *(_DWORD *)(*((_QWORD *)Context + 186) + 32LL) ^= (*(_DWORD *)(*((_QWORD *)Context + 186) + 32LL) ^ *(_DWORD *)(a2 + 8)) & 1;
          v21 = *((_DWORD *)Context + 391);
          v22 = *((_QWORD *)Context + 186);
          if ( v21 == -1 )
          {
            v23 = *(_DWORD **)(v22 + 8);
            if ( *v23 >= 2u && (v23[3] & 0x10) != 0 )
            {
              v21 = v23[4];
            }
            else if ( *v23 < 3u || (v21 = 0, (v23[3] & 0x20) == 0) )
            {
              v21 = 300000;
            }
          }
          *(_DWORD *)(v22 + 24) = v21;
          *(_DWORD *)(*((_QWORD *)Context + 186) + 20LL) = *(_DWORD *)(a2 + 12);
          RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
          PoFxStartDevicePowerManagement(**((_QWORD **)Context + 186));
          v25 = *((_QWORD *)Context + 186);
          if ( (*(_DWORD *)(v25 + 32) & 0x80u) != 0 )
          {
            LOBYTE(v24) = 1;
            PoRegisterCoalescingCallback(RaidUnitIoCoalescingCallback, v24, v25 + 96, Context);
            PoRegisterPowerSettingCallback(
              *((PDEVICE_OBJECT *)Context + 1),
              &GUID_ACDC_POWER_SOURCE,
              (PPOWER_SETTING_CALLBACK)RaidUnitPowerSettingCallback,
              Context,
              (PVOID *)(*((_QWORD *)Context + 186) + 104LL));
            *(_QWORD *)(*((_QWORD *)Context + 186) + 112LL) = ExAllocateTimer(
                                                                RaidUnitPowerCycleCheck,
                                                                Context,
                                                                0LL,
                                                                v26);
            *(_QWORD *)(*((_QWORD *)Context + 186) + 120LL) = ExAllocateTimer(
                                                                RaidUnitEndMaintenanceTime,
                                                                Context,
                                                                0LL,
                                                                v27);
          }
        }
        else
        {
          Context[161] &= ~4u;
        }
        RaidSetD3Cold(*((struct _DEVICE_OBJECT **)Context + 1), (Context[161] & 4) != 0);
        goto LABEL_15;
      }
      Pool = RaidAllocatePool(NonPagedPoolNx, 0xE0uLL, 0x4F506152u, *((_QWORD *)Context + 1));
      v19 = Pool;
      if ( !Pool )
      {
        v6 = -1073741670;
        goto LABEL_12;
      }
      memset(Pool, 0, 0xE0uLL);
      *((_DWORD *)v19 + 8) = v19[4] & 0xFFFFFFF1 | 0xA;
      v19[10] = v19 + 9;
      v19[9] = v19 + 9;
      KeInitializeSpinLock(v19 + 11);
      v19[1] = v19 + 18;
      *((_DWORD *)v19 + 37) = 16;
      *((_DWORD *)v19 + 36) = 1;
      *((_DWORD *)v19 + 38) = 1;
      *((_DWORD *)v19 + 40) = 1;
      *((_DWORD *)v19 + 41) = 32;
      *((_DWORD *)v19 + 42) = 1;
      *((_OWORD *)v19 + 11) = xmmword_1C0059D40;
      *((_DWORD *)v19 + 48) = 1;
      *((_DWORD *)v19 + 49) = 32;
      v19[25] = 0LL;
      v19[26] = 0LL;
      *((_DWORD *)v19 + 54) = -1;
      v6 = RaidRegisterForRuntimePowerManagement(
             *((_QWORD *)Context + 1),
             (unsigned __int64)(v19 + 18),
             (const unsigned __int16 *)Context,
             (unsigned __int64)v19);
      if ( v6 >= 0 )
      {
        if ( *v19 )
        {
          PoFxSetComponentLatency(*v19, 0LL, -1LL);
          PoFxSetComponentResidency(*v19, 0LL, -1LL);
          v20 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 185);
          *((_QWORD *)Context + 186) = v19;
          ExReInitializeRundownProtectionCacheAware(v20);
          Context[161] |= 0x80u;
          goto LABEL_12;
        }
        v6 = -1073741823;
      }
      ExFreePoolWithTag(v19, 0x4F506152u);
      goto LABEL_12;
    }
LABEL_49:
    v6 = -1073741823;
    goto LABEL_15;
  }
  v14 = *((_QWORD *)Context + 186);
  v15 = *(_DWORD *)(a2 + 12);
  if ( v15 != *(_DWORD *)(v14 + 20) )
  {
    *(_DWORD *)(v14 + 20) = v15;
    if ( (*(_DWORD *)(*((_QWORD *)Context + 186) + 32LL) & 0x80u) == 0 )
      RaidUnitPoFxSetDeviceIdleTimeout((__int64)Context, *(_DWORD *)(a2 + 12));
    else
      RaidUnitAdaptiveIdleTimeout((__int64)Context);
  }
  v16 = *((_QWORD *)Context + 186);
  v17 = *(_DWORD *)(a2 + 8) & 1;
  if ( v17 != (*(_DWORD *)(v16 + 32) & 1) )
    *(_DWORD *)(v16 + 32) = v17 | *(_DWORD *)(v16 + 32) & 0xFFFFFFFE;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 185));
LABEL_15:
  if ( StorEtwLoggingEnabled )
  {
    v8 = *((_QWORD *)Context + 3);
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    if ( v8 )
      v31 = *(_DWORD *)(v8 + 56);
    if ( RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    {
      v28 = (__int64 *)*((_QWORD *)Context + 186);
      v9 = *v28;
      v11 = v28[4] & 1;
      v3 = *((_DWORD *)v28 + 5);
      v10 = *(_DWORD *)(v28[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 185));
    }
    if ( (byte_1C0061741 & 1) != 0 )
    {
      v30 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v31;
      McTemplateK0pquuudttqqttq(
        (struct _MCGEN_TRACE_CONTEXT *)(*(_DWORD *)(a2 + 8) & 1),
        v30,
        v12,
        v9,
        Handle,
        Context[96],
        Context[97],
        Context[98],
        v6,
        v30,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v10,
        (Context[161] >> 2) & 1,
        v11,
        v3);
    }
  }
  if ( !v32 )
    *((_DWORD *)Context + 42) &= ~1u;
  return (unsigned int)v6;
}
