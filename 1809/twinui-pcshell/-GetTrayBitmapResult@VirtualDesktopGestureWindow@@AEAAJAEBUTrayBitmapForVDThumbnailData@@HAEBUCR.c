/*
 * XREFs of ?GetTrayBitmapResult@VirtualDesktopGestureWindow@@AEAAJAEBUTrayBitmapForVDThumbnailData@@HAEBUCRect@Geometry@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@@Z @ 0x18038F2C0
 * Callers:
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z @ 0x180391370 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@CAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
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
  __int64 v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  void *v17; // r8
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE pv[4]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v23; // [rsp+5Ch] [rbp-15h]
  struct tagPOINT Points[2]; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  v21[1] = -2LL;
  v9 = *(void **)(a2 + 16);
  if ( !v9 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return 2147947423LL;
  if ( GetObjectW(v9, 32, pv) )
  {
    v20 = 0LL;
    v21[0] = v23;
    v12 = *(_QWORD *)(a1 + 56);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 80LL))(
            v12,
            *(_QWORD *)(a1 + 160),
            v21[0],
            1LL,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            &v20);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v21[0] = a2;
      (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD *))(*(_QWORD *)v20 + 88LL))(
        v20,
        LambdaCustomPaintProc<_lambda_c95b2e5eab2cd436d4d0117f4debe67d_,HDC__ *>,
        v21);
      *(_OWORD *)&Points[0].x = *a4;
      MapWindowPoints(0LL, *(HWND *)(a1 + 8), Points, 2u);
      Points[0].x += a3;
      Points[1].x += a3;
      v16 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v20 + 24LL))(
              v20,
              Points,
              0LL,
              0LL);
      v11 = v16;
      if ( v16 >= 0 )
      {
        v18 = a5[1];
        if ( v18 != a5[3]
          || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)a5,
                      v18 + 1,
                      v17),
              (v11 & 0x80000000) == 0) )
        {
          v19 = (__int64 *)(*a5 + 8 * a5[1]++);
          if ( v19 )
          {
            *v19 = v20;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
          }
          v11 = 0;
          goto LABEL_19;
        }
        v14 = v11;
        v15 = 260LL;
      }
      else
      {
        v14 = (unsigned int)v16;
        v15 = 259LL;
      }
    }
    else
    {
      v14 = (unsigned int)v13;
      v15 = 244LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)v14);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
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
