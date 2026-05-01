/*
 * XREFs of ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180001F68
 * Callers:
 *     RmAcquireResources @ 0x180001C30 (RmAcquireResources.c)
 *     RmReleaseResources @ 0x180001CF0 (RmReleaseResources.c)
 *     RmRegisterResource @ 0x180001E30 (RmRegisterResource.c)
 *     RmAccessCheck @ 0x180001EE0 (RmAccessCheck.c)
 *     RmAccessCheckOnSelf @ 0x18000E780 (RmAccessCheckOnSelf.c)
 *     RmAvailabilityCheck @ 0x18000E7B0 (RmAvailabilityCheck.c)
 *     RmGetNotification @ 0x18000E830 (RmGetNotification.c)
 * Callees:
 *     CreateResourceManagerProxy @ 0x180001BBC (CreateResourceManagerProxy.c)
 */

__int64 __fastcall GetResourceManagerProxy(struct ResourceManagerProxy **a1)
{
  struct ResourceManagerProxy *v2; // rax
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v2 = (struct ResourceManagerProxy *)qword_1800226A8;
  if ( !qword_1800226A8 )
  {
    ResourceManagerProxy = CreateResourceManagerProxy();
    if ( ResourceManagerProxy < 0 )
      goto LABEL_3;
    v2 = (struct ResourceManagerProxy *)qword_1800226A8;
  }
  *a1 = v2;
  ResourceManagerProxy = 0;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}
