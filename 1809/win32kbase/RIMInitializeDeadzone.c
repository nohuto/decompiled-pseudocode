/*
 * XREFs of RIMInitializeDeadzone @ 0x1C01182A8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     rimDestroyDeadzone @ 0x1C0114B6C (rimDestroyDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C012DAE0 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C012DEF4 (-Release@RIMDeadzone@@QEAAXXZ.c)
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
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xDu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
        RIMDeadzone::Release(v2);
        rimDestroyDeadzone();
        Win32FreePool((__int64)v2);
        v2 = 0LL;
      }
    }
    else
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xCu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
      v0 = -1073741801;
    }
    RIMDeadzone::s_pRimDeadzoneInstance = v2;
  }
  qword_1C01D0C28 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v0;
}
