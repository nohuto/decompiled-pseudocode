/*
 * XREFs of ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803650A4
 * Callers:
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180365534 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x180364B5C (-AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@.c)
 *     ?GetDropTargetEnabledList@DragData@@AEAA?AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180364D84 (-GetDropTargetEnabledList@DragData@@AEAA-AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrang.c)
 *     ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x180364E4C (-GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z.c)
 *     ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x180364EFC (-GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z.c)
 */

__int64 __fastcall DragData::InitDropTargets(__int64 a1, char a2)
{
  char DropTargetEnabledList; // si
  __int32 v4; // ecx
  int ReplaceDropTargetRects; // ebx
  __int64 v6; // rdx
  __m128i *v8; // r14
  int v9; // ecx
  int v10; // eax
  int LeftAndRightItems; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // r14
  int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int32 v20; // r14d
  struct IAppLayoutItem *v21[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  struct IAppLayoutItem *v23; // [rsp+48h] [rbp-28h] BYREF
  __m128i v24; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  DropTargetEnabledList = DragData::GetDropTargetEnabledList(a1, a2);
  if ( (DropTargetEnabledList & 1) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 84) + HIDWORD(*(_QWORD *)(a1 + 56));
    v24 = *(__m128i *)(a1 + 56);
    v24.m128i_i32[3] = v4;
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 5, &v24, 0);
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
    v24 = *(__m128i *)(a1 + 56);
    v24.m128i_i32[1] = _mm_srli_si128(v24, 8).m128i_i32[1] - *(_DWORD *)(a1 + 88);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 6, &v24, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 244LL;
      goto LABEL_4;
    }
  }
  v8 = (__m128i *)(a1 + 56);
  if ( (DropTargetEnabledList & 4) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 92);
    v10 = _mm_cvtsi128_si32(*v8);
    *(__m128i *)v21 = *v8;
    LODWORD(v21[1]) = v10 + v9;
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 0, v21, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 252LL;
      goto LABEL_4;
    }
    *(__m128i *)v21 = *v8;
    LODWORD(v21[0]) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v21, 8)) - *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 1, v21, 1);
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
    v23 = 0LL;
    v21[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    LeftAndRightItems = DragData::GetLeftAndRightItems((DragData *)a1, &v23, v21);
    ReplaceDropTargetRects = LeftAndRightItems;
    if ( LeftAndRightItems < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)LeftAndRightItems);
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      return (unsigned int)ReplaceDropTargetRects;
    }
    v12 = *(_QWORD *)(a1 + 40);
    v22 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 184LL))(v12, *(_QWORD *)(a1 + 48));
    v14 = *(__int64 **)(a1 + 40);
    v15 = v13;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v16 = *v14;
    if ( v15 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD))(v16 + 152))(
              v14,
              *(_QWORD *)(a1 + 48),
              &v22,
              0LL);
      ReplaceDropTargetRects = v17;
      if ( v17 < 0 )
      {
        v18 = 281LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        goto LABEL_33;
      }
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v16 + 168))(v14, &v22, 0LL);
      ReplaceDropTargetRects = v17;
      if ( v17 < 0 )
      {
        v18 = 289LL;
        goto LABEL_32;
      }
    }
    v19 = (*(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *))(*(_QWORD *)v22 + 96LL))(v22, v23);
    v24 = 0LL;
    if ( v19 )
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v21[0] + 56LL))(v21[0], 0LL, &v24);
      v20 = v24.m128i_i32[2] - MulDiv(v24.m128i_i32[2] - v24.m128i_i32[0], 50, 100);
    }
    else
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __m128i *))(*(_QWORD *)v23 + 56LL))(v23, 0LL, &v24);
      v20 = MulDiv(v24.m128i_i32[2] - v24.m128i_i32[0], 50, 100) + v24.m128i_i32[0];
    }
    v24 = *(__m128i *)(a1 + 56);
    v24.m128i_i32[2] = v20;
    v17 = DragData::AddDropTarget((_QWORD *)a1, 0, &v24, 1);
    ReplaceDropTargetRects = v17;
    if ( v17 < 0 )
    {
      v18 = 317LL;
      goto LABEL_32;
    }
    v24 = *(__m128i *)(a1 + 56);
    v24.m128i_i32[0] = v20;
    v17 = DragData::AddDropTarget((_QWORD *)a1, 1, &v24, 1);
    ReplaceDropTargetRects = v17;
    if ( v17 < 0 )
    {
      v18 = 321LL;
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  }
  if ( (DropTargetEnabledList & 0x20) != 0 )
  {
    v24 = 0uLL;
    v21[0] = 0LL;
    v21[1] = 0LL;
    ReplaceDropTargetRects = DragData::GetReplaceDropTargetRects(
                               (DragData *)a1,
                               (struct Geometry::CRect *)&v24,
                               (struct Geometry::CRect *)v21);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 328LL;
      goto LABEL_4;
    }
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 2, &v24, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 329LL;
      goto LABEL_4;
    }
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 3, v21, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v6 = 330LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
