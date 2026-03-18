/*
 * XREFs of UsbhQueryGlobalDeviceValue @ 0x1C0028E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_Sdqdqq @ 0x1C0051E3C (WPP_RECORDER_SF_Sdqdqq.c)
 */

__int64 __fastcall UsbhQueryGlobalDeviceValue(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebx

  v9 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_Sdqdqq(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  if ( a2 == 3 )
  {
    if ( a4 >= *(_DWORD *)(a6 + 12) )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a6 + 16))(a5, *(_QWORD *)a6, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
