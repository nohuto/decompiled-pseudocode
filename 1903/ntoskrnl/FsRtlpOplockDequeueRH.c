/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x1400B734C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140010090 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x140046520 (FsRtlCheckOplockEx.c)
 *     FsRtlUninitializeOplock @ 0x140088520 (FsRtlUninitializeOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400B6DE8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1400B6F60 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockEnqueueRH @ 0x1400B78B4 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016F550 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140174194 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405E4C80 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x1400B7394 (IoGetOplockFullFoExt.c)
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
