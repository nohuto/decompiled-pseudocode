/*
 * XREFs of ?Thunk_MarkProxyReady_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180005920
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x180005A20 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_MarkProxyReady_0(
        __int64 a1,
        unsigned int **a2)
{
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 24LL),
           *(_DWORD *)(a1 + 36),
           **a2);
  *((_BYTE *)Item + 28) = 1;
  v3 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 48LL))(Item);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3) + 16) + 24LL)
                 + 24LL);
  v5 = 0LL;
  if ( !*(_DWORD *)(v4 + 140) )
  {
    v5 = v4;
    if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5CE,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v6);
      __debugbreak();
    }
    *(_DWORD *)(v4 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
