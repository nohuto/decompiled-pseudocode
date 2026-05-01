/*
 * XREFs of ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x1803BB110
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801226FC (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x180348834 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___ @ 0x1803BAFD4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___.c)
 */

__int64 __fastcall PositionAdjustmentHistory::AddPositionAdjustment(__int64 a1, struct IUnknown *a2)
{
  __int64 *v4; // r15
  unsigned int v5; // ebx
  ULONGLONG TickCount64; // rbp
  void *v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 *v13; // rsi
  ULONGLONG v14; // rax
  __int64 v15; // r14
  unsigned int v16; // esi
  ULONGLONG v17; // r13
  __int64 v18; // rbp
  int v20[2]; // [rsp+20h] [rbp-48h] BYREF
  ULONGLONG v21; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int32 *v23; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v24; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)v20 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v20);
  v4 = (__int64 *)(a1 + 24);
  v5 = 0;
  TickCount64 = GetTickCount64();
  v21 = TickCount64;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 == *(_QWORD *)(a1 + 48)
    && (v9 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
               a1 + 24,
               v8 + 1,
               v7),
        v8 = *(_QWORD *)(a1 + 32),
        v9 < 0) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    v11 = *v4;
    v12 = v8 + 1;
    *(_QWORD *)(a1 + 32) = v12;
    v10 = 16 * v12;
    v13 = (__int64 *)(v10 + v11 - 16);
    if ( v13 )
    {
      *v13 = (__int64)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
      v13[1] = TickCount64;
    }
  }
  v24 = (volatile signed __int32 *)a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 20));
  v23 = (volatile signed __int32 *)a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 20));
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a506e902e7170e918a173785fdf388b8___(
    v10,
    *(_DWORD *)(a1 + 56),
    (__int64)v7,
    &v23);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v23);
  v14 = GetTickCount64();
  v15 = *v4;
  v16 = 0;
  v17 = v14;
  v18 = *(_QWORD *)(a1 + 24) + 16LL * *(_QWORD *)(a1 + 32);
  if ( *v4 != v18 )
  {
    do
    {
      if ( (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)v15) )
      {
        if ( v17 - *(_QWORD *)(v15 + 8) < *(unsigned int *)(a1 + 56) && ++v16 >= 4 )
          break;
      }
      v15 += 16LL;
    }
    while ( v15 != v18 );
    if ( v16 >= 3 )
      v5 = 2 - (v16 < 4);
  }
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  return v5;
}
