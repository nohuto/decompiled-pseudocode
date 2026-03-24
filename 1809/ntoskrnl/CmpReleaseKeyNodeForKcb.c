/*
 * XREFs of CmpReleaseKeyNodeForKcb @ 0x1407FA33C
 * Callers:
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpReleaseKeyNodeForKcb(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 24) + 16LL))();
}
