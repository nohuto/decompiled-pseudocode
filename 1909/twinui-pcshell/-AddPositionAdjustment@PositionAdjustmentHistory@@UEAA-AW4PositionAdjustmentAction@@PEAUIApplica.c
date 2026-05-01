/*
 * XREFs of ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x1803DA690
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x180141B4C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801423E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18014270C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpad.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x180367FA4 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___ @ 0x1803DA554 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___.c)
 */

__int64 __fastcall PositionAdjustmentHistory::AddPositionAdjustment(__int64 a1, struct IUnknown *a2)
{
  __int64 *v4; // r15
  unsigned int v5; // ebx
  volatile int *v6; // rdx
  ULONGLONG TickCount64; // rbp
  void *v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 *v14; // rsi
  ULONGLONG v15; // rax
  __int64 v16; // r14
  unsigned int v17; // esi
  ULONGLONG v18; // r13
  __int64 v19; // rbp
  int v21[2]; // [rsp+20h] [rbp-48h] BYREF
  ULONGLONG v22; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile int *v24; // [rsp+70h] [rbp+8h] BYREF
  volatile int *v25; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)v21 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v21);
  v4 = (__int64 *)(a1 + 24);
  v5 = 0;
  TickCount64 = GetTickCount64();
  v22 = TickCount64;
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 == *(_QWORD *)(a1 + 48)
    && (v10 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                a1 + 24,
                v9 + 1,
                v8),
        v9 = *(_QWORD *)(a1 + 32),
        v10 < 0) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v12 = *v4;
    v13 = v9 + 1;
    *(_QWORD *)(a1 + 32) = v13;
    v11 = 16 * v13;
    v14 = (__int64 *)(v11 + v12 - 16);
    if ( v14 )
    {
      *v14 = (__int64)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
      v14[1] = TickCount64;
    }
  }
  v25 = (volatile int *)a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::InternalAddRef(
      a1,
      v6);
  v24 = (volatile int *)a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::AddRef(a1);
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___(
    v11,
    *(unsigned int *)(a1 + 56),
    (__int64)v8,
    &v24);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v24);
  v15 = GetTickCount64();
  v16 = *v4;
  v17 = 0;
  v18 = v15;
  v19 = *(_QWORD *)(a1 + 24) + 16LL * *(_QWORD *)(a1 + 32);
  if ( *v4 != v19 )
  {
    do
    {
      if ( (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)v16) )
      {
        if ( v18 - *(_QWORD *)(v16 + 8) < *(unsigned int *)(a1 + 56) && ++v17 >= 4 )
          break;
      }
      v16 += 16LL;
    }
    while ( v16 != v19 );
    if ( v17 >= 3 )
      v5 = 2 - (v17 < 4);
  }
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
  return v5;
}
