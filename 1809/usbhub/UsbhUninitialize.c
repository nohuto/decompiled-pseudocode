/*
 * XREFs of UsbhUninitialize @ 0x1C003FD80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x1C0007110 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhReferenceListRemove @ 0x1C000E0A0 (UsbhReferenceListRemove.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhUninitialize(__int64 a1)
{
  _DWORD *v2; // rdi
  PVOID *v3; // rax
  PVOID *v4; // rbx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rbx

  v2 = FdoExt(a1);
  Log(a1, 8, 1750421065, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      43,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
  UsbhDisarmHubForWakeDetect(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  v3 = (PVOID *)FdoExt(a1);
  v4 = v3;
  if ( *((_DWORD *)v3 + 1310) && PoUnregisterPowerSettingCallback(v3[656]) >= 0 )
    *((_DWORD *)v4 + 1310) = 0;
  v5 = (void *)*((_QWORD *)v2 + 377);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)v2 + 377) = 0LL;
  }
  v6 = (void *)*((_QWORD *)v2 + 378);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)v2 + 378) = 0LL;
  }
  v7 = (void *)_InterlockedExchange64((volatile __int64 *)v2 + 152, 0LL);
  Log(a1, 8, 1752519238, 0LL, (__int64)v7);
  if ( v7 )
  {
    UsbhReferenceListRemove(a1, (__int64)v7);
    ObfDereferenceObject(v7);
  }
  Log(a1, 8, 1752525118, 0LL, 0LL);
}
