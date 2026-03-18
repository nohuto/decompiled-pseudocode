/*
 * XREFs of HmgSafeNextObjt @ 0x1C001FB50
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C003DF70 (bDynamicProcessAllDriverRealizations.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C003E0E0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003E228 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0042EB8 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C009C000 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00FF1B0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     bDynamicModeChange @ 0x1C00FF45C (bDynamicModeChange.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C010269C (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgSafeNextObjt(unsigned int a1, char a2)
{
  GdiHandleManager *v2; // r14
  unsigned int v4; // eax
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned int v16; // r10d
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx

  v2 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v5 = *(_DWORD *)v2;
  v6 = v4;
  while ( ++v6 < v5 )
  {
    v7 = *((_QWORD *)v2 + 2);
    v8 = *(_DWORD *)(v7 + 2056);
    if ( v6 < v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    {
      v9 = ((v6 - v8) >> 16) + 1;
      if ( v6 < v8 )
        v9 = 0LL;
      v10 = *(_QWORD *)(v7 + 8 * v9 + 8);
      if ( (_DWORD)v9 )
        v11 = v6 + ((1 - (_DWORD)v9) << 16) - v8;
      else
        v11 = v6;
      v12 = 0LL;
      if ( v11 < *(_DWORD *)(v10 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                     + 16LL * (unsigned __int8)v11
                     + 8) )
      {
        v12 = *(_QWORD *)v10 + 24LL * v11;
      }
      if ( v12 )
      {
        if ( !v6 )
          return 0LL;
        if ( *(_BYTE *)(v12 + 14) == a2 )
        {
          v13 = GdiHandleManager::DecodeIndex(gpHandleManager, v6);
          v14 = *((_QWORD *)v2 + 2);
          v15 = v13;
          v16 = *(_DWORD *)(v14 + 2056);
          if ( v13 >= v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
            return 0LL;
          v17 = ((v13 - v16) >> 16) + 1;
          if ( v13 < v16 )
            v17 = 0LL;
          v18 = *(_QWORD *)(v14 + 8 * v17 + 8);
          if ( (_DWORD)v17 )
            v15 = ((1 - (_DWORD)v17) << 16) - v16 + v13;
          if ( (unsigned int)v15 >= *(_DWORD *)(v18 + 20) )
            v19 = 0LL;
          else
            v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
          if ( !v19
            || (*(_BYTE *)(v12 + 15) & 0x40) == 0
            || *(_WORD *)(v19 + 12) && *(struct _KTHREAD **)(v19 + 16) == KeGetCurrentThread() )
          {
            return v19;
          }
        }
      }
    }
  }
  return 0LL;
}
