/*
 * XREFs of HmgNextOwned @ 0x1C00200E0
 * Callers:
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00449E0 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C007DE28 (-vCleanupBrushes@@YAXK@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C007E7FC (-vCleanupRegions@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C00801B8 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0080270 (-vCleanupLCSPs@@YAXK@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgNextOwned(__int64 a1, int a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  GdiHandleManager *v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // r10
  __int64 v20; // rdx

  v5 = a1;
  GreAcquireHmgrSemaphore(a1);
  v7 = gpHandleManager;
  v8 = *(_DWORD *)gpHandleManager;
  while ( ++v5 < v8 )
  {
    v9 = *((_QWORD *)v7 + 2);
    v10 = *(_DWORD *)(v9 + 2056);
    if ( v5 < v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    {
      v6 = ((v5 - v10) >> 16) + 1;
      if ( v5 < v10 )
        v6 = 0LL;
      v11 = *(_QWORD *)(v9 + 8 * v6 + 8);
      if ( (_DWORD)v6 )
        v12 = v5 + ((1 - (_DWORD)v6) << 16) - v10;
      else
        v12 = v5;
      v13 = 0LL;
      if ( v12 < *(_DWORD *)(v11 + 20) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                       + 16LL * (unsigned __int8)v12
                       + 8);
        if ( v6 )
        {
          v6 = 3LL * v12;
          v13 = *(_QWORD *)v11 + 24LL * v12;
        }
      }
      if ( v13 )
      {
        if ( !v5 )
          break;
        if ( *(_BYTE *)(v13 + 14) )
        {
          v6 = a2 & 0xFFFFFFFD ^ *(_DWORD *)(v13 + 8);
          if ( (v6 & 0xFFFFFFFE) == 0 )
          {
            if ( (*(_BYTE *)(v13 + 15) & 0x40) == 0 )
              goto LABEL_16;
            v15 = GdiHandleManager::DecodeIndex(gpHandleManager, v5);
            v16 = *((_QWORD *)v7 + 2);
            v17 = v15;
            v18 = *(_DWORD *)(v16 + 2056);
            if ( v15 >= v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
              goto LABEL_16;
            v6 = ((v15 - v18) >> 16) + 1;
            if ( v15 < v18 )
              v6 = 0LL;
            v19 = *(_QWORD *)(v16 + 8 * v6 + 8);
            if ( (_DWORD)v6 )
              v17 = ((1 - (_DWORD)v6) << 16) - v18 + v15;
            if ( (unsigned int)v17 >= *(_DWORD *)(v19 + 20) )
            {
              v20 = 0LL;
            }
            else
            {
              v6 = 2LL * (unsigned __int8)v17;
              v20 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
            }
            if ( !v20 || *(_WORD *)(v20 + 12) && *(struct _KTHREAD **)(v20 + 16) == KeGetCurrentThread() )
            {
LABEL_16:
              v6 = (unsigned __int16)v5;
              *a3 = (unsigned __int16)v5 | (unsigned __int64)(*(unsigned __int16 *)(v13 + 12) << 16);
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
  v5 = 0;
LABEL_18:
  GreReleaseHmgrSemaphore(v6);
  return v5;
}
