/*
 * XREFs of ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C0181E5C
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018AA20 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0036C14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007A7D0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall ChildSynchronizeCursorAsyncWithRootPartition(_QWORD *a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // rbx

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    v3 = MouseProcessor + 3552;
    CPushLock::AcquireLockExclusive((CPushLock *)(MouseProcessor + 3552));
    *(_QWORD *)(v3 + 24) = *a1;
    *(_BYTE *)(v3 + 32) = 1;
    CPushLock::ReleaseLock((CPushLock *)v3);
  }
}
