/*
 * XREFs of ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801B7C20
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18005D180 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800E8070 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004E824 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801B7E24 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CVisual::PurgeOldRenderPassInfos(CVisual *this)
{
  _BYTE *v1; // r15
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  CVisual *v4; // rcx
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  struct _LIST_ENTRY *v7; // rsi
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdx
  struct _LIST_ENTRY **p_Blink; // [rsp+30h] [rbp-39h] BYREF
  void *v17[2]; // [rsp+40h] [rbp-29h] BYREF
  int v18; // [rsp+50h] [rbp-19h]
  __int64 v19; // [rsp+54h] [rbp-15h]
  _BYTE v20[48]; // [rsp+60h] [rbp-9h] BYREF

  v1 = v20;
  v17[1] = v20;
  v17[0] = v20;
  v18 = 5;
  v2 = 0LL;
  v19 = 5LL;
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v7 = RenderPassInfoList;
  if ( !RenderPassInfoList )
    goto LABEL_22;
  Flink = RenderPassInfoList->Flink;
  if ( RenderPassInfoList->Flink == RenderPassInfoList )
    goto LABEL_22;
  v9 = (unsigned int)p_Blink;
  while ( 1 )
  {
    v10 = (unsigned __int64)v2;
    p_Blink = &Flink[-6].Blink;
    v11 = v5 + 1;
    if ( v5 + 1 >= v5 )
      v9 = v5 + 1;
    if ( v11 < v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v11 < v5 ? 0x80070216 : 0, 0xB5u);
    }
    else
    {
      if ( v9 <= v6 )
      {
        v12 = v5;
        v5 = v9;
        *(_QWORD *)&v1[8 * v12] = p_Blink;
        HIDWORD(v19) = v9;
        goto LABEL_13;
      }
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17, 8, 1, &p_Blink);
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0, v13, 0xC0u);
    }
    v5 = HIDWORD(v19);
LABEL_13:
    Flink = Flink->Flink;
    v2 = p_Blink[4];
    if ( (unsigned __int64)v2 <= v10 )
      v2 = (struct _LIST_ENTRY *)v10;
    if ( Flink == v7 )
      break;
    v6 = v19;
    v1 = v17[0];
  }
  if ( v5 > 1 )
  {
    v14 = 0LL;
    do
    {
      v15 = *((_QWORD *)v17[0] + v14);
      if ( *(_QWORD *)(v15 + 32) < (unsigned __int64)v2 )
      {
        CVisual::ReleaseMoveRenderPassInfoForContext(
          v4,
          *(struct CDrawingContext **)(v15 + 80),
          *((struct CMoveRenderPassInfo **)v17[0] + v14));
        v5 = HIDWORD(v19);
      }
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < v5 );
  }
LABEL_22:
  HIDWORD(v19) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v17, 8u);
  DynArrayImpl<1>::~DynArrayImpl<1>(v17);
}
