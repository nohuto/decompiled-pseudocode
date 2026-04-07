/*
 * XREFs of ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C
 * Callers:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJXZ @ 0x180023B34 (-ValidateDevice@UdwmDcompVisual@@QEAAJXZ.c)
 * Callees:
 *     ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x1800220B4 (-InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z.c)
 *     ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180022420 (--4-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDes.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180022478 (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     wil::details::lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___::_lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___ @ 0x18004DEF8 (wil--details--lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___--_lambda_call__lambda_9a17.c)
 *     wil::details::lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___::_lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___ @ 0x18004DF44 (wil--details--lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___--_lambda_call__lambda_f8bc.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CGuard@VCDwmCS@@@@QEAA@AEAVCDwmCS@@@Z @ 0x180072AC4 (--0-$CGuard@VCDwmCS@@@@QEAA@AEAVCDwmCS@@@Z.c)
 *     ?Attach@?$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z @ 0x180072AE8 (-Attach@-$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073BB0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x180086E78 (--1-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddChild@CVisual@@QEAAJPEAV1@_N@Z @ 0x1800883C4 (-AddChild@CVisual@@QEAAJPEAV1@_N@Z.c)
 *     ?SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z @ 0x1800AF870 (-SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z.c)
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
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  struct CVisual *v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  int v17; // eax
  CVisual *v19; // [rsp+20h] [rbp-39h] BYREF
  struct CVisual **v20; // [rsp+28h] [rbp-31h] BYREF
  char v21; // [rsp+30h] [rbp-29h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+38h] [rbp-21h] BYREF
  __int128 v23; // [rsp+40h] [rbp-19h]
  __int128 v24; // [rsp+50h] [rbp-9h]
  int *v25; // [rsp+60h] [rbp+7h]
  _OWORD v26[2]; // [rsp+68h] [rbp+Fh] BYREF
  int *v27; // [rsp+88h] [rbp+2Fh]
  char v28; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v30; // [rsp+C8h] [rbp+6Fh] BYREF
  int v31; // [rsp+D0h] [rbp+77h] BYREF
  struct CVisual *v32; // [rsp+D8h] [rbp+7Fh] BYREF

  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(this);
  if ( DCompositionInteropDevice )
  {
    v3 = (CBaseObject *)*((_QWORD *)this + 2);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<UdwmDcompVisual>::Attach(&v19, v3);
    v4 = *((_DWORD *)this + 10);
    v5 = (CBaseObject *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 10) = 0;
    v32 = 0LL;
    v30 = v4;
    Microsoft::WRL::ComPtr<UdwmDcompVisual>::Attach(&v32, v5);
    v6 = *((_DWORD *)this + 20);
    *((_QWORD *)this + 7) = 0LL;
    *((_DWORD *)this + 20) = 0;
    v31 = v6;
    *((_QWORD *)&v23 + 1) = &v19;
    *(_QWORD *)&v24 = &v32;
    *((_QWORD *)&v24 + 1) = &v30;
    v25 = &v31;
    *(_QWORD *)&v23 = this;
    v28 = 1;
    v26[1] = v24;
    v26[0] = v23;
    v27 = &v31;
    v7 = UdwmDcompVisual::InitializeDComp(this, DCompositionInteropDevice);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 523LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v7);
LABEL_18:
      wil::details::lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___::_lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___((__int64)v26);
      Microsoft::WRL::ComPtr<CVisual>::~ComPtr<CVisual>(&v32);
      Microsoft::WRL::ComPtr<CVisual>::~ComPtr<CVisual>(&v19);
      return (unsigned int)v8;
    }
    v7 = (*(__int64 (__fastcall **)(struct CVisual *, CVisual *))(*(_QWORD *)v32 + 72LL))(v32, v19);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 528LL;
      goto LABEL_6;
    }
    v20 = &v32;
    v21 = 1;
    v10 = VisualCollection::Remove((CVisual *)((char *)v19 + 32), v32);
    v8 = v10;
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 535LL;
LABEL_16:
      v15 = retaddr;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        v15,
        (void *)v12,
        (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)v11);
      wil::details::lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___::_lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___((__int64)&v20);
      goto LABEL_18;
    }
    v13 = (struct CVisual *)*((_QWORD *)this + 2);
    v21 = 0;
    v8 = UdwmDcompVisual::SwapVisual(v19, v13);
    if ( v8 < 0 )
    {
      v14 = CVisual::AddChild(v19, v32, 1);
      v15 = retaddr;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x21E,
          (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      v11 = (unsigned int)v8;
      v12 = 543LL;
      goto LABEL_17;
    }
    v8 = UdwmDcompVisual::SwapVisual(v32, *((struct CVisual **)this + 7));
    if ( v8 < 0 )
    {
      v16 = UdwmDcompVisual::SwapVisual(v19, *((struct CVisual **)this + 2));
      if ( v16 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x227,
          (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
          (const char *)(unsigned int)v16);
        JUMPOUT(0x1800AF814LL);
      }
      v17 = CVisual::AddChild(v19, v32, 1);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x228,
          (__int64)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      v11 = (unsigned int)v8;
      v12 = 553LL;
      goto LABEL_16;
    }
    v28 = 0;
    CGuard<CDwmCS>::CGuard<CDwmCS>(&v22, &CDesktopManager::s_csDwmInstance);
    if ( v30 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    if ( v31 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
    wil::details::lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___::_lambda_call__lambda_9a17c67055a4e4ee557498e76edb141d___((__int64)&v20);
    wil::details::lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___::_lambda_call__lambda_f8bcd8230a83b17d86bf9ff8b5b119aa___((__int64)v26);
    Microsoft::WRL::ComPtr<CVisual>::~ComPtr<CVisual>(&v32);
    Microsoft::WRL::ComPtr<CVisual>::~ComPtr<CVisual>(&v19);
  }
  Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=(
    (__int64 *)this + 12,
    (__int64)DCompositionInteropDevice);
  return 0LL;
}
