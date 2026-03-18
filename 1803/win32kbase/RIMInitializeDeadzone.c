/*
 * XREFs of RIMInitializeDeadzone @ 0x1C00ECF30
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimDestroyDeadzone @ 0x1C00E9F80 (rimDestroyDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C0105DD4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01061E8 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 RIMInitializeDeadzone()
{
  int v0; // edi
  RIMDeadzone *v1; // rax
  RIMDeadzone *v2; // rbx

  v0 = 0;
  RIMLockExclusive((__int64)&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    ++*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1);
  }
  else
  {
    v1 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL, 0x7A645052u);
    v2 = v1;
    if ( v1 )
    {
      memset(v1, 0, 0x40uLL);
      v0 = RIMDeadzone::Initialize(v2);
      if ( v0 < 0 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0xDu,
          (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
        RIMDeadzone::Release(v2);
        rimDestroyDeadzone();
        Win32FreePool((__int64)v2);
        v2 = 0LL;
      }
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xCu,
        (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
      v0 = -1073741801;
    }
    RIMDeadzone::s_pRimDeadzoneInstance = v2;
  }
  qword_1C01A5F00 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v0;
}
