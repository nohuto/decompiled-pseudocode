/*
 * XREFs of VidSchSignalPagingFences @ 0x1C00C98C4
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006E6F4 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0032CB0 (VidSchSignalSyncObjectsFromCpu.c)
 */

__int64 __fastcall VidSchSignalPagingFences(
        __int64 a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        char *a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 *v6; // r9
  unsigned int v8; // ebx
  unsigned int v9; // r11d
  _QWORD *v10; // rdx
  __int64 v12; // rax

  v6 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( *(_BYTE *)(a1 + 55) )
  {
    v10 = *(_QWORD **)(a1 + 264);
    if ( !*v10 )
      return VidSchSignalSyncObjectsFromCpu(1LL, a2, 0LL, a3);
    if ( a5 == -1 )
    {
      v9 = *(_DWORD *)(a1 + 64);
    }
    else
    {
      v9 = 1;
      v10 += a5;
    }
  }
  else if ( a5 == -1 )
  {
    v8 = *(_DWORD *)(a1 + 64);
    if ( a6 )
      v6 = *(__int64 **)(a1 + 272);
    else
      v6 = *(__int64 **)(a1 + 248);
  }
  else
  {
    v8 = 1;
    if ( a6 )
      v12 = *(_QWORD *)(a1 + 272);
    else
      v12 = *(_QWORD *)(a1 + 248);
    v6 = (__int64 *)(v12 + 8LL * a5);
  }
  return VidSchSignalSyncObjectsFromGpu(v9, (__int64)v10, v8, v6, 1u, (void **)a2, 0, (unsigned __int64 *)a3);
}
