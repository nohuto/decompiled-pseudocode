/*
 * XREFs of RIMInitializeDeadzone @ 0x1C013E398
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     rimDestroyDeadzone @ 0x1C013AC70 (rimDestroyDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C01588AC (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0158CEC (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 RIMInitializeDeadzone()
{
  int v0; // edi
  RIMDeadzone *v1; // rax
  int v2; // edx
  RIMDeadzone *v3; // rbx
  int v4; // edx

  v0 = 0;
  RIMLockExclusive((__int64)&gDeadzoneLock);
  if ( RIMDeadzone::s_pRimDeadzoneInstance )
  {
    ++*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 1);
  }
  else
  {
    v1 = (RIMDeadzone *)Win32AllocPoolZInit(0x40uLL, 2053394514LL);
    v3 = v1;
    if ( v1 )
    {
      memset(v1, 0, 0x40uLL);
      v0 = RIMDeadzone::Initialize(v3);
      if ( v0 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v4) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v4, 1, 13, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
        }
        RIMDeadzone::Release(v3);
        rimDestroyDeadzone();
        Win32FreePool((__int64)v3);
        v3 = 0LL;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v2) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v2, 1, 12, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
      }
      v0 = -1073741801;
    }
    RIMDeadzone::s_pRimDeadzoneInstance = v3;
  }
  qword_1C02152D8 = 0LL;
  ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v0;
}
