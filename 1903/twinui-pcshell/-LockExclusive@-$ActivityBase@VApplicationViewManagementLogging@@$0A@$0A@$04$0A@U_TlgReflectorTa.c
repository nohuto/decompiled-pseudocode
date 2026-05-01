/*
 * XREFs of ?LockExclusive@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180049B5C
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800282B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?NotifyFailure@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180049E30 (-NotifyFailure@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 *     ?zInternalStop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180157D4C (-zInternalStop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rdi
  PSRWLOCK *p_SRWLock; // rax
  char v6; // bl
  PSRWLOCK v8; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v8) = 0;
  v3 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v3 )
  {
    v4 = v3 + 31;
    AcquireSRWLockExclusive(v4);
    p_SRWLock = &SRWLock;
    v6 = 1;
  }
  else
  {
    p_SRWLock = &v8;
    v6 = 2;
    v4 = 0LL;
  }
  *p_SRWLock = 0LL;
  *a2 = v4;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
  if ( (v6 & 1) != 0 && SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return a2;
}
