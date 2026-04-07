/*
 * XREFs of ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800B38FC
 * Callers:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x18000F13C (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x18000F330 (-InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z.c)
 *     ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x18000F804 (--4-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDes.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001262C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007A4D8 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_3327df36dc6a61b3be79904c758f604e_::operator() @ 0x1800B3760 (_lambda_3327df36dc6a61b3be79904c758f604e_--operator().c)
 *     ?Attach@?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAXPEAVCVisual@@@Z @ 0x1800B384C (-Attach@-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z @ 0x1800B3C80 (-SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z.c)
 */

__int64 __fastcall UdwmDcompVisual::ReinitializeDComp(UdwmDcompVisual *this)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rsi
  CBaseObject *v3; // rdx
  int v4; // ecx
  CBaseObject *v5; // rdx
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  char v13; // r14
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int inserted; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // [rsp+30h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+38h] [rbp-31h] BYREF
  __int128 v26; // [rsp+40h] [rbp-29h]
  __int128 v27; // [rsp+50h] [rbp-19h]
  int *v28; // [rsp+60h] [rbp-9h]
  _OWORD v29[2]; // [rsp+68h] [rbp-1h] BYREF
  int *v30; // [rsp+88h] [rbp+1Fh]
  char v31; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v33; // [rsp+D8h] [rbp+6Fh] BYREF
  int v34; // [rsp+E0h] [rbp+77h] BYREF
  CBaseObject *v35; // [rsp+E8h] [rbp+7Fh] BYREF

  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(this);
  if ( !DCompositionInteropDevice )
    goto LABEL_36;
  v3 = (CBaseObject *)*((_QWORD *)this + 2);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<CVisual>::Attach(&v24, v3);
  v4 = *((_DWORD *)this + 10);
  v5 = (CBaseObject *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 10) = 0;
  v35 = 0LL;
  v33 = v4;
  Microsoft::WRL::ComPtr<CVisual>::Attach(&v35, v5);
  v6 = *((_DWORD *)this + 20);
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 20) = 0;
  v34 = v6;
  *((_QWORD *)&v26 + 1) = &v24;
  *(_QWORD *)&v27 = &v35;
  *((_QWORD *)&v27 + 1) = &v33;
  v28 = &v34;
  *(_QWORD *)&v26 = this;
  v29[1] = v27;
  v29[0] = v26;
  v30 = &v34;
  v7 = UdwmDcompVisual::InitializeDComp(this, DCompositionInteropDevice);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(CBaseObject *, CBaseObject *))(*(_QWORD *)v35 + 72LL))(v35, v24);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 514LL;
      goto LABEL_6;
    }
    v13 = 1;
    v14 = VisualCollection::Remove((CBaseObject *)((char *)v24 + 32), v35);
    v8 = v14;
    if ( v14 < 0 )
    {
      v15 = (unsigned int)v14;
      v16 = 521LL;
LABEL_24:
      v18 = retaddr;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        v18,
        (void *)v16,
        (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)v15);
      if ( v13 )
      {
        v21 = (*(__int64 (__fastcall **)(CBaseObject *, _QWORD))(*(_QWORD *)v35 + 72LL))(v35, 0LL);
        if ( v21 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x206,
            (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
            (const char *)(unsigned int)v21);
          __debugbreak();
        }
      }
      goto LABEL_7;
    }
    v13 = 0;
    v8 = UdwmDcompVisual::SwapVisual(v24, *((struct CVisual **)this + 2));
    if ( v8 < 0 )
    {
      inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v24 + 32), v35, 0LL, 0, 1);
      v18 = retaddr;
      if ( inserted < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x210,
          (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
          (const char *)(unsigned int)inserted);
        __debugbreak();
      }
      v15 = (unsigned int)v8;
      v16 = 529LL;
      goto LABEL_25;
    }
    v8 = UdwmDcompVisual::SwapVisual(v35, *((struct CVisual **)this + 7));
    if ( v8 < 0 )
    {
      v19 = UdwmDcompVisual::SwapVisual(v24, *((struct CVisual **)this + 2));
      if ( v19 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x219,
          (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
          (const char *)(unsigned int)v19);
        __debugbreak();
      }
      v20 = VisualCollection::InsertRelative((CBaseObject *)((char *)v24 + 32), v35, 0LL, 0, 1);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x21A,
          (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
          (const char *)(unsigned int)v20);
        __debugbreak();
      }
      v15 = (unsigned int)v8;
      v16 = 539LL;
      goto LABEL_24;
    }
    v25 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v33 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                     + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                         + 16LL));
    if ( v34 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                     + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                         + 16LL));
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
    v22 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      CBaseObject::Release(v22);
    }
    v23 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      CBaseObject::Release(v23);
    }
LABEL_36:
    Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=(
      (__int64 *)this + 12,
      (__int64)DCompositionInteropDevice);
    return 0LL;
  }
  v9 = 509LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)v7);
LABEL_7:
  v31 = 0;
  lambda_3327df36dc6a61b3be79904c758f604e_::operator()((__int64 *)v29);
  v10 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    CBaseObject::Release(v10);
  }
  v11 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    CBaseObject::Release(v11);
  }
  return (unsigned int)v8;
}
