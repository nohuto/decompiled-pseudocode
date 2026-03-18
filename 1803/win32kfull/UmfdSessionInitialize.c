/*
 * XREFs of UmfdSessionInitialize @ 0x1C00ED380
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00ED454 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00ED9CC (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C00EDFF4 (-SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ.c)
 *     bEnableFontDriver @ 0x1C00EE0F0 (bEnableFontDriver.c)
 */

__int64 UmfdSessionInitialize()
{
  unsigned int v0; // ebx
  _QWORD *PoolWithTag; // rdi
  PVOID v2; // rax

  GreInitializePushLock(&UmfdLookupPushLock);
  GreInitializePushLock(&UmfdWinLogonRequestLock);
  v0 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x63497355u);
  if ( !PoolWithTag )
    goto LABEL_11;
  v2 = ExAllocatePoolWithTag(PagedPoolSession, 0x2000uLL, 0x63497355u);
  if ( !v2 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_11:
    UmfdFontFileLookup = 0LL;
    return 3221225473LL;
  }
  PoolWithTag[6] = v2;
  PoolWithTag[4] = 512LL;
  PoolWithTag[5] = 0LL;
  PoolWithTag[3] = 0LL;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  UmfdFontFileLookup = PoolWithTag;
  if ( !(unsigned int)bEnableFontDriver(UmfdEnableDriver, 5LL)
    || !UmfdHostLifeTimeManager::SessionInitialize()
    || !UmfdAllocation::Initialize() )
  {
    return 3221225473LL;
  }
  if ( (int)UmfdCallSessionInitialize() < 0 )
    return (unsigned int)-1073741823;
  return v0;
}
