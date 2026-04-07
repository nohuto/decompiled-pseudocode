/*
 * XREFs of ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x18008A5CC
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180088990 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004F5C0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateFilteredVisualList(CProjectionBorderManager *this)
{
  unsigned int i; // ebx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v3 = *(_QWORD *)(56LL * i + *((_QWORD *)this + 50));
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 16);
      if ( v4 )
        v5 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 24LL);
      else
        v5 = 0LL;
      LOBYTE(v3) = 1;
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 5)
                                                                             + 16LL)
                                                               + 288LL))(
             *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
             v5,
             v3);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x126,
          (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  return 0LL;
}
