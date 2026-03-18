/*
 * XREFs of ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x180068524
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRenderOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETRENDEROPTIONS *a3)
{
  char v3; // r9
  int v4; // edx
  char v5; // al
  int v6; // r10d
  char v7; // r9
  char v8; // r10
  char v9; // al
  int v11; // eax
  int v12; // r9d
  int v13; // r9d
  int v14; // eax
  int v15; // r9d
  int v16; // r10d
  int v17; // r9d

  *((_BYTE *)this + 96) = 0;
  v3 = 0;
  v4 = *((_DWORD *)a3 + 2);
  if ( (v4 & 2) != 0 )
  {
    v11 = *((_DWORD *)a3 + 3);
    v3 = 0;
    if ( v11 != -1 )
    {
      *((_DWORD *)this + 24) ^= (*((_DWORD *)this + 24) ^ (v11 << 10)) & 0x3C00;
      v3 = *((_DWORD *)this + 24) | 2;
      *((_BYTE *)this + 96) = v3;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  v5 = v3;
  if ( (v4 & 8) != 0 )
  {
    v6 = *((_DWORD *)a3 + 4);
    if ( v6 != -1 )
    {
      v5 = v3 | 8;
      *((_DWORD *)this + 47) = v6;
      *((_BYTE *)this + 96) = v3 | 8;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  if ( (v4 & 4) != 0 )
  {
    v17 = *((_DWORD *)a3 + 5);
    if ( v17 != 5 )
    {
      *((_DWORD *)this + 24) ^= (*((_DWORD *)this + 24) ^ (v17 << 14)) & 0x7C000;
      v5 = *((_DWORD *)this + 24) | 4;
      *((_BYTE *)this + 96) = v5;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v13 = *((_DWORD *)a3 + 6);
    if ( v13 )
    {
      *((_DWORD *)this + 24) ^= (*((_DWORD *)this + 24) ^ (v13 << 8)) & 0x300;
      v5 = *((_DWORD *)this + 24) | 1;
      *((_BYTE *)this + 96) = v5;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  v7 = v5;
  if ( (v4 & 0x10) != 0 )
  {
    v16 = *((_DWORD *)a3 + 7);
    v7 = v5;
    if ( v16 != 5 )
    {
      v7 = v5 | 0x10;
      *((_DWORD *)this + 48) = v16;
      *((_BYTE *)this + 96) = v5 | 0x10;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  v8 = v7;
  if ( (v4 & 0x20) != 0 )
  {
    v14 = *((_DWORD *)a3 + 8);
    v8 = v7;
    if ( v14 != -1 )
    {
      v8 = v7 | 0x20;
      *((_DWORD *)this + 49) = v14;
      *((_BYTE *)this + 96) = v7 | 0x20;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  v9 = v8;
  if ( (v4 & 0x40) != 0 )
  {
    v12 = *((_DWORD *)a3 + 9);
    v9 = v8;
    if ( v12 != -1 )
    {
      v9 = v8 | 0x40;
      *((_DWORD *)this + 50) = v12;
      *((_BYTE *)this + 96) = v8 | 0x40;
      v4 = *((_DWORD *)a3 + 2);
    }
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v15 = *((_DWORD *)a3 + 10);
    if ( v15 != -1 )
    {
      *((_DWORD *)this + 51) = v15;
      *((_BYTE *)this + 96) = v9 | 0x80;
    }
  }
  CVisual::PropagateFlags(this, 5LL);
  return 0LL;
}
