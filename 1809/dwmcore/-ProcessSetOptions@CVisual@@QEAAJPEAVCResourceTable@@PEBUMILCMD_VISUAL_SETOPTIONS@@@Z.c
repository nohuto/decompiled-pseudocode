/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x18006B06C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18006B124 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETOPTIONS *a3)
{
  int v3; // r9d
  unsigned int v4; // ebx
  CVisual *v5; // r11
  unsigned int v6; // ecx
  char v8; // dl
  char v9; // cl
  char v10; // dl
  int v11; // r8d
  char v13; // dl

  v3 = *((_DWORD *)a3 + 3);
  v4 = 0;
  v5 = this;
  v6 = *((unsigned __int8 *)this + 94);
  if ( ((v6 >> 2) & 1) != (v3 != 0) )
  {
    v4 = 5;
    *((_BYTE *)v5 + 94) = v6 & 0xFB | (v3 != 0 ? 4 : 0);
    CVisual::OnInnerTransformChanged(v5);
    LOBYTE(v6) = *((_BYTE *)v5 + 94);
  }
  v8 = v6 & 0xFE | (*((_DWORD *)a3 + 2) != 0);
  *((_BYTE *)v5 + 94) = v8;
  v9 = v8 & 0x7F | (*((_DWORD *)a3 + 4) != 0 ? 0x80 : 0);
  v10 = *((_BYTE *)v5 + 95);
  *((_BYTE *)v5 + 94) = v9;
  v11 = *((_DWORD *)a3 + 5);
  if ( (v10 & 1) != (v11 != 0) )
  {
    v13 = v10 & 0xFE;
    *((_BYTE *)v5 + 95) = v13 | (v11 != 0);
    if ( v13 & 1 | (v11 != 0) )
    {
      *((_QWORD *)v5 + 56) = 0LL;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)v5 + 27) + 4LL) &= ~0x1000000u;
      *(_DWORD *)(*((_QWORD *)v5 + 27) + 4LL) &= ~0x800000u;
      *(_DWORD *)(*((_QWORD *)v5 + 27) + 4LL) &= ~0x400000u;
      *(_DWORD *)(*((_QWORD *)v5 + 27) + 4LL) &= ~0x200000u;
    }
    v4 |= 0x10u;
  }
  if ( v4 )
    CVisual::PropagateFlags(v5, v4);
  return 0LL;
}
