/*
 * XREFs of NtFlipObjectPresentCancel @ 0x1C00586C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00595CC (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?PresentCancel@CFlipManager@@QEAAJAEA_K@Z @ 0x1C005A764 (-PresentCancel@CFlipManager@@QEAAJAEA_K@Z.c)
 */

__int64 __fastcall NtFlipObjectPresentCancel(void *a1, unsigned __int64 *a2)
{
  char v3; // r8
  int v4; // ebx
  struct FlipManagerObject *v5; // rdi
  struct FlipManagerObject *v7; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
  }
  KeEnterCriticalRegion();
  v4 = FlipManagerObject::ResolveHandle(a1, 2u, v3, &v7);
  v5 = v7;
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockExclusive((struct FlipManagerObject *)((char *)v7 + 40));
    if ( v4 >= 0 )
    {
      v4 = CFlipManager::PresentCancel((struct FlipManagerObject *)((char *)v5 + 32), &v8);
      CPushLock::ReleaseLock((struct FlipManagerObject *)((char *)v5 + 40));
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
