/*
 * XREFs of ?GetTrayBitmapResult@VirtualDesktopGestureWindow@@AEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCRect@Geometry@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@@Z @ 0x1803F5010
 * Callers:
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z @ 0x1803F71F0 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::GetTrayBitmapResult(
        __int64 a1,
        __int64 a2,
        int a3,
        _OWORD *a4,
        _QWORD *a5)
{
  void *v9; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  void *v18; // r8
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE pv[4]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v24; // [rsp+5Ch] [rbp-25h]
  struct tagPOINT Points[2]; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v22[1] = -2LL;
  v9 = *(void **)(a2 + 16);
  if ( !v9 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return 2147947423LL;
  if ( GetObjectW(v9, 32, pv) )
  {
    v21 = 0LL;
    v12 = *(_QWORD *)(a1 + 56);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 80LL);
    v22[0] = v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v14 = v13(v12, *(_QWORD *)(a1 + 160), v22[0], 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v21);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v22[0] = a2;
      (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD *))(*(_QWORD *)v21 + 88LL))(
        v21,
        LambdaCustomPaintProc<_lambda_c95b2e5eab2cd436d4d0117f4debe67d_,HDC__ *>,
        v22);
      *(_OWORD *)&Points[0].x = *a4;
      MapWindowPoints(0LL, *(HWND *)(a1 + 8), Points, 2u);
      Points[0].x += a3;
      Points[1].x += a3;
      v17 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
              v21,
              Points,
              0LL,
              0LL);
      v11 = v17;
      if ( v17 >= 0 )
      {
        v19 = a5[1];
        if ( v19 != a5[3]
          || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)a5,
                      v19 + 1,
                      v18),
              (v11 & 0x80000000) == 0) )
        {
          v20 = (__int64 *)(*a5 + 8 * a5[1]++);
          if ( v20 )
          {
            *v20 = v21;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
          }
          v11 = 0;
          goto LABEL_19;
        }
        v15 = v11;
        v16 = 260LL;
      }
      else
      {
        v15 = (unsigned int)v17;
        v16 = 259LL;
      }
    }
    else
    {
      v15 = (unsigned int)v14;
      v16 = 244LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)v15);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    return v11;
  }
  v11 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF2,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)0x80004005LL);
  return v11;
}
