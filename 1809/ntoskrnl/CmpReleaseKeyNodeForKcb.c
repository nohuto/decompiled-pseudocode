/*
 * XREFs of CmpReleaseKeyNodeForKcb @ 0x1407FA35C
 * Callers:
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpReleaseKeyNodeForKcb(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 24) + 16LL))();
}
