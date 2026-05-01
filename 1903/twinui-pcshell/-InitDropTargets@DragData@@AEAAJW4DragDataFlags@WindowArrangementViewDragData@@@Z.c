/*
 * XREFs of ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803CB070
 * Callers:
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803CB504 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x1803CAB1C (-AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@.c)
 *     ?GetDropTargetEnabledList@DragData@@AEAA?AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803CAD44 (-GetDropTargetEnabledList@DragData@@AEAA-AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrang.c)
 *     ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x1803CAE14 (-GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z.c)
 *     ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x1803CAEC4 (-GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z.c)
 */

__int64 __fastcall DragData::InitDropTargets(__int64 a1, char a2)
{
  char DropTargetEnabledList; // si
  __int32 v4; // ecx
  int ReplaceDropTargetRects; // ebx
  __int64 v6; // rdx
  int v8; // ecx
  int LeftAndRightItems; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // r14
  int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int32 v18; // r14d
  struct IAppLayoutItem *v19[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  struct IAppLayoutItem *v21; // [rsp+48h] [rbp-28h] BYREF
  __m128i v22; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  DropTargetEnabledList = DragData::GetDropTargetEnabledList(a1, a2);
  if ( (DropTargetEnabledList & 1) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 84) + HIDWORD(*(_QWORD *)(a1 + 56));
    v22 = *(__m128i *)(a1 + 56);
    v22.m128i_i32[3] = v4;
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 5, &v22, 0);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 237LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)ReplaceDropTargetRects);
      return (unsigned int)ReplaceDropTargetRects;
    }
  }
  if ( (DropTargetEnabledList & 2) != 0 )
  {
    v22 = *(__m128i *)(a1 + 56);
    v22.m128i_i32[1] = _mm_srli_si128(v22, 8).m128i_i32[1] - *(_DWORD *)(a1 + 88);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 6, &v22, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 244LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 4) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 92);
    *(_OWORD *)v19 = *(_OWORD *)(a1 + 56);
    LODWORD(v19[1]) = _mm_cvtsi128_si32(*(__m128i *)v19) + v8;
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 0, v19, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 252LL;
      goto LABEL_4;
    }
    *(_OWORD *)v19 = *(_OWORD *)(a1 + 56);
    LODWORD(v19[0]) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v19, 8)) - *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 1, v19, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 256LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 8) != 0 )
  {
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 4, (_OWORD *)(a1 + 56), 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 265LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 0x10) != 0 )
  {
    v21 = 0LL;
    v19[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    LeftAndRightItems = DragData::GetLeftAndRightItems((DragData *)a1, &v21, v19);
    ReplaceDropTargetRects = LeftAndRightItems;
    if ( LeftAndRightItems < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)LeftAndRightItems);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      return (unsigned int)ReplaceDropTargetRects;
    }
    v10 = *(_QWORD *)(a1 + 40);
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 184LL))(v10, *(_QWORD *)(a1 + 48));
    v12 = *(__int64 **)(a1 + 40);
    v13 = v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v14 = *v12;
    if ( v13 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD))(v14 + 152))(
              v12,
              *(_QWORD *)(a1 + 48),
              &v20,
              0LL);
      ReplaceDropTargetRects = v15;
      if ( v15 < 0 )
      {
        v16 = 281LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        goto LABEL_33;
      }
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v14 + 168))(v12, &v20, 0LL);
      ReplaceDropTargetRects = v15;
      if ( v15 < 0 )
      {
        v16 = 289LL;
        goto LABEL_32;
      }
    }
    v17 = (*(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *))(*(_QWORD *)v20 + 96LL))(v20, v21);
    v22 = 0LL;
    if ( v17 )
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v19[0] + 56LL))(v19[0], 0LL, &v22);
      v18 = v22.m128i_i32[2] - MulDiv(v22.m128i_i32[2] - v22.m128i_i32[0], 50, 100);
    }
    else
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v21 + 56LL))(v21, 0LL, &v22);
      v18 = MulDiv(v22.m128i_i32[2] - v22.m128i_i32[0], 50, 100) + v22.m128i_i32[0];
    }
    v22 = *(__m128i *)(a1 + 56);
    v22.m128i_i32[2] = v18;
    v15 = DragData::AddDropTarget((_QWORD *)a1, 0, &v22, 1);
    ReplaceDropTargetRects = v15;
    if ( v15 < 0 )
    {
      v16 = 317LL;
      goto LABEL_32;
    }
    v22 = *(__m128i *)(a1 + 56);
    v22.m128i_i32[0] = v18;
    v15 = DragData::AddDropTarget((_QWORD *)a1, 1, &v22, 1);
    ReplaceDropTargetRects = v15;
    if ( v15 < 0 )
    {
      v16 = 321LL;
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  if ( (DropTargetEnabledList & 0x20) != 0 )
  {
    v22 = 0uLL;
    v19[0] = 0LL;
    v19[1] = 0LL;
    ReplaceDropTargetRects = DragData::GetReplaceDropTargetRects(
                               (DragData *)a1,
                               (struct Geometry::CRect *)&v22,
                               (struct Geometry::CRect *)v19);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 328LL;
      goto LABEL_4;
    }
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 2, &v22, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 329LL;
      goto LABEL_4;
    }
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 3, v19, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 330LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
