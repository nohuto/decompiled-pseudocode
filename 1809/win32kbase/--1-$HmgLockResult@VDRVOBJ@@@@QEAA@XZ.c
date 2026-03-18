/*
 * XREFs of ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00AC4EC
 * Callers:
 *     EngDeleteDriverObj @ 0x1C0107A40 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C0107B70 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C0107BC0 (EngUnlockDriverObj.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 */

void __fastcall HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(_QWORD *a1)
{
  if ( *a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*a1 + 12LL));
    *a1 = 0LL;
  }
  PopThreadGuardedObject(a1 + 1);
}
