/*
 * XREFs of CmpReleaseKeyNodeForKcb @ 0x140832D1C
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmpCommitDeleteKeyUoW @ 0x1406F9BA0 (CmpCommitDeleteKeyUoW.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpReleaseKeyNodeForKcb(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}
