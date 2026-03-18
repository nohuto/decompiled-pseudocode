/*
 * XREFs of ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801C2C48
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800BBB80 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800DD184 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800DD2B0 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801C2DD4 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CVisual::PurgeOldRenderPassInfos(CVisual *this)
{
  _BYTE *v1; // r14
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  struct _LIST_ENTRY *v6; // rsi
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  signed int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rdx
  struct _LIST_ENTRY **p_Blink; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-19h] BYREF
  int v16; // [rsp+58h] [rbp-9h]
  __int64 v17; // [rsp+5Ch] [rbp-5h]
  _BYTE v18[48]; // [rsp+68h] [rbp+7h] BYREF

  v1 = v18;
  v15[1] = v18;
  v15[0] = v18;
  v16 = 5;
  v2 = 0LL;
  v17 = 5LL;
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v6 = RenderPassInfoList;
  if ( !RenderPassInfoList )
    goto LABEL_19;
  Flink = RenderPassInfoList->Flink;
  if ( RenderPassInfoList->Flink == RenderPassInfoList )
    goto LABEL_19;
  while ( 1 )
  {
    v8 = (unsigned __int64)v2;
    p_Blink = &Flink[-6].Blink;
    v9 = v4 + 1;
    if ( (unsigned int)v9 < v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else
    {
      if ( (unsigned int)v9 <= v5 )
      {
        v10 = v4++;
        *(_QWORD *)&v1[8 * v10] = p_Blink;
        HIDWORD(v17) = v9;
        goto LABEL_10;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 8, 1, &p_Blink);
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v11, 0xC3u, 0LL);
    }
    v4 = HIDWORD(v17);
LABEL_10:
    Flink = Flink->Flink;
    v2 = p_Blink[4];
    if ( (unsigned __int64)v2 <= v8 )
      v2 = (struct _LIST_ENTRY *)v8;
    if ( Flink == v6 )
      break;
    v5 = v17;
    v1 = (_BYTE *)v15[0];
  }
  if ( v4 > 1 )
  {
    v12 = 0LL;
    do
    {
      v13 = *(_QWORD *)(v15[0] + 8 * v12);
      if ( *(_QWORD *)(v13 + 32) < (unsigned __int64)v2 )
      {
        CVisual::ReleaseMoveRenderPassInfoForContext(
          (CVisual *)v9,
          *(struct CDrawingContext **)(v13 + 80),
          *(struct CMoveRenderPassInfo **)(v15[0] + 8 * v12));
        v4 = HIDWORD(v17);
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < v4 );
  }
LABEL_19:
  HIDWORD(v17) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v15, 8u);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v15);
}
