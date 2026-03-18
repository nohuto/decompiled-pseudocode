/*
 * XREFs of KiTpWriteMemory @ 0x1402AD7A0
 * Callers:
 *     KiTpWriteBreakpoint @ 0x1402AD73C (KiTpWriteBreakpoint.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiTpWriteUmMemory @ 0x1402ADAB4 (KiTpWriteUmMemory.c)
 *     MmDbgCopyMemory @ 0x1402D164C (MmDbgCopyMemory.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 */

__int64 __fastcall KiTpWriteMemory(_KPROCESS *BugCheckParameter1, char a2, void *a3, __int64 a4)
{
  int v8; // ebx
  char v9; // r14
  __int64 v10; // rcx
  _BYTE v12[48]; // [rsp+30h] [rbp-68h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( BugCheckParameter1 )
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v12);
  if ( a2 == 1 )
  {
    v8 = KiTpWriteUmMemory(BugCheckParameter1, a3, a4, 1LL);
  }
  else if ( (KiDynamicTraceEnabled & 4) != 0 )
  {
    v8 = MmDbgCopyMemory(a3, 1);
    if ( v8 < 0 )
    {
      v9 = KdEnterDebugger(0LL);
      v8 = MmDbgCopyMemory(a3, 5);
      if ( v8 < 0 )
        v8 = MmDbgCopyMemory(a3, 69);
      LOBYTE(v10) = v9;
      KdExitDebugger(v10);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( BugCheckParameter1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
  return (unsigned int)v8;
}
