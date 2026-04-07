/*
 * XREFs of ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x1800381F0
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800196D4 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0EAC (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CDrawTileImageInstruction@@AEAAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@M@Z @ 0x180038318 (-Initialize@CDrawTileImageInstruction@@AEAAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@M@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawTileImageInstruction::Create(
        struct CBaseImageProxy *a1,
        const struct tagRECT *a2,
        const struct tagPOINT *a3,
        float a4,
        struct CDrawTileImageInstruction **a5)
{
  __int64 v8; // rax
  CDrawTileImageInstruction *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  void *v13; // [rsp+28h] [rbp-20h]

  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         56LL);
  v9 = (CDrawTileImageInstruction *)v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)v8 = &CDrawTileImageInstruction::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = CDrawTileImageInstruction::Initialize(v9, a1, a2, a3, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x33u, v13);
    }
    else
    {
      *a5 = v9;
      v9 = 0LL;
    }
    if ( v9 )
      CBaseObject::Release(v9);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x31u, v13);
  }
  return v11;
}
