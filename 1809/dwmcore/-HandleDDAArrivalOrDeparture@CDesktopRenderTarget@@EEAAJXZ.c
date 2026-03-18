/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x18015A460
 * Callers:
 *     <none>
 * Callees:
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18001D118 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18007D540 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180159930 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x18015A088 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::HandleDDAArrivalOrDeparture(CDesktopRenderTarget *this)
{
  struct CHwndRenderTarget *v1; // rbx
  int CurrentDisplaySet; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // r14
  bool v8; // al
  int v9; // eax
  __int64 v10; // rcx
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  CDisplaySet *v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v13 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v13);
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802BC058, 2u, CurrentDisplaySet, 0x2DAu);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v13 + 18) )
  {
    v6 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v6) + 168LL);
        if ( CDisplay::HasDDAChanged((CDisplay *)v7) )
        {
          v8 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 40) + 24LL))(*(_QWORD *)(v7 + 40)) != 0;
          *(_BYTE *)(v7 + 325) = v8;
          if ( v8 && *(_BYTE *)(v7 + 322) )
          {
            v9 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(
                   (CDesktopRenderTarget *)((char *)this - 168),
                   (struct CDisplay *)v7);
            v5 = v9;
            if ( v9 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BC058, 2u, v9, 0x2FCu);
LABEL_14:
              if ( v1 )
                (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v1 + 16LL))(v1);
              break;
            }
          }
          else
          {
            DDAHwndRenderTargetByDisplay = CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(
                                             (CDesktopRenderTarget *)((char *)this - 168),
                                             (const struct CDisplay *)v7);
            v1 = DDAHwndRenderTargetByDisplay;
            if ( DDAHwndRenderTargetByDisplay )
            {
              CDesktopRenderTarget::RemoveRenderTarget(
                (CDesktopRenderTarget *)((char *)this - 168),
                DDAHwndRenderTargetByDisplay);
              v1 = 0LL;
            }
          }
        }
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)this + 8) )
          goto LABEL_14;
      }
    }
  }
  ReleaseInterface<CDisplaySet const>(&v13);
  return v5;
}
