/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180034964
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18002BF6C (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     _CAudioSessionManagerProvider::NotifyAudioDGTerminated_::_1_::dtor$0 @ 0x180070EFB (_CAudioSessionManagerProvider--NotifyAudioDGTerminated_--_1_--dtor$0.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D8EFC (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 *     _CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$0 @ 0x1800D9026 (_CAudioSessionManagerProvider--RevokeSessionsWithoutDataFlowAccess_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Tidy(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v3 = (_QWORD *)a1[1];
    if ( v1 != v3 )
    {
      do
      {
        if ( *v1 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*v1);
        ++v1;
      }
      while ( v1 != v3 );
      v1 = (_QWORD *)*a1;
    }
    result = std::_Deallocate<16,0>(v1, (a1[2] - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
