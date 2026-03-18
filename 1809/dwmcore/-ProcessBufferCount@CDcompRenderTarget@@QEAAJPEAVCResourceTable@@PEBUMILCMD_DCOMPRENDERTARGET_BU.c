/*
 * XREFs of ?ProcessBufferCount@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_BUFFERCOUNT@@@Z @ 0x1801593B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDcompRenderTarget::ProcessBufferCount(
        CDcompRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGET_BUFFERCOUNT *a3)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rcx

  v3 = *((_QWORD *)this + 7);
  v4 = *((_DWORD *)a3 + 2);
  v5 = *(_QWORD *)(v3 + 168);
  *(_DWORD *)(v3 + 508) = v4;
  if ( v5 )
    *(_DWORD *)(v5 + 312) = v4;
  return 0LL;
}
