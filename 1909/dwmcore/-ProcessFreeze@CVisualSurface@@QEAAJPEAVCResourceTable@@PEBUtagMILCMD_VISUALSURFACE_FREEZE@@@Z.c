/*
 * XREFs of ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x1801FCC2C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180176338 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1801C81A8 (-UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilSt.c)
 */

__int64 __fastcall CVisualSurface::ProcessFreeze(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_FREEZE *a3)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rdx
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 152) || *((_BYTE *)this + 153) )
    return 0LL;
  v4 = *((_DWORD *)this + 22);
  *((_BYTE *)this + 153) = 1;
  v5 = CCachedVisualImage::UpdateFromVisualSurface(
         **((_QWORD **)this + 12),
         *((struct CResource **)this + 7),
         (float *)this + 16,
         (float *)this + 18,
         (float *)this + 20,
         v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  v8 = **((_QWORD **)this + 12);
  *(_BYTE *)(v8 + 376) = 1;
  v9 = CComposition::RegisterSnapshotToPerform(*(CComposition **)(v8 + 32), (struct CCachedVisualImage *)v8);
  v11 = v9;
  if ( v9 >= 0 )
    return 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x886u, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x108,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)v11);
  return v11;
}
