/*
 * XREFs of ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1803F85C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0 @ 0x180068744 (McTemplateU0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x1803F8C48 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FA084 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1803FA3A0 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

void __fastcall CDragVisual::SetPosition(CDragVisual *this, struct tagPOINT a2, char a3)
{
  CDragVisual *v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rcx

  if ( *((_QWORD *)this + 39) != a2 )
  {
    v5 = (CDragVisual *)((char *)this - 24);
    v7 = *((unsigned int *)this + 31);
    *((struct tagPOINT *)this + 39) = a2;
    if ( (unsigned __int8)CDragVisual::_UpdateThumbnailRect((char *)this - 24, v7) )
    {
      if ( *((_BYTE *)this + 250) || *((_DWORD *)this + 31) == 6 && !*((_BYTE *)this + 300) && !*((_BYTE *)this + 301) )
        v9 = 1LL;
      else
        v9 = 5LL;
      CDragVisual::_UpdateThumbnail(v5, v9, 1LL);
    }
    v10 = *((_DWORD *)this + 31) == 6;
    *((_BYTE *)this + 250) = 0;
    if ( v10 && !*((_BYTE *)this + 300) && !*((_BYTE *)this + 301) )
    {
      CDragVisual::_ClearVisualFeedback(v5);
      *((_BYTE *)v5 + 326) = 1;
    }
    if ( *((_BYTE *)this + 256) && SetWindowRgn(*((HWND *)this + 16), 0LL, 1) )
      *((_BYTE *)this + 256) = 0;
    v11 = *((_QWORD *)this + 9);
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9));
    }
    if ( a3 && *((_BYTE *)this + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(v11, &DragVisual_TargetChanged_Info, v8);
  }
}
