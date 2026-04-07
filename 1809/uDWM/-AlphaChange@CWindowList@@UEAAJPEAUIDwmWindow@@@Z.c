/*
 * XREFs of ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E940
 * Callers:
 *     <none>
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18000CEBC (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x18000CF04 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180025F84 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E0B8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::AlphaChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  CVisual *v7; // rcx
  CWindowIconic *v8; // rcx
  __int64 v9; // rsi
  char v10; // al
  int v12; // eax
  struct CWindowData *v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1305u);
  }
  else
  {
    v6 = v13;
    if ( v13 )
    {
      *((_BYTE *)v6 + 344) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
      v7 = (CVisual *)*((_QWORD *)v6 + 49);
      if ( v7 )
      {
        CVisual::SetOpacity(v7, (double)*(unsigned __int8 *)(*((_QWORD *)v7 + 90) + 344LL) / 255.0);
        CLivePreview::OnAlphaChange(
          *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
          v6,
          *((_BYTE *)v6 + 344));
      }
      v8 = (CWindowIconic *)*((_QWORD *)v6 + 54);
      if ( v8 )
        CWindowIconic::OnAlphaUpdated(v8, 1);
      v9 = 0LL;
      if ( *((_DWORD *)v6 + 116) )
      {
        while ( 1 )
        {
          v12 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(*(CSecondaryWindowRepresentation **)(*((_QWORD *)v6 + 55) + 8 * v9));
          v5 = v12;
          if ( v12 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)v6 + 116) )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1319u);
      }
      else
      {
LABEL_8:
        v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 200LL))(a2);
        if ( v10 != ((*((_BYTE *)v6 + 597) & 0x20) != 0) )
        {
          *((_BYTE *)v6 + 597) ^= (*((_BYTE *)v6 + 597) ^ (32 * v10)) & 0x20;
          CWindowData::OnColorizationUpdated(v6);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
