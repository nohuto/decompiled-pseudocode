/*
 * XREFs of ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x180015F60
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_::_Do_call @ 0x180025330 (std--_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_--_Do_call.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180011EB0 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 */

void __fastcall CProcess::SetHasSmtcSubscription(__int64 a1, int a2, int a3)
{
  __int64 v3; // rsi
  int v6; // r8d
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v3 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (unsigned int)v3 <= 1 )
  {
    v6 = *(_DWORD *)(a1 + 4 * v3 + 508);
    if ( v6 || a3 )
    {
      v7 = v6 + (a3 != 0 ? 1 : -1);
      *(_DWORD *)(a1 + 4 * v3 + 508) = v7;
      if ( !v7 || v7 == 1 && a3 )
        CApplication::OnSmtcSubscriptionChanged(*(CApplication **)(a1 + 240));
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
