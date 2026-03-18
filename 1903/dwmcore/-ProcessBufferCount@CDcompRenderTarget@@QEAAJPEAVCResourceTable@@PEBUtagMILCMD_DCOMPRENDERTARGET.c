/*
 * XREFs of ?ProcessBufferCount@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET_BUFFERCOUNT@@@Z @ 0x1801A747C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDcompRenderTarget::ProcessBufferCount(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DCOMPRENDERTARGET_BUFFERCOUNT *a3)
{
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rdx

  v3 = *((_QWORD *)this + 7);
  v4 = *((_DWORD *)a3 + 2);
  v5 = *(_QWORD *)(v3 + 168);
  *(_DWORD *)(v3 + 512) = v4;
  if ( v5 )
    *(_DWORD *)(v5 + 304) = v4;
  return 0LL;
}
