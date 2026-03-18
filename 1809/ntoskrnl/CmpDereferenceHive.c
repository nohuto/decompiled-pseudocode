/*
 * XREFs of CmpDereferenceHive @ 0x1406E0D10
 * Callers:
 *     CmpDoFlushAll @ 0x1401579E8 (CmpDoFlushAll.c)
 * Callees:
 *     CmpDeleteHive @ 0x1405AFDEC (CmpDeleteHive.c)
 */

void __fastcall CmpDereferenceHive(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4288), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)a1);
}
