/*
 * XREFs of ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803638B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x180363084 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1803631E4 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x18036347C (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x180368254 (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 */

LRESULT __fastcall TabletModeCoverWindow::v_WndProc(HWND *this, HWND a2, UINT a3, WPARAM a4, LPARAM lParam)
{
  __int64 v5; // rdi
  IRawElementProviderSimple **v11; // rsi
  const struct _GUID *v12; // r9
  int Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  if ( a3 != 16 )
  {
    if ( a3 == 33 )
      return 3LL;
    if ( a3 == 61 )
    {
      if ( lParam == -25 )
      {
        v11 = (IRawElementProviderSimple **)(this + 11);
        if ( this[11] )
          return UiaReturnRawElementProvider(this[1], a4, -25LL, *v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
        Instance = CoverWindowAcc_CreateInstance(this[1], L"TabletModeCoverWindow", 0LL, v12, (void **)v11);
        if ( Instance < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            206LL,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
            (const char *)(unsigned int)Instance);
        if ( *v11 )
          return UiaReturnRawElementProvider(this[1], a4, -25LL, *v11);
      }
      return DefWindowProcW(a2, a3, a4, lParam);
    }
    if ( a3 != 513 )
    {
      if ( a3 == 514 )
        goto LABEL_15;
      if ( a3 != 582 )
      {
        if ( a3 != 583 )
        {
          if ( a3 == 1025 )
          {
            TabletModeCoverWindow::InitializeInstance((TabletModeCoverWindow *)(this - 12));
            return v5;
          }
          if ( a3 == 32769 && (a4 & 1) != 0 )
            TabletModeCoverWindow::ScaleFactorChanged((TabletModeCoverWindow *)(this - 12));
          return DefWindowProcW(a2, a3, a4, lParam);
        }
LABEL_15:
        TabletModeCoverWindow::OnPointerUp((TabletModeCoverWindow *)(this - 12));
        return v5;
      }
    }
    *((_BYTE *)this + 124) = 1;
  }
  return v5;
}
