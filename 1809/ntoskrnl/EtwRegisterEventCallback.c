/*
 * XREFs of EtwRegisterEventCallback @ 0x1408BF070
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     KeIsValidTraceCallbackTarget @ 0x140845B80 (KeIsValidTraceCallbackTarget.c)
 */

__int64 __fastcall EtwRegisterEventCallback(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 result; // rax
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rdi
  _QWORD *PoolWithTag; // rax

  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  result = KeIsValidTraceCallbackTarget(a2);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = EtwpAcquireLoggerContextByLoggerId(v6, a1, 0);
    if ( v10 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x43777445u);
      if ( PoolWithTag )
      {
        *PoolWithTag = a2;
        PoolWithTag[1] = a3;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 159, (signed __int64)PoolWithTag, 0LL) )
        {
          v8 = -1073741811;
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
      else
      {
        v8 = -1073741670;
      }
      EtwpReleaseLoggerContext(v10, 0);
    }
    else
    {
      v8 = -1073741162;
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v8;
  }
  return result;
}
