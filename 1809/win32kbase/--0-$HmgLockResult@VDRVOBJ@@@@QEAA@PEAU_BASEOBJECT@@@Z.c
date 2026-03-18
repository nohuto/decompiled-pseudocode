/*
 * XREFs of ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00AC498
 * Callers:
 *     EngDeleteDriverObj @ 0x1C0107A40 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C0107B70 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C0107BC0 (EngUnlockDriverObj.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

unsigned __int64 __fastcall HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>(unsigned __int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx

  *(_QWORD *)a1 = a2;
  v2 = (_QWORD *)(a1 + 8);
  memset((void *)(a1 + 8), 0, 0x20uLL);
  PushThreadGuardedObject(
    v2,
    a1 & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
    (__int64)UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
