/*
 * XREFs of ACPIThermalEvent @ 0x1C005FAB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIThermalLoopEx @ 0x1C0008C54 (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_dqssdddd @ 0x1C0009920 (WPP_RECORDER_SF_dqssdddd.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

void __fastcall ACPIThermalEvent(ULONG_PTR a1, int a2)
{
  _QWORD *DeviceExtension; // rdi
  void *v4; // rbp
  int v5; // esi
  char v6; // r15
  void *v7; // r14
  __int64 v8; // rax
  int v9; // ebx
  int v10; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-30h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = &unk_1C006FE7D;
  v5 = 0;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  v6 = 0;
  v7 = &unk_1C006FE7D;
  Time.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( DeviceExtension )
  {
    v8 = DeviceExtension[1];
    v6 = (char)DeviceExtension;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v4 = (void *)DeviceExtension[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (void *)DeviceExtension[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqssdddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)TimeFields.Minute,
      (unsigned int)TimeFields.Hour,
      0x11u,
      v10,
      a2,
      v6,
      (__int64)v4,
      (__int64)v7);
  v9 = a2 - 128;
  if ( v9 )
  {
    if ( v9 == 1 )
      v5 = 536871046;
  }
  else
  {
    v5 = 536870978;
  }
  ACPIThermalLoopEx((__int64)DeviceExtension, v5, 0);
}
