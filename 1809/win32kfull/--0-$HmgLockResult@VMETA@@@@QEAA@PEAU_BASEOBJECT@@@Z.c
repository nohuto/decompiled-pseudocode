/*
 * XREFs of ??0?$HmgLockResult@VMETA@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C0162308
 * Callers:
 *     GreDeleteServerMetaFile @ 0x1C0157628 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C029C1D0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

unsigned __int64 __fastcall HmgLockResult<META>::HmgLockResult<META>(unsigned __int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx

  *(_QWORD *)a1 = a2;
  v2 = (_QWORD *)(a1 + 8);
  memset((void *)(a1 + 8), 0, 0x20uLL);
  PushThreadGuardedObject(
    v2,
    a1 & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
