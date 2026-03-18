/*
 * XREFs of ACPIBuildProcessDevicePhasePsc @ 0x1C000F4D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C000EA78 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FA30 (ACPIBuildCompleteCommon.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C002ECD0 (WPP_RECORDER_SF_DDqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePsc(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // r14d
  int *v3; // r15
  void *v4; // r12
  __int64 v5; // r13
  int v6; // edi
  __int64 **v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  ULONG_PTR v12; // r9
  int v13; // edi
  __int64 v14; // rcx
  int v15; // edx
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rax
  void *v20; // r8
  void *v21; // rdx
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rax

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(v1 + 440) = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 861098079LL);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = 2;
  v3 = (int *)(v1 + 468);
  v4 = &unk_1C006FE7D;
  v5 = 4LL;
  do
  {
    v6 = 1;
    v7 = (__int64 **)(v1 + 368);
    v8 = 1LL;
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        do
        {
          if ( *((_DWORD *)v9 + 4) < v2 )
            break;
          v9 = (__int64 *)*v9;
        }
        while ( v9 );
        if ( !v9 )
          break;
      }
      ++v6;
      ++v8;
      ++v7;
      if ( v8 > 3 )
        goto LABEL_5;
    }
    v19 = *(_QWORD *)(v1 + 8);
    v20 = &unk_1C006FE7D;
    v21 = &unk_1C006FE7D;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v20 = *(void **)(v1 + 560);
      if ( (v19 & 0x400000000000LL) != 0 )
        v21 = *(void **)(v1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v21,
        6,
        45,
        (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
        v6 - 1,
        v2 - 1,
        v1,
        (__int64)v20,
        (__int64)v21);
    *v3 = v6;
LABEL_5:
    ++v2;
    ++v3;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(v1 + 492) = *(_DWORD *)(v1 + 4LL * *(int *)(v1 + 488) + 460);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v10 = *(_QWORD *)(v1 + 8);
  v11 = 1;
  if ( (v10 & 0x80000000) != 0 )
  {
    v11 = 4;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 && *(int *)(a1 + 48) >= 0 )
    {
      if ( (v10 & 0x80000) != 0 )
      {
        dword_1C0082858 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1LL);
        *(_DWORD *)(v1 + 336) = 1;
      }
      else
      {
        v22 = *(_WORD *)(a1 + 82);
        if ( v22 != 1 )
          KeBugCheckEx(0xA5u, 8uLL, v1, v12, v22);
        v23 = *(_QWORD *)(a1 + 96);
        if ( v23 < 4 )
          v11 = DevicePowerStateTranslation[v23];
        else
          v11 = 0;
        dword_1C0082858 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1LL);
      }
    }
  }
  v13 = ACPIDeviceInternalDelayedDeviceRequest((_QWORD *)v1, v11);
  v14 = *(_QWORD *)(v1 + 8);
  v15 = 0;
  v16 = &unk_1C006FE7D;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v4 = *(void **)(v1 + 560);
    v15 = 0;
    if ( (v14 & 0x400000000000LL) != 0 )
      v16 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      6,
      46,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      v13,
      v1,
      (__int64)v4,
      (__int64)v16);
  }
  v17 = *(unsigned int *)(a1 + 32);
  if ( v13 < 0 )
    *(_DWORD *)(a1 + 48) = v13;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v17);
  return (unsigned int)v13;
}
