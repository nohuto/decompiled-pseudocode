/*
 * XREFs of CiSystemUpdateThreadTag @ 0x1C0002980
 * Callers:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001010 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerAddThread @ 0x1C0002460 (CiSchedulerAddThread.c)
 *     CiSchedulerRemoveThread @ 0x1C00027B0 (CiSchedulerRemoveThread.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C0004014 (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_1C00072D8 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
