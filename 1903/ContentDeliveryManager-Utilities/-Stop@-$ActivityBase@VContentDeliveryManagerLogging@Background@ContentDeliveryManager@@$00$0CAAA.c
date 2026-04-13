/*
 * XREFs of ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800508E4
 * Callers:
 *     _lambda_ade65b3910699df78508c17998720da4_::operator() @ 0x18004F8D8 (_lambda_ade65b3910699df78508c17998720da4_--operator().c)
 *     _lambda_fb6889284f8c6875beea5ab05f2a2ddf_::operator() @ 0x18004FCF4 (_lambda_fb6889284f8c6875beea5ab05f2a2ddf_--operator().c)
 *     _lambda_5733d5035a874d27ce3bcb89134ebdd6_::operator() @ 0x180050104 (_lambda_5733d5035a874d27ce3bcb89134ebdd6_--operator().c)
 *     _lambda_c3bf47982beeb92429b0310f4e2c5f50_::operator() @ 0x1800505A8 (_lambda_c3bf47982beeb92429b0310f4e2c5f50_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002E60 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800417DC (-IgnoreCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMan.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        _QWORD *a1)
{
  __int64 v2; // rax
  int v3; // edi
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  const struct wil::FailureInfo *v8; // rdx
  int v9; // [rsp+30h] [rbp-69h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-61h] BYREF
  __int64 v11; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-29h]
  int v14; // [rsp+78h] [rbp-21h]
  int v15; // [rsp+7Ch] [rbp-1Dh]
  int *v16; // [rsp+80h] [rbp-19h]
  int v17; // [rsp+88h] [rbp-11h]
  int v18; // [rsp+8Ch] [rbp-Dh]
  PSRWLOCK *p_SRWLock; // [rsp+90h] [rbp-9h]
  int v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+9Ch] [rbp+3h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v2 = a1[6];
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
  {
    memset_0(&pData, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)&pData, v8);
  }
  if ( *(int *)(v2 + 76) >= 0 )
    *(_DWORD *)(v2 + 76) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  *(_DWORD *)(v2 + 72) = v5;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v5 )
  {
    v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v15 = 0;
      v9 = 0;
      v18 = 0;
      v13 = &v11;
      v16 = &v9;
      v11 = 0x1000000LL;
      v14 = 8;
      v17 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v21 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v20 = 4;
      TlgWrite(v6, &unk_18016B127, (LPCGUID)(a1[6] + 8LL), 0LL, 5u, &pData);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)a1);
}
