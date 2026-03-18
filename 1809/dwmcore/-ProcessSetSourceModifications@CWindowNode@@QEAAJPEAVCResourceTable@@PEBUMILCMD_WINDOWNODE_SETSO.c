/*
 * XREFs of ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x1800AE5A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z @ 0x18001ABB8 (-Convert_MilColorB_sRGB_To_MilColorF_scRGB@@YAXIAEAU_D3DCOLORVALUE@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x1800AE6EC (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSourceModifications(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS *a3)
{
  int v3; // r9d
  struct _D3DCOLORVALUE *v4; // rdi
  __int128 v6; // xmm1
  char v8; // r10
  bool v9; // zf
  int v10; // eax
  char v11; // r9
  __int64 v13; // rcx
  __int64 i; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  _OWORD v17[2]; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+68h] [rbp-10h]

  v3 = *((_DWORD *)this + 219);
  v4 = (struct _D3DCOLORVALUE *)((char *)this + 824);
  v6 = *(_OWORD *)((char *)this + 840);
  v17[0] = *(_OWORD *)((char *)this + 824);
  v8 = (v3 & 2) != 0;
  v9 = (*((_BYTE *)a3 + 8) & 2) == 0;
  v17[1] = v6;
  v18 = *((_DWORD *)this + 214);
  if ( v9 )
  {
    *(_OWORD *)&v4->r = _xmm;
    LOBYTE(v19) = 0;
    v10 = v19;
    *(_OWORD *)((char *)this + 840) = 0LL;
    *((_DWORD *)this + 214) = v10;
  }
  else
  {
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 3), v4);
    Convert_MilColorB_sRGB_To_MilColorF_scRGB(*((_DWORD *)a3 + 4), (struct _D3DCOLORVALUE *)((char *)this + 840));
    if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
      *((_BYTE *)this + 856) = 1;
    v3 = *((_DWORD *)this + 219);
  }
  v11 = (v3 & 2) != 0;
  *((_BYTE *)this + 962) = *((_DWORD *)a3 + 5) != 0;
  if ( v8 != v11 || !(unsigned __int8)CColorKey::operator==(v17, v4) )
  {
    v13 = *((_QWORD *)this + 95);
    if ( v13 )
    {
      LOBYTE(a2) = v11;
      (*(void (__fastcall **)(__int64, struct CResourceTable *, struct _D3DCOLORVALUE *))(*(_QWORD *)v13 + 216LL))(
        v13,
        a2,
        v4);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 198); i = (unsigned int)(i + 1) )
    {
      v15 = *((_DWORD *)this + 219) >> 1;
      LOBYTE(v15) = (*((_DWORD *)this + 219) & 2) != 0;
      v16 = *(_QWORD *)(*((_QWORD *)this + 96) + 8 * i);
      (*(void (__fastcall **)(__int64, __int64, struct _D3DCOLORVALUE *))(*(_QWORD *)v16 + 216LL))(v16, v15, v4);
    }
  }
  if ( !(unsigned __int8)CColorKey::operator==(v4, v17) || *((_DWORD *)this + 219) != *((_DWORD *)a3 + 2) )
  {
    *((_DWORD *)this + 219) = *((_DWORD *)a3 + 2);
    CVisual::PropagateFlags((__int64)this, 4u, 0);
  }
  return 0LL;
}
