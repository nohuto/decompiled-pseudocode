/*
 * XREFs of ?RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@@Z @ 0x180309414
 * Callers:
 *     ??$MakeAndInitialize@VCSwitchItemGrid@@V1@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVCSwitchItemGrid@@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Z @ 0x180307A80 (--$MakeAndInitialize@VCSwitchItemGrid@@V1@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFa.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180119A90 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x18030159C (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 *     ?CGridTelemetryController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUISwitchItemController@@AEBU_GUID@@PEAPEAX@Z @ 0x18031A75C (-CGridTelemetryController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUISwitchItemCo.c)
 */

__int64 __fastcall CSwitchItemGrid::RuntimeClassInitialize(
        CSwitchItemGrid *this,
        const struct GridMetrics *a2,
        const struct Geometry::CSize *a3,
        struct IElementFactory *a4,
        struct ISwitchThumbnailFactory *a5,
        struct ISwitchItemController *a6,
        struct IObservableObjectArray *a7)
{
  __int64 *v7; // r14
  int v12; // eax
  unsigned int v13; // ebx
  struct IWeakReference *v14; // rbx
  const struct _GUID *v15; // r8
  int v16; // eax
  struct ISwitchThumbnailFactory *v17; // r14
  int v18; // eax
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  void *v22; // rbx
  void *v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v28; // [rsp+80h] [rbp+30h] BYREF

  v7 = (__int64 *)((char *)this + 880);
  v26[0] = (__int64)this;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 110);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
          v7,
          v26);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v26[0] = *v7;
    v14 = (struct IWeakReference *)v26[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v26);
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    v16 = CGridTelemetryController_CreateInstance(v14, a6, v15, &v24);
    v13 = v16;
    if ( v16 >= 0 )
    {
      v28 = 0LL;
      v17 = a5;
      if ( a5
        && (v25 = 0x100000001LL,
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28),
            v18 = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v17 + 112LL))(
                    v17,
                    0LL,
                    v25,
                    &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                    &v28),
            v13 = v18,
            v18 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE1,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
          (const char *)(unsigned int)v18);
      }
      else
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 11, &v28);
        v19 = 4LL;
        v20 = (_OWORD *)((char *)this + 256);
        do
        {
          *v20 = *(_OWORD *)a2;
          v20[1] = *((_OWORD *)a2 + 1);
          v20[2] = *((_OWORD *)a2 + 2);
          v20[3] = *((_OWORD *)a2 + 3);
          v20[4] = *((_OWORD *)a2 + 4);
          v20[5] = *((_OWORD *)a2 + 5);
          v20[6] = *((_OWORD *)a2 + 6);
          v20 += 8;
          v21 = *((_OWORD *)a2 + 7);
          a2 = (const struct GridMetrics *)((char *)a2 + 128);
          *(v20 - 1) = v21;
          --v19;
        }
        while ( v19 );
        *((_QWORD *)this + 106) = *(_QWORD *)a3;
        Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 108, (__int64)a4);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 107, (__int64)v17);
        v22 = v24;
        if ( *((void **)this + 109) != v24 )
        {
          v25 = (__int64)v24;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
          v25 = *((_QWORD *)this + 109);
          *((_QWORD *)this + 109) = v22;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        }
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 115, (__int64)a7);
        v13 = 0;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDC,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v16);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)v13);
  }
  return v13;
}
