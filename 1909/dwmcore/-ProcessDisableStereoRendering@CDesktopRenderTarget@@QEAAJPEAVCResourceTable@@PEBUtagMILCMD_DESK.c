/*
 * XREFs of ?ProcessDisableStereoRendering@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING@@@Z @ 0x1800E74F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::ProcessDisableStereoRendering(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING *a3)
{
  __int64 v3; // rdx
  char v4; // r8
  __int64 v6; // r10

  v3 = 0LL;
  v4 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 377) != v4 )
  {
    *((_BYTE *)this + 377) = v4;
    if ( *((_DWORD *)this + 50) )
    {
      do
      {
        v6 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v3);
        if ( *(_BYTE *)(v6 + 862) != v4 )
        {
          *(_BYTE *)(v6 + 862) = v4;
          *(_BYTE *)(v6 + 161) = 1;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)this + 50) );
    }
  }
  return 0LL;
}
