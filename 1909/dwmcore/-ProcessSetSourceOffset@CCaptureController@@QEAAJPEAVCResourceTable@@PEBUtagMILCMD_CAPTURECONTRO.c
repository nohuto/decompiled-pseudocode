/*
 * XREFs of ?ProcessSetSourceOffset@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETSOURCEOFFSET@@@Z @ 0x1801CD928
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureController::ProcessSetSourceOffset(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETSOURCEOFFSET *a3)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax

  v4 = (__int64 *)*((_QWORD *)this + 7);
  *((_DWORD *)this + 25) = *((_DWORD *)a3 + 2);
  for ( *((_DWORD *)this + 26) = *((_DWORD *)a3 + 3); v4 != *((__int64 **)this + 8); *(_DWORD *)(v5 + 584) = v6 )
  {
    v5 = *v4++;
    v6 = *((_DWORD *)this + 25);
    *(_DWORD *)(v5 + 588) = *((_DWORD *)this + 26);
  }
  return 0LL;
}
