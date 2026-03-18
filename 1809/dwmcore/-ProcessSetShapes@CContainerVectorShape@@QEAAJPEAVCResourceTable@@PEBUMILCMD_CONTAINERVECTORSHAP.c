/*
 * XREFs of ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x180193A7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180193B0C (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 */

__int64 __fastcall CContainerVectorShape::ProcessSetShapes(
        CContainerVectorShape *this,
        struct CResourceTable *a2,
        const struct MILCMD_CONTAINERVECTORSHAPE_SETSHAPES *a3,
        const void *a4,
        unsigned int a5)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x2Eu);
  }
  else
  {
    if ( !a4 && (unsigned __int64)a5 >> 2 )
    {
      gsl::details::terminate(this);
      __debugbreak();
    }
    v5 = CContainerVectorShape::SetShapes(this, a2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x35u);
  }
  return v7;
}
