/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14003FE5C
 * Callers:
 *     _ATL::CAtlMap_unsigned___int64_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy__ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy_____::SetAt_::_1_::catch$0 @ 0x14003FFF4 (_ATL--CAtlMap_unsigned___int64_wil--com_ptr_t_ICPAudioHistoryControl_wil--err_retur_ea_14003FFF4.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A524 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v3 = 0LL;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v3 + 16); i != a2; i = *(_QWORD *)(i + 16) )
      v3 = i;
  }
  return ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveNode(
           a1,
           a2,
           v3);
}
