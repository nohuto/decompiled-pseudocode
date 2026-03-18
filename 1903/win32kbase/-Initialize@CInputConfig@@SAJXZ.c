/*
 * XREFs of ?Initialize@CInputConfig@@SAJXZ @ 0x1C00607BC
 * Callers:
 *     InitializeInputComponents @ 0x1C0060348 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x1C0060860 (--0CInputConfig@@AEAA@XZ.c)
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C00A6380 (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 */

NTSTATUS CInputConfig::Initialize(void)
{
  struct _ERESOURCE *PoolWithTag; // rax
  NTSTATUS result; // eax
  CInputConfig *v2; // rax
  __int64 v3; // rcx

  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  CInputConfig::slock = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  result = ExInitializeResourceLite(PoolWithTag);
  if ( result < 0 )
    return result;
  v2 = (CInputConfig *)Win32AllocPoolZInit(0x4E8uLL, 1866690121LL);
  if ( v2 )
    v2 = CInputConfig::CInputConfig(v2);
  gpInputConfig = v2;
  if ( !v2 )
    return -1073741801;
  InputExtensibilityCallout::RegisterCoreMsgProvider(v3, 7LL, 0LL);
  return 0;
}
