/*
 * XREFs of ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x1800A8D2C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800A8DB8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     McTemplateU0qqqxxpp @ 0x1801C39E0 (McTemplateU0qqqxxpp.c)
 */

__int64 __fastcall CVisual::ProcessSetInteraction(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETINTERACTION *a3)
{
  char v4; // si
  unsigned int v5; // edx
  struct CInteraction *v6; // rdi
  __int64 Resource; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x57u);
    v4 = Resource;
    if ( Resource )
      v6 = (struct CInteraction *)(Resource - 8);
  }
  v10 = CVisual::SetInteraction(this, v6);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xE2Bu, 0LL);
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
