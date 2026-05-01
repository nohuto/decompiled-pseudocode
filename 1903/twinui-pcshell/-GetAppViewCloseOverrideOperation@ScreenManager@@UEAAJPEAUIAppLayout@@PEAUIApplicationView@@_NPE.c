/*
 * XREFs of ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1803B98B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x18035DB80 (-GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 *     ?CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1803B96C0 (-CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@.c)
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1803BA210 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 *     ?RemoveAt@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJ_K@Z @ 0x1803BA27C (-RemoveAt@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntry.c)
 */

__int64 __fastcall ScreenManager::GetAppViewCloseOverrideOperation(
        ScreenManager *this,
        struct IAppLayout *a2,
        struct IUnknown *a3,
        char a4,
        struct IAppLayoutOperation **a5)
{
  struct IAppLayoutOperation **v5; // r15
  unsigned int v9; // ebx
  char *v11; // r14
  __int64 v12; // rbx
  char v13; // si
  struct IApplicationView *v14; // r8
  int ReverseAppToAppSwitchLayoutOperation; // eax
  struct IApplicationView *v16[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct ITabletModePositioner *v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  *a5 = 0LL;
  if ( *((_BYTE *)this + 336) )
  {
    if ( !*((_QWORD *)this + 39) )
      return 2147500037LL;
    v11 = (char *)this + 304;
    v12 = *((_QWORD *)this + 38);
    v13 = 1;
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(v12 + 16), a3)
      && (*(unsigned int (__fastcall **)(_QWORD, struct IAppLayout *, __int64))(**(_QWORD **)(v12 + 8) + 200LL))(
           *(_QWORD *)(v12 + 8),
           a2,
           2LL) )
    {
      v18 = 0LL;
      v16[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      TabletModePositionerHelpers::GetApplicationViewsFromLayout(
        *(TabletModePositionerHelpers **)v12,
        (struct IAppLayout *)&a5,
        (unsigned int *)&v18,
        v16);
      LOBYTE(v14) = a4;
      ReverseAppToAppSwitchLayoutOperation = ScreenManagerHelpers::CreateReverseAppToAppSwitchLayoutOperation(
                                               *((ScreenManagerHelpers **)this + 37),
                                               v18,
                                               v14,
                                               (__int64)v5);
      v9 = ReverseAppToAppSwitchLayoutOperation;
      if ( ReverseAppToAppSwitchLayoutOperation >= 0 )
      {
        CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAt(
          v11,
          0LL);
        v13 = 0;
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)ReverseAppToAppSwitchLayoutOperation);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      if ( !v13 )
        return v9;
    }
    else
    {
      v9 = -2147019873;
    }
    CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((char *)this + 304);
  }
  else
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)0x8007139FLL);
  }
  return v9;
}
