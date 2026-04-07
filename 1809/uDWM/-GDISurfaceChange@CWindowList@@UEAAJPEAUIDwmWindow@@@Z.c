/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001AE30
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18001B8E4 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180038170 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rsi
  CBaseObject *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  char v13; // al
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rax
  int updated; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  _QWORD Buffer[2]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v23; // [rsp+40h] [rbp-19h]
  __int128 v24; // [rsp+50h] [rbp-9h]
  __int128 v25; // [rsp+60h] [rbp+7h]
  __int64 v26; // [rsp+70h] [rbp+17h]
  char v27; // [rsp+78h] [rbp+1Fh]
  unsigned int v28; // [rsp+D0h] [rbp+77h] BYREF
  CWindowData *v29; // [rsp+D8h] [rbp+7Fh] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v28 = 0;
  v29 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v29);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x13B9u);
  }
  else
  {
    v6 = v29;
    if ( v29 )
    {
      v7 = *((_QWORD *)v29 + 53);
      if ( v7
        && (v19 = *((_QWORD *)v29 + 47)) != 0
        && (v20 = *(_QWORD *)(v7 + 32)) != 0
        && *(_QWORD *)(v20 + 376) == v19
        && (v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v19 + 16) + 912LL))(
                    *(_QWORD *)(v19 + 16),
                    *(unsigned int *)(v19 + 24)),
            v5 = v21,
            v21 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x13C8u);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)a2 + 344LL))(
               a2,
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
               *((_QWORD *)this + 71),
               &v28);
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x13CDu);
        }
        else
        {
          v9 = (_QWORD *)((char *)v6 + 376);
          v10 = (CBaseObject *)*((_QWORD *)v6 + 47);
          if ( v10 )
          {
            CBaseObject::Release(v10);
            *v9 = 0LL;
          }
          if ( v28
            && (v11 = CResource::WrapExistingResource(
                        *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
                        v28,
                        (struct CResource **)v6 + 47),
                v5 = v11,
                v11 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x13D4u);
          }
          else
          {
            v12 = *((_QWORD *)v6 + 49);
            if ( v12 )
            {
              if ( *v9 )
                CVisual::SetDirtyFlags(*((CVisual **)v6 + 49), 0x2000000u);
              else
                *(_DWORD *)(v12 + 80) &= ~0x2000000u;
            }
            (*(void (__fastcall **)(struct IDwmWindow *, __int64, __int64))(*(_QWORD *)a2 + 352LL))(
              a2,
              (__int64)v6 + 368,
              (__int64)v6 + 372);
            v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
            *((_BYTE *)v6 + 599) &= ~2u;
            *((_BYTE *)v6 + 599) |= 2 * (v13 & 1);
            v14 = CWindowData::NotifyRepresentationChanged(v6);
            v5 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x13E0u);
            }
            else
            {
              v15 = *((_QWORD *)v6 + 15);
              Buffer[1] = 0LL;
              v26 = -1LL;
              v23 = 0LL;
              v24 = 0LL;
              v25 = 0LL;
              Buffer[0] = v15;
              v27 = 0;
              v16 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
              if ( v16 )
                v16 = (_QWORD *)v16[8];
              if ( *((_QWORD **)v6 + 5) == v16 )
              {
                updated = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v6 + 15));
                v5 = updated;
                if ( updated < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x13E5u);
              }
            }
          }
        }
      }
    }
  }
  if ( v28 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
