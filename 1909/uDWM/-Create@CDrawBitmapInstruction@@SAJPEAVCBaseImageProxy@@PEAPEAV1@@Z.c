/*
 * XREFs of ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x180037BD8
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180010610 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180021780 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0DCC (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawBitmapInstruction::Create(struct CBaseImageProxy *a1, struct CDrawBitmapInstruction **a2)
{
  __int64 v4; // rax
  struct CDrawBitmapInstruction *v5; // rdi
  unsigned int v6; // ebx
  CBaseObject *v7; // rcx
  void *v9; // [rsp+28h] [rbp-10h]

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = (struct CDrawBitmapInstruction *)v4;
  v6 = 0;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CDrawBitmapInstruction::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = (CBaseObject *)*((_QWORD *)v5 + 2);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)v5 + 2) = 0LL;
    }
    if ( a1 )
    {
      *((_QWORD *)v5 + 2) = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    }
    *a2 = v5;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Du, v9);
  }
  return v6;
}
