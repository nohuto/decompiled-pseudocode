/*
 * XREFs of ?ProcessSetGlyphRuns@CGlyphRunVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GLYPHRUNVISUAL_SETGLYPHRUNS@@PEBXI@Z @ 0x1801D5008
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureContent@CGlyphRunVisual@@AEAAJPEAPEAVCGlyphRunContent@@@Z @ 0x1801D4ED4 (-EnsureContent@CGlyphRunVisual@@AEAAJPEAPEAVCGlyphRunContent@@@Z.c)
 *     ?SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1802053BC (-SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 */

__int64 __fastcall CGlyphRunVisual::ProcessSetGlyphRuns(
        CGlyphRunVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GLYPHRUNVISUAL_SETGLYPHRUNS *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  unsigned int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-38h]
  struct CGlyphRunContent *v17; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v13 = -2003303421;
    v14 = -2003303421;
    v16 = 27;
    goto LABEL_12;
  }
  v9 = CGlyphRunVisual::EnsureContent(this, &v17);
  v13 = v9;
  if ( v9 < 0 )
  {
    v16 = 31;
    goto LABEL_9;
  }
  if ( !a4 && (unsigned __int64)v5 >> 2 )
  {
    LOBYTE(v12) = *((_BYTE *)a3 + 8) != 0;
    ((void (__fastcall *)(CGlyphRunVisual *, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      v10,
      v11,
      v12);
    __debugbreak();
  }
  v9 = CGlyphRunContent::SetGlyphRuns(v17, a2);
  v13 = v9;
  if ( v9 < 0 )
  {
    v16 = 37;
LABEL_9:
    v14 = v9;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v14, v16, 0LL);
  }
  return v13;
}
