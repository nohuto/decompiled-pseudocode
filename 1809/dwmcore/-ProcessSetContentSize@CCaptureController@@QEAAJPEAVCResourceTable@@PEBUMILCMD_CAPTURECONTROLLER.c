/*
 * XREFs of ?ProcessSetContentSize@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETCONTENTSIZE@@@Z @ 0x18018DD3C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureController::ProcessSetContentSize(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURECONTROLLER_SETCONTENTSIZE *a3)
{
  __int64 *v4; // rdx
  int v5; // eax
  __int64 *v6; // r8
  __int64 v7; // rcx
  float v8; // xmm0_4

  v4 = (__int64 *)*((_QWORD *)this + 7);
  *((_DWORD *)this + 25) = *((_DWORD *)a3 + 2);
  v5 = *((_DWORD *)a3 + 3);
  v6 = (__int64 *)*((_QWORD *)this + 8);
  *((_DWORD *)this + 26) = v5;
  while ( v4 != v6 )
  {
    v7 = *v4++;
    v8 = *((float *)this + 26);
    *(_DWORD *)(v7 + 360) = (int)*((float *)this + 25);
    *(_DWORD *)(v7 + 364) = (int)v8;
  }
  return 0LL;
}
