/*
 * XREFs of HmgNextOwned @ 0x1C002B7B0
 * Callers:
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C003FD88 (-vCleanupBrushes@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005C564 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0066460 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0066FD0 (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0067020 (-vRemoveRefPalettes@@YAXK@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0033650 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgNextOwned(unsigned int a1, int a2, unsigned __int64 *a3)
{
  GdiHandleManager *v6; // r14
  unsigned int v7; // esi
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rdi
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rdx

  GreAcquireHmgrSemaphore();
  v6 = gpHandleManager;
  v7 = *(_DWORD *)gpHandleManager;
  while ( ++a1 < v7 )
  {
    v8 = *((_QWORD *)v6 + 2);
    v9 = *(_DWORD *)(v8 + 2056);
    if ( a1 < v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    {
      v10 = ((a1 - v9) >> 16) + 1;
      if ( a1 < v9 )
        v10 = 0LL;
      v11 = *(_QWORD *)(v8 + 8 * v10 + 8);
      if ( (_DWORD)v10 )
        v12 = a1 + ((1 - (_DWORD)v10) << 16) - v9;
      else
        v12 = a1;
      v13 = 0LL;
      if ( v12 < *(_DWORD *)(v11 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                     + 16LL * (unsigned __int8)v12
                     + 8) )
      {
        v13 = *(_QWORD *)v11 + 24LL * v12;
      }
      if ( v13 )
      {
        if ( !a1 )
          break;
        if ( *(_BYTE *)(v13 + 14) && ((a2 & 0xFFFFFFFD ^ *(_DWORD *)(v13 + 8)) & 0xFFFFFFFE) == 0 )
        {
          if ( (*(_BYTE *)(v13 + 15) & 0x40) == 0 )
            goto LABEL_16;
          v15 = GdiHandleManager::DecodeIndex(gpHandleManager, a1);
          v16 = *((_QWORD *)v6 + 2);
          v17 = v15;
          v18 = *(_DWORD *)(v16 + 2056);
          if ( v15 >= v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
            goto LABEL_16;
          v19 = ((v15 - v18) >> 16) + 1;
          if ( v15 < v18 )
            v19 = 0LL;
          v20 = *(_QWORD *)(v16 + 8 * v19 + 8);
          if ( (_DWORD)v19 )
            v17 = ((1 - (_DWORD)v19) << 16) - v18 + v15;
          v21 = (unsigned int)v17 >= *(_DWORD *)(v20 + 20)
              ? 0LL
              : *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
          if ( !v21 || *(_WORD *)(v21 + 12) && *(struct _KTHREAD **)(v21 + 16) == KeGetCurrentThread() )
          {
LABEL_16:
            *a3 = (unsigned __int16)a1 | (unsigned __int64)(*(unsigned __int16 *)(v13 + 12) << 16);
            goto LABEL_18;
          }
        }
      }
    }
  }
  a1 = 0;
LABEL_18:
  GreReleaseHmgrSemaphore();
  return a1;
}
