/*
 * XREFs of CmpQuitNextHive @ 0x140729768
 * Callers:
 *     CmpDoFlushAll @ 0x140168780 (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 * Callees:
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 */

void __fastcall CmpQuitNextHive(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)a1);
}
