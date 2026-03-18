/*
 * XREFs of ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C000A610
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001D70 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000A814 (ACPIInternalDecrementIrpReferenceCount.c)
 */

__int64 __fastcall ACPIFilterIrpDeviceUsageNotificationCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rbx
  __int64 v5; // rdi
  int v6; // r14d
  const char *v7; // rax
  char v8; // r8
  const char *v9; // rdx
  __int64 v10; // rcx
  char v11; // al
  int v13; // edx
  unsigned int v14; // edx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v5 + 3) |= 1u;
  v6 = *(_DWORD *)(a2 + 48);
  v7 = (const char *)&unk_1C006FE7D;
  v8 = 0;
  v9 = (const char *)&unk_1C006FE7D;
  if ( DeviceExtension )
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v8 = DeviceExtension;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(DeviceExtension + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(DeviceExtension + 568);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_ed40076b1570389cf10b919aaf05b677_Traceguids,
      a2,
      off_1C007F0C0[0],
      v6,
      v8,
      v7,
      v9);
  if ( v6 >= 0 )
  {
    if ( *(_DWORD *)(v5 + 16) == 2 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 688));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 688));
    }
    if ( *(_DWORD *)(v5 + 16) == 1 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 692));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 692));
    }
    if ( *(_DWORD *)(v5 + 16) == 3 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 696));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 696));
    }
    v11 = *(_BYTE *)(v5 + 8);
    if ( v11 == 1 )
    {
      *(_DWORD *)(a1 + 48) &= ~0x2000u;
      v11 = *(_BYTE *)(v5 + 8);
    }
    if ( !v11 && (*(_BYTE *)(DeviceExtension + 8) & 0x40) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 48);
      if ( (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 728) + 48LL) & 0x2000) != 0 )
        v14 = v13 | 0x2000;
      else
        v14 = v13 & 0xFFFFDFFF;
      *(_DWORD *)(a1 + 48) = v14;
    }
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 736));
  }
  ACPIInternalDecrementIrpReferenceCount(DeviceExtension);
  return 0LL;
}
