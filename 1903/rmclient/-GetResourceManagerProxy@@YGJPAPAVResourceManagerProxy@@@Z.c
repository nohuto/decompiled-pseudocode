/*
 * XREFs of ?GetResourceManagerProxy@@YGJPAPAVResourceManagerProxy@@@Z @ 0x10007FB8
 * Callers:
 *     _RmAcquireResources@40 @ 0x10007690 (_RmAcquireResources@40.c)
 *     _RmReleaseResources@4 @ 0x10007740 (_RmReleaseResources@4.c)
 *     _RmRegisterResource@12 @ 0x10007F40 (_RmRegisterResource@12.c)
 *     _RmAccessCheckOnSelf@4 @ 0x10011F90 (_RmAccessCheckOnSelf@4.c)
 *     _RmAvailabilityCheck@16 @ 0x10011FC0 (_RmAvailabilityCheck@16.c)
 *     _RmGetNotification@8 @ 0x10012000 (_RmGetNotification@8.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x100077AD (CreateResourceManagerProxy.c)
 */

int __thiscall GetResourceManagerProxy(int *this)
{
  int v2; // eax
  int ResourceManagerProxy; // esi

  RtlEnterCriticalSection(&s_csProxy);
  v2 = dword_10018418;
  if ( !dword_10018418 )
  {
    ResourceManagerProxy = CreateResourceManagerProxy();
    if ( ResourceManagerProxy < 0 )
      goto LABEL_3;
    v2 = dword_10018418;
  }
  *this = v2;
  ResourceManagerProxy = 0;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  return ResourceManagerProxy;
}
