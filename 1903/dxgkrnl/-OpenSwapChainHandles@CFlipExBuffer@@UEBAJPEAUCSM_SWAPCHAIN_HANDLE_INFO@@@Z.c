/*
 * XREFs of ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C0012340
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C00123FC (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall CFlipExBuffer::OpenSwapChainHandles(CFlipExBuffer *this, struct CSM_SWAPCHAIN_HANDLE_INFO *a2)
{
  int v4; // r15d
  __int64 v5; // rbx
  CFlipExBuffer *v6; // rdi
  bool v7; // dl
  HANDLE *v9; // rdi
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  memset(a2, 0, 0x100uLL);
  if ( *((_DWORD *)this + 60) )
  {
    v5 = 0LL;
    v6 = (CFlipExBuffer *)*((_QWORD *)this + 28);
    while ( 1 )
    {
      if ( v6 == (CFlipExBuffer *)((char *)this + 224) )
      {
        *(_DWORD *)a2 = v5;
        return (unsigned int)v4;
      }
      v7 = (*((_DWORD *)this + 41) & 0x100) != 0 || *((_DWORD *)this + 60) == 1;
      v4 = CBufferRealization::OpenDxSurfaceHandle((CFlipExBuffer *)((char *)v6 - 8), v7, 0, &v10);
      if ( v4 < 0 )
        break;
      *((_QWORD *)a2 + v5 + 1) = v10;
      v6 = *(CFlipExBuffer **)v6;
      v5 = (unsigned int)(v5 + 1);
    }
    if ( (_DWORD)v5 )
    {
      v9 = (HANDLE *)((char *)a2 + 8);
      do
      {
        ObCloseHandle(*v9++, 1);
        --v5;
      }
      while ( v5 );
    }
  }
  return (unsigned int)v4;
}
