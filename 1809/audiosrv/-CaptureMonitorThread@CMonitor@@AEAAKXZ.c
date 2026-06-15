/*
 * XREFs of ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x18010061C
 * Callers:
 *     ?CaptureMonitorThreadWrapper@CMonitor@@CAKPEAX@Z @ 0x180100720 (-CaptureMonitorThreadWrapper@CMonitor@@CAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102774 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102CEC (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x1801046DC (-ResetEngineThreadPriority@@YAJPEAPEAX@Z.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x18010472C (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z.c)
 */

__int64 __fastcall CMonitor::CaptureMonitorThread(HANDLE *this)
{
  int v2; // eax
  DWORD v3; // eax
  DWORD v4; // eax
  void *v6; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handles[3]; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0LL;
  v2 = SetEngineThreadPriority(this, &v6);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_19c32bd6ba053f64fb4a85d982837be5_Traceguids, v2);
  }
  Handles[0] = this[36];
  Handles[1] = this[14];
  Handles[2] = this[29];
  while ( 1 )
  {
    v4 = WaitForMultipleObjectsEx(3u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v4 == -1 )
      break;
    if ( v4 )
    {
      v3 = v4 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          CMonitor::ProcessRenderBufferReadyEvent((CMonitor *)this);
      }
      else
      {
        CMonitor::ProcessCaptureBufferReadyEvent((CMonitor *)this);
      }
    }
    else if ( *((_DWORD *)this + 14) != 3 )
    {
      break;
    }
  }
  if ( v6 )
    ResetEngineThreadPriority(&v6);
  return 0LL;
}
