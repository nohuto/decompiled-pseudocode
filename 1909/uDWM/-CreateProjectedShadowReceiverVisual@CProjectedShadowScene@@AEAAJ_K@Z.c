/*
 * XREFs of ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800B4604
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800B487C (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x1800126BC (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180018A54 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z @ 0x1800281AC (-WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180038228 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040AB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B4BF4 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::CreateProjectedShadowReceiverVisual(CProjectedShadowScene *this, __int64 a2)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  struct IDCompositionDesktopDevicePartner *v5; // rbx
  _QWORD *v6; // r14
  int inserted; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  struct CVisual *v10; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  struct IDCompositionDesktopDevicePartner *v15; // [rsp+70h] [rbp+18h] BYREF

  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(this);
  v15 = DCompositionInteropDevice;
  v5 = DCompositionInteropDevice;
  if ( DCompositionInteropDevice )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice + 8LL))(DCompositionInteropDevice);
  v6 = (_QWORD *)((char *)this + 48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, GUID *, char *))(*(_QWORD *)v5 + 216LL))(
               v5,
               &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
               (char *)this + 48);
  v8 = inserted;
  if ( inserted >= 0 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 7,
      0LL);
    inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, _QWORD, char *))(*(_QWORD *)v5 + 224LL))(
                 v5,
                 *v6,
                 (char *)this + 56);
    v8 = inserted;
    if ( inserted >= 0 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
      inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *, char *))(*(_QWORD *)v5 + 48LL))(
                   v5,
                   (char *)this + 40);
      v8 = inserted;
      if ( inserted >= 0 )
      {
        inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v5 + 24LL))(v5);
        v8 = inserted;
        if ( inserted >= 0 )
        {
          inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, *((_QWORD *)this + 5));
          v8 = inserted;
          if ( inserted >= 0 )
          {
            inserted = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v5 + 24LL))(v5);
            v8 = inserted;
            if ( inserted >= 0 )
            {
              inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                                                                            + 128LL))(
                           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                           *((_QWORD *)this + 7),
                           39LL,
                           &v14);
              v8 = inserted;
              if ( inserted >= 0 )
              {
                inserted = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 5)
                                                                           + 16LL)
                                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 5)
                                                                                + 16LL));
                v8 = inserted;
                if ( inserted >= 0 )
                {
                  inserted = CVisual::WrapExistingResource(v14, (struct CVisual **)this + 8);
                  v8 = inserted;
                  if ( inserted >= 0 )
                  {
                    inserted = CProjectedShadowScene::PositionProjectedShadowReceiverVisual(this);
                    v8 = inserted;
                    if ( inserted >= 0 )
                    {
                      v10 = (struct CVisual *)*((_QWORD *)this + 8);
                      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                               a2);
                      inserted = VisualCollection::InsertRelative(
                                   (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                                   v10,
                                   0LL,
                                   0,
                                   1);
                      v8 = inserted;
                      if ( inserted >= 0 )
                      {
                        *((_QWORD *)this + 2) = a2;
                        v8 = 0;
                        goto LABEL_27;
                      }
                      v9 = 126LL;
                    }
                    else
                    {
                      v9 = 123LL;
                    }
                  }
                  else
                  {
                    v9 = 120LL;
                  }
                }
                else
                {
                  v9 = 119LL;
                }
              }
              else
              {
                v9 = 118LL;
              }
            }
            else
            {
              v9 = 114LL;
            }
          }
          else
          {
            v9 = 113LL;
          }
        }
        else
        {
          v9 = 110LL;
        }
      }
      else
      {
        v9 = 109LL;
      }
    }
    else
    {
      v9 = 106LL;
    }
  }
  else
  {
    v9 = 103LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)inserted);
LABEL_27:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return v8;
}
