/*
 * XREFs of VidSchSignalPagingFences @ 0x1C00CC364
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005E960 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C00336D0 (VidSchSignalSyncObjectsFromCpu.c)
 */

__int64 __fastcall VidSchSignalPagingFences(
        __int64 a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        char *a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  int v6; // ebx
  _QWORD *v8; // r9
  unsigned int v9; // r11d
  _QWORD *v10; // rdx
  __int64 v12; // rax

  v6 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( *(_BYTE *)(a1 + 55) )
  {
    v10 = *(_QWORD **)(a1 + 264);
    if ( !*v10 )
      return VidSchSignalSyncObjectsFromCpu(1LL, a2, 0, a3);
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
    v6 = *(_DWORD *)(a1 + 64);
    if ( a6 )
      v8 = *(_QWORD **)(a1 + 272);
    else
      v8 = *(_QWORD **)(a1 + 248);
  }
  else
  {
    v6 = 1;
    if ( a6 )
      v12 = *(_QWORD *)(a1 + 272);
    else
      v12 = *(_QWORD *)(a1 + 248);
    v8 = (_QWORD *)(v12 + 8LL * a5);
  }
  return VidSchSignalSyncObjectsFromGpu(v9, (__int64)v10, v6, v8, 1u, (void **)a2, 0, (unsigned __int64 *)a3);
}
