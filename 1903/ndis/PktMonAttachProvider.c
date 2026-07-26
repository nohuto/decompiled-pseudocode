/*
 * XREFs of PktMonAttachProvider @ 0x1C00C94B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PktMonAttachProvider(HANDLE NmrBindingHandle, PVOID ClientBindingContext)
{
  unsigned int v4; // ebx

  if ( *(&ProviderBindingContext + 1) )
  {
    v4 = -1073741127;
  }
  else
  {
    if ( RunRefCacheAware )
    {
      ExReInitializeRundownProtectionCacheAware(RunRefCacheAware);
    }
    else
    {
      RunRefCacheAware = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x72644D50u);
      if ( !RunRefCacheAware )
        return (unsigned int)-1073741801;
    }
    v4 = NmrClientAttachProvider(
           NmrBindingHandle,
           ClientBindingContext,
           &PktMonClientDispatch,
           &ProviderBindingContext,
           (const void **)&ProviderBindingContext + 1);
    if ( !v4 )
    {
      ((void (*)(void))qword_1C00E5E28)();
      return v4;
    }
  }
  if ( RunRefCacheAware )
  {
    ExFreeCacheAwareRundownProtection(RunRefCacheAware);
    RunRefCacheAware = 0LL;
  }
  return v4;
}
