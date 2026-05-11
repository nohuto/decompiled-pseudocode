/*
 * XREFs of IsDeviceInSidebandMode @ 0x1C0007A14
 * Callers:
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C0020690 (SidebandCapableDeferredFilterFactoryCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000738C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall IsDeviceInSidebandMode(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbp
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 Alertable; // [rsp+28h] [rbp-50h]
  PLARGE_INTEGER Timeout; // [rsp+30h] [rbp-48h]
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER v10; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v10.QuadPart = -100000000LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x11u,
      (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids);
  Object[0] = (PVOID)(v2 + 800);
  Object[1] = (PVOID)(v2 + 824);
  v4 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, &v10, 0LL);
  if ( v4 == 1 )
    v4 = -1073741536;
  KeWaitForSingleObject((PVOID)(v2 + 744), Executive, 0, 0, 0LL);
  *a2 = *(_DWORD *)(v2 + 848);
  KeReleaseMutex((PRKMUTEX)(v2 + 744), 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(Timeout) = v4;
    LODWORD(Alertable) = *a2;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)*a2,
      v5,
      0x12u,
      (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids,
      Alertable,
      Timeout);
  }
  return v4;
}
