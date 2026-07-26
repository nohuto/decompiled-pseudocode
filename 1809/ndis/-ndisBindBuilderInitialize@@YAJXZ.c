/*
 * XREFs of ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C012936C
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01292D8 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     ??0NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C00CC070 (--0NdisBindBuilderGlobal@@QEAA@XZ.c)
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C01059DC (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ndisEnsureBindingInfoLoaded @ 0x1C0105DEC (ndisEnsureBindingInfoLoaded.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01293F4 (ndisBindBuilderLoadSettings.c)
 */

__int64 ndisBindBuilderInitialize(void)
{
  NdisBindBuilderGlobal *PoolWithTag; // rax
  NdisBindBuilderGlobal *v1; // rbx
  unsigned int Settings; // ebx

  PoolWithTag = (NdisBindBuilderGlobal *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x4742444Eu);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x68uLL);
    PoolWithTag = NdisBindBuilderGlobal::NdisBindBuilderGlobal(v1);
  }
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  Settings = ndisBindBuilderLoadSettings();
  if ( !Settings )
  {
    if ( !*((_BYTE *)P + 97) )
      return 0LL;
    Settings = ndisEnsureBindingInfoLoaded();
    if ( !Settings )
      return 0LL;
  }
  ndisBindBuilderCleanup();
  return Settings;
}
