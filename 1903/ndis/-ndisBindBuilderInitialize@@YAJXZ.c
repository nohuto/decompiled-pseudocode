/*
 * XREFs of ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C01463F4
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0146360 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 *     ??0?$KHashTableBase@$00@Rtl@@QEAA@_K@Z @ 0x1C0108F04 (--0-$KHashTableBase@$00@Rtl@@QEAA@_K@Z.c)
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C0125CE0 (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ndisEnsureBindingInfoLoaded @ 0x1C01260F8 (ndisEnsureBindingInfoLoaded.c)
 *     ndisBindBuilderLoadSettings @ 0x1C01464B0 (ndisBindBuilderLoadSettings.c)
 */

__int64 ndisBindBuilderInitialize(void)
{
  PVOID PoolWithTag; // rax
  __int64 v1; // rbx
  unsigned int Settings; // ebx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x4742444Eu);
  v1 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x68uLL);
    Rtl::KHashTableBase<1>::KHashTableBase<1>(v1);
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_QWORD *)(v1 + 40) = 0LL;
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_QWORD *)(v1 + 88) = 0LL;
    *(_WORD *)(v1 + 96) = 0;
  }
  else
  {
    v1 = 0LL;
  }
  P = (PVOID)v1;
  if ( !v1 )
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
