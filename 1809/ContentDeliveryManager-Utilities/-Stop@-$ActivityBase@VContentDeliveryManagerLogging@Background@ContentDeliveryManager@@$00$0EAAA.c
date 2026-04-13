/*
 * XREFs of ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004FE7C
 * Callers:
 *     _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x18004E178 (_lambda_b7df6605325939df64e4896ead66165a_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002F40 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800408BC (-IgnoreCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMan.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        _QWORD *a1)
{
  __int64 v2; // rax
  int v3; // edi
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  const struct wil::FailureInfo *v8; // rdx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v13; // [rsp+F0h] [rbp-10h]
  int v14; // [rsp+F8h] [rbp-8h]
  int v15; // [rsp+FCh] [rbp-4h]
  PSRWLOCK *p_SRWLock; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+108h] [rbp+8h]
  int v18; // [rsp+10Ch] [rbp+Ch]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v2 = a1[6];
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
  {
    memset_0(v11, 0, sizeof(v11));
    wil::details::WilFailFast((wil::details *)v11, v8);
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
      && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x400000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v9 = 0;
      v15 = 0;
      v13 = &v9;
      v14 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v18 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v17 = 4;
      TlgWrite(v6, &unk_180163E7F, (LPCGUID)(a1[6] + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)a1);
}
