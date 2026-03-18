/*
 * XREFs of ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x1800E75A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x180194350 (-ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_ENABL.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessEnableClear(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_ENABLECLEAR *a3)
{
  unsigned int v3; // esi
  char v7; // al
  __int64 v9; // rdi
  signed int v10; // eax
  __int64 v11; // rcx

  v3 = 0;
  v7 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 360) != v7 )
  {
    v9 = 0LL;
    *((_BYTE *)this + 360) = v7;
    if ( *((_DWORD *)this + 50) )
    {
      while ( 1 )
      {
        v10 = CHwndRenderTarget::ProcessEnableClear(*(CHwndRenderTarget **)(*((_QWORD *)this + 22) + 8 * v9), a2, a3);
        v3 = v10;
        if ( v10 < 0 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *((_DWORD *)this + 50) )
          return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x52Fu, 0LL);
    }
  }
  return v3;
}
