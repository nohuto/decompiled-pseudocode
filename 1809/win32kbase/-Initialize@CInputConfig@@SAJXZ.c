/*
 * XREFs of ?Initialize@CInputConfig@@SAJXZ @ 0x1C0007A48
 * Callers:
 *     InitializeInputComponents @ 0x1C0007964 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x1C00955B8 (--0CInputConfig@@AEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

NTSTATUS CInputConfig::Initialize(void)
{
  struct _ERESOURCE *PoolWithTag; // rax
  NTSTATUS result; // eax
  CInputConfig *v2; // rax
  __int64 v3; // rdi
  __int128 v4; // [rsp+20h] [rbp-28h]

  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  CInputConfig::slock = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  result = ExInitializeResourceLite(PoolWithTag);
  if ( result < 0 )
    return result;
  v2 = (CInputConfig *)Win32AllocPoolZInit(0x4E8uLL);
  if ( v2 )
    v2 = CInputConfig::CInputConfig(v2);
  gpInputConfig = v2;
  if ( !v2 )
    return -1073741801;
  v3 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 328LL) )
    MicrosoftTelemetryAssertTriggeredMsgKM("It is expected that this API either NOT called at all or called by provider before destination opened");
  RIMLockExclusive(v3 + 24);
  *(_DWORD *)(v3 + 336) = 0;
  *((_QWORD *)&v4 + 1) = lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_;
  LODWORD(v4) = 1;
  *(_OWORD *)(v3 + 344) = v4;
  *(_QWORD *)(v3 + 360) = 0LL;
  CInpPushLock::UnLockExclusive((CInpPushLock *)(v3 + 24));
  return 0;
}
