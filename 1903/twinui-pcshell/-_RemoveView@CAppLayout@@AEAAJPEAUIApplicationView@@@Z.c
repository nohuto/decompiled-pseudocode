/*
 * XREFs of ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x18041F508
 * Callers:
 *     ?RemoveView@CAppLayout@@UEAAJPEAUIApplicationView@@@Z @ 0x18041E4A0 (-RemoveView@CAppLayout@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18041F57C (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18026E010 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18041C6C4 (--$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 */

__int64 __fastcall CAppLayout::_RemoveView(CAppLayout *this, struct IUnknown *a2)
{
  struct IUnknown *v3; // r8
  int v4; // ebx
  struct IUnknown *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v6 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v4 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
         (__int64 *)this + 13,
         &v6,
         v3,
         &v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  if ( v4 >= 0 )
    return (unsigned int)CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
                           (_QWORD *)this + 13,
                           v8);
  return (unsigned int)v4;
}
