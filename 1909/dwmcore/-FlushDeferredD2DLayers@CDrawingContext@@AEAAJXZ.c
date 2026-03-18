/*
 * XREFs of ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18003B3B8
 * Callers:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180038EDC (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18003B374 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C8F70 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

__int64 __fastcall CDrawingContext::FlushDeferredD2DLayers(CDrawingContext *this)
{
  unsigned int v1; // r14d
  __int64 v2; // rbx
  __int64 v3; // rbp
  char *v5; // rdi
  unsigned int v6; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // esi

  v1 = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( *((_DWORD *)this + 158) )
  {
    v5 = (char *)this + 608;
    while ( 1 )
    {
      v8 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v5 + 8 * v3), this);
      v1 = v8;
      if ( v8 < 0 )
        break;
      v2 = (unsigned int)(v2 + 1);
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 158) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1664u, 0LL);
  }
  else
  {
LABEL_2:
    v5 = (char *)this + 608;
    *((_DWORD *)this + 158) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 608, 8LL);
  }
  if ( (unsigned int)v2 < *((_DWORD *)this + 158) && (_DWORD)v2 )
  {
    v10 = *((_DWORD *)v5 + 6);
    if ( (unsigned int)v2 > v10 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x240u, 0LL);
    }
    else
    {
      v11 = v10 - v2;
      if ( v11 )
        memmove_0(*(void **)v5, (const void *)(*(_QWORD *)v5 + 8 * v2), 8LL * v11);
      *((_DWORD *)v5 + 6) = v11;
    }
  }
  return v1;
}
