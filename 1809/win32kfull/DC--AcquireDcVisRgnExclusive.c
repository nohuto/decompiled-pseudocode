/*
 * XREFs of DC::AcquireDcVisRgnExclusive @ 0x1C0162CA8
 * Callers:
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0056C90 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C012E960 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
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
