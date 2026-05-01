/*
 * XREFs of ?OnShowWindowPolicy@TabletModePositionerManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x180070F30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositionerManager::OnShowWindowPolicy(
        TabletModePositionerManager *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4,
        LPRECT lprc)
{
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0;
  SetRectEmpty(lprc);
  v9 = *((_QWORD *)this + 8);
  v14 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, HWND, GUID *, GUID *))(*(_QWORD *)v9 + 88LL))(
          v9,
          a2,
          &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
          &GUID_bfb5cdb3_5571_4e1f_9541_a1e9fa66b59a);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8B,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
      (const char *)(unsigned int)v10,
      (int)&v14);
  else
    (*(void (__fastcall **)(__int64, HWND, _QWORD, unsigned int *))(*(_QWORD *)v14 + 32LL))(v14, a2, a3, a4);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
