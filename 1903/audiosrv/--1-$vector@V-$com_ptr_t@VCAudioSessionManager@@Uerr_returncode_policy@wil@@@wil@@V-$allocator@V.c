/*
 * XREFs of ??1?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800D8C0C
 * Callers:
 *     _CAudioSessionManagerProvider::NotifyAudioDGTerminated_::_1_::dtor$0 @ 0x1800709FB (_CAudioSessionManagerProvider--NotifyAudioDGTerminated_--_1_--dtor$0.c)
 *     _CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$0 @ 0x1800D94DB (_CAudioSessionManagerProvider--RevokeSessionsWithoutDataFlowAccess_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>(
        __int64 a1)
{
  volatile signed __int32 **v1; // rbx
  volatile signed __int32 **v3; // rsi

  v1 = *(volatile signed __int32 ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(volatile signed __int32 ***)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        if ( *v1 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*v1);
        ++v1;
      }
      while ( v1 != v3 );
      v1 = *(volatile signed __int32 ***)a1;
    }
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
