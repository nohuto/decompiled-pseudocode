/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x140103E2C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1400102C0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x1400465C0 (FsRtlCheckOplockEx.c)
 *     FsRtlUninitializeOplock @ 0x140089820 (FsRtlUninitializeOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1401038C8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x140103A40 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockEnqueueRH @ 0x140104394 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016FC40 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401748C4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405E5450 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x140103E74 (IoGetOplockFullFoExt.c)
 */

__int64 __fastcall FsRtlpOplockDequeueRH(__int64 a1)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v2; // rdx
  __int64 result; // rax
  _QWORD *v4; // rcx

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24));
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  result = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = result;
  *(_QWORD *)(result + 8) = v4;
  return result;
}
