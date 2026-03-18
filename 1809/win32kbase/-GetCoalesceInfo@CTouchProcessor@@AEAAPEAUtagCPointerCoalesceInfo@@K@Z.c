/*
 * XREFs of ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C013AE08
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01355A4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C0006698 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01342D0 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::GetCoalesceInfo(struct _KTHREAD **this, unsigned int a2)
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
  *((_DWORD *)this + 37) = 0;
  v7 = (unsigned __int64)(this + 18);
  if ( *((_DWORD *)this + 36) < (unsigned int)v2 )
  {
    CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
    if ( (_DWORD)v2 )
    {
      v8 = 16 * v2;
      if ( (unsigned __int64)(16 * v2) <= 0xFFFFFFFF )
      {
        if ( v8 )
        {
          this[19] = (struct _KTHREAD *)Win32AllocPoolZInit(v8, 0x70647355u);
          *(_DWORD *)v7 = v2;
        }
      }
    }
  }
  return (struct tagCPointerCoalesceInfo *)(v7 & -(__int64)(this[19] != 0LL));
}
