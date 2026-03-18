/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801A86B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18001F5E8 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x1800A322C (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1801A7B50 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x1801A82F8 (-FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@.c)
 */

__int64 __fastcall CDesktopRenderTarget::HandleDDAArrivalOrDeparture(CDesktopRenderTarget *this)
{
  struct CHwndRenderTarget *v1; // rbx
  signed int CurrentDisplaySet; // eax
  unsigned int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rbp
  __int64 v8; // r14
  bool v9; // al
  signed int v10; // eax
  __int64 v11; // rcx
  struct CHwndRenderTarget *DDAHwndRenderTargetByDisplay; // rax
  CDisplaySet *v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v14 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v14);
  v6 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802E4668, 2u, CurrentDisplaySet, 0x2E6u, 0LL);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v14 + 18) )
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7) + 168LL);
        if ( CDisplay::HasDDAChanged((CDisplay *)v8) )
        {
          v9 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 40) + 24LL))(*(_QWORD *)(v8 + 40)) != 0;
          *(_BYTE *)(v8 + 319) = v9;
          if ( v9 && *(_BYTE *)(v8 + 314) )
          {
            v10 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(
                    (CDesktopRenderTarget *)((char *)this - 168),
                    (struct CDisplay *)v8);
            v6 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802E4668, 2u, v10, 0x308u, 0LL);
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
                                             (const struct CDisplay *)v8);
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
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)this + 8) )
          goto LABEL_14;
      }
    }
  }
  ReleaseInterface<CDisplaySet const>(&v14, v4);
  return v6;
}
