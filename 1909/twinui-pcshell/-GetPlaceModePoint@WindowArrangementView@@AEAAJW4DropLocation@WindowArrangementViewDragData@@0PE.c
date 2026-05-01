/*
 * XREFs of ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x1803E0F48
 * Callers:
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x1803E0F48 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x1803E1C80 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1803E2E08 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PEAUtagPOINT@@@Z @ 0x1803E0F48 (-GetPlaceModePoint@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0PE.c)
 */

__int64 __fastcall WindowArrangementView::GetPlaceModePoint(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  int PlaceModePoint; // eax
  unsigned int v15; // edi
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  int v20[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v22[10]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *a4 = 0LL;
  v6 = a2 - 2;
  if ( !v6 )
  {
    v18 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v18 + 104LL))(
            v18,
            0LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v20);
    v10 = v12;
    if ( v12 < 0 )
    {
      v13 = 815LL;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v17 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v17 + 104LL))(
            v17,
            1LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v20);
    v10 = v12;
    if ( v12 < 0 )
    {
      v13 = 825LL;
      goto LABEL_18;
    }
LABEL_19:
    v21 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)v20 + 56LL))(*(_QWORD *)v20, 0LL, &v21);
    LODWORD(v19) = v21 + (DWORD2(v21) - (int)v21) / 2;
    HIDWORD(v19) = DWORD1(v21) + (HIDWORD(v21) - DWORD1(v21)) / 2;
    v10 = 0;
    *a4 = v19;
    goto LABEL_20;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 120) + 24LL))(*(_QWORD *)(a1 + 120), v22);
    v19 = (unsigned int)(v22[0] + (v22[2] - v22[0]) / 2);
LABEL_13:
    *a4 = v19;
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    PlaceModePoint = WindowArrangementView::GetPlaceModePoint(a1, a3, 0xFFFFFFFFLL, &v19);
    v15 = PlaceModePoint;
    if ( PlaceModePoint < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x355,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)PlaceModePoint);
      return v15;
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 120) + 24LL))(*(_QWORD *)(a1 + 120), v22);
    HIDWORD(v19) = v22[3];
    goto LABEL_13;
  }
  if ( v9 == 1 )
  {
    v11 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v11 + 104LL))(
            v11,
            0LL,
            2LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v20);
    v10 = v12;
    if ( v12 < 0 )
    {
      v13 = 835LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v12);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
      return v10;
    }
    goto LABEL_19;
  }
  v10 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x35C,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)0x80004005LL);
  return v10;
}
