/*
 * XREFs of ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x180043EC4
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180043D74 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18000EF30 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800253D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CMagnifierControl@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x180044064 (-Create@CMagnifierControl@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTar.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x180044470 (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateRootVisualForDesktop(
        CWindowList *this,
        struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *a2)
{
  volatile signed __int32 *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int inserted; // eax
  int v11; // eax
  int v12; // eax
  CBaseObject *v13; // rax
  CBaseObject *v14; // rcx
  void *v16; // [rsp+28h] [rbp-18h]
  CBaseObject *v17; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v18; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v19; // [rsp+80h] [rbp+40h] BYREF
  CBaseObject *v20; // [rsp+88h] [rbp+48h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v2 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v4 = CVisual::Create(&v19);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x74Fu, v16);
LABEL_12:
    v6 = (volatile signed __int32 *)v19;
    goto LABEL_13;
  }
  v6 = (volatile signed __int32 *)v19;
  (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v19 + 104LL))(v19);
  v7 = CRenderDataVisual::Create(&v18);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x755u, v16);
LABEL_25:
    v2 = (volatile signed __int32 *)v18;
    goto LABEL_13;
  }
  v8 = CDesktopWindowReplacement::Create(&v17);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x759u, v16);
    goto LABEL_25;
  }
  v2 = (volatile signed __int32 *)v18;
  v9 = CMagnifierControl::Create(
         *((struct IDCompositionDesktopDevicePartner **)CDesktopManager::s_pDesktopManagerInstance + 26),
         *((struct IDCompositionDesktopTargetPartner **)CDesktopManager::s_pDesktopManagerInstance + 10),
         (struct CVisual *)v6,
         v18,
         &v20);
  v5 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x760u, v16);
  }
  else
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(v6 + 8), *((struct CVisual **)v20 + 6), 0LL, 0, 1);
    v5 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x765u, v16);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 64LL))(v6);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x768u, v16);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 5)
                                                              + 16LL)
                                                + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 5)
                                                                   + 16LL));
        v5 = v12;
        if ( v12 >= 0 )
        {
          *((_QWORD *)a2 + 1) = v6;
          _InterlockedIncrement(v6 + 2);
          v13 = v20;
          *((_QWORD *)a2 + 2) = v20;
          _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
          v2 = (volatile signed __int32 *)v18;
          *((_QWORD *)a2 + 3) = v18;
          if ( v2 )
          {
            _InterlockedIncrement(v2 + 2);
            v2 = (volatile signed __int32 *)v18;
          }
          v14 = v17;
          *((_QWORD *)a2 + 4) = v17;
          if ( v14 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
            v2 = (volatile signed __int32 *)v18;
          }
          goto LABEL_12;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x76Au, v16);
      }
    }
  }
LABEL_13:
  if ( v6 )
    CBaseObject::Release((CBaseObject *)v6);
  if ( v20 )
    CBaseObject::Release(v20);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  if ( v17 )
    CBaseObject::Release(v17);
  return v5;
}
