/*
 * XREFs of ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C0169470
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0162ABC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00B4938 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01615C4 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::GetCoalesceInfo(CTouchProcessor *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax

  v2 = a2;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( !(_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  *((_DWORD *)this + 45) = 0;
  v7 = (unsigned __int64)this + 176;
  if ( *((_DWORD *)this + 44) < (unsigned int)v2 )
  {
    CTouchProcessor::CleanupCoalesceInfo(this);
    if ( (_DWORD)v2 )
    {
      v8 = 16 * v2;
      if ( (unsigned __int64)(16 * v2) <= 0xFFFFFFFF )
      {
        if ( v8 )
        {
          *((_QWORD *)this + 23) = Win32AllocPoolZInit(v8, 1885631317LL);
          *(_DWORD *)v7 = v2;
        }
      }
    }
  }
  return (struct tagCPointerCoalesceInfo *)(v7 & -(__int64)(*((_QWORD *)this + 23) != 0LL));
}
