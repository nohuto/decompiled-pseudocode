/*
 * XREFs of ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x180083BCC
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180081FF0 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateFilteredVisualList(CProjectionBorderManager *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
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
        v5 = *(unsigned int *)(v4 + 24);
      else
        v5 = 0LL;
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v4 + 16) + 280LL))(
             *(_QWORD *)(v4 + 16),
             v5,
             1LL);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x123,
          (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  return 0LL;
}
