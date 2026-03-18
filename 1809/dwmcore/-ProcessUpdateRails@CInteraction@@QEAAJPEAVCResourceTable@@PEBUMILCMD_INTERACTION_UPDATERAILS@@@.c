/*
 * XREFs of ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x18007F494
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x18007F4FC (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateRails(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATERAILS *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx

  LOBYTE(a2) = *((_DWORD *)a3 + 2) != 0;
  v5 = CInteraction::SetRailsEnabled_RenderThread(this, a2, 0LL);
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v5, 0x1DDu);
  }
  else
  {
    LOBYTE(v6) = *((_DWORD *)a3 + 3) != 0;
    v9 = CInteraction::SetRailsEnabled_RenderThread(this, v6, 1LL);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1DFu);
  }
  return v8;
}
