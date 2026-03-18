/*
 * XREFs of ?ProcessSetIsConstrainedBySize@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURECONTROLLER_SETISCONSTRAINEDBYSIZE@@@Z @ 0x18018DD8C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureController::ProcessSetIsConstrainedBySize(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURECONTROLLER_SETISCONSTRAINEDBYSIZE *a3)
{
  __int64 *v3; // r9
  __int64 *i; // r8
  __int64 v5; // rdx

  *((_BYTE *)this + 89) = *((_DWORD *)a3 + 2) != 0;
  v3 = (__int64 *)*((_QWORD *)this + 8);
  for ( i = (__int64 *)*((_QWORD *)this + 7); i != v3; ++i )
  {
    v5 = *i;
    *(_BYTE *)(v5 + 426) = *((_BYTE *)this + 89);
  }
  return 0LL;
}
