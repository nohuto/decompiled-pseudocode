/*
 * XREFs of ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x18009FA40
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18009FACC (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     McTemplateU0qqqxxpp @ 0x1801B8BCC (McTemplateU0qqqxxpp.c)
 */

__int64 __fastcall CVisual::ProcessSetInteraction(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETINTERACTION *a3)
{
  char v4; // si
  __int64 v5; // rdx
  struct CInteraction *v6; // rdi
  __int64 Resource; // rax
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  v6 = 0LL;
  if ( (_DWORD)v5 )
  {
    Resource = CResourceTable::GetResource(a2, v5, 83LL);
    v4 = Resource;
    if ( Resource )
      v6 = (struct CInteraction *)(Resource - 8);
  }
  v10 = CVisual::SetInteraction(this, v6);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xDC3u);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
  {
    McTemplateU0qqqxxpp(
      *((_DWORD *)a3 + 2),
      0,
      *((_DWORD *)a2 + 12),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      v4,
      (char)v6);
  }
  return v12;
}
