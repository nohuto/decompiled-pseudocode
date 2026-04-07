/*
 * XREFs of ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800102A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180005254 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x18000FE60 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012440 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FCB8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
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
  void *v13; // [rsp+28h] [rbp-20h]
  struct CWindowData *v14; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1354u, v13);
  }
  else
  {
    v6 = v14;
    if ( v14 )
    {
      *((_BYTE *)v6 + 352) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
      v7 = (CVisual *)*((_QWORD *)v6 + 50);
      if ( v7 )
      {
        CVisual::SetOpacity(v7, (double)*(unsigned __int8 *)(*((_QWORD *)v7 + 90) + 352LL) / 255.0);
        CLivePreview::OnAlphaChange(
          *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
          v6,
          *((_BYTE *)v6 + 352));
      }
      v8 = (CWindowIconic *)*((_QWORD *)v6 + 55);
      if ( v8 )
        CWindowIconic::OnAlphaUpdated(v8, 1);
      v9 = 0LL;
      if ( *((_DWORD *)v6 + 118) )
      {
        while ( 1 )
        {
          v12 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(*(CSecondaryWindowRepresentation **)(*((_QWORD *)v6 + 56) + 8 * v9));
          v5 = v12;
          if ( v12 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)v6 + 118) )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1368u, v13);
      }
      else
      {
LABEL_8:
        v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 200LL))(a2);
        if ( v10 != ((*((_BYTE *)v6 + 605) & 0x20) != 0) )
        {
          *((_BYTE *)v6 + 605) ^= (*((_BYTE *)v6 + 605) ^ (32 * v10)) & 0x20;
          CWindowData::OnColorizationUpdated(v6);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v5;
}
