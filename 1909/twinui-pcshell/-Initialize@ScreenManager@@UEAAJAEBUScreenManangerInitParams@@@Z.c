/*
 * XREFs of ?Initialize@ScreenManager@@UEAAJAEBUScreenManangerInitParams@@@Z @ 0x1803D92B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x1803D8560 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1803D8560.c)
 *     ??$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@SmartCookie@@QEAAJPEAUITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@@PEAK@ZP81@EAAJK@ZPEAVScreenManager@@@Z @ 0x1803D8630 (--$Register@UITabletModePositionerManager@@P81@EAAJPEAUITabletModePositionerManagerNotification@.c)
 */

__int64 __fastcall ScreenManager::Initialize(ScreenManager *this, const struct ScreenManangerInitParams *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 3);
  v4 = *((_QWORD *)this + 38);
  if ( v4 != v2 )
  {
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v4 = *((_QWORD *)this + 38);
    }
    v15 = v4;
    *((_QWORD *)this + 38) = v2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)a2 + 1) + 24LL))(*((_QWORD *)a2 + 1), &v14);
  if ( v6 < 0 )
  {
    v8 = 126LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  *((_BYTE *)this + 344) = v14 == 1;
  v6 = SmartCookie::Register<ITabletModePositionerManager,long (ITabletModePositionerManager::*)(ITabletModePositionerManagerNotification *,unsigned long *),long (ITabletModePositionerManager::*)(unsigned long),ScreenManager *>(
         (__int64)this + 48,
         *((_QWORD *)a2 + 2),
         v7);
  if ( v6 < 0 )
  {
    v8 = 132LL;
    goto LABEL_7;
  }
  v11 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),ScreenManager *>(
          (__int64)this + 176,
          *(_QWORD *)a2,
          v10);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
