/*
 * XREFs of CmpQuitNextHive @ 0x1407283F8
 * Callers:
 *     CmpDoFlushAll @ 0x140168D30 (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 * Callees:
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 */

void __fastcall CmpQuitNextHive(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4272), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)a1);
}
