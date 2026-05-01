/*
 * XREFs of ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x18002DBC4
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DABC (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x180016DDC (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 */

__int64 __fastcall RmpPartitionAddRemoveHost(struct _RTL_BITMAP *a1, int a2, int a3)
{
  __int64 result; // rax

  a1[12].SizeOfBitMap += a2;
  result = RmpPolicyResizeScratchBuffers(a1 + 9, a1[12].SizeOfBitMap, a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
