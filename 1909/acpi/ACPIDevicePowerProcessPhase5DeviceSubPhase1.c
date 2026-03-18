/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C00147D0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0015594 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0017370 (WPP_RECORDER_SF_qLqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase1(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rbp
  int v3; // r12d
  unsigned int v4; // esi
  __int64 *v5; // r14
  int v6; // edx
  void *v8; // r8
  void *v9; // rcx
  char v10; // r15
  __int64 v11; // rax
  KIRQL v12; // al
  _QWORD *i; // rdx
  __int64 v14; // rdx
  char v15; // r8
  void *v16; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = &unk_1C006FE7D;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v8 = &unk_1C006FE7D;
  v9 = &unk_1C006FE7D;
  v10 = 1;
  if ( v1 )
  {
    v11 = v1[1];
    v6 = (int)v1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v8 = (void *)v1[70];
      if ( (v11 & 0x400000000000LL) != 0 )
        v9 = (void *)v1[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      10,
      72,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      (v3 != 1) + 4,
      v6,
      (__int64)v8,
      (__int64)v9);
  if ( v3 != 1 )
  {
    *(_DWORD *)(a1 + 212) = 5;
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 212) = 4;
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  for ( i = (_QWORD *)v1[46]; i; i = (_QWORD *)*i )
  {
    if ( (*(_BYTE *)(i[1] + 16LL) & 0x10) == 0 )
    {
      v10 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v12);
  if ( !v10 )
  {
    v4 = -1073741823;
    goto LABEL_17;
  }
  v5 = (__int64 *)v1[52];
  if ( v5 )
  {
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v4 = AMLIAsyncEvalObject(v5, 0LL, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  }
  v15 = 0;
  v16 = &unk_1C006FE7D;
  if ( v1 )
  {
    v14 = v1[1];
    v15 = (char)v1;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v2 = (void *)v1[70];
      if ( (v14 & 0x400000000000LL) != 0 )
        v16 = (void *)v1[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      10,
      73,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v4,
      v15,
      (__int64)v2,
      (__int64)v16);
  }
  result = 259LL;
  if ( v4 != 259 )
  {
    v4 = 0;
LABEL_17:
    ACPIDeviceCompleteGenericPhase(v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
