/*
 * XREFs of DC::AcquireDcVisRgnExclusive @ 0x1C00AC264
 * Callers:
 *     GreValidateVisrgn @ 0x1C0027468 (GreValidateVisrgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0034DF0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnExclusive(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 1112));
  *(_QWORD *)a2 = a1;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
