/*
 * XREFs of ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015EF0
 * Callers:
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180015A00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180014318 (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180016034 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018120 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002507C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::HasIconicBitmapChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  char v6; // bl
  CDesktopManager *v7; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  void *v12; // [rsp+28h] [rbp-10h]
  CWindowData *v13; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x15CBu, v12);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2);
    if ( v13 && (*((int *)v13 + 28) < 8 || *((int *)v13 + 28) > 11) && !CWindowData::IsShellManaged(v13) )
    {
      if ( (*((_BYTE *)v13 + 606) & 1) == 0 && v6 )
      {
        v9 = *((_DWORD *)this + 122);
        v10 = v9 + 1;
        if ( v9 + 1 < v9 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v12);
        }
        else if ( v10 <= *((_DWORD *)this + 121) )
        {
          *(_QWORD *)(*((_QWORD *)this + 58) + 8LL * *((unsigned int *)this + 122)) = v13;
          *((_DWORD *)this + 122) = v10;
        }
        else
        {
          v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 464, 8, 1, &v13);
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u, v12);
        }
      }
      else if ( (*((_BYTE *)v13 + 606) & 1) != 0 && !v6 )
      {
        DynArray<CWindowData *,0>::Remove((char *)this + 464, &v13);
      }
      v7 = CDesktopManager::s_pDesktopManagerInstance;
      *((_BYTE *)v13 + 606) ^= (v6 ^ *((_BYTE *)v13 + 606)) & 1;
      CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(*((CIconicBitmapRegistry **)v7 + 37), v13);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
