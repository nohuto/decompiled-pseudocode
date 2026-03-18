/*
 * XREFs of ?Initialize@CInputConfig@@SAJXZ @ 0x1C00A954C
 * Callers:
 *     InitializeInputComponents @ 0x1C00A90D8 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C00A52B0 (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x1C00A95F0 (--0CInputConfig@@AEAA@XZ.c)
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
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    v3,
    7LL,
    0LL,
    1,
    0LL,
    (__int64)lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_);
  return 0;
}
