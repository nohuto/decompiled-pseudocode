/*
 * XREFs of CmpReleaseKeyNodeForKcb @ 0x1408336BC
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmpCommitDeleteKeyUoW @ 0x1406F7DE0 (CmpCommitDeleteKeyUoW.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpReleaseKeyNodeForKcb(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}
