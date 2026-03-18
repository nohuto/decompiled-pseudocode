/*
 * XREFs of ?ProcessSetSourceOffset@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETSOURCEOFFSET@@@Z @ 0x18018DE34
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureController::ProcessSetSourceOffset(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURECONTROLLER_SETSOURCEOFFSET *a3)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax

  v4 = (__int64 *)*((_QWORD *)this + 7);
  *((_DWORD *)this + 23) = *((_DWORD *)a3 + 2);
  for ( *((_DWORD *)this + 24) = *((_DWORD *)a3 + 3); v4 != *((__int64 **)this + 8); *(_DWORD *)(v5 + 584) = v6 )
  {
    v5 = *v4++;
    v6 = *((_DWORD *)this + 23);
    *(_DWORD *)(v5 + 588) = *((_DWORD *)this + 24);
  }
  return 0LL;
}
