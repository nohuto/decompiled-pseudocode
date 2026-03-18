/*
 * XREFs of ACPIDeviceIrpDeviceFilterRequest @ 0x1C0030290
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E374 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C2EC (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C001D9B0 (WPP_RECORDER_SF_qdqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceFilterRequest(ULONG_PTR a1, __int64 a2, _SLIST_ENTRY *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  char v7; // r8
  _QWORD *v8; // rbx
  int v9; // r15d
  int v10; // ebp
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  int v14; // edi
  int v15; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = 0;
  v8 = (_QWORD *)DeviceExtension;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = (const char *)&unk_1C006E28A;
  v12 = (const char *)&unk_1C006E28A;
  if ( DeviceExtension )
  {
    v7 = DeviceExtension;
    v13 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = (const char *)v8[70];
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = (const char *)v8[71];
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v12,
    0xAu,
    0x1Eu,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a2,
    v9 - 1,
    v7,
    v11,
    v12);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v14 = *(_DWORD *)(a2 + 48);
  if ( v14 < 0 )
  {
    ACPIInternalDecrementIrpReferenceCount((__int64)v8);
    return (unsigned int)v14;
  }
  else if ( v9 != 1 && (v8[119] & 0x1000000000LL) != 0 )
  {
    if ( a3 )
      ((void (__fastcall *)(_QWORD *, __int64, _QWORD))a3)(v8, a2, (unsigned int)v14);
    return 3221225494LL;
  }
  else
  {
    if ( (unsigned int)(v10 - 4) <= 1 || (v15 = 0, v10 == 6) )
      v15 = 1;
    return ACPIDeviceInitializePowerRequest((__int64)v8, v9, a3, a2, v10, 0, 8 * v15);
  }
}
