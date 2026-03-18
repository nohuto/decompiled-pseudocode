/*
 * XREFs of ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x18007BB50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECLEAR@@@Z @ 0x180158780 (-ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_ENABLECL.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessEnableClear(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_ENABLECLEAR *a3)
{
  unsigned int v3; // edi
  char v7; // al
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // ecx

  v3 = 0;
  v7 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 312) != v7 )
  {
    v9 = 0LL;
    *((_BYTE *)this + 312) = v7;
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
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x4F9u);
    }
  }
  return v3;
}
