/*
 * XREFs of NtSubscribeWnfStateChange @ 0x14060EF80
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14060F054 (ExpWnfSubscribeWnfStateChange.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 */

__int64 __fastcall NtSubscribeWnfStateChange(int a1, int a2, int a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = 0LL;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 1u);
    *a4 = 0LL;
  }
  v9 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v11 & -(__int64)(a4 != 0LL), 0, a1, a2, 0LL, 0LL, a3, 1);
  if ( v9 >= 0 && a4 )
    *a4 = v11;
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
