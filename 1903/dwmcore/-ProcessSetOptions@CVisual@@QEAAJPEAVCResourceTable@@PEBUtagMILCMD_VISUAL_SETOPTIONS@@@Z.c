/*
 * XREFs of ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800C8C30
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800C8CE8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOPTIONS *a3)
{
  char v3; // r9
  unsigned int v4; // ebx
  CVisual *v5; // r11
  unsigned int v6; // ecx
  char v8; // dl
  unsigned int v9; // edx
  char v10; // r8
  char v12; // al

  v3 = *((_BYTE *)a3 + 9);
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
  v8 = v6 & 0xFE | (*((_BYTE *)a3 + 8) != 0);
  *((_BYTE *)v5 + 94) = v8;
  v9 = v8 & 0xBF | (*((_BYTE *)a3 + 10) != 0 ? 0x40 : 0);
  *((_BYTE *)v5 + 94) = v9;
  v10 = *((_BYTE *)a3 + 11);
  if ( v9 >> 7 != (v10 != 0) )
  {
    v12 = v9 & 0x7F | (v10 != 0 ? 0x80 : 0);
    *((_BYTE *)v5 + 94) = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)(*((_QWORD *)v5 + 27) + 4LL) &= ~0x1000000u;
      *(_DWORD *)(*((_QWORD *)v5 + 27) + 4LL) &= ~0x800000u;
      *(_DWORD *)(*((_QWORD *)v5 + 27) + 4LL) &= ~0x400000u;
      *(_DWORD *)(*((_QWORD *)v5 + 27) + 4LL) &= ~0x200000u;
    }
    else
    {
      *((_QWORD *)v5 + 56) = 0LL;
    }
    v4 |= 0x10u;
  }
  if ( v4 )
    CVisual::PropagateFlags((__int64)v5, v4, 0);
  return 0LL;
}
