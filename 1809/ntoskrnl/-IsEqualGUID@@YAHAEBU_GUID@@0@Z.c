/*
 * XREFs of ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14013B5F0
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x140168890 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14032A284 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsEqualGUID(const struct _GUID *a1, const struct _GUID *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&a2->Data1 )
    v2 = *(_QWORD *)a1->Data4 - *(_QWORD *)a2->Data4;
  return v2 == 0;
}
