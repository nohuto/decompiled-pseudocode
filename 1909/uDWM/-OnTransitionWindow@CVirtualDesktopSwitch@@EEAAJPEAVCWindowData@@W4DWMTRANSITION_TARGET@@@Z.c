/*
 * XREFs of ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800A8D40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A9EFC (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800AA8E0 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800AEF58 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::OnTransitionWindow(LPARAM a1, struct CWindowData *a2, __int16 a3)
{
  signed int v3; // ebx
  signed int LastError; // eax
  int DesktopThumbnail; // eax
  unsigned int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-48h]
  CBaseObject *v14; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v15; // [rsp+40h] [rbp-28h] BYREF
  CBaseObject *v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v14 = 0LL;
  v16 = 0LL;
  if ( (a3 & 0xFFFu) - 75 > 1 )
    return (unsigned int)v3;
  SetLastError(0);
  if ( EnumDisplayMonitors(0LL, 0LL, CVirtualDesktopSwitch::s_MonitorEnumCallback, a1) )
  {
    DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v14);
    v3 = DesktopThumbnail;
    if ( DesktopThumbnail >= 0 )
    {
      v8 = 0;
      if ( *(_DWORD *)(a1 + 176) )
      {
        while ( 1 )
        {
          v15 = *(struct tagRECT *)(*(_QWORD *)(a1 + 152) + 16LL * v8);
          DesktopThumbnail = CVirtualDesktopSwitch::_CreateMonitorSnapshot(
                               (CVirtualDesktopSwitch *)a1,
                               a2,
                               &v15,
                               1,
                               &v16);
          v3 = DesktopThumbnail;
          if ( DesktopThumbnail < 0 )
            break;
          v9 = *(_DWORD *)(a1 + 144);
          v10 = v9 + 1;
          if ( v9 + 1 < v9 )
          {
            v3 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_30:
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v3,
              0x1254u);
            goto LABEL_22;
          }
          if ( v10 > *(_DWORD *)(a1 + 140) )
          {
            v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 120, 8, 1, &v16);
            v3 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC0u);
            if ( v3 < 0 )
              goto LABEL_30;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v9) = v16;
            *(_DWORD *)(a1 + 144) = v10;
          }
          v16 = 0LL;
          if ( ++v8 >= *(_DWORD *)(a1 + 176) )
            goto LABEL_19;
        }
        v13 = 4691;
      }
      else
      {
LABEL_19:
        DesktopThumbnail = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 5)
                                                                           + 16LL)
                                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 5)
                                                                                + 16LL));
        v3 = DesktopThumbnail;
        if ( DesktopThumbnail >= 0 )
          goto LABEL_22;
        v13 = 4697;
      }
    }
    else
    {
      v13 = 4684;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      DesktopThumbnail,
      v13);
LABEL_22:
    if ( v14 )
      CBaseObject::Release(v14);
    goto LABEL_24;
  }
  LastError = GetLastError();
  v3 = LastError;
  if ( LastError > 0 )
    v3 = (unsigned __int16)LastError | 0x80070000;
  if ( v3 >= 0 )
    v3 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v3, 0x124Bu);
LABEL_24:
  if ( v16 )
    CBaseObject::Release(v16);
  if ( v3 < 0 )
    CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents((CVirtualDesktopSwitch *)a1);
  return (unsigned int)v3;
}
