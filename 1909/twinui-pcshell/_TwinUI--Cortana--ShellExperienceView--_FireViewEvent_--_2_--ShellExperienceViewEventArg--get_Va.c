/*
 * XREFs of _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_ValueSet @ 0x18007B990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_ValueSet(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = *(_QWORD *)(a1 + 40);
  }
  *a2 = v4;
  return 0LL;
}
