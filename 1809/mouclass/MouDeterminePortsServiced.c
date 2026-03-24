/*
 * XREFs of MouDeterminePortsServiced @ 0x1C000C940
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000D530 (MouseClassFindMorePorts.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0001AC0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004924 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004CDC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall MouDeterminePortsServiced(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned __int64 v4; // r9
  int v5; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  PVOID SystemRoutineAddress; // rax
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *a2 = 0;
  v4 = *a1;
  if ( a1[1] < v4 + 2 )
    return (unsigned int)-1073741823;
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1) + 2) = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x43756F4Du);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v7, 1LL);
    return (unsigned int)-1073741823;
  }
  memset(PoolWithTag, 0, 0x70uLL);
  v8[2] = 0LL;
  *v8 = MouDeviceMapQueryCallback;
  v9 = *((_QWORD *)a1 + 1);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v5 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _DWORD *, _QWORD))SystemRoutineAddress)(
         2147483652LL,
         v9,
         v8,
         a2,
         0LL);
  if ( v5 < 0 )
    WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v11, 0x4Bu, v13);
  ExFreePoolWithTag(v8, 0);
  return (unsigned int)v5;
}
