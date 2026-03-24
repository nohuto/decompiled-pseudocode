/*
 * XREFs of KbdDeterminePortsServiced @ 0x1C000CB20
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000C550 (KeyboardClassFindMorePorts.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00026F0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003080 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005B2C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KbdDeterminePortsServiced(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned __int64 v4; // r8
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  PVOID SystemRoutineAddress; // rax
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  unsigned int v13; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *a2 = 0;
  v4 = *a1;
  if ( a1[1] < v4 + 2 )
    return 3221225473LL;
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1) + 2) = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4364624Bu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v7[2] = 0LL;
    *v7 = KbdDeviceMapQueryCallback;
    v8 = *((_QWORD *)a1 + 1);
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v10 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _DWORD *))SystemRoutineAddress)(2147483652LL, v8, v7, a2);
    v13 = v10;
    if ( v10 < 0 )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v11, v12, 78, 0, v10);
    }
    ExFreePoolWithTag(v7, 0);
    return v13;
  }
  else
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 1LL);
    return 3221225473LL;
  }
}
