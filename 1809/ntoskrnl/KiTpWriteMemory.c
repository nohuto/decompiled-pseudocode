/*
 * XREFs of KiTpWriteMemory @ 0x14029C508
 * Callers:
 *     KiTpHandleTrap @ 0x14029C3B4 (KiTpHandleTrap.c)
 *     KeSetTracepoint @ 0x140846060 (KeSetTracepoint.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MmDbgCopyMemory @ 0x1402BB7D0 (MmDbgCopyMemory.c)
 *     KdEnterDebugger @ 0x140916D40 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 */

__int64 __fastcall KiTpWriteMemory(_KPROCESS *a1, void *a2)
{
  int v4; // ebx
  char v5; // r14
  __int64 v6; // rcx
  _BYTE v8[48]; // [rsp+30h] [rbp-68h] BYREF

  if ( a1 )
    KiStackAttachProcess(a1, 0LL, (__int64)v8);
  v4 = MmDbgCopyMemory(a2, 1);
  if ( v4 < 0 )
  {
    v5 = KdEnterDebugger(0LL);
    v4 = MmDbgCopyMemory(a2, 5);
    if ( v4 < 0 )
      v4 = MmDbgCopyMemory(a2, 69);
    LOBYTE(v6) = v5;
    KdExitDebugger(v6);
  }
  if ( a1 )
    KiUnstackDetachProcess((__int64)v8, 0LL);
  return (unsigned int)v4;
}
