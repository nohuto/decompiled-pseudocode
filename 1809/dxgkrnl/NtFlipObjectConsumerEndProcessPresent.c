/*
 * XREFs of NtFlipObjectConsumerEndProcessPresent @ 0x1C00580C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00595CC (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C005A288 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 */

__int64 __fastcall NtFlipObjectConsumerEndProcessPresent(void *a1)
{
  char v2; // r8
  int v3; // eax
  char *v4; // rbx
  int v5; // edi
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  v3 = FlipManagerObject::ResolveHandle(a1, 1u, v2, (struct FlipManagerObject **)&Object);
  v4 = (char *)Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40));
    if ( v5 >= 0 )
    {
      CFlipManager::FreeCurrentUpdates((CFlipManager *)(v4 + 32));
      CPushLock::ReleaseLock((CPushLock *)(v4 + 40));
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
