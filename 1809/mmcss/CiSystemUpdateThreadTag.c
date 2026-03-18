/*
 * XREFs of CiSystemUpdateThreadTag @ 0x1C0002AA0
 * Callers:
 *     CiSchedulerRemoveThread @ 0x1C00011E0 (CiSchedulerRemoveThread.c)
 *     CiSchedulerAddThread @ 0x1C0001950 (CiSchedulerAddThread.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0002A50 (CiSchedulerSetTaskIndexThreadTag.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C000421C (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_1C00072E8 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
