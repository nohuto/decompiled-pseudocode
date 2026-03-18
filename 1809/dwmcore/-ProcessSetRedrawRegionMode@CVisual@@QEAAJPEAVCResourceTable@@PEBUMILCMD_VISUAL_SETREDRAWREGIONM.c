/*
 * XREFs of ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x1801B7AFC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRedrawRegionMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETREDRAWREGIONMODE *a3)
{
  char v3; // dl
  char v5; // r10
  char v6; // dl
  char v7; // cl
  char v8; // cl
  __int64 v9; // rax

  v3 = *((_BYTE *)this + 93);
  v5 = (v3 & 8) != 0;
  if ( *((_DWORD *)a3 + 2) )
  {
    v6 = v3 | 8;
    *((_BYTE *)this + 93) = v6;
    v7 = v6 | 0x10;
    if ( !*((_DWORD *)a3 + 3) )
      v7 = v6 & 0xEF;
  }
  else
  {
    v7 = v3 & 0xF7;
  }
  *((_BYTE *)this + 93) = v7;
  v8 = (v7 & 8) != 0;
  if ( v5 != v8 )
  {
    v9 = *((_QWORD *)this + 2);
    if ( v8 )
      ++*(_DWORD *)(v9 + 1200);
    else
      --*(_DWORD *)(v9 + 1200);
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}
